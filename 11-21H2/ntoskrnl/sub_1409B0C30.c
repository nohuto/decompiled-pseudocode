/*
 * XREFs of sub_1409B0C30 @ 0x1409B0C30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406F2AA0 @ 0x1406F2AA0 (sub_1406F2AA0.c)
 */

__int64 __fastcall sub_1409B0C30(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  if ( (*(_DWORD *)(a1 + 1120) & 2) == 0 )
  {
    sub_1406F2AA0(a1, &v4);
    *a2 += v4 * (unsigned __int64)DesiredTime;
  }
  return 0LL;
}
