/*
 * XREFs of ?UpdateSubresource@CAtlasSurfacePool@DirectComposition@@QEAAXAEBUtagRECT@@PEBXII_N@Z @ 0x180035064
 * Callers:
 *     ?PaintWhitePixel@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180034E7C (-PaintWhitePixel@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 *     ?UpdateContent@CYCbCrSurface@DirectComposition@@UEAAJAEBUtagRECT@@PEBXI01I@Z @ 0x1800FF320 (-UpdateContent@CYCbCrSurface@DirectComposition@@UEAAJAEBUtagRECT@@PEBXI01I@Z.c)
 * Callees:
 *     ?UpdateSubresource@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@IAEBUtagRECT@@PEBXIIW4DXGI_FORMAT@@_N@Z @ 0x18003513C (-UpdateSubresource@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@IAEBUtagRECT@@PEBXIIW4D.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CAtlasSurfacePool::UpdateSubresource(
        DirectComposition::CAtlasSurfacePool *this,
        const struct tagRECT *a2,
        const void *a3,
        unsigned int a4,
        unsigned int a5,
        bool a6)
{
  unsigned int v10; // r8d
  unsigned int v11; // [rsp+30h] [rbp-28h]
  struct ID3D11Resource *v12; // [rsp+68h] [rbp+10h] BYREF

  if ( a2->right > a2->left && a2->bottom > a2->top )
  {
    (***((void (__fastcall ****)(_QWORD, GUID *, struct ID3D11Resource **))this + 2))(
      *((_QWORD *)this + 2),
      &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
      &v12);
    DirectComposition::CDxDevice::UpdateSubresource(
      (DirectComposition::CDxDevice *)(*(_QWORD *)(*((_QWORD *)this + 18) + 128LL) + 8LL),
      v12,
      v10,
      a2,
      a3,
      a4,
      v11,
      *((enum DXGI_FORMAT *)this + 40),
      a6);
    if ( v12 )
      ((void (__fastcall *)(struct ID3D11Resource *))v12->lpVtbl->Release)(v12);
  }
}
