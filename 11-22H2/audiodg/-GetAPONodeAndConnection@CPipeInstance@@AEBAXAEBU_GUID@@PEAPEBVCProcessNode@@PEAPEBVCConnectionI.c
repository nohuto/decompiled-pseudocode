/*
 * XREFs of ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@2@Z @ 0x14002B47C
 * Callers:
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x1400168AC (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?GetVirtualSurroundAPO@CPipeInstance@@QEBAJPEAPEAUIVirtualSurround@@@Z @ 0x14001FD60 (-GetVirtualSurroundAPO@CPipeInstance@@QEBAJPEAPEAUIVirtualSurround@@@Z.c)
 *     ?GetSpatialAudioStreamProcessor@CPipeInstance@@QEBAJPEAPEAUISpatialAudioStreamProcessor@@@Z @ 0x14001FDC0 (-GetSpatialAudioStreamProcessor@CPipeInstance@@QEBAJPEAPEAUISpatialAudioStreamProcessor@@@Z.c)
 *     ?GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z @ 0x14001FE20 (-GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z.c)
 *     ?GetMixerAPOConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14002B5EC (-GetMixerAPOConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ?CreateBridgeSourceStreamForMicInjection@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIStreamInstance@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14002E490 (-CreateBridgeSourceStreamForMicInjection@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTO.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14005CBD0 (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ?GetBridgeDestinationApo@CStreamGroup@@UEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x1400640B0 (-GetBridgeDestinationApo@CStreamGroup@@UEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?GetHead@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@XZ @ 0x14000FED8 (-GetHead@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?CopyTo@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x140015AC4 (-CopyTo@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPipeInstance::GetAPONodeAndConnection(
        CPipeInstance *this,
        const struct _GUID *a2,
        const struct CProcessNode **a3,
        const struct CConnectionInstance **a4,
        struct IAudioProcessingObject **a5,
        const struct CConnectionInstance **a6)
{
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // r15
  _QWORD *v12; // rcx
  const struct CConnectionInstance *v13; // r12
  struct IAudioProcessingObject *v14; // rbx
  const struct CConnectionInstance **v15; // rbx
  struct IAudioProcessingObject *v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  v9 = *((_QWORD *)this + 3);
  v10 = *((_QWORD *)this + 9);
  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  while ( v9 )
  {
    v11 = *(_QWORD *)(v9 + 16);
    v9 = *(_QWORD *)(v9 + 8);
    v12 = *(_QWORD **)(v10 + 16);
    v10 = *(_QWORD *)(v10 + 8);
    v13 = *(const struct CConnectionInstance **)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetHead(v12);
    if ( *(_DWORD *)(v11 + 40) == 2 )
    {
      v16 = 0LL;
      if ( (int)ATL::CComPtrBase<IAudioProcessingObject>::CopyTo((_QWORD *)(*(_QWORD *)(v11 + 32) + 40LL), &v16) >= 0 )
      {
        v17 = 0LL;
        v14 = v16;
        if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, const struct _GUID *, __int64 *))v16->lpVtbl->QueryInterface)(
               v16,
               a2,
               &v17) >= 0 )
        {
          if ( a3 )
            *a3 = (const struct CProcessNode *)v11;
          if ( a4 )
            *a4 = v13;
          if ( a5 )
          {
            v16 = 0LL;
            *a5 = v14;
          }
          if ( v10 )
          {
            v15 = a6;
            if ( a6 )
              *v15 = *(const struct CConnectionInstance **)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetHead(*(_QWORD **)(v10 + 16));
          }
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v17);
          wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v16);
          return;
        }
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v17);
      }
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v16);
    }
  }
}
