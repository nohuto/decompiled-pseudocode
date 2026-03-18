/*
 * XREFs of ?Pop@CDrawingContext@@UEAAJXZ @ 0x180075B00
 * Callers:
 *     <none>
 * Callees:
 *     ?PopLight@CDrawingContext@@AEAAJXZ @ 0x18000CF48 (-PopLight@CDrawingContext@@AEAAJXZ.c)
 *     ?PopClipBounds@CDrawingContext@@AEAAXXZ @ 0x1800214FC (-PopClipBounds@CDrawingContext@@AEAAXXZ.c)
 *     ?clear_region@?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180032B90 (-clear_region@-$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USinkEntry.c)
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x180032C5C (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180076214 (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180076804 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007E0A4 (-Top@CBaseClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$move@V?$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@0@0V12@@Z @ 0x1801D26A8 (--$move@V-$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@std@@V-$checked_array_iterato.c)
 *     ??$move@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@0@0V12@@Z @ 0x1801D278C (--$move@V-$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V-$checked_array_iterator.c)
 */

__int64 __fastcall CDrawingContext::Pop(CDrawingContext *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r13
  char *v5; // r14
  char *v6; // r15
  int v7; // eax
  unsigned int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int64 v18; // xmm1_8
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // r9
  signed __int64 v28; // r8
  unsigned __int64 v29; // rcx
  signed __int64 v30; // rdx
  __int64 v31; // r14
  __int64 v32; // rsi
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rax
  __int64 *v36; // r12
  unsigned __int64 v37; // r9
  signed __int64 v38; // r8
  unsigned __int64 v39; // rcx
  signed __int64 v40; // rdx
  unsigned __int64 v41; // rbx
  __int64 *v42; // r12
  __int64 v43; // rcx
  bool v44; // dl
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rcx
  int v49; // ecx
  float v50; // xmm3_4
  float v51; // xmm2_4
  float v52; // xmm1_4
  float v53; // xmm4_4
  int v54; // eax
  int v55; // eax
  float v56; // xmm6_4
  float v57; // xmm7_4
  float v58; // xmm0_4
  int v59; // eax
  unsigned int v60; // ecx
  __int64 v61; // rbx
  int v62; // eax
  unsigned int v63; // ecx
  __int64 v64; // [rsp+20h] [rbp-59h]
  void *v65; // [rsp+28h] [rbp-51h]
  unsigned int v66; // [rsp+30h] [rbp-49h]
  __int128 v67; // [rsp+38h] [rbp-41h] BYREF
  __int64 v68; // [rsp+48h] [rbp-31h]
  int v69; // [rsp+50h] [rbp-29h]
  __m128 v70; // [rsp+60h] [rbp-19h] BYREF
  signed __int64 v71; // [rsp+70h] [rbp-9h]
  char *v72; // [rsp+B0h] [rbp+37h]

  v7 = *((_DWORD *)this + 88);
  if ( v7 )
  {
    v9 = 0;
    v70 = *(__m128 *)(*((_QWORD *)this + 46) + 16LL * (unsigned int)(v7 - 1));
  }
  else
  {
    v9 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147467259, 0x129Au, 0LL);
  }
  v72 = v6;
  switch ( v70.m128_i32[0] )
  {
    case 9:
      v12 = *((_DWORD *)this + 88);
      if ( v12 )
        *((_DWORD *)this + 88) = v12 - 1;
      v13 = *((_DWORD *)this + 212);
      if ( v13 )
      {
        v14 = (unsigned int)(v13 - 1);
        v15 = 28 * v14;
        *((_DWORD *)this + 212) = v14;
        v16 = *((_QWORD *)this + 108);
        v17 = *(_OWORD *)(v15 + v16);
        v18 = *(_QWORD *)(v15 + v16 + 16);
        LODWORD(v16) = *(_DWORD *)(v15 + v16 + 24);
        v67 = v17;
        v69 = v16;
        v68 = v18;
      }
      *((_BYTE *)this + 336) = v69;
      *(_QWORD *)((char *)this + 316) = v67;
      *((_DWORD *)this + 86) = DWORD2(v67);
      *((_DWORD *)this + 81) = HIDWORD(v67);
      *((_QWORD *)this + 41) = v68;
      break;
    case 0xB:
      v20 = *((_DWORD *)this + 88);
      if ( v20 )
        *((_DWORD *)this + 88) = v20 - 1;
      --*((_DWORD *)this + 202);
      break;
    case 5:
      v21 = *((_DWORD *)this + 88);
      if ( v21 )
      {
        v22 = (unsigned int)(v21 - 1);
        *((_DWORD *)this + 88) = v22;
        v70 = *(__m128 *)(*((_QWORD *)this + 46) + 16 * v22);
      }
      if ( v70.m128_u64[1] )
      {
        v23 = *((_DWORD *)this + 112);
        if ( v23 )
          *((_DWORD *)this + 112) = v23 - 1;
      }
      v24 = *((_DWORD *)this + 96);
      if ( v24 )
        *((_DWORD *)this + 96) = v24 - 1;
      v25 = *((_DWORD *)this + 104);
      if ( v25 )
        *((_DWORD *)this + 104) = v25 - 1;
      break;
    default:
      switch ( v70.m128_i32[0] )
      {
        case 1:
          v10 = *((_DWORD *)this + 88);
          if ( v10 )
            *((_DWORD *)this + 88) = v10 - 1;
          v11 = *((_DWORD *)this + 792);
          if ( v11 )
            *((_DWORD *)this + 792) = v11 - 1;
          --*(_QWORD *)(*((_QWORD *)this + 111) - 184LL);
          *((_BYTE *)this + 8153) = 1;
          return v9;
        case 2:
          v6 = (char *)this - 16;
          v34 = *((_DWORD *)this + 88);
          if ( v34 )
            *((_DWORD *)v6 + 92) = v34 - 1;
          v35 = *((_QWORD *)v6 + 346);
          v5 = v6 + 896;
          v36 = (__int64 *)(v6 + 904);
          v66 = *(_DWORD *)(v35 - 24);
          if ( *(_BYTE *)(v35 - 4) )
          {
            v61 = *v36;
            v4 = 0x84BDA12F684BDA13uLL;
            CCpuClipAntialiasSinkContext::FlushDrawList(
              *(CCpuClipAntialiasSinkContext **)(*v36 - 16),
              (struct CDrawingContext *)v6,
              1749801491
            * (unsigned int)((__int64)(*(_QWORD *)(*(_QWORD *)(*v36 - 16) + 24LL)
                                     - *(_QWORD *)(*(_QWORD *)(*v36 - 16) + 16LL)) >> 4)
            - 1,
              a4);
            detail::vector_facade<CCpuClipAntialiasSinkContext::SinkEntry,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
              (__int64 *)(*(_QWORD *)(v61 - 16) + 16LL),
              0x84BDA12F684BDA13uLL
            * ((*(_QWORD *)(*(_QWORD *)(v61 - 16) + 24LL) - *(_QWORD *)(*(_QWORD *)(v61 - 16) + 16LL) - 432LL) >> 4),
              1LL);
          }
          v37 = *((_QWORD *)v6 + 345);
          v38 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)v6 + 346) - v37 - 40) >> 3);
          v39 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)v6 + 346) - v37) >> 3);
          v40 = v38 + 1;
          if ( v38 + 1 > v39 )
            goto LABEL_103;
          v4 = v37 + 8 * ((__int64)(*((_QWORD *)v6 + 346) - v37) >> 3);
          if ( v38 + 1 == v39 )
            goto LABEL_45;
          goto LABEL_104;
        case 3:
          CDrawingContext::PopClipBounds((CDrawingContext *)((char *)this - 16), (__int64)&_ImageBase, a3);
          return v9;
        case 4:
          v26 = *((_DWORD *)this + 88);
          if ( v26 )
            *((_DWORD *)this + 88) = v26 - 1;
          v27 = *((_QWORD *)this + 110);
          v28 = 0xD37A6F4DE9BD37A7uLL * ((*((_QWORD *)this + 111) - v27 - 184) >> 3);
          v29 = 0xD37A6F4DE9BD37A7uLL * ((*((_QWORD *)this + 111) - v27) >> 3);
          v30 = v28 + 1;
          if ( v28 + 1 <= v29 )
          {
            v31 = v27 + 8 * ((*((_QWORD *)this + 111) - v27) >> 3);
            if ( v30 == v29 )
              goto LABEL_34;
            if ( !v28 || v27 && v28 >= 0 && v29 >= v28 )
            {
              v70.m128_u64[0] = *((_QWORD *)this + 110);
              v70.m128_u64[1] = v29;
              v71 = v28;
              std::move<std::move_iterator<CScopedClipStack::ClippingScopeState *>,stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>>(
                &v67,
                v27 + 184 * v30,
                v31,
                &v70);
LABEL_34:
              v32 = v31 - 184;
              do
              {
                v33 = *(_QWORD *)(v32 + 168);
                if ( v33 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
                v32 += 184LL;
              }
              while ( v32 != v31 );
              *((_QWORD *)this + 111) -= 184LL;
              return v9;
            }
LABEL_110:
            _invalid_parameter_noinfo_noreturn();
          }
LABEL_103:
          std::_Xoverflow_error("overflow");
          __debugbreak();
LABEL_104:
          if ( v38 && (!v37 || v38 < 0 || v39 < v38) )
            goto LABEL_110;
          v70.m128_u64[0] = v37;
          v70.m128_u64[1] = v39;
          v71 = v38;
          std::move<std::move_iterator<CScopedClipStack::CpuClipStackState *>,stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>>(
            &v67,
            v37 + 40 * v40,
            v4,
            &v70,
            v64,
            v65,
            v66);
LABEL_45:
          v41 = v4 - 40;
          do
          {
            if ( *(_BYTE *)(v41 + 8) && *(_QWORD *)v41 )
              (***(void (__fastcall ****)(_QWORD, __int64))v41)(*(_QWORD *)v41, 1LL);
            *(_QWORD *)v41 = 0LL;
            *(_BYTE *)(v41 + 8) = 0;
            v41 += 40LL;
          }
          while ( v41 != v4 );
          v42 = (__int64 *)(v5 + 8);
          *((_QWORD *)v5 + 234) -= 40LL;
          --*(_QWORD *)(*((_QWORD *)v5 + 1) - 176LL);
          v43 = *((_QWORD *)v5 + 1);
          if ( v43 != *(_QWORD *)v5 && *(_QWORD *)(v43 - 176) )
            v44 = (unsigned __int64)v66 > *(_QWORD *)(*((_QWORD *)v5 + 234) - 24LL);
          else
            v44 = v66 != 0;
          v45 = *((_DWORD *)v5 + 580);
          if ( v45 )
            *((_DWORD *)v5 + 580) = v45 - 1;
          --*(_QWORD *)(v43 - 168);
          if ( !v44 )
            return v9;
          if ( v6[8170]
            && (!CScopedClipStack::HasCpuClipsInScope((CScopedClipStack *)v5)
             || !*(_QWORD *)(*((_QWORD *)v5 + 234) - 24LL)) )
          {
            v6[8170] = 0;
          }
          v46 = *v42;
          v47 = *v42;
          v70 = 0LL;
          v48 = v47 - *(_QWORD *)v5;
          if ( v48 && *(_QWORD *)(v46 - 184) )
          {
            v49 = *((_DWORD *)v5 + 572);
            if ( v49 )
            {
              v70 = *(__m128 *)(*((_QWORD *)v5 + 288) + 16LL * (unsigned int)(v49 - 1));
              v50 = v70.m128_f32[2];
              v51 = v70.m128_f32[1];
              v52 = v70.m128_f32[0];
              LODWORD(v53) = _mm_shuffle_ps(v70, v70, 255).m128_u32[0];
            }
            else
            {
              v52 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
              v51 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
              v50 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
              v53 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
            }
          }
          else
          {
            v52 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
            v51 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
            v50 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
            v53 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
            if ( !v48 )
            {
LABEL_62:
              if ( v50 > v52
                && v53 > v51
                && (v52 < *((float *)v6 + 57)
                 || v51 < *((float *)v6 + 58)
                 || *((float *)v6 + 59) < v50
                 || *((float *)v6 + 60) < v53) )
              {
                v6[8169] = 1;
              }
              return v9;
            }
          }
          if ( *(_QWORD *)(v46 - 168) )
          {
            v70 = 0LL;
            CBaseClipStack::Top(v5 + 2320, &v70);
            if ( v70.m128_f32[0] > v52 )
              v52 = v70.m128_f32[0];
            v56 = v51;
            if ( v70.m128_f32[1] > v51 )
            {
              v51 = v70.m128_f32[1];
              v56 = v70.m128_f32[1];
            }
            v57 = v50;
            if ( v50 > v70.m128_f32[2] )
            {
              v50 = v70.m128_f32[2];
              v57 = v70.m128_f32[2];
            }
            v58 = v53;
            if ( v53 > v70.m128_f32[3] )
            {
              v53 = v70.m128_f32[3];
              v58 = v70.m128_f32[3];
            }
            if ( v57 <= v52 || v58 <= v56 )
            {
              v52 = 0.0;
              v53 = 0.0;
              v50 = 0.0;
              v51 = 0.0;
            }
          }
          goto LABEL_62;
        case 6:
        case 7:
          v59 = CDrawingContext::PopLayer((CDrawingContext *)((char *)this - 16));
          v9 = v59;
          if ( v59 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v59, 0x12AEu, 0LL);
          return v9;
        case 8:
          v54 = *((_DWORD *)this + 88);
          if ( v54 )
            *((_DWORD *)this + 88) = v54 - 1;
          v55 = *((_DWORD *)this + 808);
          if ( v55 )
            *((_DWORD *)this + 808) = v55 - 1;
          return v9;
        case 0xA:
          v62 = CDrawingContext::PopLight((CDrawingContext *)((char *)this - 16));
          v9 = v62;
          if ( v62 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0, v62, 0x12C2u, 0LL);
          return v9;
        default:
          return v9;
      }
  }
  return v9;
}
