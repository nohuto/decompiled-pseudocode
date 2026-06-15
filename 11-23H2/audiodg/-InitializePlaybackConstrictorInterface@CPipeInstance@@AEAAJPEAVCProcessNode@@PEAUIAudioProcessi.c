/*
 * XREFs of ?InitializePlaybackConstrictorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000F670
 * Callers:
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x14001148C (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012E70 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::InitializePlaybackConstrictorInterface(
        struct IUnknown **this,
        struct CProcessNode *a2,
        struct IAudioProcessingObject *a3)
{
  int v4; // ebx
  struct IUnknown *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  if ( *((_DWORD *)this + 30)
    || (v4 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IUnknown **))a3->lpVtbl->QueryInterface)(
               a3,
               &GUID_6b54b2b5_45ee_4f11_9935_9ec3183ad534,
               &v6),
        v4 < 0) )
  {
    v4 = 0;
  }
  else if ( this[23] != v6 )
  {
    ATL::AtlComPtrAssign(this + 23, v6);
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v6);
  return (unsigned int)v4;
}
