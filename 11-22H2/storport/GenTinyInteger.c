/*
 * XREFs of GenTinyInteger @ 0x1C0080D78
 * Callers:
 *     GenSetTableColumnParams @ 0x1C007C100 (GenSetTableColumnParams.c)
 *     GenActivateParams @ 0x1C007CD40 (GenActivateParams.c)
 *     GenSetTPerPropertiesParams @ 0x1C007E1E0 (GenSetTPerPropertiesParams.c)
 *     GenStartSessionParams @ 0x1C007E3E0 (GenStartSessionParams.c)
 *     GenCallMethodEnd @ 0x1C008060C (GenCallMethodEnd.c)
 *     GenNamedValueBegin @ 0x1C00808C0 (GenNamedValueBegin.c)
 *     GenNamedValueInt @ 0x1C0080970 (GenNamedValueInt.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C003E890 (WPP_SF_dd.c)
 */

__int64 __fastcall GenTinyInteger(__int64 a1, char a2)
{
  unsigned int v3; // r8d
  __int64 v4; // rcx
  unsigned int v5; // r9d
  int v7; // [rsp+20h] [rbp-18h]

  v3 = 0;
  v4 = *(unsigned int *)(a1 + 12);
  v5 = *(_DWORD *)(a1 + 8);
  if ( (int)v4 + 1 <= v5 )
  {
    *(_BYTE *)(v4 + *(_QWORD *)a1) = a2 & 0x3F;
    ++*(_DWORD *)(a1 + 12);
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      v7 = v4 + 1;
      WPP_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xAu,
        (__int64)&WPP_7125d21b90f93d8abdbf4e6e2db0cd73_Traceguids,
        v5,
        v7);
    }
    return (unsigned int)-1073741789;
  }
  return v3;
}
