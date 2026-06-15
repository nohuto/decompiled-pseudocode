/*
 * XREFs of ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x1800189CC
 * Callers:
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180021DB0 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BF70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000E27C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     ?AddHead@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcess@@@Z @ 0x1800156A0 (-AddHead@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAPEAU__POSITION.c)
 *     ?GetActiveProcessCount@CApplication@@QEAAIXZ @ 0x18001709C (-GetActiveProcessCount@CApplication@@QEAAIXZ.c)
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180019EAC (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplication::LinkProcess(CApplication *this, struct CProcess *a2)
{
  struct CProcess *v2; // r15
  CApplication *v3; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // r14
  int v5; // r8d
  int v6; // ecx
  unsigned int v7; // esi
  int v8; // eax
  volatile signed __int32 *v9; // rcx
  signed __int32 v10; // eax
  __int64 result; // rax
  int *v12; // rbx
  ATL::CAtlException *v13; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct CProcess *v16; // [rsp+68h] [rbp+10h] BYREF
  int v17; // [rsp+70h] [rbp+18h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+78h] [rbp+20h]

  v16 = a2;
  v2 = a2;
  v3 = this;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v18 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *((_DWORD *)v3 + 162) = *((_DWORD *)v2 + 105);
  v5 = *((_DWORD *)v2 + 106);
  *((_DWORD *)v3 + 163) = v5;
  *((_BYTE *)v3 + 720) = *((_BYTE *)v2 + 786);
  v6 = *((_DWORD *)v3 + 164) | *((_DWORD *)v2 + 111);
  *((_DWORD *)v3 + 164) = v6;
  if ( !v5 )
  {
    *((_DWORD *)v3 + 52) |= 1u;
    *((_DWORD *)v3 + 54) = 2;
    *((_DWORD *)v3 + 81) = 2;
    *((_DWORD *)v3 + 82) = 2;
  }
  if ( v6 )
  {
    *((_DWORD *)v3 + 52) |= 0x40u;
    *((_DWORD *)v3 + 54) = 2;
    *((_DWORD *)v3 + 81) = 2;
    *((_DWORD *)v3 + 82) = 2;
    *((_DWORD *)v3 + 155) = 0;
    *((_DWORD *)v3 + 156) = 0;
    *((_DWORD *)v3 + 157) = 0;
    *((_DWORD *)v3 + 158) = 0;
    *((_DWORD *)v3 + 159) = 0;
    *((_DWORD *)v3 + 160) = 0;
    *((_DWORD *)v3 + 161) = 1;
  }
  if ( !(unsigned int)CApplication::GetActiveProcessCount(v3) )
    *((_DWORD *)v3 + 171) = 1;
  try
  {
    v7 = 0;
    ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::AddHead((__int64 *)v3 + 9, &v16);
  }
  catch ( ATL::CAtlException *v13 )
  {
    v12 = (int *)v13;
    if ( *(_DWORD *)v13 == -1073741571 )
      _o__resetstkoflw();
    v17 = *v12;
    v7 = v17;
    if ( v17 >= 0 )
    {
      v3 = this;
      v2 = v16;
      v4 = v18;
      goto LABEL_9;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids, v17);
    }
    AudPolicyLogError("CApplication::LinkProcess", 284, v7);
    v4 = v18;
LABEL_21:
    if ( v4 )
      LeaveCriticalSection(v4);
    result = v7;
  }
LABEL_9:
  v8 = CApplication::RegisterProcessWithApplicationSpecificEndpointInfo(v3, v2);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x114,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v8);
  v9 = (volatile signed __int32 *)*((_QWORD *)v2 + 28);
  *((_QWORD *)v2 + 28) = v3;
  do
    v10 = *((_DWORD *)v3 + 3);
  while ( v10 != 0x7FFFFFFF && v10 != _InterlockedCompareExchange((volatile signed __int32 *)v3 + 3, v10 + 1, v10) );
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(v9);
  goto LABEL_21;
}
