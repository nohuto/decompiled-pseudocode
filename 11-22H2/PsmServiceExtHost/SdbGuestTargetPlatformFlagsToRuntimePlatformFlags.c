/*
 * XREFs of SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x180090C64
 * Callers:
 *     SdbResolveDatabaseEx @ 0x1800923F4 (SdbResolveDatabaseEx.c)
 * Callees:
 *     SdbGuestHostArchsToRuntimePlatformFlag @ 0x180090BB8 (SdbGuestHostArchsToRuntimePlatformFlag.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslEnvGetProcessWowInfo @ 0x1800A0404 (AslEnvGetProcessWowInfo.c)
 */

__int64 __fastcall SdbGuestTargetPlatformFlagsToRuntimePlatformFlags(int a1)
{
  unsigned int v1; // edi
  int ProcessWowInfo; // eax
  __int16 v3; // si
  unsigned __int64 i; // rbx
  __int16 v5; // cx
  unsigned __int64 v6; // rax
  int v8; // [rsp+20h] [rbp-18h]
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = a1;
  v1 = 0;
  ProcessWowInfo = AslEnvGetProcessWowInfo(&v9, 0LL);
  if ( ProcessWowInfo >= 0 )
  {
    v3 = v9;
    for ( i = 0LL; i < 15; i += 3LL )
    {
      if ( (dword_1800C8268[i + 32] & 0x1F) != 0 )
      {
        v5 = dword_1800C8268[i + 31];
        v6 = 0LL;
        while ( *(_WORD *)((char *)&unk_1800DB4D0 + v6) != v3 || *(_WORD *)((char *)&unk_1800DB4D2 + v6) != v5 )
        {
          v6 += 16LL;
          if ( v6 >= 0x80 )
            goto LABEL_11;
        }
        v1 |= SdbGuestHostArchsToRuntimePlatformFlag(v5, (__int16 *)&v9);
      }
LABEL_11:
      ;
    }
  }
  else
  {
    v8 = ProcessWowInfo;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbGuestTargetPlatformFlagsToRuntimePlatformFlags",
      331,
      (unsigned int)"AslEnvGetProcessWowInfo failed to determine processor info [%x]",
      v8);
  }
  return v1;
}
