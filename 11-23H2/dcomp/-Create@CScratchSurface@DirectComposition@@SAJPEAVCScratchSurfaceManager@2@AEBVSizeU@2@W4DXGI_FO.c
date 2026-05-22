/*
 * XREFs of ?Create@CScratchSurface@DirectComposition@@SAJPEAVCScratchSurfaceManager@2@AEBVSizeU@2@W4DXGI_FORMAT@@PEAPEAV12@@Z @ 0x1800FADCC
 * Callers:
 *     ?GetScratchSurface@CScratchSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@AEBVSizeU@2@PEAPEAVCScratchSurface@2@@Z @ 0x1800FAFB4 (-GetScratchSurface@CScratchSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@AEBVSizeU@2@PEA.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     McTemplateU0xqqqtqq_EventWriteTransfer @ 0x1800EA454 (McTemplateU0xqqqtqq_EventWriteTransfer.c)
 *     McTemplateU0xxqdd_EventWriteTransfer @ 0x1800EA928 (McTemplateU0xxqdd_EventWriteTransfer.c)
 *     ??$ReleaseInterface@VCScratchSurface@DirectComposition@@@@YAXAEAPEAVCScratchSurface@DirectComposition@@@Z @ 0x1800FAD0C (--$ReleaseInterface@VCScratchSurface@DirectComposition@@@@YAXAEAPEAVCScratchSurface@DirectCompos.c)
 *     ?CreateTexture@CScratchSurface@DirectComposition@@AEAAJPEAVCDxDevice@2@@Z @ 0x1800FAF28 (-CreateTexture@CScratchSurface@DirectComposition@@AEAAJPEAVCDxDevice@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CScratchSurface::Create(
        struct DirectComposition::CScratchSurfaceManager *a1,
        const struct DirectComposition::SizeU *a2,
        enum DXGI_FORMAT a3,
        struct DirectComposition::CScratchSurface **a4)
{
  unsigned __int64 v4; // r13
  volatile signed __int32 *v9; // rax
  __int64 v10; // rbx
  int Texture; // edi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v15; // [rsp+20h] [rbp-58h]
  volatile signed __int32 *v16; // [rsp+80h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a1 + 2);
  *a4 = 0LL;
  v9 = (volatile signed __int32 *)DefaultHeap::AllocClear(0x38uLL);
  v10 = (__int64)v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 2) = 0;
    v16 = v9;
    *(_QWORD *)v9 = &DirectComposition::CScratchSurface::`vftable';
    *((_QWORD *)v9 + 4) = *(_QWORD *)a2;
    *((_DWORD *)v9 + 10) = a3;
    *((_QWORD *)v9 + 3) = 0LL;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v9 + 2));
    Texture = DirectComposition::CScratchSurface::CreateTexture(
                (DirectComposition::CScratchSurface *)v10,
                (struct DirectComposition::CDxDevice *)((v4 + 8) & ((unsigned __int128)-(__int128)v4 >> 64)));
    if ( Texture >= 0 )
    {
      *(_QWORD *)(v10 + 16) = a1;
      *(_BYTE *)(v10 + 48) = 0;
      *(_DWORD *)(v10 + 44) = GetTickCount();
      if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
      {
        v12 = 64LL;
        if ( a3 != DXGI_FORMAT_R16G16B16A16_FLOAT )
          v12 = 32LL;
        McTemplateU0xqqqtqq_EventWriteTransfer(
          v12,
          32LL,
          v10,
          *(_DWORD *)a2,
          *((_DWORD *)a2 + 1),
          v12,
          0,
          *(_DWORD *)(*(_QWORD *)(v4 + 24) + 160LL),
          a3);
        if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
        {
          LODWORD(v15) = 6;
          McTemplateU0xxqdd_EventWriteTransfer(
            (unsigned int)Microsoft_Windows_DirectCompositionEnableBits,
            v13,
            v10,
            0LL,
            v15);
        }
      }
      *a4 = (struct DirectComposition::CScratchSurface *)v10;
      v16 = 0LL;
    }
  }
  else
  {
    v16 = 0LL;
    Texture = -2147024882;
  }
  ReleaseInterface<DirectComposition::CScratchSurface>(&v16);
  return (unsigned int)Texture;
}
