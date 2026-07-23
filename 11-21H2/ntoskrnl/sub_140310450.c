/*
 * XREFs of sub_140310450 @ 0x140310450
 * Callers:
 *     sub_14079D5B4 @ 0x14079D5B4 (sub_14079D5B4.c)
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 * Callees:
 *     sub_140281C44 @ 0x140281C44 (sub_140281C44.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 */

__int64 __fastcall sub_140310450(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *v4; // rbp
  ULONG_PTR v5; // rsi
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  bool v11; // zf

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  v4 = KeGetCurrentThread();
  v5 = a1 + 1224;
  v6 = 0LL;
  _disable();
  v7 = *((unsigned __int8 *)v4 + 792);
  if ( *((_BYTE *)v4 + 792) || (v7 = sub_14029F6A8(a1 + 1224, (__int64)v4)) != 0 )
  {
    _BitScanForward((unsigned int *)&v8, v7);
    *((_BYTE *)v4 + 792) = v7 & ~(1 << v8);
    _enable();
    v6 = (__int64)v4 + 96 * v8 + 1696;
    if ( v5 - qword_140C50630 < 0x8000000000LL )
      v9 = sub_140287F30(*((_QWORD *)v4 + 23));
    else
      v9 = -1;
    *(_DWORD *)(v6 + 8) = v9;
    *(_QWORD *)v6 = v5 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
  {
    if ( v6 )
      sub_140353BB0(v5);
    sub_140281C44((__int64)CurrentThread, a2);
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    *((_BYTE *)CurrentThread + 1384) |= 1u;
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx(a2 + 40, 0LL);
    *((_BYTE *)CurrentThread + 1384) |= 0x80u;
    v11 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v11 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    return 0LL;
  }
  else
  {
    if ( v6 )
      *(_BYTE *)(v6 + 18) = 1;
    *((_BYTE *)CurrentThread + 1384) |= 1u;
    return 1LL;
  }
}
