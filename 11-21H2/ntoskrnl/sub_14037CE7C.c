/*
 * XREFs of sub_14037CE7C @ 0x14037CE7C
 * Callers:
 *     sub_14037C880 @ 0x14037C880 (sub_14037C880.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 */

__int64 __fastcall sub_14037CE7C(ULONG_PTR BugCheckParameter2, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 result; // rax
  struct _KTHREAD *v11; // rcx
  bool v12; // zf

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  v5 = KeGetCurrentThread();
  v6 = 0LL;
  _disable();
  v7 = *((unsigned __int8 *)v5 + 792);
  if ( *((_BYTE *)v5 + 792) || (v7 = sub_14029F6A8(BugCheckParameter2, (__int64)v5)) != 0 )
  {
    _BitScanForward((unsigned int *)&v8, v7);
    *((_BYTE *)v5 + 792) = v7 & ~(1 << v8);
    _enable();
    v6 = (unsigned __int64)v5 + 96 * v8 + 1696;
    if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
      v9 = sub_140287F30(*((_QWORD *)v5 + 23));
    else
      v9 = -1;
    *(_DWORD *)(v6 + 8) = v9;
    *(_QWORD *)v6 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
  {
    if ( v6 )
      sub_140353BB0(BugCheckParameter2, v6);
    v11 = KeGetCurrentThread();
    v12 = (*((_WORD *)v11 + 243))++ == 0xFFFF;
    if ( v12 && *((struct _KTHREAD **)v11 + 19) != (struct _KTHREAD *)((char *)v11 + 152) )
      KiCheckForKernelApcDelivery();
    return 0LL;
  }
  else
  {
    result = 1LL;
    if ( v6 )
      *(_BYTE *)(v6 + 18) = 1;
    *a2 = 1;
  }
  return result;
}
