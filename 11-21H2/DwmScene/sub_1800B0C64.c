/*
 * XREFs of sub_1800B0C64 @ 0x1800B0C64
 * Callers:
 *     sub_18003D9BC @ 0x18003D9BC (sub_18003D9BC.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_1800B0C64(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  __int64 result; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2[1];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a2[1];
  }
  v6[0] = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = *a2;
  v4 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v2;
  v6[1] = v4;
  result = sub_180010910((__int64)v6);
  *(_DWORD *)(a1 + 56) = 0;
  return result;
}
