/*
 * XREFs of ?GetScratchSurface@CScratchSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@AEBVSizeU@2@PEAPEAVCScratchSurface@2@@Z @ 0x1800FAFB4
 * Callers:
 *     ?CopySurface@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@II0AEBUtagRECT@@PEAVCScratchSurfaceManager@2@@Z @ 0x18000BE74 (-CopySurface@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@II0AEBUtagRECT@@PEAVCScratchS.c)
 *     ?Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800EBD80 (-Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?AlignSurfaceSize@CSurfaceManager@DirectComposition@@SA?AVSizeU@2@AEBV32@@Z @ 0x18001E87C (-AlignSurfaceSize@CSurfaceManager@DirectComposition@@SA-AVSizeU@2@AEBV32@@Z.c)
 *     ?RemoveGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@@Z @ 0x180034FA8 (-RemoveGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180073310 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     McTemplateU0xqqqqx_EventWriteTransfer @ 0x1800E93DC (McTemplateU0xqqqqx_EventWriteTransfer.c)
 *     ?Create@CScratchSurface@DirectComposition@@SAJPEAVCScratchSurfaceManager@2@AEBVSizeU@2@W4DXGI_FORMAT@@PEAPEAV12@@Z @ 0x1800FADCC (-Create@CScratchSurface@DirectComposition@@SAJPEAVCScratchSurfaceManager@2@AEBVSizeU@2@W4DXGI_FO.c)
 */

__int64 __fastcall DirectComposition::CScratchSurfaceManager::GetScratchSurface(
        DirectComposition::CScratchSurfaceManager *this,
        enum DXGI_FORMAT a2,
        const struct DirectComposition::SizeU *a3,
        struct DirectComposition::CScratchSurface **a4)
{
  int v4; // r10d
  char *v5; // rdi
  struct DirectComposition::CScratchSurface *v6; // rsi
  unsigned int v8; // r8d
  int v9; // ebx
  int v11; // r10d
  struct DirectComposition::CScratchSurface **v14; // rdx
  struct DirectComposition::CScratchSurface *v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // r8
  unsigned int v19; // edx
  int v20; // ecx
  int v21; // eax
  __int64 v23[2]; // [rsp+40h] [rbp-38h] BYREF
  struct DirectComposition::CScratchSurface *v24; // [rsp+80h] [rbp+8h] BYREF

  v4 = *((_DWORD *)this + 12);
  v5 = (char *)this + 24;
  v6 = 0LL;
  v8 = -1;
  v24 = 0LL;
  v9 = 0;
  v11 = v4 - 1;
  if ( v11 >= 0 )
  {
    v14 = (struct DirectComposition::CScratchSurface **)(*(_QWORD *)v5 + 8LL * v11);
    do
    {
      v15 = *v14;
      if ( *((_BYTE *)*v14 + 48)
        && *((_DWORD *)v15 + 8) >= *(_DWORD *)a3
        && *((_DWORD *)v15 + 9) >= *((_DWORD *)a3 + 1)
        && *((_DWORD *)v15 + 10) == a2
        && (unsigned int)(*((_DWORD *)v15 + 8) * HIDWORD(*((_QWORD *)v15 + 4))) < v8 )
      {
        v8 = *((_DWORD *)v15 + 8) * HIDWORD(*((_QWORD *)v15 + 4));
        v24 = *v14;
        v6 = v15;
      }
      --v14;
      --v11;
    }
    while ( v11 >= 0 );
    if ( v6 )
    {
      *((_BYTE *)v6 + 48) = 0;
      *((_DWORD *)v6 + 11) = GetTickCount();
      if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
        McTemplateU0xqqqqx_EventWriteTransfer(
          v16,
          &DCOMPEVENT_ATLAS_ENTRY_REUSE,
          (__int64)v24,
          0,
          0,
          *(_DWORD *)a3,
          *((_DWORD *)a3 + 1),
          (char)v24);
      goto LABEL_19;
    }
  }
  DirectComposition::CSurfaceManager::AlignSurfaceSize(v23, (__int64 *)a3);
  v9 = DirectComposition::CScratchSurface::Create(this, (const struct DirectComposition::SizeU *)v23, a2, &v24);
  if ( v9 >= 0 )
  {
    v17 = *((_DWORD *)v5 + 6);
    v18 = v17 + 1;
    if ( (unsigned int)v18 < v17 )
    {
      v9 = -2147024362;
      v19 = 181;
      v20 = -2147024362;
LABEL_21:
      DoStackCaptureDirect(v20, v19);
      return (unsigned int)v9;
    }
    v9 = 0;
    if ( (unsigned int)v18 > *((_DWORD *)v5 + 5) )
    {
      v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v5, 8u, v18, &v24);
      v9 = v21;
      if ( v21 < 0 )
      {
        v19 = 192;
        v20 = v21;
        goto LABEL_21;
      }
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v5 + 8LL * *((unsigned int *)v5 + 6)) = v24;
      *((_DWORD *)v5 + 6) = v18;
    }
LABEL_19:
    CMILRefCountImpl::AddReference((struct DirectComposition::CScratchSurface *)((char *)v24 + 8));
    DirectComposition::CDxDevice::RemoveGuardRect(
      (DirectComposition::CDxDevice *)(*(_QWORD *)(*((_QWORD *)v24 + 2) + 16LL) + 8LL),
      *((struct ID3D11Texture2D **)v24 + 3));
    *a4 = v24;
  }
  return (unsigned int)v9;
}
