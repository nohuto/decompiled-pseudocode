/*
 * XREFs of RetrieveEfficiencyClassInformation @ 0x1C00394B0
 * Callers:
 *     InitializeEnergyEstimation @ 0x1C00390A8 (InitializeEnergyEstimation.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001840 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C00027D4 (ResetEnumerationContext.c)
 *     InitializeEnumerationContext @ 0x1C00027F0 (InitializeEnumerationContext.c)
 *     GetProcessorEfficiencyClass @ 0x1C0038FE0 (GetProcessorEfficiencyClass.c)
 */

__int64 RetrieveEfficiencyClassInformation()
{
  __int64 *v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // rax
  unsigned int v3; // r10d
  unsigned int i; // eax
  _OWORD v6[2]; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int8 v7; // [rsp+60h] [rbp+20h] BYREF
  __int64 v8; // [rsp+68h] [rbp+28h] BYREF

  v8 = 0LL;
  v7 = 0;
  qword_1C0011AE8 = 0LL;
  memset(v6, 0, sizeof(v6));
  InitializeEnumerationContext((__int64)&qword_1C0011498, 32, (__int64)v6);
  ResetEnumerationContext((__int64 *)v6);
  v0 = &qword_1C0011AE8;
  while ( !(unsigned int)EnumerateNextDevice((__int64 *)v6, &v8) )
  {
    v1 = v8;
    if ( _bittest64((const signed __int64 *)(v8 + 280), 0x25u) )
    {
      if ( (int)GetProcessorEfficiencyClass(v8, &v7) < 0 )
      {
        InitializeEnumerationContext((__int64)&qword_1C0011498, 32, (__int64)v6);
        ResetEnumerationContext((__int64 *)v6);
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v6, &v8) )
        {
          if ( _bittest64((const signed __int64 *)(v8 + 280), 0x25u) )
            *(_BYTE *)(v8 + 376) = 0;
        }
        dword_1C0011AE4 = 1;
        qword_1C0011AE8 = 0LL;
        LODWORD(qword_1C0011AE8) = dword_1C0011454;
        return v3;
      }
      v2 = v7;
      *(_BYTE *)(v1 + 376) = v7;
      ++*((_DWORD *)&qword_1C0011AE8 + v2);
    }
  }
  for ( i = 0; i < 2; ++i )
  {
    if ( !*(_DWORD *)v0 )
      break;
    v0 = (__int64 *)((char *)v0 + 4);
  }
  dword_1C0011AE4 = i;
  return 0;
}
