/*
 * XREFs of ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?DestroyPrivateObjectSecurity@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18006E104
 * Callers:
 *     ?SavePhysicalConvertibility@DevicePostureHelpers@@YAJK@Z @ 0x18006F078 (-SavePhysicalConvertibility@DevicePostureHelpers@@YAJK@Z.c)
 * Callees:
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1800A5254 (--1last_error_context@wil@@QEAA@XZ.c)
 */

void __fastcall __1__out_param_t_V__unique_any_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_DestroyPrivateObjectSecurity_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil___wil___details_wil__QEAA_XZ(
        void ***a1)
{
  void **v1; // rbx
  void **v2; // rsi
  void *v3; // rdi
  DWORD LastError; // eax
  char v5; // [rsp+30h] [rbp+8h] BYREF
  DWORD v6; // [rsp+34h] [rbp+Ch]
  PSECURITY_DESCRIPTOR ObjectDescriptor; // [rsp+38h] [rbp+10h] BYREF

  if ( *((_BYTE *)a1 + 16) )
  {
    v1 = *a1;
    v2 = a1[1];
    v3 = **a1;
    if ( v3 )
    {
      v5 = 0;
      LastError = GetLastError();
      ObjectDescriptor = v3;
      v6 = LastError;
      DestroyPrivateObjectSecurity(&ObjectDescriptor);
      wil::last_error_context::~last_error_context((wil::last_error_context *)&v5);
    }
    *v1 = v2;
  }
}
