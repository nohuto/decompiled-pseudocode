/*
 * XREFs of ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802B22C8
 * Callers:
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802B1B80 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID.c)
 *     ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802B1D84 (-GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPE.c)
 * Callees:
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x18002FBC0 (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180030300 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180032A44 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x180032A7C (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsValid@CRenderTargetBitmap@@UEBAJXZ @ 0x1800AF920 (-IsValid@CRenderTargetBitmap@@UEBAJXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DAA70 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xddddd_EventWriteTransfer @ 0x1801DED38 (McTemplateU0xddddd_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x18026F868 (ModuleFailFastForHRESULT.c)
 *     ?CopyRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID3D11Texture2D@@I@Z @ 0x1802B45F4 (-CopyRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID3D11Texture2D@@I@Z.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::UpdateDecodeBitmap(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  int IsValid; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  char *v5; // rcx
  int v6; // eax
  __int64 v7; // r8
  CDecodeBitmap *v8; // rdi
  unsigned int v9; // ebx
  __int64 (__fastcall ***v10)(_QWORD); // rcx
  struct ID3D11Texture2D *v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  int RectangleCount; // eax
  _DWORD v16[2]; // [rsp+48h] [rbp-29h] BYREF
  struct tagRECT v17; // [rsp+50h] [rbp-21h] BYREF
  void *v18[10]; // [rsp+68h] [rbp-9h] BYREF
  const void *retaddr; // [rsp+D0h] [rbp+5Fh]

  IsValid = CRenderTargetBitmap::IsValid((CRenderTargetBitmap *)(*((_QWORD *)this + 36) + 192LL));
  v4 = IsValid;
  if ( IsValid < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, IsValid, 0x114u, 0LL);
  }
  else if ( *((_BYTE *)this + 440) )
  {
    v5 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16;
    (**(void (__fastcall ***)(char *, _DWORD *))v5)(v5, v16);
    v17.left = 0;
    v17.top = 0;
    v17.right = v16[0];
    v17.bottom = v16[1];
    CRegion::CRegion((CRegion *)v18, &v17);
    v6 = FastRegion::CRegion::Subtract(
           (const struct FastRegion::Internal::CRgnData **)v18,
           *((const struct FastRegion::Internal::CRgnData ***)this + 53));
    if ( v6 < 0 )
      ModuleFailFastForHRESULT(v6, retaddr);
    v7 = *((_QWORD *)this + 47);
    v8 = (CDecodeBitmap *)*((_QWORD *)this + 36);
    v9 = *(_DWORD *)(v7 + 240);
    v10 = (__int64 (__fastcall ***)(_QWORD))(*(int *)(*(_QWORD *)(v7 + 16) + 20LL) + v7 + 16);
    v11 = (struct ID3D11Texture2D *)(**v10)(v10);
    v12 = CDecodeBitmap::CopyRegion(v8, (const struct CRegion *)v18, v11, v9);
    v4 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x127u, 0LL);
    }
    else
    {
      *(_BYTE *)(*((_QWORD *)this + 36) + 152LL) = 1;
      *((_BYTE *)this + 440) = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
      {
        v17 = 0LL;
        FastRegion::CRegion::GetBoundingRect((LONG **)v18, &v17);
        RectangleCount = FastRegion::CRegion::GetRectangleCount((int **)v18);
        McTemplateU0xddddd_EventWriteTransfer(
          (unsigned int)v17.top,
          &EVTDESC_ADVANCED_DIRECTFLIP_RESTORECONTENT,
          *((unsigned int *)this + 21) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)((char *)this + 84)) << 32),
          RectangleCount,
          v17.left,
          v17.top,
          v17.right,
          v17.bottom);
      }
    }
    FastRegion::CRegion::FreeMemory(v18);
  }
  return v4;
}
