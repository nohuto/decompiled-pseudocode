/*
 * XREFs of ?GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z @ 0x18036B238
 * Callers:
 *     ?OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18036B680 (-OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperien.c)
 *     ?OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803733E0 (-OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180378B20 (-OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 *     ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x1803D7944 (-IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RoVariant::Accessor::GetString(RoVariant::Accessor *this, HSTRING *a2)
{
  __int64 result; // rax
  int v4; // ecx

  if ( !a2 )
    return 2147500035LL;
  *a2 = 0LL;
  v4 = *((_DWORD *)this + 2);
  if ( v4 == 7 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 152LL))(*(_QWORD *)this);
  result = 2147650720LL;
  if ( v4 < 0 )
    return (unsigned int)v4;
  return result;
}
