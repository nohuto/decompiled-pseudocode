/*
 * XREFs of ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x18013C3B4
 * Callers:
 *     ?SetRoutingPolicy@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x18013D410 (-SetRoutingPolicy@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x18013D560 (-StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180014E70 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x1800FEA00 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     wil::details::lambda_call__lambda_b9260135b4d0238a1736853426776464___::_lambda_call__lambda_b9260135b4d0238a1736853426776464___ @ 0x18013BECC (wil--details--lambda_call__lambda_b9260135b4d0238a1736853426776464___--_lambda_call__lambda_b926.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x18013E6DC (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 *     ?UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_JPEAU_DynamicRoutingRule@@@Z @ 0x1801405D8 (-UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_JPEAU_DynamicRoutingRule@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PhoneCallAudio::DoSetPhoneCallAudioActiveEndpoint(__int64 a1, int a2)
{
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  unsigned int v10; // ebx
  __int64 v11; // r8
  struct IAudioProcess *v12; // rdx
  int updated; // eax
  __int64 v14; // rdx
  int v16[2]; // [rsp+20h] [rbp-E0h] BYREF
  char v17; // [rsp+28h] [rbp-D8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-D0h] BYREF
  char v19; // [rsp+38h] [rbp-C8h]
  _DWORD v20[5]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v21[268]; // [rsp+54h] [rbp-ACh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)(a1 + 80));
  if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( !v5 )
        goto LABEL_10;
      v6 = v5 - 1;
      if ( !v6 )
        goto LABEL_10;
      v7 = v6 - 1;
      if ( !v7 )
        goto LABEL_10;
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 == 2 )
        {
          *(_DWORD *)(a1 + 76) = 2;
          v9 = 2;
          goto LABEL_14;
        }
LABEL_10:
        v10 = -2147024809;
LABEL_20:
        ATL::CCritSecLock::~CCritSecLock(&lpCriticalSection);
        return v10;
      }
      v9 = 5;
    }
    else
    {
      v9 = 6;
    }
  }
  else
  {
    v9 = 4;
  }
  *(_DWORD *)(a1 + 76) = v9;
LABEL_14:
  memset_0(v21, 0, 0x100uLL);
  v20[0] = 2;
  v20[3] = v9;
  v20[2] = 3;
  v20[4] = 1;
  v20[1] = 2;
  *(_QWORD *)v16 = a1;
  v17 = 1;
  v11 = *(_QWORD *)(a1 + 152);
  v12 = *(struct IAudioProcess **)(a1 + 136);
  if ( v11 )
  {
    updated = DynamicAudioEndpointManager::UpdateRule(
                g_DynamicAudioEndpointManager,
                v12,
                v11,
                (struct _DynamicRoutingRule *)v20);
    v10 = updated;
    if ( updated < 0 )
    {
      v14 = 370LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
        (const char *)(unsigned int)updated);
      wil::details::lambda_call__lambda_b9260135b4d0238a1736853426776464___::_lambda_call__lambda_b9260135b4d0238a1736853426776464___(v16);
      goto LABEL_20;
    }
  }
  else
  {
    updated = DynamicAudioEndpointManager::AddRule(
                g_DynamicAudioEndpointManager,
                v12,
                (struct _DynamicRoutingRule *)v20,
                (__int64 *)(a1 + 152));
    v10 = updated;
    if ( updated < 0 )
    {
      v14 = 374LL;
      goto LABEL_19;
    }
  }
  if ( v19 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
