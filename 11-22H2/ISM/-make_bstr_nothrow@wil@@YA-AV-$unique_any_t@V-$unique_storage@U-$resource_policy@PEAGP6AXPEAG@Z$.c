/*
 * XREFs of ?make_bstr_nothrow@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG@Z @ 0x18006F4AC
 * Callers:
 *     ?GetChassisType@DevicePostureHelpers@@YAJPEAW4ChassisType@1@@Z @ 0x18006E5A4 (-GetChassisType@DevicePostureHelpers@@YAJPEAW4ChassisType@1@@Z.c)
 * Callees:
 *     <none>
 */

BSTR *__fastcall wil::make_bstr_nothrow(BSTR *a1, const OLECHAR *a2)
{
  *a1 = SysAllocString(a2);
  return a1;
}
