/*
 * XREFs of SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x180095C6C
 * Callers:
 *     SdbResolveDatabaseEx @ 0x18009737C (SdbResolveDatabaseEx.c)
 * Callees:
 *     SdbGuestHostArchsToRuntimePlatformFlag @ 0x180095BC0 (SdbGuestHostArchsToRuntimePlatformFlag.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslEnvGetProcessWowInfo @ 0x1800A3244 (AslEnvGetProcessWowInfo.c)
 */

__int64 __fastcall SdbGuestTargetPlatformFlagsToRuntimePlatformFlags(int a1)
{
  unsigned int v1; // edi
  __int16 v2; // si
  unsigned __int64 i; // rbx
  __int16 v4; // cx
  unsigned __int64 v5; // rax
  int v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = a1;
  v1 = 0;
  if ( (int)AslEnvGetProcessWowInfo(&v7, 0LL) >= 0 )
  {
    v2 = v7;
    for ( i = 0LL; i < 15; i += 3LL )
    {
      if ( (dword_1800C7E38[i + 32] & 0x1F) != 0 )
      {
        v4 = dword_1800C7E38[i + 31];
        v5 = 0LL;
        while ( *(_WORD *)((char *)&unk_1800DC4C0 + v5) != v2 || *(_WORD *)((char *)&unk_1800DC4C2 + v5) != v4 )
        {
          v5 += 16LL;
          if ( v5 >= 0x80 )
            goto LABEL_11;
        }
        v1 |= SdbGuestHostArchsToRuntimePlatformFlag(v4, (__int16 *)&v7);
      }
LABEL_11:
      ;
    }
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbGuestTargetPlatformFlagsToRuntimePlatformFlags",
      326,
      (unsigned int)"AslEnvGetProcessWowInfo failed to determine processor info [%x]");
  }
  return v1;
}
