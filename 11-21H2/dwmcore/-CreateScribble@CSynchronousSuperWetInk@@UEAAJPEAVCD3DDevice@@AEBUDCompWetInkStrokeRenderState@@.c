/*
 * XREFs of ?CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x180240ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000E7B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180014EBC (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180025194 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 *     ??0CSuperWetInkScribble@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@PEAVCGenericInkTipPointSource@@IAEBUTelemetryInfo@CSuperWetInkScribbleBase@@@Z @ 0x180214F40 (--0CSuperWetInkScribble@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@PEAVCGenericInkTi.c)
 *     ??0?$com_ptr_t@VCSuperWetInkScribble@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCSuperWetInkScribble@@@Z @ 0x18024092C (--0-$com_ptr_t@VCSuperWetInkScribble@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCSuperWetInkScr.c)
 *     ?GetPerFrameDataId@CSynchronousSuperWetInk@@AEBAIXZ @ 0x180241404 (-GetPerFrameDataId@CSynchronousSuperWetInk@@AEBAIXZ.c)
 *     ?LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV?$shared_ptr@$$BY0A@E@std@@@Z @ 0x180241524 (-LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV-$shared_ptr@$$BY0A@E@std@@@Z.c)
 *     ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x180278D30 (-GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z.c)
 */

__int64 __fastcall CSynchronousSuperWetInk::CreateScribble(
        struct CGenericInkTipPointSource **this,
        struct CD3DDevice *a2,
        const struct DCompWetInkStrokeRenderState *a3,
        struct CComputeScribble **a4)
{
  int DirectInkFactory; // eax
  int v8; // esi
  unsigned int PerFrameDataId; // eax
  std::_Ref_count_base *v10; // rdi
  __int128 v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rcx
  struct CGenericInkTipPointSource *v14; // rax
  CSuperWetInkScribble *v15; // rax
  struct CComputeScribble *v16; // rax
  __int64 v17; // rcx
  struct CGenericInkTipPointSource *v18; // rax
  __int64 v19; // rcx
  struct CGenericInkTipPointSource *v20; // rax
  struct CComputeScribble *v22; // [rsp+40h] [rbp-C0h] BYREF
  struct IDCompositionDirectInkSuperWetStrokePartner *v23; // [rsp+48h] [rbp-B8h] BYREF
  struct IDCompositionDirectInkFactoryPartner *v24; // [rsp+50h] [rbp-B0h] BYREF
  struct CGenericInkTipPointSource **v25; // [rsp+58h] [rbp-A8h] BYREF
  std::_Ref_count_base *v26[2]; // [rsp+60h] [rbp-A0h]
  __int128 v27; // [rsp+70h] [rbp-90h] BYREF
  __int64 v28; // [rsp+80h] [rbp-80h]
  _OWORD v29[3]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v30; // [rsp+B8h] [rbp-48h]
  struct CGenericInkTipPointSource **v31; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v32[216]; // [rsp+C8h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v34; // [rsp+1B0h] [rbp+B0h]
  struct CGenericInkTipPointSource ***v35; // [rsp+1C0h] [rbp+C0h]
  int v36; // [rsp+1C8h] [rbp+C8h]
  int v37; // [rsp+1CCh] [rbp+CCh]
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  v24 = 0LL;
  DirectInkFactory = CD2DContext::GetDirectInkFactory((struct CD3DDevice *)((char *)a2 + 16), &v24);
  v8 = DirectInkFactory;
  if ( DirectInkFactory >= 0 )
  {
    PerFrameDataId = CSynchronousSuperWetInk::GetPerFrameDataId((CSynchronousSuperWetInk *)this);
    *(_OWORD *)v26 = 0LL;
    v8 = CSynchronousSuperWetInk::LookupPerFrameData((CSynchronousSuperWetInk *)this, PerFrameDataId);
    if ( v8 >= 0 )
    {
      v10 = v26[0];
      if ( *((_BYTE *)v26[0] + 12) )
      {
        v11 = *(_OWORD *)a3;
        v28 = *((_QWORD *)a3 + 2);
      }
      else
      {
        v28 = 0LL;
        v11 = *(_OWORD *)&_xmm;
      }
      v27 = v11;
      v12 = *(_QWORD *)v24;
      v23 = 0LL;
      v8 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *, char *, _QWORD, _QWORD, __int128 *, char *, struct IDCompositionDirectInkSuperWetStrokePartner **))(v12 + 56))(
             v24,
             (char *)v26[0] + 20,
             *((unsigned int *)v26[0] + 4),
             *(_QWORD *)v26[0],
             &v27,
             (char *)a3 + 28,
             &v23);
      if ( v8 >= 0 )
      {
        v33.Ptr = (ULONGLONG)this;
        v34 = 0LL;
        v14 = this[6];
        v33.Size = 2 - (*((_BYTE *)this + 168) != 0);
        if ( v14 )
          v34 = *((_QWORD *)v14 + 7);
        v15 = (CSuperWetInkScribble *)operator new(0x40uLL);
        if ( v15 )
          v15 = CSuperWetInkScribble::CSuperWetInkScribble(
                  v15,
                  v23,
                  this[11],
                  *((_DWORD *)v10 + 2),
                  (const struct CSuperWetInkScribbleBase::TelemetryInfo *)&v33);
        wil::com_ptr_t<CSuperWetInkScribble,wil::err_returncode_policy>::com_ptr_t<CSuperWetInkScribble,wil::err_returncode_policy>(
          &v22,
          (void (__fastcall ***)(_QWORD))v15);
        v16 = v22;
        v22 = 0LL;
        *a4 = v16;
        if ( *((_BYTE *)this + 168) )
        {
          if ( !*((_BYTE *)this + 288) )
          {
            if ( (unsigned int)dword_1803D0EB8 > 4 && tlgKeywordOn((__int64)&dword_1803D0EB8, 8LL) )
            {
              v37 = 0;
              v35 = &v25;
              v25 = this;
              v36 = 8;
              tlgWriteTransfer_EventWriteTransfer(v17, (unsigned __int8 *)dword_180372181, 0LL, 0LL, 3u, &v33);
            }
            v30 = 0LL;
            v18 = this[2];
            v29[0] = (unsigned __int64)this;
            memset(&v29[1], 0, 32);
            LODWORD(v30) = 2;
            (*(void (__fastcall **)(_QWORD, _OWORD *, _QWORD, wchar_t *))(**((_QWORD **)v18 + 82) + 8LL))(
              *((_QWORD *)v18 + 82),
              v29,
              0LL,
              word_18032C468);
            *((_BYTE *)this + 288) = 1;
          }
          if ( (unsigned int)dword_1803D0EB8 > 4 && tlgKeywordOn((__int64)&dword_1803D0EB8, 8LL) )
          {
            v37 = 0;
            v35 = &v25;
            v25 = this;
            v36 = 8;
            tlgWriteTransfer_EventWriteTransfer(v19, (unsigned __int8 *)dword_1803721CA, 0LL, 0LL, 3u, &v33);
          }
          memset_0(v32, 0, 0xD0uLL);
          v20 = this[2];
          v31 = this;
          (*(void (__fastcall **)(_QWORD, struct CGenericInkTipPointSource ***))(**((_QWORD **)v20 + 82) + 16LL))(
            *((_QWORD *)v20 + 82),
            &v31);
        }
        v8 = 0;
        wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)&v22);
      }
      else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
      {
        McTemplateU0q_EventWriteTransfer(v13, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, 8LL);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
    }
    if ( v26[1] )
      std::_Ref_count_base::_Decref(v26[1]);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCC,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\synchronoussuperwetink.cpp",
      (const char *)(unsigned int)DirectInkFactory);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
  return (unsigned int)v8;
}
