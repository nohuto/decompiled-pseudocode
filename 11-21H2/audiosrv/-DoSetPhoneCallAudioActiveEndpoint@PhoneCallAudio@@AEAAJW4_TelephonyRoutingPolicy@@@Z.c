/*
 * XREFs of ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x18012ED54
 * Callers:
 *     ?SetRoutingPolicy@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x18012FFC0 (-SetRoutingPolicy@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x180130100 (-StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x1801311DC (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z @ 0x180133050 (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z.c)
 *     ?UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_JPEAU_DynamicRoutingRule@@@Z @ 0x1801334A8 (-UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_JPEAU_DynamicRoutingRule@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PhoneCallAudio::DoSetPhoneCallAudioActiveEndpoint(__int64 a1, int a2)
{
  int v4; // edi
  int v5; // edi
  unsigned int v6; // ebx
  int v7; // ebx
  char v8; // di
  __int64 *v9; // r14
  __int64 v10; // r8
  struct IAudioProcess *v11; // rdx
  int updated; // eax
  __int64 v13; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-E0h] BYREF
  char v16; // [rsp+28h] [rbp-D8h]
  __int64 v17; // [rsp+30h] [rbp-D0h]
  char v18; // [rsp+38h] [rbp-C8h]
  _DWORD v19[5]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v20[268]; // [rsp+54h] [rbp-ACh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)(a1 + 80));
  if ( !a2 )
  {
    v7 = 4;
    goto LABEL_10;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v7 = 6;
    goto LABEL_10;
  }
  v5 = v4 - 4;
  if ( !v5 )
  {
    v7 = 5;
LABEL_10:
    *(_DWORD *)(a1 + 76) = v7;
    goto LABEL_11;
  }
  if ( v5 != 2 )
  {
    v6 = -2147024809;
    goto LABEL_20;
  }
  *(_DWORD *)(a1 + 76) = 2;
  v7 = 2;
LABEL_11:
  memset_0(v20, 0, 0x100uLL);
  v19[0] = 2;
  v19[3] = v7;
  v19[2] = 3;
  v8 = 1;
  v19[4] = 1;
  v19[1] = 2;
  v17 = a1;
  v18 = 1;
  v9 = (__int64 *)(a1 + 152);
  v10 = *(_QWORD *)(a1 + 152);
  v11 = *(struct IAudioProcess **)(a1 + 136);
  if ( v10 )
  {
    updated = DynamicAudioEndpointManager::UpdateRule(
                g_DynamicAudioEndpointManager,
                v11,
                v10,
                (struct _DynamicRoutingRule *)v19);
    v6 = updated;
    if ( updated < 0 )
    {
      v13 = 370LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
        (const char *)(unsigned int)updated);
      goto LABEL_18;
    }
  }
  else
  {
    updated = DynamicAudioEndpointManager::AddRule(
                g_DynamicAudioEndpointManager,
                v11,
                (struct _DynamicRoutingRule *)v19,
                (__int64 *)(a1 + 152));
    v6 = updated;
    if ( updated < 0 )
    {
      v13 = 374LL;
      goto LABEL_16;
    }
  }
  v8 = 0;
  v6 = 0;
LABEL_18:
  if ( v8 )
  {
    DynamicAudioEndpointManager::RemoveRule(g_DynamicAudioEndpointManager, *(struct IAudioProcess **)(a1 + 136), *v9);
    *v9 = 0LL;
  }
LABEL_20:
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
