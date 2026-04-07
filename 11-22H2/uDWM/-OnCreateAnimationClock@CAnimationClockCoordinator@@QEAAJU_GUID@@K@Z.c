/*
 * XREFs of ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180003950
 * Callers:
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x18000D588 (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18001DAC0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z @ 0x18000388C (-Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z.c)
 *     ?SetEventCallback@CAnimationClock@@QEAAJPEAUIAnimationClockEventListener@@@Z @ 0x180003AF4 (-SetEventCallback@CAnimationClock@@QEAAJPEAUIAnimationClockEventListener@@@Z.c)
 *     McTemplateU0jq_EtwEventWriteTransfer @ 0x180003B5C (McTemplateU0jq_EtwEventWriteTransfer.c)
 *     ?_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ @ 0x180003EEC (-_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ.c)
 *     ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x1800043B8 (-Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x18000E0B0 (-GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Reset@CAnimationClock@@QEAAJK@Z @ 0x1800AA15C (-Reset@CAnimationClock@@QEAAJK@Z.c)
 *     ?Remove@?$DynArray@PEAVCAnimationClock@@$0A@@@QEAAHAEBQEAVCAnimationClock@@@Z @ 0x1800AA938 (-Remove@-$DynArray@PEAVCAnimationClock@@$0A@@@QEAAHAEBQEAVCAnimationClock@@@Z.c)
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
  unsigned int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // r8d
  int v14; // eax
  __int64 v15; // rax
  __int64 *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  CAnimationClock *v22; // [rsp+30h] [rbp-50h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+38h] [rbp-48h] BYREF
  struct _GUID v24; // [rsp+40h] [rbp-40h]
  struct _GUID v25; // [rsp+50h] [rbp-30h] BYREF
  struct _GUID v26; // [rsp+60h] [rbp-20h] BYREF

  v22 = 0LL;
  AnimationClock = -2147024809;
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( v7 )
  {
    v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
    v23 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
    v24 = *a2;
    v9 = 0;
    if ( !*((_DWORD *)this + 20) )
      goto LABEL_5;
    v17 = (__int64 *)*((_QWORD *)this + 7);
    while ( 1 )
    {
      v18 = *v17;
      v26 = *(struct _GUID *)(*v17 + 120);
      v19 = *(_QWORD *)&v26.Data1 - *(_QWORD *)&v24.Data1;
      if ( *(_QWORD *)&v26.Data1 == *(_QWORD *)&v24.Data1 )
        v19 = *(_QWORD *)v26.Data4 - *(_QWORD *)v24.Data4;
      if ( !v19 )
        break;
      ++v9;
      ++v17;
      if ( v9 >= *((_DWORD *)this + 20) )
        goto LABEL_5;
    }
    if ( *(_DWORD *)(v18 + 80) == 7 )
    {
LABEL_5:
      AnimationClock = CAnimationClockCoordinator::_ClearExpiredAnimationClocks(this);
      if ( AnimationClock < 0 )
        goto LABEL_14;
      v25 = *a2;
      AnimationClock = CAnimationClockFactory::Create(&v25, &v22);
      if ( AnimationClock < 0 )
        goto LABEL_14;
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0jq_EtwEventWriteTransfer(v11, v10, a2, a3);
      AnimationClock = CAnimationClock::SetEventCallback(v22, this);
      if ( AnimationClock < 0 )
        goto LABEL_14;
      v12 = *((_DWORD *)this + 20);
      v13 = v12 + 1;
      if ( v12 + 1 < v12 )
      {
        AnimationClock = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      else
      {
        AnimationClock = 0;
        if ( v13 <= *((_DWORD *)this + 19) )
        {
          *(_QWORD *)(*((_QWORD *)this + 7) + 8LL * *((unsigned int *)this + 20)) = v22;
          *((_DWORD *)this + 20) = v13;
        }
        else
        {
          v14 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 56, 8LL, 1LL, &v22);
          AnimationClock = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xC0u, 0LL);
            goto LABEL_14;
          }
        }
        _InterlockedIncrement((volatile signed __int32 *)v22 + 2);
      }
    }
    else
    {
      v26 = *a2;
      AnimationClock = CAnimationClockCoordinator::GetAnimationClock(this, &v26, &v22);
    }
LABEL_14:
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v23);
    if ( AnimationClock >= 0 )
    {
      v25 = *(struct _GUID *)((char *)v22 + 120);
      v15 = *(_QWORD *)&v25.Data1 - *(_QWORD *)&a2->Data1;
      if ( *(_QWORD *)&v25.Data1 == *(_QWORD *)&a2->Data1 )
        v15 = *(_QWORD *)v25.Data4 - *(_QWORD *)a2->Data4;
      if ( v15 )
      {
        v25 = *a2;
        AnimationClock = CAnimationClock::Initialize(v22, &v25, a3);
        if ( AnimationClock < 0 )
        {
          v23 = v8;
          EnterCriticalSection(v8);
          if ( (unsigned int)DynArray<CAnimationClock *,0>::Remove((char *)this + 56, &v22) )
            CBaseObject::Release(v22);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v23);
        }
      }
      else if ( (int)CAnimationClock::Reset(v22, a3) < 0 )
      {
        AnimationClock = -2147019886;
      }
      else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        McTemplateU0jq_EtwEventWriteTransfer(v21, v20, a2, a3);
      }
    }
    if ( v22 )
      CBaseObject::Release(v22);
  }
  return (unsigned int)AnimationClock;
}
