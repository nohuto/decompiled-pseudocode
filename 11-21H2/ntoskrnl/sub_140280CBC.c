/*
 * XREFs of sub_140280CBC @ 0x140280CBC
 * Callers:
 *     sub_1406F61A4 @ 0x1406F61A4 (sub_1406F61A4.c)
 *     sub_1407A34A0 @ 0x1407A34A0 (sub_1407A34A0.c)
 *     NtQueryInformationThread @ 0x1407BF670 (NtQueryInformationThread.c)
 *     sub_140AF2B20 @ 0x140AF2B20 (sub_140AF2B20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140280CBC(__int64 a1, int a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
    return *(_QWORD *)(a1 + 1312);
  v3 = 0LL;
  if ( !a2 )
    return *(_QWORD *)(a1 + 1312);
  if ( (*(_DWORD *)(a1 + 1384) & 8) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 1184);
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    if ( (*(_DWORD *)(a1 + 1384) & 8) == 0 )
      return v4;
  }
  return v3;
}
