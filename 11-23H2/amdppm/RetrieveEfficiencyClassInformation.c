/*
 * XREFs of RetrieveEfficiencyClassInformation @ 0x1C003A440
 * Callers:
 *     InitializeEnergyEstimation @ 0x1C003A01C (InitializeEnergyEstimation.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001800 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0002344 (ResetEnumerationContext.c)
 *     InitializeEnumerationContext @ 0x1C00023F0 (InitializeEnumerationContext.c)
 *     GetProcessorEfficiencyClass @ 0x1C0039F54 (GetProcessorEfficiencyClass.c)
 */

__int64 RetrieveEfficiencyClassInformation()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  unsigned int v2; // r10d
  unsigned int v3; // eax
  __int64 *v4; // rcx
  _OWORD v6[2]; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int8 v7; // [rsp+60h] [rbp+20h] BYREF
  __int64 v8; // [rsp+68h] [rbp+28h] BYREF
  __int64 v9; // [rsp+70h] [rbp+30h] BYREF

  v8 = 0LL;
  memset(v6, 0, sizeof(v6));
  v7 = 0;
  if ( byte_1C0012730 )
  {
LABEL_2:
    InitializeEnumerationContext((__int64)&qword_1C0012518, 32, (__int64)v6);
    ResetEnumerationContext((__int64 *)v6);
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v6, &v8) )
    {
      if ( _bittest64((const signed __int64 *)(v8 + 280), 0x25u) )
        *(_BYTE *)(v8 + 376) = 0;
    }
    dword_1C0012B94 = 1;
  }
  else
  {
    v9 = 0LL;
    InitializeEnumerationContext((__int64)&qword_1C0012518, 32, (__int64)v6);
    ResetEnumerationContext((__int64 *)v6);
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v6, &v8) )
    {
      v0 = v8;
      if ( _bittest64((const signed __int64 *)(v8 + 280), 0x25u) )
      {
        if ( (int)GetProcessorEfficiencyClass(v8, &v7) < 0 )
          goto LABEL_2;
        v1 = v7;
        *(_BYTE *)(v0 + 376) = v7;
        ++*((_DWORD *)&v9 + v1);
      }
    }
    v3 = 0;
    v4 = &v9;
    do
    {
      if ( !*(_DWORD *)v4 )
        break;
      ++v3;
      v4 = (__int64 *)((char *)v4 + 4);
    }
    while ( v3 < 2 );
    dword_1C0012B94 = v3;
    return 0;
  }
  return v2;
}
