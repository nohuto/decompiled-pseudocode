/*
 * XREFs of ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x1800222F8
 * Callers:
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x180020A38 (-OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180021DB0 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BF70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000BFFC (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::RemoveApplication(CApplicationManager *this, struct CApplication **a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  __int64 *v5; // rcx
  __int64 *v6; // rdx
  __int64 v7; // rdx

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v5 = (__int64 *)*((_QWORD *)this + 9);
  if ( v5 )
  {
    while ( (struct CApplication *)v5[2] != *a2 )
    {
      v5 = (__int64 *)*v5;
      if ( !v5 )
        goto LABEL_13;
    }
    v6 = (__int64 *)*v5;
    if ( v5 == *((__int64 **)this + 9) )
      *((_QWORD *)this + 9) = v6;
    else
      *(_QWORD *)v5[1] = v6;
    v7 = v5[1];
    if ( v5 == *((__int64 **)this + 10) )
      *((_QWORD *)this + 10) = v7;
    else
      *(_QWORD *)(*v5 + 8) = v7;
    *v5 = *((_QWORD *)this + 13);
    *((_QWORD *)this + 13) = v5;
    if ( (*((_QWORD *)this + 11))-- == 1LL )
      ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 72);
  }
LABEL_13:
  if ( *a2 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release((volatile signed __int32 *)*a2);
    *a2 = 0LL;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
