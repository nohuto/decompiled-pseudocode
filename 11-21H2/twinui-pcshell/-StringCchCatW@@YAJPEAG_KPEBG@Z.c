/*
 * XREFs of ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800E607C
 * Callers:
 *     CapabilityHelper::CreateSecurityAttributesForUWPCapability @ 0x1800E57D0 (CapabilityHelper--CreateSecurityAttributesForUWPCapability.c)
 *     ?EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z @ 0x1801D4E00 (-EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z.c)
 *     ?_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z @ 0x18023985E (-_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z.c)
 *     ?ReplaceInitialPathCharactersWithGuid@@YAXPEAG_KPEBGAEBU_GUID@@1@Z @ 0x1803C8FE0 (-ReplaceInitialPathCharactersWithGuid@@YAXPEAG_KPEBGAEBU_GUID@@1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCatW(unsigned __int16 *a1, __int64 a2, char *a3)
{
  __int64 v4; // r9
  unsigned __int16 *v5; // rax
  __int64 v6; // r8
  __int64 result; // rax
  unsigned __int16 *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  char *v11; // r11
  unsigned __int16 v12; // r8
  unsigned __int16 *v13; // rax

  v4 = a2;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    return 2147942487LL;
  v5 = a1;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --a2;
  }
  while ( a2 );
  v6 = (v4 - a2) & -(__int64)(a2 != 0);
  result = a2 == 0 ? 0x80070057 : 0;
  if ( a2 )
  {
    v8 = &a1[v6];
    v9 = v4 - v6;
    if ( v4 != v6 )
    {
      v10 = 2147483646LL;
      v11 = (char *)(a3 - (char *)v8);
      do
      {
        if ( !v10 )
          break;
        v12 = *(unsigned __int16 *)((char *)v8 + (_QWORD)v11);
        if ( !v12 )
          break;
        *v8 = v12;
        --v10;
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    v13 = v8 - 1;
    if ( v9 )
      v13 = v8;
    *v13 = 0;
    return v9 == 0 ? 0x8007007A : 0;
  }
  return result;
}
