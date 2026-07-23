/*
 * XREFs of sub_1408535B0 @ 0x1408535B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140853600 @ 0x140853600 (sub_140853600.c)
 */

__int64 __fastcall sub_1408535B0(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  result = sub_140853600(1818784627LL, &v6);
  if ( (int)result >= 0 )
  {
    v5 = v6;
    *(_QWORD *)(v6 + 32) = a2;
    *a1 = v5;
  }
  return result;
}
