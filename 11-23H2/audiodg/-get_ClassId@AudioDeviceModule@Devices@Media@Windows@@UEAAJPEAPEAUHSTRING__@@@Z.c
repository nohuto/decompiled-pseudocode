/*
 * XREFs of ?get_ClassId@AudioDeviceModule@Devices@Media@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x14008DB70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModule::get_ClassId(HSTRING *this, HSTRING *a2)
{
  HRESULT v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v2 = -2147467261;
    v3 = 294LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = WindowsDuplicateString(this[10], a2);
  if ( v2 < 0 )
  {
    v3 = 295LL;
    goto LABEL_3;
  }
  return 0LL;
}
