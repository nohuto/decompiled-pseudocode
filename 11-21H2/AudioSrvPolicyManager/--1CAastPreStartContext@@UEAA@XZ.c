/*
 * XREFs of ??1CAastPreStartContext@@UEAA@XZ @ 0x18002A1C8
 * Callers:
 *     ??_GCAastPreStartContext@@UEAAPEAXI@Z @ 0x18002A350 (--_GCAastPreStartContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000E27C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x1800226F4 (-RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x18002504C (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x1800253E0 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAastPreStartContext::~CAastPreStartContext(CAastPreStartContext *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  CApplicationManager *v3; // rcx
  const unsigned __int16 *v4; // rdi
  const unsigned __int16 *v5; // rdx
  int v6; // eax
  int updated; // eax
  unsigned __int64 v8; // rdx
  float v9[14]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  bool v11; // [rsp+80h] [rbp+8h] BYREF
  bool v12; // [rsp+88h] [rbp+10h] BYREF
  bool v13; // [rsp+90h] [rbp+18h] BYREF
  bool v14; // [rsp+98h] [rbp+20h] BYREF

  *(_QWORD *)this = &CAastPreStartContext::`vftable';
  if ( *((_BYTE *)this + 16) )
  {
    v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
    v4 = (const unsigned __int16 *)((char *)this + 24);
    v5 = (const unsigned __int16 *)((char *)this + 24);
    if ( *((_QWORD *)this + 6) >= 8uLL )
      v5 = *(const unsigned __int16 **)v4;
    v6 = CApplicationManager::RevertEndpointVolumeOverride(v3, v5, *((_DWORD *)this + 5), &v11, &v13, v9, &v12, &v14);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7F,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
        (const char *)(unsigned int)v6);
    if ( v11 )
      CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)g_ApplicationManager, *((_DWORD *)this + 5), 3u);
    if ( v13 || v12 )
    {
      if ( *((_QWORD *)this + 6) >= 8uLL )
        v4 = *(const unsigned __int16 **)v4;
      updated = CApplicationManager::UpdateEndpointVolume((CApplicationManager *)v13, v4, v13, v9[0], v12, v14);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x89,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
          (const char *)(unsigned int)updated);
    }
    if ( v2 )
      LeaveCriticalSection(v2);
  }
  v8 = *((_QWORD *)this + 6);
  if ( v8 >= 8 )
    std::_Deallocate<16,0>(*((char **)this + 3), 2 * v8 + 2);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 7LL;
  *((_WORD *)this + 12) = 0;
  *((_DWORD *)this + 3) = -1073741823;
}
