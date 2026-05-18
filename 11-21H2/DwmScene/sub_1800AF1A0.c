/*
 * XREFs of sub_1800AF1A0 @ 0x1800AF1A0
 * Callers:
 *     sub_1800B1AC0 @ 0x1800B1AC0 (sub_1800B1AC0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_1800AF1A0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 result; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_BYTE *)(a1 + 68) = 1;
  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 48);
  }
  v5[0] = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v2;
  v5[1] = v3;
  sub_180010910((__int64)v5);
  result = *(unsigned int *)(a1 + 64);
  *(_DWORD *)(a1 + 56) = result;
  return result;
}
