/*
 * XREFs of ?GetTargetWithFocus@MPCInputRouter@@MEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180117E00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall MPCInputRouter::GetTargetWithFocus(
        MPCInputRouter *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct IInputBuffer *a4,
        struct IInputTarget **a5)
{
  bool v5; // r10

  v5 = a2 && (*((_DWORD *)a2 + 1) & 0x662600) != 0;
  if ( *((_BYTE *)this + 872) && v5 )
    return (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IInputTarget **, struct IInputBuffer *))this + 100))(
             *((_QWORD *)this + 100),
             &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
             a5,
             a4);
  else
    return DWMInputRouter::GetTargetWithFocus(this, a2, a3, a4, a5);
}
