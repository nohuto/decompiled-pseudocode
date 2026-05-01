/*
 * XREFs of ?GetSize@Accessor@RoVariant@@QEBAJPEAUSize@Foundation@Windows@@@Z @ 0x1800A1A24
 * Callers:
 *     ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1800A120C (-OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChang.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RoVariant::Accessor::GetSize(RoVariant::Accessor *this, struct Windows::Foundation::Size *a2)
{
  int v3; // ecx
  __int64 result; // rax

  if ( !a2 )
    return 2147500035LL;
  *(_QWORD *)a2 = 0LL;
  v3 = *((_DWORD *)this + 2);
  if ( v3 == 7 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 192LL))(*(_QWORD *)this);
  result = 2147650720LL;
  if ( v3 < 0 )
    return (unsigned int)v3;
  return result;
}
