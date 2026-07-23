/*
 * XREFs of sub_14040A8C8 @ 0x14040A8C8
 * Callers:
 *     sub_140405390 @ 0x140405390 (sub_140405390.c)
 * Callees:
 *     sub_1403FDDE8 @ 0x1403FDDE8 (sub_1403FDDE8.c)
 *     _guard_dispatch_icall_nop @ 0x14041AF50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_14040A8C8(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rax
  unsigned __int64 v5; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v3 = *a2;
  *((_BYTE *)a2 + v3 + 32) = 0x80;
  v5 = v3 + 1;
  if ( v5 > 0x38 )
  {
    sub_1403FDDE8((__int64)a2 + v5 + 32, 64 - v5);
    (*(void (__fastcall **)(char *, unsigned int *, __int64, __int64 *))(a1 + 24))(
      (char *)a2 + *(unsigned int *)(a1 + 44),
      a2 + 8,
      64LL,
      &v7);
    v5 = 0LL;
  }
  sub_1403FDDE8((__int64)a2 + v5 + 32, 64 - v5);
  *((_QWORD *)a2 + 11) = 8LL * *((_QWORD *)a2 + 2);
  return (*(__int64 (__fastcall **)(char *, unsigned int *, __int64, __int64 *))(a1 + 24))(
           (char *)a2 + *(unsigned int *)(a1 + 44),
           a2 + 8,
           64LL,
           &v7);
}
