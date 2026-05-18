/*
 * XREFs of sub_1800B0890 @ 0x1800B0890
 * Callers:
 *     sub_1800B07A4 @ 0x1800B07A4 (sub_1800B07A4.c)
 *     sub_1800B1AC0 @ 0x1800B1AC0 (sub_1800B1AC0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_1800B0890(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 result; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 16);
  }
  v5[0] = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v2;
  v5[1] = v3;
  sub_180010910((__int64)v5);
  *(_DWORD *)(a1 + 40) = -1;
  result = 1065353216LL;
  *(_DWORD *)(a1 + 44) = 1065353216;
  *(_DWORD *)(a1 + 48) = 1065353216;
  *(_DWORD *)(a1 + 52) = 1065353216;
  *(_DWORD *)(a1 + 56) = 1065353216;
  *(_WORD *)(a1 + 60) = 256;
  return result;
}
