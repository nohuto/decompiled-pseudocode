/*
 * XREFs of ??1CAastPreStartContext@@UEAA@XZ @ 0x180032A2C
 * Callers:
 *     ??_GCAastPreStartContext@@UEAAPEAXI@Z @ 0x180032B50 (--_GCAastPreStartContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180006BD0 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18000BBC0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?Lock@CApplicationManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18000E200 (-Lock@CApplicationManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_C.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800233A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x18002F070 (-RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x18002F7DC (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 */

void __fastcall CAastPreStartContext::~CAastPreStartContext(CAastPreStartContext *this)
{
  unsigned __int16 *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rcx
  const unsigned __int16 *v4; // rdx
  int v5; // eax
  const unsigned __int16 *v6; // rdx
  int updated; // eax
  float v8; // [rsp+40h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  bool v11; // [rsp+70h] [rbp+20h] BYREF
  bool v12; // [rsp+78h] [rbp+28h] BYREF
  bool v13; // [rsp+80h] [rbp+30h] BYREF
  bool v14; // [rsp+88h] [rbp+38h] BYREF

  *(_QWORD *)this = &CAastPreStartContext::`vftable';
  v2 = (unsigned __int16 *)((char *)this + 24);
  if ( *((_BYTE *)this + 16) )
  {
    CApplicationManager::Lock((__int64)this, &v9);
    v4 = v2;
    if ( *((_QWORD *)v2 + 3) >= 8uLL )
      v4 = *(const unsigned __int16 **)v2;
    v5 = CApplicationManager::RevertEndpointVolumeOverride(v3, v4, *((_DWORD *)this + 5), &v11, &v13, &v8, &v12, &v14);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        127LL,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
        (const char *)(unsigned int)v5);
    if ( v11 )
      CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)g_ApplicationManager, *((_DWORD *)this + 5), 3u);
    if ( v13 || v12 )
    {
      v6 = v2;
      if ( *((_QWORD *)v2 + 3) >= 8uLL )
        v6 = *(const unsigned __int16 **)v2;
      updated = CApplicationManager::UpdateEndpointVolume((CApplicationManager *)v13, v6, v13, v8, v12, v14);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          137LL,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
          (const char *)(unsigned int)updated);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v9);
  }
  std::wstring::~wstring(v2);
  *((_DWORD *)this + 3) = -1073741823;
}
