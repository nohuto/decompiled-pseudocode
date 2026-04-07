/*
 * XREFs of ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x1800A4AE4
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000A3A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x1800A7650 (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x1800A1CD4 (-Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z @ 0x1800A2358 (-Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z.c)
 *     ?Reset@CAnimationClock@@QEAAJK@Z @ 0x1800A2718 (-Reset@CAnimationClock@@QEAAJK@Z.c)
 *     ?SetEventCallback@CAnimationClock@@QEAAJPEAUIAnimationClockEventListener@@@Z @ 0x1800A2888 (-SetEventCallback@CAnimationClock@@QEAAJPEAUIAnimationClockEventListener@@@Z.c)
 *     ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x1800A48EC (-GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCAnimationClock@@$0A@@@QEAAHAEBQEAVCAnimationClock@@@Z @ 0x1800A4FA8 (-Remove@-$DynArray@PEAVCAnimationClock@@$0A@@@QEAAHAEBQEAVCAnimationClock@@@Z.c)
 *     ?_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ @ 0x1800A5014 (-_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ.c)
 *     ?_IsKnownClockId@CAnimationClockCoordinator@@AEAA_NU_GUID@@@Z @ 0x1800A5124 (-_IsKnownClockId@CAnimationClockCoordinator@@AEAA_NU_GUID@@@Z.c)
 *     McTemplateU0jq_EtwEventWriteTransfer @ 0x1800A51A0 (McTemplateU0jq_EtwEventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationClockCoordinator::OnCreateAnimationClock(
        CAnimationClockCoordinator *this,
        struct _GUID *a2,
        unsigned int a3)
{
  int AnimationClock; // ebx
  __int64 v7; // rax
  struct _RTL_CRITICAL_SECTION *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // r8d
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  CAnimationClock *v18; // [rsp+30h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+38h] [rbp-38h] BYREF
  struct _GUID v20; // [rsp+40h] [rbp-30h] BYREF
  struct _GUID v21; // [rsp+50h] [rbp-20h] BYREF

  v18 = 0LL;
  AnimationClock = -2147024809;
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( v7 )
  {
    v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
    v19 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
    v20 = *a2;
    if ( CAnimationClockCoordinator::_IsKnownClockId(this, &v20) )
    {
      v20 = *a2;
      AnimationClock = CAnimationClockCoordinator::GetAnimationClock(this, &v20, &v18);
    }
    else
    {
      AnimationClock = CAnimationClockCoordinator::_ClearExpiredAnimationClocks(this);
      if ( AnimationClock < 0 )
        goto LABEL_17;
      v21 = *a2;
      AnimationClock = CAnimationClockFactory::Create(&v21, &v18);
      if ( AnimationClock < 0 )
        goto LABEL_17;
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0jq_EtwEventWriteTransfer(v10, v9, a2, a3);
      AnimationClock = CAnimationClock::SetEventCallback(v18, this);
      if ( AnimationClock < 0 )
        goto LABEL_17;
      v11 = *((_DWORD *)this + 20);
      v12 = v11 + 1;
      if ( v11 + 1 < v11 )
      {
        AnimationClock = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        goto LABEL_17;
      }
      if ( v12 > *((_DWORD *)this + 19) )
      {
        v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 56, 8u, 1, &v18);
        AnimationClock = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0xC0u);
          goto LABEL_17;
        }
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 7) + 8LL * *((unsigned int *)this + 20)) = v18;
        *((_DWORD *)this + 20) = v12;
        AnimationClock = 0;
      }
      _InterlockedIncrement((volatile signed __int32 *)v18 + 2);
    }
LABEL_17:
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v19);
    if ( AnimationClock >= 0 )
    {
      v21 = *(struct _GUID *)((char *)v18 + 120);
      v13 = *(_QWORD *)&v21.Data1 - *(_QWORD *)&a2->Data1;
      if ( *(_QWORD *)&v21.Data1 == *(_QWORD *)&a2->Data1 )
        v13 = *(_QWORD *)v21.Data4 - *(_QWORD *)a2->Data4;
      if ( v13 )
      {
        v21 = *a2;
        AnimationClock = CAnimationClock::Initialize(v18, &v21, a3);
        if ( AnimationClock < 0 )
        {
          v19 = v8;
          EnterCriticalSection(v8);
          if ( (unsigned int)DynArray<CAnimationClock *,0>::Remove((char *)this + 56, &v18) )
            CBaseObject::Release(v18);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v19);
        }
      }
      else if ( (int)CAnimationClock::Reset(v18, a3) < 0 )
      {
        AnimationClock = -2147019886;
      }
      else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        McTemplateU0jq_EtwEventWriteTransfer(v16, v15, a2, a3);
      }
    }
    if ( v18 )
      CBaseObject::Release(v18);
  }
  return (unsigned int)AnimationClock;
}
