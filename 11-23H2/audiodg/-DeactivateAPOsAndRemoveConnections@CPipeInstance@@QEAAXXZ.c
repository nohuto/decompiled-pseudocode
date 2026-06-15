/*
 * XREFs of ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x14000D290
 * Callers:
 *     ?RemovePipeInternal@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_K@Z @ 0x140005B60 (-RemovePipeInternal@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_K@Z.c)
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x14000D480 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14005FEF0 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RemoveConnections@CConnectionInstance@@QEAAXPEAUIAudioProcessor@@_K@Z @ 0x14000D3F0 (-RemoveConnections@CConnectionInstance@@QEAAXPEAUIAudioProcessor@@_K@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@AEAPEAU__POSITION@@@Z @ 0x140011684 (-GetNext@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?GetPrev@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400148CC (-GetPrev@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?CopyTo@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x140015AC4 (-CopyTo@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B99C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_q @ 0x14005A17C (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPipeInstance::DeactivateAPOsAndRemoveConnections(CPipeInstance *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 Prev; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  CConnectionInstance **Next; // rax
  __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // [rsp+40h] [rbp+20h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp+28h] BYREF
  __int64 v12; // [rsp+50h] [rbp+30h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 38LL, &WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids, this);
  }
  if ( *((_DWORD *)this + 29) )
  {
    v2 = *((_QWORD *)this + 19);
    if ( v2 )
    {
      if ( (*(int (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v2 + 32LL))(v2, &v11) >= 0 )
      {
        v12 = *((_QWORD *)this + 3);
        while ( v12 )
        {
          Prev = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev(v3, &v12);
          v3 = *(_QWORD *)Prev;
          if ( *(_DWORD *)(*(_QWORD *)Prev + 40LL) == 2 )
          {
            v5 = *(_QWORD *)(v3 + 32);
            v10 = 0LL;
            if ( (int)ATL::CComPtrBase<IAudioProcessingObject>::CopyTo(v5 + 40, &v10) >= 0 )
              (*(void (__fastcall **)(_QWORD, unsigned __int64, __int64))(**((_QWORD **)this + 19) + 64LL))(
                *((_QWORD *)this + 19),
                v11,
                v10);
            wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v10);
          }
        }
        v6 = (_QWORD *)*((_QWORD *)this + 8);
        while ( v6 )
        {
          v9 = (__int64 *)v6[2];
          v6 = (_QWORD *)*v6;
          v8 = *v9;
          v10 = v8;
          while ( v10 )
          {
            Next = (CConnectionInstance **)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetNext(
                                             v8,
                                             &v10);
            CConnectionInstance::RemoveConnections(*Next, *((struct IAudioProcessor **)this + 19), v11);
          }
        }
        if ( (*(int (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 19) + 40LL))(
               *((_QWORD *)this + 19),
               v11) >= 0 )
          *((_DWORD *)this + 29) = 0;
      }
    }
  }
}
