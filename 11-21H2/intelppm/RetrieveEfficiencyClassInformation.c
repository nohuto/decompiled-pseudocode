/*
 * XREFs of RetrieveEfficiencyClassInformation @ 0x1C0026B9C
 * Callers:
 *     InitializeEnergyEstimation @ 0x1C00247D0 (InitializeEnergyEstimation.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C0001BA0 (InitializeEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C000248C (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0002528 (ResetEnumerationContext.c)
 *     GetProcessorEfficiencyClass @ 0x1C0028138 (GetProcessorEfficiencyClass.c)
 */

__int64 RetrieveEfficiencyClassInformation()
{
  int v0; // eax
  __int64 *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rax
  unsigned int i; // eax
  unsigned int v5; // r11d
  _OWORD v7[2]; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int8 v8; // [rsp+60h] [rbp+20h] BYREF
  __int64 v9; // [rsp+68h] [rbp+28h] BYREF

  v9 = 0LL;
  v8 = 0;
  qword_1C001E388 = 0LL;
  memset(v7, 0, sizeof(v7));
  InitializeEnumerationContext((__int64)&qword_1C001DD38, 32, (__int64)v7);
  ResetEnumerationContext((__int64 *)v7);
  v0 = EnumerateNextDevice((__int64 *)v7, &v9);
  v1 = &qword_1C001E388;
  while ( !v0 )
  {
    v2 = v9;
    if ( _bittest64((const signed __int64 *)(v9 + 280), 0x25u) )
    {
      if ( (int)GetProcessorEfficiencyClass(v9, &v8) < 0 )
      {
        InitializeEnumerationContext((__int64)&qword_1C001DD38, 32, (__int64)v7);
        ResetEnumerationContext((__int64 *)v7);
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v7, &v9) )
        {
          if ( _bittest64((const signed __int64 *)(v9 + 280), 0x25u) )
            *(_BYTE *)(v9 + 376) = 0;
        }
        dword_1C001E384 = 1;
        qword_1C001E388 = 0LL;
        LODWORD(qword_1C001E388) = dword_1C001DCF4;
        return v5;
      }
      v3 = v8;
      *(_BYTE *)(v2 + 376) = v8;
      ++*((_DWORD *)&qword_1C001E388 + v3);
    }
    v0 = EnumerateNextDevice((__int64 *)v7, &v9);
  }
  for ( i = 0; i < 2; ++i )
  {
    if ( !*(_DWORD *)v1 )
      break;
    v1 = (__int64 *)((char *)v1 + 4);
  }
  dword_1C001E384 = i;
  return 0;
}
