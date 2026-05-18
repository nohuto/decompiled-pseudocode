/*
 * XREFs of sub_18003D3C8 @ 0x18003D3C8
 * Callers:
 *     sub_18003B0A8 @ 0x18003B0A8 (sub_18003B0A8.c)
 *     sub_180042E7C @ 0x180042E7C (sub_180042E7C.c)
 *     sub_18004A02C @ 0x18004A02C (sub_18004A02C.c)
 *     sub_18004ADAC @ 0x18004ADAC (sub_18004ADAC.c)
 *     sub_18004C2F0 @ 0x18004C2F0 (sub_18004C2F0.c)
 *     sub_180066720 @ 0x180066720 (sub_180066720.c)
 *     sub_180067EB0 @ 0x180067EB0 (sub_180067EB0.c)
 * Callees:
 *     sub_18003E370 @ 0x18003E370 (sub_18003E370.c)
 */

__int64 __fastcall sub_18003D3C8(__int64 a1, char a2, char a3)
{
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rdx

  sub_18003E370();
  v6 = *(_QWORD *)(a1 + 448);
  result = 1LL << a2;
  if ( a3 )
  {
    v8 = result | v6;
  }
  else
  {
    result = ~result;
    v8 = result & v6;
  }
  *(_QWORD *)(a1 + 448) = v8;
  return result;
}
