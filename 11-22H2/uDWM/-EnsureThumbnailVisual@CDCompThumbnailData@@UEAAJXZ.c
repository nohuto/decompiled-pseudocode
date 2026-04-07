/*
 * XREFs of ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x180008740
 * Callers:
 *     <none>
 * Callees:
 *     ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x180001FE0 (-Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x180002BEC (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z @ 0x180002EF0 (-Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800031B4 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 *     ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x180008790 (-EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180038438 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetSourceRect@CDCompDesktopThumbnailCVI@@QEAAJAEBUtagRECT@@@Z @ 0x1800B6B20 (-SetSourceRect@CDCompDesktopThumbnailCVI@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Create@CDCompDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x180107F68 (-Create@CDCompDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDCompDesktopThumbnailCVI@@SAJPEAPEAV1@@Z @ 0x180108074 (-Create@CDCompDesktopThumbnailCVI@@SAJPEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDCompThumbnailData::EnsureThumbnailVisual(CDCompThumbnailData *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int updated; // eax
  unsigned int v6; // esi
  __int64 v7; // rdx
  CDesktopThumbnailBase *v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  CDesktopThumbnailCVIVisual *v15; // rax
  int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+30h]
  CDesktopThumbnailCVIVisual *v18; // [rsp+60h] [rbp+38h] BYREF
  CDCompDesktopThumbnailCVI *v19; // [rsp+68h] [rbp+40h] BYREF
  struct CDCompDesktopThumbnail *v20; // [rsp+70h] [rbp+48h] BYREF
  __int64 v21; // [rsp+78h] [rbp+50h]

  if ( *((_DWORD *)this + 30) == 1 )
  {
    v20 = 0LL;
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v20);
    updated = CDCompDesktopThumbnail::Create(&v20);
    v6 = updated;
    if ( updated < 0 )
    {
      v7 = 314LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowdata.cpp",
        (const char *)(unsigned int)updated,
        v16);
LABEL_25:
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v20);
      return v6;
    }
    *((_QWORD *)v20 + 36) = this;
    v8 = v20;
    *((_QWORD *)v20 + 35) = *(_QWORD *)(*((_QWORD *)this + 2) + 136LL);
    updated = CDesktopThumbnailBase::UpdateWindowClones(v8);
    v6 = updated;
    if ( updated < 0 )
    {
      v7 = 316LL;
      goto LABEL_9;
    }
    v19 = 0LL;
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v19);
    v9 = CDCompDesktopThumbnailCVI::Create(&v19);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v9 = CDCompDesktopThumbnailCVI::SetSourceRect(v19, (const struct tagRECT *)((char *)this + 56));
      v6 = v9;
      if ( v9 >= 0 )
      {
        v11 = *((_DWORD *)this + 12) - *((_DWORD *)this + 10);
        if ( v11 < 0 )
          v11 = 0;
        LODWORD(v21) = v11;
        v12 = *((_DWORD *)this + 13) - *((_DWORD *)this + 11);
        if ( v12 < 0 )
          v12 = 0;
        HIDWORD(v21) = v12;
        *((_QWORD *)v19 + 8) = v21;
        *((_QWORD *)v19 + 2) = v20;
        _InterlockedIncrement((volatile signed __int32 *)v20 + 2);
        v18 = 0LL;
        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v18);
        v13 = CDesktopThumbnailCVIVisual::Create(&v18);
        v6 = v13;
        if ( v13 >= 0 )
        {
          *((_QWORD *)v18 + 40) = *((_QWORD *)this + 2);
          *((_DWORD *)v18 + 87) = *((_DWORD *)this + 9);
          *((_BYTE *)v18 + 345) = 1;
          v13 = CDesktopThumbnailCVIVisual::SetVisual(v18, v19, (const struct tagRECT *)((char *)this + 56));
          v6 = v13;
          if ( v13 >= 0 )
          {
            CDesktopThumbnailCVIVisual::Update(
              v18,
              (const struct tagRECT *)((char *)this + 40),
              (double)*((unsigned __int8 *)this + 72) / 255.0);
            v15 = v18;
            v18 = 0LL;
            *((_QWORD *)this + 14) = v15;
            Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v18);
            Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v19);
            Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v20);
            return 0LL;
          }
          v14 = 331LL;
        }
        else
        {
          v14 = 325LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowdata.cpp",
          (const char *)(unsigned int)v13,
          v16);
        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v18);
        goto LABEL_24;
      }
      v10 = 320LL;
    }
    else
    {
      v10 = 319LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowdata.cpp",
      (const char *)(unsigned int)v9,
      v16);
LABEL_24:
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v19);
    goto LABEL_25;
  }
  if ( *((_DWORD *)this + 30) )
    return 0LL;
  v2 = CThumbnailData::EnsureThumbnailVisual(this);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x153,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowdata.cpp",
    (const char *)(unsigned int)v2,
    v16);
  return v3;
}
