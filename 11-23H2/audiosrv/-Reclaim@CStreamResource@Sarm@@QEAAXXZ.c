/*
 * XREFs of ?Reclaim@CStreamResource@Sarm@@QEAAXXZ @ 0x18013965C
 * Callers:
 *     ??1CStreamResource@Sarm@@QEAA@XZ @ 0x1801337FC (--1CStreamResource@Sarm@@QEAA@XZ.c)
 *     ?Add@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sarm@@PEAUIAudioStreamInfo@@PEAPEAU__POSITION@@@Z @ 0x180133AB0 (-Add@-$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sar.c)
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x180133DE4 (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 *     ?FreeNode@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180134468 (-FreeNode@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudioStr.c)
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x180136350 (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z @ 0x180137FC4 (-AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x180138CF8 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Sarm::CStreamResource::Reclaim(Sarm::CStreamResource *this, __int64 a2, __int64 a3, __int64 a4)
{
  Sarm::CEndpointResourcePool *v5; // rcx
  _DWORD *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rcx
  const char *v9; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = (Sarm::CEndpointResourcePool *)*((_QWORD *)this + 1);
  v6 = (_DWORD *)((char *)this + 84);
  if ( v5 )
  {
    if ( *((_DWORD *)this + 20) + *v6 )
    {
      Sarm::CEndpointResourcePool::AddToDynamicPool(v5, *((_DWORD *)this + 20) + *v6, a3, a4);
      *(_QWORD *)((char *)this + 76) = 0LL;
      *v6 = 0;
    }
    v7 = *((_QWORD *)this + 1);
    wil::details::in1diag3::FailFast_IfMsg(
      retaddr,
      (void *)0x2B,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\EndpointResourcePool.h",
      (const char *)(*(_DWORD *)(v7 + 12) == 0),
      (__int64)"Detaching from CEndpointResourcePool when nothing attached",
      v9);
    --*(_DWORD *)(v7 + 12);
    *((_QWORD *)this + 1) = 0LL;
  }
  v8 = *(_QWORD *)this;
  *(_QWORD *)this = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  *((_QWORD *)this + 5) = 0LL;
  *((GUID *)this + 1) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *v6 = 0;
  *((_BYTE *)this + 88) = 0;
}
