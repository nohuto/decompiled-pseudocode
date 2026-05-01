/*
 * XREFs of ?GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z @ 0x1800A19E0
 * Callers:
 *     ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1800A120C (-OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChang.c)
 *     ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180378B20 (-OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 *     ?IsDeviceEnabled@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceInformationUpdate@Enumeration@Devices@Windows@@PEA_N@Z @ 0x18055F03C (-IsDeviceEnabled@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceInformationUpdate@Enumer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RoVariant::Accessor::GetBoolean(RoVariant::Accessor *this, unsigned __int8 *a2)
{
  int v3; // ecx
  __int64 result; // rax

  if ( !a2 )
    return 2147500035LL;
  *a2 = 0;
  v3 = *((_DWORD *)this + 2);
  if ( v3 == 7 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 144LL))(*(_QWORD *)this);
  result = 2147650720LL;
  if ( v3 < 0 )
    return (unsigned int)v3;
  return result;
}
