/*
 * XREFs of ?GetSpatialAudioStreamProcessor@CPipeInstance@@QEBAJPEAPEAUISpatialAudioStreamProcessor@@@Z @ 0x140015910
 * Callers:
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14001575C (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 *     ?EngageSpatialAudioStreamProcessorAPO@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x14002A240 (-EngageSpatialAudioStreamProcessorAPO@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUSYSTEM_AUDIO_STR.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ @ 0x14000A41C (--1-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CPipeInstance::GetSpatialAudioStreamProcessor(
        CPipeInstance *this,
        struct ISpatialAudioStreamProcessor **a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // ebx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0LL;
  *a2 = 0LL;
  v3 = *((_QWORD *)this + 3);
  v4 = *((_QWORD *)this + 9);
  if ( !v3 )
    goto LABEL_11;
  while ( 1 )
  {
    v5 = *(_QWORD *)(v3 + 16);
    v3 = *(_QWORD *)(v3 + 8);
    v6 = *(_QWORD **)(v4 + 16);
    v4 = *(_QWORD *)(v4 + 8);
    if ( !*v6 )
      ATL::AtlThrowImpl(-2147467259);
    if ( *(_DWORD *)(v5 + 40) != 2 )
      goto LABEL_10;
    v7 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 40LL);
    v11 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v10 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v7)(v7, &GUID_ff4fd0e7_dae6_4f9f_b627_53d3bfbc611a, &v10) >= 0 )
      break;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
LABEL_10:
    if ( !v3 )
      goto LABEL_11;
  }
  v11 = 0LL;
  v12 = v7;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v10);
  ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>(&v11);
  if ( v7 )
  {
    v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct ISpatialAudioStreamProcessor **))v7)(
           v7,
           &GUID_ff4fd0e7_dae6_4f9f_b627_53d3bfbc611a,
           a2);
    goto LABEL_12;
  }
LABEL_11:
  v8 = -2147023728;
LABEL_12:
  ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>(&v12);
  return v8;
}
