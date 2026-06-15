/*
 * XREFs of ??1CApplicationManager@@MEAA@XZ @ 0x18001ECD8
 * Callers:
 *     ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x1800091D0 (--_GCApplicationManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BCA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BF70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000BFFC (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x1800163A4 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x1800166BC (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180018D28 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::~CApplicationManager(CApplicationManager *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  _QWORD *v3; // rdi
  struct CProcess *v4; // rsi
  CApplication *v5; // rcx
  _QWORD *v6; // rdi
  volatile signed __int32 *v7; // rcx
  void *v8; // rcx

  *(_QWORD *)this = &CApplicationManager::`vftable';
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v3 = (_QWORD *)*((_QWORD *)this + 16);
  while ( v3 )
  {
    v4 = (struct CProcess *)v3[2];
    v3 = (_QWORD *)*v3;
    if ( v4 )
    {
      v5 = (CApplication *)*((_QWORD *)v4 + 28);
      if ( v5 )
        CApplication::DelinkProcess(v5, v4);
      CProcess::CleanupProcessTerminationWatcher(v4, 1);
      CProcess::NotifyPLM((__int64)v4, 1);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v4);
    }
  }
  v6 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v6 )
  {
    v7 = (volatile signed __int32 *)v6[2];
    v6 = (_QWORD *)*v6;
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(v7);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 128);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 72);
  DeleteCriticalSection(v2);
  v8 = (void *)*((_QWORD *)this + 2);
  if ( v8 )
    LocalFree(v8);
  *((_DWORD *)this + 3) = -1073741823;
}
