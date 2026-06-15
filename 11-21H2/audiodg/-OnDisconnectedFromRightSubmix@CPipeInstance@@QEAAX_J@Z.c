/*
 * XREFs of ?OnDisconnectedFromRightSubmix@CPipeInstance@@QEAAX_J@Z @ 0x140024C6C
 * Callers:
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x1400249FC (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ @ 0x14000A41C (--1-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ.c)
 *     ??0?$CComQIPtr@UIAudioCrossProcessServerEndpoint@@$1?_GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14000A530 (--0-$CComQIPtr@UIAudioCrossProcessServerEndpoint@@$1-_GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CPipeInstance::OnDisconnectedFromRightSubmix(CPipeInstance *this, __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rax
  void (__fastcall ***v6)(_QWORD, GUID *, _QWORD *); // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = *((_QWORD *)this + 3);
  while ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 16);
    v3 = *(_QWORD *)(v3 + 8);
    if ( *(_DWORD *)(v5 + 40) == 3 )
    {
      v4 = *(_QWORD **)(v5 + 32);
      v6 = 0LL;
      if ( (**(int (__fastcall ***)(_QWORD, GUID *, _QWORD))*v4)(*v4, &GUID_30a99515_1527_4451_af9f_00c5f0234daf, &v6) >= 0 )
      {
        ATL::CComQIPtr<IAudioCrossProcessServerEndpoint,&__s_GUID const _GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572>::CComQIPtr<IAudioCrossProcessServerEndpoint,&__s_GUID const _GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572>(
          &v7,
          v6);
        if ( v7 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 40LL))(v7, a2);
        ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>(&v7);
      }
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v6);
    }
  }
}
