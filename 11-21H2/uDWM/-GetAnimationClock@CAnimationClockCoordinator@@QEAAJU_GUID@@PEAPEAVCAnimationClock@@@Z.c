/*
 * XREFs of ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x1800A48EC
 * Callers:
 *     ?OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x1800A4A80 (-OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x1800A4AE4 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z @ 0x1800A4D60 (-OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z.c)
 *     ?OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEAT_LARGE_INTEGER@@@Z @ 0x1800A4DB8 (-OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 *     ?OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z @ 0x1800A4E28 (-OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z.c)
 *     ?OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z @ 0x1800A4E8C (-OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z.c)
 *     ?OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800A4F38 (-OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 */

__int64 __fastcall CAnimationClockCoordinator::GetAnimationClock(
        CAnimationClockCoordinator *this,
        struct _GUID *a2,
        struct CAnimationClock **a3)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  unsigned int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rax
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+20h] [rbp-38h] BYREF
  __int128 v15; // [rsp+28h] [rbp-30h]

  v14 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( v6 )
  {
    v8 = *((_DWORD *)this + 20);
    v9 = 0LL;
    v7 = -2147023728;
    if ( v8 )
    {
      v10 = *((_QWORD *)this + 7);
      while ( 1 )
      {
        v11 = *(_QWORD *)(v10 + 8 * v9);
        v15 = *(_OWORD *)(v11 + 120);
        v12 = v15 - *(_QWORD *)&a2->Data1;
        if ( (_QWORD)v15 == *(_QWORD *)&a2->Data1 )
          v12 = *((_QWORD *)&v15 + 1) - *(_QWORD *)a2->Data4;
        if ( !v12 )
          break;
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= v8 )
          goto LABEL_13;
      }
      *a3 = (struct CAnimationClock *)v11;
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      v7 = 0;
    }
  }
  else
  {
    v7 = -2147024809;
  }
LABEL_13:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v7;
}
