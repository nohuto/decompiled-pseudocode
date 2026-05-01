/*
 * XREFs of ?GetAdjacentPosition@WindowRelativePositioning@@YA?AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApplicationViewCollection@@0@Z @ 0x1805B6988
 * Callers:
 *     ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180076DB0 (-_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@U.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x180060388 (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 *     ?_Tidy@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXXZ @ 0x1800B68BC (-_Tidy@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXXZ.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18013A728 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18013A89C (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@AEBU2@@Z @ 0x1804629C8 (--$_Emplace_reallocate@AEBUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAP.c)
 *     ??$_Emplace_reallocate@AEBUtagPOINT@@@?$vector@UtagPOINT@@V?$allocator@UtagPOINT@@@std@@@std@@QEAAPEAUtagPOINT@@QEAU2@AEBU2@@Z @ 0x1805B684C (--$_Emplace_reallocate@AEBUtagPOINT@@@-$vector@UtagPOINT@@V-$allocator@UtagPOINT@@@std@@@std@@QE.c)
 *     WindowRelativePositioning::_anonymous_namespace_::MoveBy @ 0x1805B6FE4 (WindowRelativePositioning--_anonymous_namespace_--MoveBy.c)
 */

// Hidden C++ exception states: #wind=9
struct tagRECT *__fastcall WindowRelativePositioning::GetAdjacentPosition(
        WindowRelativePositioning *this,
        __m128i *__return_ptr retstr,
        const struct tagRECT *a3,
        const struct tagSIZE *a4,
        const struct tagRECT *a5,
        __int64 a6,
        const unsigned __int16 *a7,
        struct tagRECT *a8)
{
  int ScaleFactorForRect; // eax
  int v13; // ecx
  __int64 v14; // rdi
  _BYTE *v15; // rsi
  _BYTE *v16; // rdi
  __int64 v17; // rbx
  _BYTE *v18; // rdi
  _BYTE *v19; // rdi
  _BYTE *v20; // rdi
  __int64 v21; // rax
  _DWORD *v22; // rdi
  __m128i *v23; // r8
  __int64 v24; // rdi
  _BYTE *v25; // rdi
  _BYTE *v26; // rdi
  _BYTE *v27; // rdi
  __m128i v28; // xmm0
  __int128 v29; // xmm6
  __int64 (__fastcall *v30)(const unsigned __int16 *, __int64, __int64 *); // rbx
  int v31; // eax
  _DWORD *v32; // r15
  _BYTE *v33; // r12
  _BYTE *v34; // r14
  __int64 *v35; // rbx
  __int64 v36; // rax
  _DWORD *v37; // rbx
  signed int v38; // r12d
  _OWORD *v39; // r9
  _DWORD *i; // rcx
  __int128 v42; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE *v43; // [rsp+48h] [rbp-C0h]
  __int64 *v44; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v48[2]; // [rsp+70h] [rbp-98h] BYREF
  int v49; // [rsp+80h] [rbp-88h]
  __int64 v50; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v51; // [rsp+90h] [rbp-78h]
  unsigned int v52; // [rsp+98h] [rbp-70h] BYREF
  __int64 *v53; // [rsp+A0h] [rbp-68h] BYREF
  __int64 *v54; // [rsp+A8h] [rbp-60h]
  __int128 v55; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE *v56; // [rsp+C0h] [rbp-48h]
  struct tagRECT *v57; // [rsp+C8h] [rbp-40h]
  unsigned int v58; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v59; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v60; // [rsp+E0h] [rbp-28h]
  __m128i v61; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v62; // [rsp+F8h] [rbp-10h] BYREF

  v50 = a6;
  v57 = a8;
  ScaleFactorForRect = GetScaleFactorForRect(a8);
  v49 = 10 * ScaleFactorForRect / 100;
  v13 = retstr->m128i_i32[2] - retstr->m128i_i32[0];
  v48[0] = (unsigned int)(a4[1].cx + a4->cx - v49 - a3->left);
  v44 = (__int64 *)(unsigned int)(v49 + v13 - a4->cx - a4[1].cx);
  LODWORD(v45) = 40 * ScaleFactorForRect / 100;
  HIDWORD(v45) = v45;
  LODWORD(v46) = 40 * ScaleFactorForRect / -100;
  HIDWORD(v46) = v45;
  *(_QWORD *)&v62 = __PAIR64__(v46, v45);
  v61.m128i_i32[0] = v46;
  v61.m128i_i32[1] = v46;
  v42 = 0LL;
  v43 = 0LL;
  if ( (_BYTE)a5 )
  {
    std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((const void **)&v42, 0LL, v48);
    v14 = *((_QWORD *)&v42 + 1);
    v15 = v43;
    if ( *((_BYTE **)&v42 + 1) == v43 )
    {
      std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((const void **)&v42, *((_BYTE **)&v42 + 1), &v44);
      v15 = v43;
      v16 = (_BYTE *)*((_QWORD *)&v42 + 1);
    }
    else
    {
      **((_QWORD **)&v42 + 1) = v44;
      v16 = (_BYTE *)(v14 + 8);
      *((_QWORD *)&v42 + 1) = v16;
    }
    if ( v16 == v15 )
    {
      std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((const void **)&v42, v16, &v46);
      v17 = v46;
      v15 = v43;
      v18 = (_BYTE *)*((_QWORD *)&v42 + 1);
    }
    else
    {
      v17 = v46;
      *(_QWORD *)v16 = v46;
      v18 = v16 + 8;
      *((_QWORD *)&v42 + 1) = v18;
    }
    if ( v18 == v15 )
    {
      std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((const void **)&v42, v18, &v45);
      v15 = v43;
      v19 = (_BYTE *)*((_QWORD *)&v42 + 1);
    }
    else
    {
      *(_QWORD *)v18 = v45;
      v19 = v18 + 8;
      *((_QWORD *)&v42 + 1) = v19;
    }
    if ( v19 == v15 )
    {
      std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((const void **)&v42, v19, &v61);
      v15 = v43;
      v20 = (_BYTE *)*((_QWORD *)&v42 + 1);
    }
    else
    {
      *(_QWORD *)v19 = v61.m128i_i64[0];
      v20 = v19 + 8;
      *((_QWORD *)&v42 + 1) = v20;
    }
    if ( v20 != v15 )
    {
      v21 = v62;
LABEL_16:
      *(_QWORD *)v20 = v21;
      v22 = v20 + 8;
      *((_QWORD *)&v42 + 1) = v22;
      goto LABEL_34;
    }
    v23 = (__m128i *)&v62;
  }
  else
  {
    std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((const void **)&v42, 0LL, &v44);
    v24 = *((_QWORD *)&v42 + 1);
    v15 = v43;
    if ( *((_BYTE **)&v42 + 1) == v43 )
    {
      std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((const void **)&v42, *((_BYTE **)&v42 + 1), v48);
      v15 = v43;
      v25 = (_BYTE *)*((_QWORD *)&v42 + 1);
    }
    else
    {
      **((_QWORD **)&v42 + 1) = v48[0];
      v25 = (_BYTE *)(v24 + 8);
      *((_QWORD *)&v42 + 1) = v25;
    }
    if ( v25 == v15 )
    {
      std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((const void **)&v42, v25, &v45);
      v17 = v45;
      v15 = v43;
      v26 = (_BYTE *)*((_QWORD *)&v42 + 1);
    }
    else
    {
      v17 = v45;
      *(_QWORD *)v25 = v45;
      v26 = v25 + 8;
      *((_QWORD *)&v42 + 1) = v26;
    }
    if ( v26 == v15 )
    {
      std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((const void **)&v42, v26, &v46);
      v15 = v43;
      v27 = (_BYTE *)*((_QWORD *)&v42 + 1);
    }
    else
    {
      *(_QWORD *)v26 = v46;
      v27 = v26 + 8;
      *((_QWORD *)&v42 + 1) = v27;
    }
    if ( v27 == v15 )
    {
      std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((const void **)&v42, v27, &v62);
      v15 = v43;
      v20 = (_BYTE *)*((_QWORD *)&v42 + 1);
    }
    else
    {
      *(_QWORD *)v27 = v62;
      v20 = v27 + 8;
      *((_QWORD *)&v42 + 1) = v20;
    }
    if ( v20 != v15 )
    {
      v21 = v61.m128i_i64[0];
      goto LABEL_16;
    }
    v23 = &v61;
  }
  std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((const void **)&v42, v20, v23);
  v22 = (_DWORD *)*((_QWORD *)&v42 + 1);
  v15 = v43;
LABEL_34:
  v28 = *retstr;
  v61 = v28;
  v61.m128i_i32[2] = _mm_cvtsi128_si32(v28) + a3->left;
  v61.m128i_i32[3] = a3->top + v28.m128i_i32[1];
  v29 = *(_OWORD *)WindowRelativePositioning::_anonymous_namespace_::MoveBy(
                     (unsigned int)v48,
                     (unsigned int)&v61,
                     v17,
                     HIDWORD(v17),
                     (__int64)v57);
  v47 = 0LL;
  v30 = *(__int64 (__fastcall **)(const unsigned __int16 *, __int64, __int64 *))(*(_QWORD *)a7 + 40LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v47);
  v31 = v30(a7, v50, &v47);
  v32 = (_DWORD *)v42;
  if ( v31 >= 0 )
  {
    v55 = 0LL;
    v33 = 0LL;
    v56 = 0LL;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
      (__int64)&v50,
      v47);
    v52 = 0;
    v53 = 0LL;
    v54 = &v50;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v52);
    v58 = v51;
    v59 = 0LL;
    v60 = &v50;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v58);
    v34 = (_BYTE *)*((_QWORD *)&v55 + 1);
    while ( v52 != v58 || v54 != v60 )
    {
      v35 = v53;
      v44 = v53;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v44);
      v62 = 0LL;
      v48[0] = 0LL;
      v36 = *v35;
      v48[0] = 0LL;
      if ( (*(int (__fastcall **)(__int64 *, GUID *, __int64 *))(v36 + 104))(
             v35,
             &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2,
             v48) >= 0
        && (*(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v48[0] + 24LL))(v48[0], &v62) >= 0 )
      {
        if ( v34 == v33 )
        {
          std::vector<tagRECT>::_Emplace_reallocate<tagRECT const &>((const void **)&v55, v34, &v62);
          v33 = v56;
          v34 = (_BYTE *)*((_QWORD *)&v55 + 1);
        }
        else
        {
          *(_OWORD *)v34 = v62;
          v34 += 16;
          *((_QWORD *)&v55 + 1) = v34;
        }
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v48);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v44);
      ++v52;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v52);
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v59);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v53);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v50);
    v37 = v32;
    if ( v32 != v22 )
    {
      v38 = v49;
      do
      {
        v39 = (_OWORD *)WindowRelativePositioning::_anonymous_namespace_::MoveBy(
                          (unsigned int)&v50,
                          (unsigned int)&v61,
                          *v37,
                          HIDWORD(*(_QWORD *)v37),
                          (__int64)v57);
        for ( i = (_DWORD *)v55; ; i += 4 )
        {
          if ( i == (_DWORD *)v34 )
          {
            *(_OWORD *)this = *v39;
            std::vector<tagRECT>::_Tidy((__int64 *)&v55);
            goto LABEL_55;
          }
          if ( (int)abs32(*i - *(_QWORD *)v39) < v38 && (int)abs32(i[1] - HIDWORD(*(_QWORD *)v39)) < v38 )
            break;
        }
        v37 += 2;
      }
      while ( v37 != v22 );
    }
    std::vector<tagRECT>::_Tidy((__int64 *)&v55);
  }
  *(_OWORD *)this = v29;
LABEL_55:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v47);
  if ( v32 )
    std::_Deallocate<16,0>(v32, (v15 - (_BYTE *)v32) & 0xFFFFFFFFFFFFFFF8uLL);
  return (struct tagRECT *)this;
}
