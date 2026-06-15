/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAVoperation_guard@3@@Z @ 0x180064E64
 * Callers:
 *     ??1operation_guard@wil@@QEAA@XZ @ 0x180063360 (--1operation_guard@wil@@QEAA@XZ.c)
 * Callees:
 *     ??$invoke@P6AXPEAVoperation_guard@wil@@@_EAEAPEAV12@@wistd@@YAX$$QEAP6AXPEAVoperation_guard@wil@@@_EAEAPEAV12@@Z @ 0x180062F6C (--$invoke@P6AXPEAVoperation_guard@wil@@@_EAEAPEAV12@@wistd@@YAX$$QEAP6AXPEAVoperation_guard@wil@.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1800BE6F8 (--1last_error_context@wil@@QEAA@XZ.c)
 */

void __fastcall _reset___unique_storage_U__resource_policy_PEAVoperation_guard_wil__P6AXPEAV12___E_1_release_operation_guard_reference_details_2_YAX0_ZU__integral_constant__K_00_wistd__PEAV12_PEAV12__0A___T_details_wil___details_wil__QEAAXPEAVoperation_guard_3__Z(
        __int64 *a1,
        __int64 a2)
{
  char v4; // [rsp+30h] [rbp+8h] BYREF
  DWORD LastError; // [rsp+34h] [rbp+Ch]
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  void (__fastcall *v7)(wil::details *, struct wil::operation_guard *); // [rsp+40h] [rbp+18h] BYREF

  if ( *a1 )
  {
    v6 = *a1;
    v4 = 0;
    LastError = GetLastError();
    v7 = wil::details::release_operation_guard_reference;
    _EAEAPEAV12::invoke<void (*)(wil::operation_guard *) throw(unsigned __int8,wil::operation_guard * &),wistd,wil::AX$$QEAP6AXPEAVoperation_guard>(
      (__int64 (__fastcall **)(_QWORD))&v7,
      &v6);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v4);
  }
  *a1 = a2;
}
