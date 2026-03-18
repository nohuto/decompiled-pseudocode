/*
 * XREFs of ?Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1801DF7EC
 * Callers:
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I_N@Z @ 0x1800BD210 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIBitmapRealization@@@Z @ 0x180088DD8 (--0-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIBitmapRealizatio.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UseSyncIntervalAndAllowTearing@CDirectFlipInfo@@QEBA_NPEAVIOverlaySwapChain@@@Z @ 0x1801B8964 (-UseSyncIntervalAndAllowTearing@CDirectFlipInfo@@QEBA_NPEAVIOverlaySwapChain@@@Z.c)
 *     ?PresentNeeded@CDirectFlipInfo@@QEBA_NXZ @ 0x1801DFB78 (-PresentNeeded@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?UpdateHDRMetaData@CDirectFlipInfo@@IEAAPEBXXZ @ 0x1801DFBBC (-UpdateHDRMetaData@CDirectFlipInfo@@IEAAPEBXXZ.c)
 */

__int64 __fastcall CDirectFlipInfo::Present(
        CDirectFlipInfo *this,
        struct IOverlaySwapChain *a2,
        unsigned int a3,
        __int128 *a4,
        __int64 a5)
{
  unsigned int v5; // r15d
  unsigned int v6; // ebx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD **); // rcx
  int v14; // eax
  __int64 v15; // rcx
  _QWORD *v16; // rbx
  __int64 (__fastcall *v17)(_QWORD *, __int64 *, _QWORD); // rsi
  __int64 (__fastcall ***v18)(_QWORD, _BYTE *); // rcx
  int v19; // r12d
  __int128 v20; // xmm0
  char *v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // esi
  const void *updated; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned int v28; // [rsp+20h] [rbp-81h]
  _QWORD *v29; // [rsp+60h] [rbp-41h] BYREF
  __int64 v30; // [rsp+68h] [rbp-39h] BYREF
  __int64 v31; // [rsp+70h] [rbp-31h] BYREF
  __int64 v32; // [rsp+78h] [rbp-29h]
  __int128 v33; // [rsp+80h] [rbp-21h] BYREF
  _BYTE v34[16]; // [rsp+90h] [rbp-11h] BYREF

  v5 = 0;
  v32 = a5;
  v6 = 0;
  if ( CDirectFlipInfo::PresentNeeded(this) )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2));
    wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>(
      &v31,
      v11);
    if ( !v31 )
    {
      v6 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, -2003292412, 0x2A9u);
      goto LABEL_23;
    }
    v30 = 0LL;
    v33 = 0LL;
    v13 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **))(*(int *)(*(_QWORD *)(v31 + 8) + 4LL) + v31 + 8);
    v29 = 0LL;
    v14 = (**v13)(v13, &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c, &v29);
    v6 = v14;
    if ( v14 < 0 )
    {
      v28 = 628;
    }
    else
    {
      if ( *((_DWORD *)this + 13) == 1 )
      {
        v21 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 8LL) + 8;
        v22 = (**(__int64 (__fastcall ***)(char *, _BYTE *))v21)(v21, v34);
        v20 = *a4;
        v19 = *(_DWORD *)(v22 + 8);
LABEL_11:
        v33 = v20;
        v23 = 1;
        if ( CDirectFlipInfo::UseSyncIntervalAndAllowTearing(this, a2) )
        {
          if ( !(*(unsigned int (__fastcall **)(_QWORD *))(*v29 + 112LL))(v29) )
          {
            v23 = 0;
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v29 + 128LL))(v29) )
              v5 = 512;
          }
        }
        updated = CDirectFlipInfo::UpdateHDRMetaData(this);
        v6 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *, _QWORD, _QWORD, _QWORD, __int64, int, _DWORD, const void *, __int128 *, __int64))(*(_QWORD *)a2 + 184LL))(
               a2,
               v23,
               v5,
               a3,
               v30,
               v19,
               *((_DWORD *)this + 18),
               updated,
               &v33,
               v32);
        if ( (v6 & 0x80000000) == 0 )
        {
          *((_BYTE *)this + 123) = 0;
          *((_BYTE *)this + 121) = 0;
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v30);
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v29);
LABEL_23:
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v31);
          return v6;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0LL, v6, 0x2A1u);
        goto LABEL_20;
      }
      v16 = v29;
      v17 = *(__int64 (__fastcall **)(_QWORD *, __int64 *, _QWORD))(*v29 + 144LL);
      if ( v30 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      v14 = v17(v16, &v30, 0LL);
      v6 = v14;
      if ( v14 >= 0 )
      {
        v18 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))((char *)v29 + *(int *)(v29[1] + 12LL) + 8);
        v19 = *(_DWORD *)((**v18)(v18, v34) + 8);
        v20 = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v29 + 48LL))(v29);
        goto LABEL_11;
      }
      v28 = 634;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, v28);
LABEL_20:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v30);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v29);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v31);
    if ( v6 == -2003304442 )
      *((_BYTE *)this + 125) = 1;
    return v6;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 8LL))(*(_QWORD *)this) )
  {
    v6 = -2003304309;
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0LL, -2003304309, 0x2B1u);
  }
  return v6;
}
