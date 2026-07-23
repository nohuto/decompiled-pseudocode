/*
 * XREFs of sub_140259A00 @ 0x140259A00
 * Callers:
 *     sub_1402598CC @ 0x1402598CC (sub_1402598CC.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 */

__int64 __fastcall sub_140259A00(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 result; // rax

  if ( *(char *)(a1 + 1384) < 0 )
    return 0LL;
  v3 = a2 + 40;
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  _disable();
  v6 = *((unsigned __int8 *)CurrentThread + 792);
  if ( *((_BYTE *)CurrentThread + 792) || (v6 = sub_14029F6A8(v3, CurrentThread)) != 0 )
  {
    _BitScanForward((unsigned int *)&v7, v6);
    *((_BYTE *)CurrentThread + 792) = v6 & ~(1 << v7);
    _enable();
    v5 = (__int64)CurrentThread + 96 * v7 + 1696;
    if ( v3 - qword_140C50630 < 0x8000000000LL )
      v8 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
    else
      v8 = -1;
    *(_DWORD *)(v5 + 8) = v8;
    *(_QWORD *)v5 = v3 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
  {
    if ( v5 )
      sub_140353BB0(v3);
    return 0LL;
  }
  result = 1LL;
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  *(_BYTE *)(a1 + 1384) |= 0x80u;
  return result;
}
