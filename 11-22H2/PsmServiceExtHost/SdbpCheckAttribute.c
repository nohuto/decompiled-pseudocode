/*
 * XREFs of SdbpCheckAttribute @ 0x1800934DC
 * Callers:
 *     SdbpCheckAllAttributes @ 0x18009320C (SdbpCheckAllAttributes.c)
 * Callees:
 *     Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage @ 0x180052568 (Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage.c)
 *     SdbpCheckFromStringVersion @ 0x1800525A4 (SdbpCheckFromStringVersion.c)
 *     SdbpCheckUptoStringVersion @ 0x1800526D4 (SdbpCheckUptoStringVersion.c)
 *     SdbpCheckFromVersion @ 0x180093748 (SdbpCheckFromVersion.c)
 *     SdbpCheckUptoVersion @ 0x18009378C (SdbpCheckUptoVersion.c)
 *     SdbpCheckVersion @ 0x1800937D0 (SdbpCheckVersion.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslStringPatternMatchExW @ 0x1800992AC (AslStringPatternMatchExW.c)
 */

__int64 __fastcall SdbpCheckAttribute(
        _DWORD *a1,
        unsigned __int16 a2,
        unsigned __int16 *a3,
        unsigned int a4,
        __int64 a5)
{
  int v5; // ebx
  int v9; // r8d
  int v10; // eax
  __int64 result; // rax
  int v12; // r9d
  bool v13; // zf

  v5 = 0;
  *a1 = 0;
  if ( a2 > 0x5012u )
  {
    if ( a2 != 20499 )
    {
      if ( a2 == 24644 || a2 == 24645 )
      {
        if ( !(unsigned int)Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage() )
          goto LABEL_51;
        if ( a4 < 2 )
        {
          v9 = 624;
          goto LABEL_14;
        }
        v10 = SdbpCheckUptoStringVersion(a3, *(unsigned __int16 **)(a5 + 16));
      }
      else
      {
        if ( (unsigned int)a2 - 24646 >= 2 )
          goto LABEL_26;
        if ( !(unsigned int)Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage() )
          goto LABEL_51;
        if ( a4 < 2 )
        {
          v9 = 641;
          goto LABEL_14;
        }
        v10 = SdbpCheckFromStringVersion(a3, *(unsigned __int16 **)(a5 + 16));
      }
LABEL_50:
      v5 = v10;
      goto LABEL_51;
    }
LABEL_47:
    if ( a4 < 8 )
    {
      v9 = 595;
      goto LABEL_14;
    }
    v10 = SdbpCheckFromVersion(*(_QWORD *)a3, *(_QWORD *)(a5 + 16));
    goto LABEL_50;
  }
  switch ( a2 )
  {
    case 0x5012u:
      goto LABEL_47;
    case 0x401Eu:
      if ( a4 < 4 )
      {
        v9 = 669;
        goto LABEL_14;
      }
      LOBYTE(v5) = *(_DWORD *)a3 >= *(_DWORD *)(a5 + 16);
      goto LABEL_51;
    case 0x4033u:
      if ( a4 < 4 )
      {
        v9 = 656;
        goto LABEL_14;
      }
      LOBYTE(v5) = *(_DWORD *)a3 <= *(_DWORD *)(a5 + 16);
      goto LABEL_51;
    case 0x5002u:
    case 0x5003u:
      if ( a4 < 8 )
      {
        v9 = 581;
        goto LABEL_14;
      }
      v10 = SdbpCheckVersion(*(_QWORD *)a3, *(_QWORD *)(a5 + 16));
      goto LABEL_50;
    case 0x5006u:
    case 0x500Du:
      if ( a4 < 8 )
      {
        v9 = 609;
LABEL_14:
        AslLogCallPrintf(1, (unsigned int)"SdbpCheckAttribute", v9, (unsigned int)"Attribute size doesn't match");
        return 0LL;
      }
      v10 = SdbpCheckUptoVersion(*(_QWORD *)a3, *(_QWORD *)(a5 + 16));
      goto LABEL_50;
  }
LABEL_26:
  v12 = a2 & 0xF000;
  switch ( v12 )
  {
    case 16384:
      if ( a4 < 4 )
      {
        v9 = 685;
        goto LABEL_14;
      }
      v13 = *(_DWORD *)a3 == *(_DWORD *)(a5 + 16);
LABEL_38:
      LOBYTE(v5) = v13;
      break;
    case 20480:
      if ( a4 < 8 )
      {
        v9 = 715;
        goto LABEL_14;
      }
      v13 = *(_QWORD *)a3 == *(_QWORD *)(a5 + 16);
      goto LABEL_38;
    case 24576:
      if ( a4 < 2 )
      {
        v9 = 701;
        goto LABEL_14;
      }
      v10 = AslStringPatternMatchExW(a3, *(_QWORD *)(a5 + 16));
      goto LABEL_50;
  }
LABEL_51:
  result = 1LL;
  *a1 = v5;
  return result;
}
