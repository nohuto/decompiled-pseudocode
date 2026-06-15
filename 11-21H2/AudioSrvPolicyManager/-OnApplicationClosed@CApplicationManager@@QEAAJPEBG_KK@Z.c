/*
 * XREFs of ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x180020A38
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7fa36116be3e294e551541c666ff9548__void_::_Do_call @ 0x180027800 (std--_Func_impl_no_alloc__lambda_7fa36116be3e294e551541c666ff9548__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_::_Do_call @ 0x180027EC0 (std--_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_--_Do_call.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800019AC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A2EC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BF70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 *     ?DisconnectExclusiveModeStreams@CApplication@@QEAAXXZ @ 0x1800168E0 (-DisconnectExclusiveModeStreams@CApplication@@QEAAXXZ.c)
 *     ?IsVoipCallCapableAndCallIsActive@CApplication@@QEAAHXZ @ 0x180018910 (-IsVoipCallCapableAndCallIsActive@CApplication@@QEAAHXZ.c)
 *     ?SendAppClosureNotification@CApplication@@QEAAXXZ @ 0x18001B9FC (-SendAppClosureNotification@CApplication@@QEAAXXZ.c)
 *     ?UpdateAppState@CApplication@@QEAAXHPEAH@Z @ 0x18001CB5C (-UpdateAppState@CApplication@@QEAAXHPEAH@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001F460 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x1800222F8 (-RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180024D08 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18002F6C0 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z @ 0x18002FC64 (-TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::OnApplicationClosed(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        __int64 a3,
        UINT32 a4)
{
  _DWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int Application; // r14d
  CApplication *v12; // rbx
  CApplication *v13; // rdi
  signed __int32 v14; // eax
  CApplication *v16; // [rsp+40h] [rbp-20h]
  __int64 v17; // [rsp+48h] [rbp-18h] BYREF
  __int64 v18[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+40h] BYREF
  CApplication *v20; // [rsp+A8h] [rbp+48h] BYREF

  v8 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
  if ( *v8 > 4u )
  {
    LODWORD(v19) = a4;
    v17 = a3;
    v18[0] = (__int64)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)v8,
      (unsigned __int8 *)dword_1800510ED,
      v9,
      v10,
      (void **)v18,
      (__int64)&v17,
      (__int64)&v19);
  }
  Application = 0;
  v12 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v18[1] = (__int64)this + 32;
  if ( a2 )
  {
    if ( *a2 )
    {
      Application = CApplicationManager::GetApplication(this, a2, a3, a4, &v20, 0, 0LL);
      if ( Application >= 0 )
      {
        v13 = v20;
        v12 = v20;
        v16 = v20;
        if ( v20 )
        {
          do
            v14 = *((_DWORD *)v13 + 3);
          while ( v14 != 0x7FFFFFFF
               && v14 != _InterlockedCompareExchange((volatile signed __int32 *)v13 + 3, v14 + 1, v14) );
          v12 = v16;
          v13 = v20;
        }
        if ( !(unsigned int)CApplication::IsVoipCallCapableAndCallIsActive(v13) && *((_DWORD *)v13 + 163) )
          CApplicationManager::SilenceAndRevokePLMExemption(this, v13);
        CApplication::UpdateAppState(v13, 0, 0LL);
        if ( TsSessionIsActiveMediaApplication(v13) )
          TsSessionIdRemoveActiveMediaApp(a4, v13);
        CApplication::SendAppClosureNotification(v13);
        if ( *((_BYTE *)v13 + 720) )
          Application = CApplicationManager::RemoveApplication(this, &v20);
      }
    }
  }
  if ( this != (CApplicationManager *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( v12 )
  {
    CApplication::DisconnectExclusiveModeStreams(v12);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release((volatile signed __int32 *)v12);
  }
  return (unsigned int)Application;
}
