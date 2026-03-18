/*
 * XREFs of ?ProcessSetRealizationSize@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SETREALIZATIONSIZE@@@Z @ 0x1800E3F6C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800443B0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18005DD10 (-CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?clear@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180063E44 (-clear@-$vector_facade@USourceCVI@CVisualSurface@@V-$buffer_impl@USourceCVI@CVisualSurface@@$03$.c)
 *     ??$emplace_back@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@H@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@H@Z @ 0x1800E4068 (--$emplace_back@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@H@-$vector_f.c)
 *     ?ClearAllRenderTargets@CVisualSurface@@AEAAXXZ @ 0x1800E438C (-ClearAllRenderTargets@CVisualSurface@@AEAAXXZ.c)
 */

__int64 __fastcall CVisualSurface::ProcessSetRealizationSize(
        CVisualSurface *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUALSURFACE_SETREALIZATIONSIZE *a3)
{
  bool v4; // zf
  char v5; // di
  struct CComposition *v6; // rcx
  int v7; // eax
  unsigned int v8; // esi
  struct CCachedVisualImage *v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CCachedVisualImage *v12; // [rsp+50h] [rbp+8h] BYREF
  struct CCachedVisualImage *v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a2;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 2) - *((float *)this + 24)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 3) - *((float *)this + 25)) & _xmm) > 0.0000011920929 )
  {
    v4 = *((_BYTE *)this + 201) == 0;
    *((_QWORD *)this + 12) = *((_QWORD *)a3 + 1);
    if ( v4 )
      CVisualSurface::ClearAllRenderTargets(this);
  }
  v5 = COERCE_FLOAT(*((_DWORD *)this + 24) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(*((_DWORD *)this + 25) & _xmm) >= 0.0000011920929;
  if ( v5 == *((_BYTE *)this + 200) )
    goto LABEL_11;
  detail::vector_facade<CVisualSurface::SourceCVI,detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 14);
  if ( !v5 )
  {
LABEL_10:
    *((_BYTE *)this + 200) = v5;
LABEL_11:
    CResource::NotifyOnChanged((__int64)this, 6u, 0LL);
    return 0LL;
  }
  v6 = (struct CComposition *)*((_QWORD *)this + 2);
  v13 = 0LL;
  v7 = CCachedVisualImage::CreateForVisualSurface(v6, &v13);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = v13;
    v13 = 0LL;
    v12 = v9;
    detail::vector_facade<CVisualSurface::SourceCVI,detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>>::emplace_back<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,int>(
      (char *)this + 112,
      &v12);
    wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)&v13);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF6,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
    (const char *)(unsigned int)v7);
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)&v13);
  return v8;
}
