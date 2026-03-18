/*
 * XREFs of ??_G?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAXI@Z @ 0x1800BA424
 * Callers:
 *     ??$destruct_range@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1800BA138 (--$destruct_range@V-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@detail@@Y.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ @ 0x1800EA6A4 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ.c)
 */

__int64 *__fastcall wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>::`scalar deleting destructor'(
        __int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
    CMILRefCountBaseT<IDeviceResource>::InternalRelease(v2);
  return a1;
}
