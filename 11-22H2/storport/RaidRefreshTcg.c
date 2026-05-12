/*
 * XREFs of RaidRefreshTcg @ 0x1C005AB14
 * Callers:
 *     RaidActivateTcgLocking @ 0x1C0057A8C (RaidActivateTcgLocking.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x1C00422B0 (RtlStringCbCopyA.c)
 *     TcglibDiscoverDevice @ 0x1C00797CC (TcglibDiscoverDevice.c)
 */

__int64 __fastcall RaidRefreshTcg(__int64 a1, char *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // r10d

  if ( *(_DWORD *)a1 == 1431193940 )
  {
    if ( (*(_BYTE *)(a1 + 451) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v3 = *(_QWORD *)(a1 + 3496);
    if ( !v3 )
      return (unsigned int)-1073741637;
    v4 = *(_QWORD *)(a1 + 3504);
  }
  else
  {
    if ( *(_DWORD *)a1 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v3 = *(_QWORD *)(a1 + 6008);
    if ( !v3 )
      return (unsigned int)-1073741637;
    v4 = *(_QWORD *)(a1 + 6016);
  }
  if ( !v4 )
    return (unsigned int)-1073741637;
  v5 = TcglibDiscoverDevice(a1, v3, v4);
  if ( v5 < 0 )
    RtlStringCbCopyA(a2, 0x20uLL, "TcglibDiscoverDevice");
  return (unsigned int)v5;
}
