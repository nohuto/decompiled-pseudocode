/*
 * XREFs of ?Create@CAtlasSurfacePool@DirectComposition@@SAJPEAVCSurfaceManager@2@AEBVSizeU@2@W4DXGI_FORMAT@@_N3PEAPEAV12@@Z @ 0x180034780
 * Callers:
 *     ?RequestLargeSurface@CSurfaceManager@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBUSurfaceRequestStruct@2@_N@Z @ 0x18001E950 (-RequestLargeSurface@CSurfaceManager@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBUSurfaceR.c)
 *     ?AllocateDynamicPool@CDynamicPoolSet@DirectComposition@@QEAAJPEAPEAVCDynamicPool@2@AEBVSizeU@2@W4DXGI_FORMAT@@_N3@Z @ 0x180035E60 (-AllocateDynamicPool@CDynamicPoolSet@DirectComposition@@QEAAJPEAPEAVCDynamicPool@2@AEBVSizeU@2@W.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ??0CAtlasSurfacePool@DirectComposition@@QEAA@PEAVCSurfaceManager@1@AEBVSizeU@1@W4DXGI_FORMAT@@_N3@Z @ 0x180034834 (--0CAtlasSurfacePool@DirectComposition@@QEAA@PEAVCSurfaceManager@1@AEBVSizeU@1@W4DXGI_FORMAT@@_N.c)
 *     ?CreateDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAJXZ @ 0x180034950 (-CreateDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     McTemplateU0xqqqtqq_EventWriteTransfer @ 0x1800EA454 (McTemplateU0xqqqtqq_EventWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CAtlasSurfacePool::Create(
        struct DirectComposition::CSurfaceManager *a1,
        const struct DirectComposition::SizeU *a2,
        enum DXGI_FORMAT a3,
        bool a4,
        bool a5,
        struct DirectComposition::CAtlasSurfacePool **a6)
{
  DirectComposition::CAtlasSurfacePool *v10; // rax
  DirectComposition::CAtlasSurfacePool *v11; // rax
  DirectComposition::CAtlasSurfacePool *v12; // rdi
  int DeviceResources; // ebx
  int v15; // edx
  int v16; // ecx

  v10 = (DirectComposition::CAtlasSurfacePool *)DefaultHeap::AllocClear(0x108uLL);
  if ( v10
    && (v11 = (DirectComposition::CAtlasSurfacePool *)DirectComposition::CAtlasSurfacePool::CAtlasSurfacePool(
                                                        v10,
                                                        a1,
                                                        a2,
                                                        a3,
                                                        a4,
                                                        a5),
        (v12 = v11) != 0LL) )
  {
    DeviceResources = DirectComposition::CAtlasSurfacePool::CreateDeviceResources(v11);
    if ( DeviceResources < 0 )
    {
      CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v12);
    }
    else
    {
      if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
      {
        v15 = *((_DWORD *)v12 + 40);
        v16 = 64;
        if ( v15 != 10 )
          v16 = 32;
        McTemplateU0xqqqtqq_EventWriteTransfer(
          v16,
          v15,
          (_DWORD)v12,
          *((_DWORD *)v12 + 38),
          *((_DWORD *)v12 + 39),
          v16,
          1,
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 18) + 128LL) + 24LL) + 160LL),
          v15);
      }
      *a6 = v12;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)DeviceResources;
}
