/*
 * XREFs of sub_1800AF430 @ 0x1800AF430
 * Callers:
 *     sub_1800B1AC0 @ 0x1800B1AC0 (sub_1800B1AC0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_1800AF430(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_BYTE *)(a1 + 56) = 1;
  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v1 + 8));
    v1 = *(_QWORD *)(a1 + 48);
  }
  v4[0] = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a1 + 40);
  v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v1;
  v4[1] = v2;
  return sub_180010910((__int64)v4);
}
