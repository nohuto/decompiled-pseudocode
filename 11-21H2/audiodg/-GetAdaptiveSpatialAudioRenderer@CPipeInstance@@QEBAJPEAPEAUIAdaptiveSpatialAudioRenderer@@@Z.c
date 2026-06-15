/*
 * XREFs of ?GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z @ 0x140015A20
 * Callers:
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14001575C (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 *     ?GetSpatialResourcePoolSize@CAudioDeviceGraph@@UEAAJPEAI0PEAH@Z @ 0x14005C1F0 (-GetSpatialResourcePoolSize@CAudioDeviceGraph@@UEAAJPEAI0PEAH@Z.c)
 *     ?GetSpatialResourceRevocationTime@CAudioDeviceGraph@@UEAAJPEA_J@Z @ 0x14005C2B0 (-GetSpatialResourceRevocationTime@CAudioDeviceGraph@@UEAAJPEA_J@Z.c)
 *     ?GetSpatialUtilization@CAudioDeviceGraph@@UEAAJPEAI00@Z @ 0x14005C350 (-GetSpatialUtilization@CAudioDeviceGraph@@UEAAJPEAI00@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ @ 0x14000A41C (--1-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x14005A208 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CPipeInstance::GetAdaptiveSpatialAudioRenderer(
        CPipeInstance *this,
        struct IAdaptiveSpatialAudioRenderer **a2)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // ebx
  char *v11; // [rsp+28h] [rbp-80h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v13; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v14; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v15; // [rsp+C0h] [rbp+18h] BYREF

  v15 = 0LL;
  *a2 = 0LL;
  v4 = *((_QWORD *)this + 3);
  v5 = *((_QWORD *)this + 9);
  if ( !v4 )
    goto LABEL_16;
  while ( 1 )
  {
    v6 = *(_QWORD *)(v4 + 16);
    v4 = *(_QWORD *)(v4 + 8);
    v7 = *(_QWORD **)(v5 + 16);
    v5 = *(_QWORD *)(v5 + 8);
    if ( !*v7 )
      ATL::AtlThrowImpl(-2147467259);
    if ( *(_DWORD *)(v6 + 40) != 2 )
      goto LABEL_10;
    v8 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 40LL);
    v14 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v13 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v8)(v8, &GUID_24bdc606_d710_4d62_be35_be665fbc3e00, &v13) >= 0 )
      break;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
LABEL_10:
    if ( !v4 )
      goto LABEL_16;
  }
  v14 = 0LL;
  v15 = v8;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v13);
  ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>(&v14);
  if ( v8 )
  {
    v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IAdaptiveSpatialAudioRenderer **))v8)(
           v8,
           &GUID_24bdc606_d710_4d62_be35_be665fbc3e00,
           a2);
    goto LABEL_14;
  }
LABEL_16:
  if ( *((_DWORD *)this + 28) != 1 || *((_DWORD *)this + 3) || *((_DWORD *)this + 32) )
  {
    v9 = -2147023728;
  }
  else
  {
    LODWORD(v11) = *((_DWORD *)this + 40);
    v9 = -2147023728;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x12B5,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)0x80070490LL,
      (int)"Could not find ASAR in device pipe for EndpointId: {%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
      v11,
      *((unsigned __int16 *)this + 82),
      *((unsigned __int16 *)this + 83),
      *((unsigned __int8 *)this + 168),
      *((unsigned __int8 *)this + 169),
      *((unsigned __int8 *)this + 170),
      *((unsigned __int8 *)this + 171),
      *((unsigned __int8 *)this + 172),
      *((unsigned __int8 *)this + 173),
      *((unsigned __int8 *)this + 174),
      *((unsigned __int8 *)this + 175));
  }
LABEL_14:
  ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>(&v15);
  return v9;
}
