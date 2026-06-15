/*
 * XREFs of ?ParseCommandLine@CAudioDGModule@@QEAA_NPEBGPEAJ@Z @ 0x140001890
 * Callers:
 *     ?WinMain@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z @ 0x140001A04 (-WinMain@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z.c)
 * Callees:
 *     ?ValidateInheritedHandle@CAudioDGModule@@QEAA_NPEAX@Z @ 0x1400019C8 (-ValidateInheritedHandle@CAudioDGModule@@QEAA_NPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001F6A8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 */

char __fastcall CAudioDGModule::ParseCommandLine(void **this, const unsigned __int16 *a2, int *a3)
{
  char v3; // di
  const unsigned __int16 *v5; // rax
  const unsigned __int16 *v6; // rcx
  const unsigned __int16 *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rax
  CAudioDGModule *v10; // rcx
  CAudioDGModule *v11; // rcx

  v3 = 0;
  v5 = a2;
  if ( !*a2 )
    return 0;
  do
    v6 = v5++;
  while ( *v5 );
  if ( v5 <= a2 )
    return 0;
  while ( v6 != a2 && *v6 == 32 )
    --v6;
  if ( v6 <= a2 )
    return 0;
  do
  {
    if ( *v6 == 32 )
      break;
    --v6;
  }
  while ( v6 != a2 );
  if ( v6 <= a2 )
    return 0;
  v7 = v6 + 1;
  do
  {
    if ( *v6 != 32 )
      break;
    *v6-- = 0;
  }
  while ( v6 != a2 );
  if ( v6 <= a2 )
    return 0;
  do
  {
    if ( *v6 == 32 )
      break;
    --v6;
  }
  while ( v6 != a2 );
  if ( v6 <= a2 )
    return 0;
  v8 = _o__wcstoui64(v6 + 1, 0LL, 16LL);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    this + 19,
    v8);
  v9 = _o__wcstoui64(v7, 0LL, 16LL);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    this + 15,
    v9);
  if ( CAudioDGModule::ValidateInheritedHandle(v10, this[19]) && CAudioDGModule::ValidateInheritedHandle(v11, this[15]) )
    return 1;
  return v3;
}
