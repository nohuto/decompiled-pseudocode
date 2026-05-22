/*
 * XREFs of ?Initialize@CPresentationSurface@@IEAAJPEAX@Z @ 0x1801AFF4C
 * Callers:
 *     ?Create@CPresentationSurface@@SAJPEAVCPresentationManager@@_KPEAXPEAPEAV1@@Z @ 0x1801AFE0C (-Create@CPresentationSurface@@SAJPEAVCPresentationManager@@_KPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Emplace@AEA_KAEAPEAVCPresentationSurface@@@?$_Tree@V?$_Tmap_traits@_KPEAVCPresentationSurface@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCPresentationSurface@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KPEAVCPresentationSurface@@@std@@PEAX@std@@_N@1@AEA_KAEAPEAVCPresentationSurface@@@Z @ 0x1801AF6C0 (--$_Emplace@AEA_KAEAPEAVCPresentationSurface@@@-$_Tree@V-$_Tmap_traits@_KPEAVCPresentationSurfac.c)
 *     ?HRESULTFromNTSTATUS@@YAJJ@Z @ 0x1801B246C (-HRESULTFromNTSTATUS@@YAJJ@Z.c)
 */

__int64 __fastcall CPresentationSurface::Initialize(CPresentationSurface *this, void *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // edx
  int v5; // ecx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  __int64 *v9; // rcx
  _QWORD v11[3]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v12; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v13[16]; // [rsp+40h] [rbp-40h] BYREF
  GUID v14; // [rsp+50h] [rbp-30h] BYREF
  int v15; // [rsp+60h] [rbp-20h]
  _QWORD *v16; // [rsp+68h] [rbp-18h]

  v12 = 0LL;
  if ( !a2 )
  {
    v3 = -2147024809;
    v4 = 41;
    v5 = -2147024809;
LABEL_6:
    DoStackCaptureDirect(v5, v4);
    goto LABEL_7;
  }
  v6 = *((_QWORD *)this + 3);
  v11[0] = a2;
  v14 = GUID_13c96810_4fe9_4762_9d34_5b7b5a28a5c4;
  v15 = 8;
  v16 = v11;
  v7 = NtFlipObjectAddContent(*(_QWORD *)(v6 + 104), (char *)this + 40, 1LL, &v14, a2);
  v8 = HRESULTFromNTSTATUS(v7);
  v3 = v8;
  if ( v8 < 0 )
  {
    v4 = 58;
    v5 = v8;
    goto LABEL_6;
  }
  v11[2] = *((_QWORD *)this + 5);
  v9 = (__int64 *)(*((_QWORD *)this + 3) + 160LL);
  *((_BYTE *)this + 72) = 1;
  v11[1] = this;
  std::_Tree<std::_Tmap_traits<unsigned __int64,CPresentationSurface *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CPresentationSurface *>>,0>>::_Emplace<unsigned __int64 &,CPresentationSurface * &>(
    v9,
    (__int64)v13);
LABEL_7:
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v12);
  return v3;
}
