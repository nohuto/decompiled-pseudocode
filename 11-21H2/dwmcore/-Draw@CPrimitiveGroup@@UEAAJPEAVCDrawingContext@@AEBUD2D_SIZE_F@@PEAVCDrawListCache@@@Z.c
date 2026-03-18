/*
 * XREFs of ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D8DC4
 * Callers:
 *     ?Draw@CPrimitiveGroup@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180105BD0 (-Draw@CPrimitiveGroup@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18008A870 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800C9D10 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEBAXXZ @ 0x1800D8EF8 (-EtwLogCurrentState@CDrawingContext@@QEBAXXZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800DD36C (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0pq_EventWriteTransfer @ 0x180111782 (McTemplateU0pq_EventWriteTransfer.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801117F6 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x180194AE0 (McTemplateU0ffff_EventWriteTransfer.c)
 *     McTemplateU0ppffff_EventWriteTransfer @ 0x1802325AC (McTemplateU0ppffff_EventWriteTransfer.c)
 */

__int64 __fastcall CPrimitiveGroup::Draw(
        CPrimitiveGroup *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  struct CDrawListCache *v4; // r14
  char *v8; // rbx
  int v9; // edi
  int v10; // edx
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v15; // r14d
  __int64 v16; // rax
  struct IBitmapRealization *v17; // rbx
  __int64 v18; // rax
  int (__fastcall *v19)(struct IBitmapRealization *, __int64, __int64 *); // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // eax
  int v23; // r8d
  int v24; // r9d
  unsigned int v25; // eax
  __int64 v26; // [rsp+40h] [rbp-79h] BYREF
  struct IBitmapRealization *v27[2]; // [rsp+48h] [rbp-71h] BYREF
  _BYTE v28[64]; // [rsp+60h] [rbp-59h] BYREF
  int v29; // [rsp+A0h] [rbp-19h]
  __int128 v30; // [rsp+B0h] [rbp-9h] BYREF

  *(_QWORD *)&v30 = a4;
  v4 = a4;
  if ( g_LockAndReadPrimitiveGroupBitmaps )
  {
    v15 = 0;
    if ( *((_DWORD *)this - 130) )
    {
      do
      {
        v16 = *((_QWORD *)this - 68);
        v27[0] = 0LL;
        if ( (int)CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
                    (CCompositionSurfaceBitmap *)(*(_QWORD *)(v16 + 8LL * v15) + 72LL),
                    v27) >= 0 )
        {
          v17 = v27[0];
          v18 = *(_QWORD *)v27[0];
          v26 = 0LL;
          v19 = *(int (__fastcall **)(struct IBitmapRealization *, __int64, __int64 *))(v18 + 48);
          v20 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 40LL))((char *)a2 + 24);
          if ( v19(v17, v20, &v26) >= 0 )
          {
            v21 = *(int *)(*(_QWORD *)(v26 + 8) + 16LL) + v26 + 8;
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v21 + 24LL))(
              v21,
              ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
          }
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v26);
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v27);
        ++v15;
      }
      while ( v15 < *((_DWORD *)this - 130) );
      v4 = (struct CDrawListCache *)v30;
    }
    else
    {
      v4 = a4;
    }
  }
  if ( *((_QWORD *)this - 26) )
  {
    v8 = (char *)a2 + 24;
    v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 32LL))((char *)a2 + 24);
    CDrawingContext::EtwLogCurrentState(a2);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
      McTemplateU0ppffff_EventWriteTransfer(
        (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
        v10,
        v9,
        (_DWORD)this - 680,
        *((_DWORD *)this - 143),
        *((_DWORD *)this - 142),
        *((_DWORD *)this - 141),
        *((_DWORD *)this - 140));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v22 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v8 + 24LL))((char *)a2 + 24);
      McTemplateU0qq_EventWriteTransfer(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Start,
        18LL,
        v22);
    }
    v29 = 0;
    CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 368), (struct CMILMatrix *)v28);
    if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context[0], &EVTDESC_ETWGUID_DRAWEVENT) )
    {
      v30 = 0LL;
      *(_OWORD *)v27 = *(_OWORD *)((char *)this - 572);
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v28, (__int64)v27, (float *)&v30, v11);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        McTemplateU0ffff_EventWriteTransfer(
          (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
          (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
          v23,
          v24,
          SBYTE8(v30),
          SBYTE12(v30));
    }
    v12 = CContent::Draw((CPrimitiveGroup *)((char *)this - 584), a2, a3, v4);
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x68u);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
      McTemplateU0pq_EventWriteTransfer(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_PRIMITIVE_GROUP_SELF_OCCLUSION_INFO,
        (char *)this - 680,
        0xFFFFFFFFLL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v25 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v8 + 24LL))((char *)a2 + 24);
      McTemplateU0qq_EventWriteTransfer(Microsoft_Windows_Dwm_Core_Provider_Context, "3", 18LL, v25);
    }
  }
  return 0LL;
}
