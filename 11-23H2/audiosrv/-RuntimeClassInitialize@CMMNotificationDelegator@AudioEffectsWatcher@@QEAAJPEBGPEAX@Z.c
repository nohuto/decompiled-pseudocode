/*
 * XREFs of ?RuntimeClassInitialize@CMMNotificationDelegator@AudioEffectsWatcher@@QEAAJPEBGPEAX@Z @ 0x1800D6F64
 * Callers:
 *     ??$MakeAndInitialize@VCMMNotificationDelegator@AudioEffectsWatcher@@UIMMNotificationClient@@AEAPEBGPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIMMNotificationClient@@AEAPEBG$$QEAPEAX@Z @ 0x1800D5280 (--$MakeAndInitialize@VCMMNotificationDelegator@AudioEffectsWatcher@@UIMMNotificationClient@@AEAP.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18000C61C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18002D1B8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CD4A0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioEffectsWatcher::CMMNotificationDelegator::RuntimeClassInitialize(
        wil::details **this,
        const unsigned __int16 *a2,
        void *a3)
{
  unsigned __int64 v5; // r9
  int v6; // ebx
  HANDLE CurrentProcess; // rbx
  HANDLE v9; // rax
  bool v10; // bl
  const char *v11; // r9
  __int64 dwDesiredAccess; // [rsp+20h] [rbp-40h]
  void **v13; // [rsp+40h] [rbp-20h]
  HANDLE TargetHandle; // [rsp+48h] [rbp-18h] BYREF
  char v15; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v13 = (void **)(this + 3);
  TargetHandle = 0LL;
  v15 = 1;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  v6 = _AllocStringWorker<CTCoAllocPolicy>(
         (__int64)this,
         (__int64)a2,
         a2,
         v5,
         dwDesiredAccess,
         (unsigned __int16 **)&TargetHandle);
  if ( v15 )
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      v13,
      TargetHandle);
  if ( v6 >= 0 )
  {
    TargetHandle = 0LL;
    v15 = 1;
    CurrentProcess = GetCurrentProcess();
    v9 = GetCurrentProcess();
    v10 = !DuplicateHandle(v9, a3, CurrentProcess, &TargetHandle, 2u, 0, 0);
    if ( v15 )
      _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
        this + 4,
        (wil::details *)TargetHandle);
    if ( v10 )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x13B,
               (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
               v11);
    else
      return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13A,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
}
