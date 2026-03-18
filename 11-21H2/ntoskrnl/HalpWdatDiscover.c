/*
 * XREFs of HalpWdatDiscover @ 0x1403BE570
 * Callers:
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x1403BCA0C (HalpTimerRegisterBuiltinPluginsCommon.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403B37B0 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpTimerRegister @ 0x1403BE0BC (HalpTimerRegister.c)
 *     HalSocGetAcpiTable @ 0x1403BE664 (HalSocGetAcpiTable.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalpWdatExecuteActionBeforeInitialize @ 0x140521F54 (HalpWdatExecuteActionBeforeInitialize.c)
 *     HalpWdatProcessWdatInternalData @ 0x1405222C8 (HalpWdatProcessWdatInternalData.c)
 *     HalpWdatProcessWdrtInternalData @ 0x140522324 (HalpWdatProcessWdrtInternalData.c)
 *     HviGetHardwareFeatures @ 0x140647B00 (HviGetHardwareFeatures.c)
 */

__int64 HalpWdatDiscover()
{
  __int64 AcpiTable; // rdi
  __int64 v1; // rax
  __int64 v2; // rbx
  int v4; // eax
  unsigned __int64 v5; // rdx
  int v6; // ecx
  char v7; // si
  __int64 v8; // r15
  int v9; // edx
  int v10; // ecx
  unsigned __int64 v11; // rcx
  int v12; // [rsp+38h] [rbp-D0h] BYREF
  int v13; // [rsp+3Ch] [rbp-CCh] BYREF
  int v14; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v15[18]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v16[14]; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v17; // [rsp+148h] [rbp+40h] BYREF

  v14 = 0;
  v13 = 0;
  memset(v15, 0, sizeof(v15));
  memset(v16, 0, sizeof(v16));
  v15[0] = 0x9000000001LL;
  v17 = 0LL;
  AcpiTable = 0LL;
  LOBYTE(v12) = 0;
  if ( !HalpIsMicrosoftCompatibleHvLoaded()
    || !HalpHvCpuManager
    || (HviGetHardwareFeatures(&v17), (v17 & 0x2000000) == 0) )
  {
    AcpiTable = HalSocGetAcpiTable(1413563479LL);
  }
  v1 = HalSocGetAcpiTable(1414677591LL);
  v2 = v1;
  if ( AcpiTable )
  {
    v4 = HalpWdatProcessWdatInternalData(AcpiTable, v16, &v13, &v12);
  }
  else
  {
    if ( !v1 )
      return 0LL;
    v16[1] = v1;
    v4 = HalpWdatProcessWdrtInternalData(v1, v16, &v13, &v12);
  }
  v7 = v12;
  if ( v4 >= 0 )
  {
    if ( !(_BYTE)v12 )
      return 0LL;
    if ( LODWORD(v16[3]) )
    {
      v8 = LODWORD(v16[2]);
      if ( LODWORD(v16[2]) >= HIDWORD(v16[2]) )
      {
        HIDWORD(v15[14]) = 163872;
        LOBYTE(v6) = 32;
        if ( (int)HalpWdatExecuteActionBeforeInitialize(v6, v5, (unsigned int)&v14, AcpiTable, v2) >= 0 && v14 == 1 )
        {
          HIDWORD(v15[14]) = 426016;
          LOBYTE(v10) = 33;
          HalpWdatExecuteActionBeforeInitialize(v10, v9, 0, AcpiTable, v2);
        }
        v11 = (unsigned __int64)LODWORD(v16[3]) * v8 / 0x3E8;
        if ( v11 <= 0x12C436C73CE5LL )
        {
          v5 = 894000 * v11;
          v6 = 63;
          HIDWORD(v15[12]) = 63;
          do
          {
            if ( (1LL << v6) - 1 < v5 )
              break;
            --v6;
          }
          while ( v6 );
          HIDWORD(v15[12]) = v6;
          if ( !v6 )
            goto LABEL_26;
        }
        else
        {
          HIDWORD(v15[12]) = 64;
        }
        v15[3] = 0LL;
        v15[11] = 0LL;
        v15[1] = HalpWdatInitialize;
        v15[4] = HalpWdatArmTimer;
        v15[5] = HalpWdatStop;
        LODWORD(v15[12]) = v13;
        v15[13] = 894000LL;
        v15[17] = 13LL;
        HalpTimerRegister((__int64)v15, 0LL);
      }
    }
  }
LABEL_26:
  if ( v7 )
  {
    LOBYTE(v6) = 11;
    HalpWdatExecuteActionBeforeInitialize(v6, v5, 0, AcpiTable, v2);
  }
  return 0LL;
}
