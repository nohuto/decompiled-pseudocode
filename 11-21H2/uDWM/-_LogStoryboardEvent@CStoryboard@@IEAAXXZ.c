/*
 * XREFs of ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x1800DB27C
 * Callers:
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x1800A7968 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x1800A7A30 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?Initialize@CStoryboard@@MEAAJXZ @ 0x1800D74B0 (-Initialize@CStoryboard@@MEAAJXZ.c)
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x1800D87EC (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x1800D93F8 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 * Callees:
 *     GetAnimationScenarioNameFromGUID @ 0x1800039A4 (GetAnimationScenarioNameFromGUID.c)
 *     ?Create@CAnimationFrameStats@@SAJPEAPEAVIAnimationFrameStats@@@Z @ 0x180005754 (-Create@CAnimationFrameStats@@SAJPEAPEAVIAnimationFrameStats@@@Z.c)
 *     ?reset@?$com_ptr_t@VIAnimationFrameStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800134C8 (-reset@-$com_ptr_t@VIAnimationFrameStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x18003E1A0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qd_EtwEventWriteTransfer @ 0x1800E0CD4 (McTemplateU0qd_EtwEventWriteTransfer.c)
 */

void __fastcall CStoryboard::_LogStoryboardEvent(CStoryboard *this, __int64 a2)
{
  int v3; // edx
  __int128 v4; // xmm0
  __int64 v5; // rcx
  _QWORD *v6; // r14
  __int64 v7; // rdi
  void (__fastcall *v8)(__int64, int *, __int128 *, _QWORD, _QWORD, unsigned __int16 *, _QWORD, int); // rbx
  int v9; // eax
  __int128 v10; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+60h] [rbp-A0h]
  int v12; // [rsp+68h] [rbp-98h]
  __int128 v13; // [rsp+70h] [rbp-90h] BYREF
  __int64 v14; // [rsp+80h] [rbp-80h]
  int v15; // [rsp+88h] [rbp-78h]
  unsigned __int16 v16[64]; // [rsp+90h] [rbp-70h] BYREF

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qd_EtwEventWriteTransfer(this, a2, *((unsigned int *)this + 6), *((unsigned int *)this + 7));
  if ( *((_DWORD *)this + 7) != -1 )
  {
    v3 = *((_DWORD *)this + 6);
    if ( (unsigned int)(v3 - 3) <= 1 )
    {
      v4 = *((_OWORD *)this + 2);
      v5 = *((_QWORD *)this + 4);
      v13 = 0LL;
      v10 = v4;
      if ( !v5 )
        v5 = *((_QWORD *)&v10 + 1) - *((_QWORD *)&v13 + 1);
      if ( v5 )
      {
        if ( v3 == 3 )
        {
          if ( (unsigned int)dword_180141868 > 4 && tlgKeywordOn((__int64)&dword_180141868, 0x200000000000LL) )
          {
            wil::com_ptr_t<IAnimationFrameStats,wil::err_returncode_policy>::reset((__int64 *)this + 10);
            if ( (int)CAnimationFrameStats::Create((struct IAnimationFrameStats **)this + 10) >= 0 )
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10));
          }
        }
        else
        {
          v6 = (_QWORD *)((char *)this + 80);
          if ( *((_QWORD *)this + 10) )
          {
            GetAnimationScenarioNameFromGUID((unsigned int *)this + 8, v16);
            if ( (*(int (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*v6 + 88LL))(*v6, &v13) >= 0 )
            {
              v7 = *v6;
              v8 = *(void (__fastcall **)(__int64, int *, __int128 *, _QWORD, _QWORD, unsigned __int16 *, _QWORD, int))(*(_QWORD *)*v6 + 200LL);
              v9 = (*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 32LL))(this);
              v10 = v13;
              v11 = v14;
              v12 = v15;
              v8(v7, &dword_180141868, &v10, 0LL, 0LL, v16, 0LL, v9);
            }
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 40LL))(*v6);
            wil::com_ptr_t<IAnimationFrameStats,wil::err_returncode_policy>::reset((__int64 *)this + 10);
          }
        }
      }
    }
  }
}
