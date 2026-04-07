/*
 * XREFs of ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x1800191B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x180019200 (-EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z @ 0x1800B2188 (-Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetSourceRect@CDCompDesktopThumbnailCVI@@QEAAJAEBUtagRECT@@@Z @ 0x1800B2F14 (-SetSourceRect@CDCompDesktopThumbnailCVI@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x1800B2F78 (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 *     ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x1800B3188 (-Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800B3224 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 *     ?Create@CDCompDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x180102644 (-Create@CDCompDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDCompDesktopThumbnailCVI@@SAJPEAPEAV1@@Z @ 0x180102750 (-Create@CDCompDesktopThumbnailCVI@@SAJPEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDCompThumbnailData::EnsureThumbnailVisual(CDCompThumbnailData *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int updated; // eax
  __int64 v6; // rdx
  CDesktopThumbnailBase *v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  CDesktopThumbnailCVIVisual *v14; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+30h]
  CDesktopThumbnailCVIVisual *v16; // [rsp+60h] [rbp+38h] BYREF
  CDCompDesktopThumbnailCVI *v17; // [rsp+68h] [rbp+40h] BYREF
  struct CDCompDesktopThumbnail *v18; // [rsp+70h] [rbp+48h] BYREF
  __int64 v19; // [rsp+78h] [rbp+50h]

  if ( *((_DWORD *)this + 28) == 1 )
  {
    v18 = 0LL;
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v18);
    updated = CDCompDesktopThumbnail::Create(&v18);
    v3 = updated;
    if ( updated < 0 )
    {
      v6 = 9743LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)updated);
LABEL_25:
      Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v18);
      return v3;
    }
    *((_QWORD *)v18 + 36) = this;
    v7 = v18;
    *((_QWORD *)v18 + 35) = *(_QWORD *)(*((_QWORD *)this + 2) + 136LL);
    updated = CDesktopThumbnailBase::UpdateWindowClones(v7);
    v3 = updated;
    if ( updated < 0 )
    {
      v6 = 9745LL;
      goto LABEL_9;
    }
    v17 = 0LL;
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v17);
    v8 = CDCompDesktopThumbnailCVI::Create(&v17);
    v3 = v8;
    if ( v8 >= 0 )
    {
      v8 = CDCompDesktopThumbnailCVI::SetSourceRect(v17, (const struct tagRECT *)((char *)this + 56));
      v3 = v8;
      if ( v8 >= 0 )
      {
        v10 = *((_DWORD *)this + 12) - *((_DWORD *)this + 10);
        if ( v10 < 0 )
          v10 = 0;
        LODWORD(v19) = v10;
        v11 = *((_DWORD *)this + 13) - *((_DWORD *)this + 11);
        if ( v11 < 0 )
          v11 = 0;
        HIDWORD(v19) = v11;
        *((_QWORD *)v17 + 8) = v19;
        *((_QWORD *)v17 + 2) = v18;
        _InterlockedIncrement((volatile signed __int32 *)v18 + 2);
        v16 = 0LL;
        Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v16);
        v12 = CDesktopThumbnailCVIVisual::Create(&v16);
        v3 = v12;
        if ( v12 >= 0 )
        {
          *((_QWORD *)v16 + 40) = *((_QWORD *)this + 2);
          *((_DWORD *)v16 + 87) = *((_DWORD *)this + 9);
          *((_BYTE *)v16 + 345) = 1;
          v12 = CDesktopThumbnailCVIVisual::SetVisual(v16, v17, (const struct tagRECT *)((char *)this + 56));
          v3 = v12;
          if ( v12 >= 0 )
          {
            CDesktopThumbnailCVIVisual::Update(
              v16,
              (const struct tagRECT *)((char *)this + 40),
              (double)*((unsigned __int8 *)this + 72) / 255.0);
            v14 = v16;
            v16 = 0LL;
            *((_QWORD *)this + 13) = v14;
            Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v16);
            Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v17);
            Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v18);
            return 0LL;
          }
          v13 = 9760LL;
        }
        else
        {
          v13 = 9754LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v16);
        goto LABEL_24;
      }
      v9 = 9749LL;
    }
    else
    {
      v9 = 9748LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v8);
LABEL_24:
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v17);
    goto LABEL_25;
  }
  if ( *((_DWORD *)this + 28) )
    return 0LL;
  v2 = CThumbnailData::EnsureThumbnailVisual(this);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2628,
    (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
