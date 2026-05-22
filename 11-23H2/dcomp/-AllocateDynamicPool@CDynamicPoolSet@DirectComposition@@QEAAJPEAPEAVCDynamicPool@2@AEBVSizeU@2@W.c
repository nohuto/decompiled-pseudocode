/*
 * XREFs of ?AllocateDynamicPool@CDynamicPoolSet@DirectComposition@@QEAAJPEAPEAVCDynamicPool@2@AEBVSizeU@2@W4DXGI_FORMAT@@_N3@Z @ 0x180035E60
 * Callers:
 *     ?RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtlasSurface@2@@Z @ 0x1800200E0 (-RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtl.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CAtlasSurfacePool@DirectComposition@@SAJPEAVCSurfaceManager@2@AEBVSizeU@2@W4DXGI_FORMAT@@_N3PEAPEAV12@@Z @ 0x180034780 (-Create@CAtlasSurfacePool@DirectComposition@@SAJPEAVCSurfaceManager@2@AEBVSizeU@2@W4DXGI_FORMAT@.c)
 *     ??0CDynamicPool@DirectComposition@@QEAA@PEAVCAtlasSurfacePool@1@@Z @ 0x180035F64 (--0CDynamicPool@DirectComposition@@QEAA@PEAVCAtlasSurfacePool@1@@Z.c)
 *     ?CreateWhitePixelSurface@CDynamicPool@DirectComposition@@QEAAJXZ @ 0x180035FCC (-CreateWhitePixelSurface@CDynamicPool@DirectComposition@@QEAAJXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasSurfacePool@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x180089D84 (-InternalRelease@-$ComPtr@VCAtlasSurfacePool@DirectComposition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     McTemplateU0xxqdd_EventWriteTransfer @ 0x1800EA928 (McTemplateU0xxqdd_EventWriteTransfer.c)
 *     ??1?$ComPtr@VCDynamicPool@DirectComposition@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F7D3C (--1-$ComPtr@VCDynamicPool@DirectComposition@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CDynamicPoolSet::AllocateDynamicPool(
        struct DirectComposition::CSurfaceManager **this,
        struct DirectComposition::CDynamicPool **a2,
        const struct DirectComposition::SizeU *a3,
        enum DXGI_FORMAT a4,
        bool a5,
        bool a6)
{
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  unsigned int v11; // ebx
  DirectComposition::CDynamicPool *v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rbx
  DirectComposition::CDynamicPoolSet **v15; // rdx
  DirectComposition::CDynamicPoolSet *v16; // rax
  int WhitePixelSurface; // eax
  unsigned int v18; // edi
  __int64 v20; // r9
  __int64 v21; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct DirectComposition::CAtlasSurfacePool *v23; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v24; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v8 = DirectComposition::CAtlasSurfacePool::Create(this[2], a3, a4, a5, 0, &v23);
  v11 = v8;
  if ( v8 < 0 )
  {
    v20 = (unsigned int)v8;
    v21 = 43LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\dynamicpoolset.cpp",
      (const char *)v20);
    goto LABEL_15;
  }
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
    McTemplateU0xxqdd_EventWriteTransfer(v10, v9, (_DWORD)v23, 0, 8);
  v12 = (DirectComposition::CDynamicPool *)DefaultHeap::AllocClear(0x40uLL);
  if ( !v12 || (v13 = DirectComposition::CDynamicPool::CDynamicPool(v12, v23), (v14 = (_QWORD *)v13) == 0LL) )
  {
    v11 = -2147024882;
    v21 = 49LL;
    v20 = 2147942414LL;
    goto LABEL_14;
  }
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v13 + 8));
  v24 = v14;
  v15 = (DirectComposition::CDynamicPoolSet **)this[5];
  v16 = (DirectComposition::CDynamicPoolSet *)(v14 + 2);
  if ( *v15 != (DirectComposition::CDynamicPoolSet *)(this + 4) )
    __fastfail(3u);
  *(_QWORD *)v16 = this + 4;
  v14[3] = v15;
  *v15 = v16;
  this[5] = v16;
  ++*((_DWORD *)this + 6);
  if ( !a6
    || (WhitePixelSurface = DirectComposition::CDynamicPool::CreateWhitePixelSurface((DirectComposition::CDynamicPool *)v14),
        v18 = WhitePixelSurface,
        WhitePixelSurface >= 0) )
  {
    *a2 = (struct DirectComposition::CDynamicPool *)v14;
    Microsoft::WRL::ComPtr<DirectComposition::CAtlasSurfacePool>::InternalRelease(&v23);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x38,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\dynamicpoolset.cpp",
    (const char *)(unsigned int)WhitePixelSurface);
  v11 = v18;
LABEL_15:
  Microsoft::WRL::ComPtr<DirectComposition::CDynamicPool>::~ComPtr<DirectComposition::CDynamicPool>(&v24);
  Microsoft::WRL::ComPtr<DirectComposition::CAtlasSurfacePool>::InternalRelease(&v23);
  return v11;
}
