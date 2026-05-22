/*
 * XREFs of ?CreateDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAJXZ @ 0x180034950
 * Callers:
 *     ?Create@CAtlasSurfacePool@DirectComposition@@SAJPEAVCSurfaceManager@2@AEBVSizeU@2@W4DXGI_FORMAT@@_N3PEAPEAV12@@Z @ 0x180034780 (-Create@CAtlasSurfacePool@DirectComposition@@SAJPEAVCSurfaceManager@2@AEBVSizeU@2@W4DXGI_FORMAT@.c)
 * Callees:
 *     ?CreateCompositionBuffer@CDxDevice@DirectComposition@@QEAAJIIW4DXGI_FORMAT@@HIIPEAPEAXPEAPEAUIUnknown@@@Z @ 0x180034A9C (-CreateCompositionBuffer@CDxDevice@DirectComposition@@QEAAJIIW4DXGI_FORMAT@@HIIPEAPEAXPEAPEAUIUn.c)
 *     ?EnsureD2DDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAJXZ @ 0x180034C64 (-EnsureD2DDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CAtlasSurfacePool::CreateDeviceResources(
        DirectComposition::CAtlasSurfacePool *this)
{
  enum DXGI_FORMAT v1; // r9d
  unsigned int v3; // edi
  _QWORD *v4; // rsi
  _QWORD *v5; // r14
  int CompositionBuffer; // edx
  __int64 v7; // rcx
  __int64 v8; // rsi
  int v10; // [rsp+20h] [rbp-38h]

  v1 = *((_DWORD *)this + 40);
  v3 = 16;
  if ( v1 != DXGI_FORMAT_R8_UNORM && v1 != DXGI_FORMAT_R8G8_UNORM )
    v3 = 48;
  v4 = (_QWORD *)((char *)this + 16);
  v5 = (_QWORD *)((char *)this + 32);
  CompositionBuffer = DirectComposition::CDxDevice::CreateCompositionBuffer(
                        (DirectComposition::CDxDevice *)(*(_QWORD *)(*((_QWORD *)this + 18) + 128LL) + 8LL),
                        *((_DWORD *)this + 38),
                        *((_DWORD *)this + 39),
                        v1,
                        v10,
                        v3,
                        ((v1 - 87) & 0xFFFFFFFB) == 0,
                        (void **)this + 3,
                        (struct IUnknown **)this + 2);
  if ( CompositionBuffer >= 0 )
    CompositionBuffer = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v4)(
                          *v4,
                          &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
                          (char *)this + 32);
  v7 = *(_QWORD *)(*((_QWORD *)this + 18) + 128LL);
  v8 = *(_QWORD *)(v7 + 32);
  if ( CompositionBuffer >= 0 )
  {
    CompositionBuffer = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))(*(_QWORD *)v8 + 56LL))(
                          *(_QWORD *)(v7 + 32),
                          *v5,
                          0LL,
                          (char *)this + 40);
    if ( CompositionBuffer >= 0 )
    {
      if ( (v3 & 0x20) == 0 )
        return (unsigned int)DirectComposition::CAtlasSurfacePool::EnsureD2DDeviceResources(this);
      CompositionBuffer = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, char *))(*(_QWORD *)v8 + 72LL))(
                            v8,
                            *v5,
                            0LL,
                            (char *)this + 48);
      if ( CompositionBuffer >= 0 )
        return (unsigned int)DirectComposition::CAtlasSurfacePool::EnsureD2DDeviceResources(this);
    }
  }
  return (unsigned int)CompositionBuffer;
}
