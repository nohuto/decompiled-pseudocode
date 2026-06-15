/*
 * XREFs of ?RuntimeClassInitialize@CMMNotificationDelegator@AudioEffectsWatcher@@QEAAJPEBGPEAX@Z @ 0x1800D47D8
 * Callers:
 *     ??$MakeAndInitialize@VCMMNotificationDelegator@AudioEffectsWatcher@@UIMMNotificationClient@@AEAPEBGPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIMMNotificationClient@@AEAPEBG$$QEAPEAX@Z @ 0x1800D260C (--$MakeAndInitialize@VCMMNotificationDelegator@AudioEffectsWatcher@@UIMMNotificationClient@@AEAP.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18004AA38 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18004AA90 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18004BCB8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BFD00 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioEffectsWatcher::CMMNotificationDelegator::RuntimeClassInitialize(
        wil::details **this,
        const unsigned __int16 *a2,
        void *a3)
{
  unsigned __int64 v6; // rdi
  HANDLE v7; // rsi
  unsigned __int64 v8; // r14
  int v9; // ebx
  HANDLE CurrentProcess; // rbx
  HANDLE v12; // rax
  bool v13; // bl
  const char *v14; // r9
  void **v15; // [rsp+40h] [rbp-20h]
  HANDLE TargetHandle; // [rsp+48h] [rbp-18h] BYREF
  char v17; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v15 = (void **)(this + 3);
  v17 = 1;
  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  v7 = 0LL;
  v8 = v6 + 1;
  if ( v6 + 1 >= v6 && (TargetHandle = 0LL, is_mul_ok(v8, 2uLL)) )
  {
    v9 = CTCoAllocPolicy::Alloc(0LL, (v8 * (unsigned __int128)2uLL) >> 64, 2 * v8, &TargetHandle);
    v7 = TargetHandle;
    if ( v9 >= 0 )
      StringCchCopyNExW((char *)TargetHandle, v6 + 1, a2, v6);
  }
  else
  {
    v9 = -2147024362;
  }
  if ( v17 )
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      v15,
      v7);
  if ( v9 >= 0 )
  {
    TargetHandle = 0LL;
    v17 = 1;
    CurrentProcess = GetCurrentProcess();
    v12 = GetCurrentProcess();
    v13 = !DuplicateHandle(v12, a3, CurrentProcess, &TargetHandle, 2u, 0, 0);
    if ( v17 )
      _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
        this + 4,
        (wil::details *)TargetHandle);
    if ( v13 )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x139,
               (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
               v14);
    else
      return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x138,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
}
