/*
 * XREFs of ?OnDisconnectedFromRightSubmix@CPipeInstance@@QEAAX_J@Z @ 0x1400177C4
 * Callers:
 *     ?DisconnectFromRightSubmix@CStreamInstance@@UEAAJPEAUISubmixInternal@@@Z @ 0x14001E4F0 (-DisconnectFromRightSubmix@CStreamInstance@@UEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?GetPrev@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400148CC (-GetPrev@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ??0?$CComQIPtr@UIAudioCrossProcessServerEndpoint@@$1?_GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14001CDB4 (--0-$CComQIPtr@UIAudioCrossProcessServerEndpoint@@$1-_GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CPipeInstance::OnDisconnectedFromRightSubmix(CPipeInstance *this, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = *((_QWORD *)this + 3);
  while ( v7 )
  {
    v3 = *(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev((__int64)this, &v7);
    if ( *(_DWORD *)(v3 + 40) == 3 )
    {
      v4 = *(_QWORD **)(v3 + 32);
      v5 = 0LL;
      if ( (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))*v4)(
             *v4,
             &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
             &v5) >= 0 )
      {
        ATL::CComQIPtr<IAudioCrossProcessServerEndpoint,&__s_GUID const _GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572>::CComQIPtr<IAudioCrossProcessServerEndpoint,&__s_GUID const _GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572>(
          &v6,
          v5);
        if ( v6 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 40LL))(v6, a2);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v6);
      }
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v5);
    }
  }
}
