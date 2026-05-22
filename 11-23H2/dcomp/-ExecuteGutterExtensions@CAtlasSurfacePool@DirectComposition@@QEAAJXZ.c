/*
 * XREFs of ?ExecuteGutterExtensions@CAtlasSurfacePool@DirectComposition@@QEAAJXZ @ 0x180022D9C
 * Callers:
 *     ?Flush@CDevice@DirectComposition@@UEAAJXZ @ 0x180024970 (-Flush@CDevice@DirectComposition@@UEAAJXZ.c)
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?FlushGutterExtensions@CSurfaceFactory@DirectComposition@@QEAAJXZ @ 0x1800FBA18 (-FlushGutterExtensions@CSurfaceFactory@DirectComposition@@QEAAJXZ.c)
 * Callees:
 *     ?ExecuteGutterExtensions@CDxDevice@DirectComposition@@QEAAJAEBV?$DynArray@UGutterExtension@DirectComposition@@$0A@@@PEAUID3D11ShaderResourceView@@PEAUID3D11RenderTargetView@@IIW4DXGI_FORMAT@@@Z @ 0x1800233F0 (-ExecuteGutterExtensions@CDxDevice@DirectComposition@@QEAAJAEBV-$DynArray@UGutterExtension@Direc.c)
 *     ?RestoreGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180023DD4 (-RestoreGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18007C16C (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9B4 (--0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     ??0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9F4 (--0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     ?Leave@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z @ 0x18009BE08 (-Leave@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CAtlasSurfacePool::ExecuteGutterExtensions(
        DirectComposition::CAtlasSurfacePool *this)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  int v4; // edi
  struct DirectComposition::CDxDevice *v6; // [rsp+40h] [rbp-18h] BYREF
  __int64 v7; // [rsp+48h] [rbp-10h]
  struct DirectComposition::CDxDevice *v8; // [rsp+60h] [rbp+8h] BYREF

  DirectComposition::SwapDeviceContextState::SwapDeviceContextState(
    (DirectComposition::SwapDeviceContextState *)&v6,
    (const struct DirectComposition::CDxDevice *)((*(_QWORD *)(*((_QWORD *)this + 18) + 128LL) + 8LL) & -(__int64)(*(_QWORD *)(*((_QWORD *)this + 18) + 128LL) != 0LL)));
  v2 = *((_QWORD *)this + 4);
  v3 = *(_QWORD *)(*((_QWORD *)this + 18) + 128LL);
  DirectComposition::MultithreadDeviceLock::MultithreadDeviceLock(
    (DirectComposition::MultithreadDeviceLock *)&v8,
    (const struct DirectComposition::CDxDevice *)(v3 + 8));
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v3 + 56) + 64LL))(*(_QWORD *)(v3 + 56), v2);
  DirectComposition::MultithreadDeviceLock::Leave(v8);
  v4 = DirectComposition::CDxDevice::ExecuteGutterExtensions(
         (DirectComposition::CDxDevice *)(*(_QWORD *)(*((_QWORD *)this + 18) + 128LL) + 8LL),
         *((_DWORD *)this + 38),
         *((_DWORD *)this + 39),
         (enum DXGI_FORMAT)*((_DWORD *)this + 40));
  if ( v4 >= 0 )
  {
    *((_DWORD *)this + 58) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 208, 24LL);
  }
  DirectComposition::CAtlasSurfacePool::RestoreGuardRect(this);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)v6 + 9) + 1048LL))(*((_QWORD *)v6 + 9), v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  DirectComposition::MultithreadDeviceLock::Leave(v6);
  return (unsigned int)v4;
}
