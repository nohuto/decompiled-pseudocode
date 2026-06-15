/*
 * XREFs of ?AddInterface@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@Z @ 0x18012A6AC
 * Callers:
 *     ?AddVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z @ 0x18012A7B0 (-AddVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$emplace_back@AEAV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@H@?$vector@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@std@@@std@@QEAA?A_TAEAV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$$QEAH@Z @ 0x18012A418 (--$emplace_back@AEAV-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@H@-$vector@ULockedListEntry@-.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::AddInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        __int64 *a2)
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rax
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+38h] [rbp+10h]
  LPCRITICAL_SECTION v10; // [rsp+40h] [rbp+18h]

  v9 = a2;
  EnterCriticalSection(lpCriticalSection);
  try
  {
    v10 = lpCriticalSection;
    DebugInfo = lpCriticalSection[1].DebugInfo;
    if ( DebugInfo == *(PRTL_CRITICAL_SECTION_DEBUG *)&lpCriticalSection[1].LockCount )
      goto LABEL_6;
    do
    {
      if ( *(_QWORD *)&DebugInfo->Type == *a2 )
        break;
      DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)((char *)DebugInfo + 16);
    }
    while ( DebugInfo != *(PRTL_CRITICAL_SECTION_DEBUG *)&lpCriticalSection[1].LockCount );
    if ( DebugInfo == *(PRTL_CRITICAL_SECTION_DEBUG *)&lpCriticalSection[1].LockCount )
    {
LABEL_6:
      v8 = 1;
      std::vector<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry,std::allocator<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry>>::emplace_back<ATL::CComPtr<IAudioEndpointVolumeCallback> &,int>(
        (__int64 *)&lpCriticalSection[1],
        a2,
        (int *)&v8);
    }
    else
    {
      ++LODWORD(DebugInfo->CriticalSection);
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(a2);
    result = 0LL;
  }
  catch ( ... )
  {
    v8 = wil::details::in1diag3::Return_CaughtException(
           retaddr,
           (void *)0x89,
           (int)"avcore\\audiocore\\Include\\LockedList.h",
           v5);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v9);
    return v8;
  }
  return result;
}
