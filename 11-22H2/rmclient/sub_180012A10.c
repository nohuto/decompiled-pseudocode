/*
 * XREFs of sub_180012A10 @ 0x180012A10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001340 @ 0x180001340 (sub_180001340.c)
 *     sub_1800167C0 @ 0x1800167C0 (sub_1800167C0.c)
 */

BOOLEAN __fastcall sub_180012A10(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // rcx
  void *v6; // rcx
  int v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_180032000 > 4 && (byte_180032010 & 2) != 0 && (qword_180032018 & 2) == qword_180032018 )
  {
    v8 = *(_DWORD *)(a1 + 80);
    v9 = a1;
    sub_180001340((__int64)&dword_180032000, byte_18002A5FF, a3, a4, (__int64)&v8, (__int64)&v9);
  }
  v5 = *(void **)(a1 + 40);
  if ( v5 )
    NtClose(v5);
  v6 = *(void **)(a1 + 48);
  if ( v6 )
    NtClose(v6);
  if ( *(_QWORD *)(a1 + 24) )
    __int2c();
  if ( *(_QWORD *)(a1 + 16) != -1LL )
    sub_1800167C0(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL, a1);
  *(_QWORD *)(a1 + 32) |= 0xFFFFFFFFFFFFFFFCuLL;
  return HamFreeBuffer_0((void *)a1);
}
