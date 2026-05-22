/*
 * XREFs of ?InternalRelease@?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180012DDC
 * Callers:
 *     _dynamic_atexit_destructor_for__Windows::UI::Composition::PropertyValueHelper::s_propertyValueFactory__ @ 0x1800B22B0 (_dynamic_atexit_destructor_for__Windows--UI--Composition--PropertyValueHelper--s_propertyValueFa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValueStatics>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
