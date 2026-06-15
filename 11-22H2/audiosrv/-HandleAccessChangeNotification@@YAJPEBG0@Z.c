/*
 * XREFs of ?HandleAccessChangeNotification@@YAJPEBG0@Z @ 0x1800E9FCC
 * Callers:
 *     s_CapabilityAccessManagerNotification @ 0x1800EA6E0 (s_CapabilityAccessManagerNotification.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18008213C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CD4F0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?RtlFreeSid@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E9DDC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-RtlFreeSid@@YAPEAX0@Z.c)
 *     ?RevokeSessionsWithoutDataFlowAccess@AudioSessionManagerProvider@@YAJPEBG0@Z @ 0x1800EA370 (-RevokeSessionsWithoutDataFlowAccess@AudioSessionManagerProvider@@YAJPEBG0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HandleAccessChangeNotification(const unsigned __int16 *a1, const unsigned __int16 *a2)
{
  HLOCAL v4; // r8
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  HLOCAL v8; // rdi
  DWORD LastError; // ebx
  const char *v10; // r9
  const unsigned __int16 *v11; // r8
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  HLOCAL hMem; // [rsp+58h] [rbp+28h] BYREF
  PSID Sid; // [rsp+60h] [rbp+30h] BYREF

  Sid = 0LL;
  v4 = 0LL;
  hMem = 0LL;
  if ( a2 )
  {
    Sid = 0LL;
    v5 = AppContainerDeriveSidFromMoniker(a2, &Sid);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 44LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
        (const char *)(unsigned int)v5);
      goto LABEL_12;
    }
    v8 = hMem;
    if ( hMem )
    {
      LastError = GetLastError();
      LocalFree(v8);
      SetLastError(LastError);
    }
    hMem = 0LL;
    if ( !ConvertSidToStringSidW(Sid, (LPWSTR *)&hMem) )
    {
      v6 = wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x2D,
             (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
             v10);
LABEL_12:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&hMem);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * RtlFreeSid(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * RtlFreeSid(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>(&Sid);
      return v6;
    }
    v4 = hMem;
  }
  (*(void (__fastcall **)(struct IAudioPolicyManager *, const unsigned __int16 *, HLOCAL, const unsigned __int16 *))(*(_QWORD *)g_PolicyManager + 56LL))(
    g_PolicyManager,
    a2,
    v4,
    a1);
  v5 = AudioSessionManagerProvider::RevokeSessionsWithoutDataFlowAccess((AudioSessionManagerProvider *)hMem, a1, v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 56LL;
    goto LABEL_11;
  }
  if ( hMem )
    LocalFree(hMem);
  if ( Sid )
    RtlFreeSid(Sid);
  return 0LL;
}
