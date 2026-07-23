/*
 * XREFs of sub_14076BB10 @ 0x14076BB10
 * Callers:
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_14076BB84 @ 0x14076BB84 (sub_14076BB84.c)
 *     sub_14076BC20 @ 0x14076BC20 (sub_14076BC20.c)
 *     sub_14076BD4C @ 0x14076BD4C (sub_14076BD4C.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_1407756F4 @ 0x1407756F4 (sub_1407756F4.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 */

__int64 __fastcall sub_14076BB10(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v1 = a1;
  LOBYTE(a1) = 1;
  sub_1407756F4(a1);
  sub_14076BD4C(*(_QWORD *)(v1 + 32));
  ExReleaseResourceLite(&stru_140C46AC0);
  sub_140775698(0LL);
  sub_14076BC20();
  sub_140779DC4(&P);
  sub_14076BB84(v1, 0LL);
  result = sub_14076BB84(v1, 1LL);
  if ( P )
    return sub_140779A50(P);
  return result;
}
