/*
 * XREFs of ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@@Z @ 0x140059DEC
 * Callers:
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x1400129B4 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x140059F28 (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ?GetBridgeDestinationApo@CStreamGroup@@UEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x14005FC30 (-GetBridgeDestinationApo@CStreamGroup@@UEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ @ 0x14000A41C (--1-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ.c)
 *     ?GetHead@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@XZ @ 0x14001D250 (-GetHead@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CopyTo@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x140059358 (-CopyTo@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPipeInstance::GetAPONodeAndConnection(
        CPipeInstance *this,
        const struct _GUID *a2,
        const struct CProcessNode **a3,
        const struct CConnectionInstance **a4,
        struct IAudioProcessingObject **a5)
{
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // r14
  _QWORD *v11; // rcx
  const struct CConnectionInstance *v12; // r12
  struct IAudioProcessingObject *v13; // rbx
  struct IAudioProcessingObject *v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  v8 = *((_QWORD *)this + 3);
  v9 = *((_QWORD *)this + 9);
  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  while ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 16);
    v8 = *(_QWORD *)(v8 + 8);
    v11 = *(_QWORD **)(v9 + 16);
    v9 = *(_QWORD *)(v9 + 8);
    v12 = *(const struct CConnectionInstance **)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetHead(v11);
    if ( *(_DWORD *)(v10 + 40) == 2 )
    {
      v14 = 0LL;
      if ( (int)ATL::CComPtrBase<IAudioProcessingObject>::CopyTo((_QWORD *)(*(_QWORD *)(v10 + 32) + 40LL), &v14) >= 0 )
      {
        v15 = 0LL;
        v13 = v14;
        if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, const struct _GUID *, __int64 *))v14->lpVtbl->QueryInterface)(
               v14,
               a2,
               &v15) >= 0 )
        {
          if ( a3 )
            *a3 = (const struct CProcessNode *)v10;
          if ( a4 )
            *a4 = v12;
          if ( a5 )
          {
            v14 = 0LL;
            *a5 = v13;
          }
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v15);
          ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>((__int64 *)&v14);
          return;
        }
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v15);
      }
      ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>((__int64 *)&v14);
    }
  }
}
