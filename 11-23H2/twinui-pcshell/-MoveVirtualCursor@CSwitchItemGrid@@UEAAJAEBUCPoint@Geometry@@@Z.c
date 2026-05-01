/*
 * XREFs of ?MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z @ 0x1802E42B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009D7A4 (--4-$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HitTestRow@GridLayout@@QEAA_NAEBUCPoint@Geometry@@PEA_K@Z @ 0x1802E59BE (-HitTestRow@GridLayout@@QEAA_NAEBUCPoint@Geometry@@PEA_K@Z.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x18056E0A4 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 *     ??$As@UIMultitaskingViewGridElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x18057824C (--$As@UIMultitaskingViewGridElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV.c)
 *     ?GetNearestEdgeToPointDistanceSquared@CRect@Geometry@@QEBAJAEBUCPoint@2@@Z @ 0x1805791F4 (-GetNearestEdgeToPointDistanceSquared@CRect@Geometry@@QEBAJAEBUCPoint@2@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSwitchItemGrid::MoveVirtualCursor(__m128i *this, const struct Geometry::CPoint *a2)
{
  char *m128i_i8; // r15
  ElementHelpers **v6; // rdi
  _DWORD *v7; // r8
  int v8; // r9d
  int v9; // ebx
  int v10; // eax
  __m128i v11; // xmm1
  int v12; // r9d
  int v13; // edx
  int v14; // eax
  unsigned __int64 v15; // xmm0_8
  unsigned __int64 v16; // r8
  int v17; // eax
  LONG v18; // ecx
  LONG right; // eax
  LONG left; // r8d
  LONG v21; // ecx
  LONG bottom; // eax
  unsigned __int64 top; // r8
  ElementHelpers *v24; // rbx
  int v25; // r13d
  __int64 *v26; // rsi
  __int64 *v27; // r12
  _QWORD *v28; // rcx
  __int64 v29; // rax
  __m128i *v30; // rax
  __m128i v31; // xmm0
  int NearestEdgeToPointDistanceSquared; // eax
  ElementHelpers *v33; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v34; // [rsp+28h] [rbp-58h] BYREF
  int v35; // [rsp+30h] [rbp-50h] BYREF
  int v36; // [rsp+34h] [rbp-4Ch]
  ElementHelpers *v37; // [rsp+38h] [rbp-48h] BYREF
  _DWORD v38[4]; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT rc; // [rsp+50h] [rbp-30h] BYREF
  char v40[16]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  if ( this[-12].m128i_i64[1] )
  {
    m128i_i8 = this[-13].m128i_i8;
    (*(void (__fastcall **)(__m128i *, int *))(this[-13].m128i_i64[0] + 120))(this - 13, &v35);
    v6 = (ElementHelpers **)((char *)this[45].m128i_i64 + 4);
    if ( !this[45].m128i_i8[12] )
    {
      this[45].m128i_i8[12] = 1;
      v7 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)this[-3].m128i_i64[1] + 88LL))(
                       this[-3].m128i_i64[1],
                       v38);
      v8 = v7[1] + (v7[3] - v7[1]) / 2;
      LODWORD(v34) = (v7[2] - *v7) / 2 + *v7;
      HIDWORD(v34) = v8;
      LODWORD(v33) = v34 - v35;
      HIDWORD(v33) = v8 - v36;
      *v6 = v33;
    }
    v9 = MulDiv(*(_DWORD *)a2, this[-9].m128i_i32[0] - this[-10].m128i_i32[2], this[40].m128i_i32[0]);
    v10 = MulDiv(*((_DWORD *)a2 + 1), this[-9].m128i_i32[1] - this[-10].m128i_i32[3], this[40].m128i_i32[1]);
    v11 = this[37];
    v12 = v9 + *(_DWORD *)v6;
    *(_DWORD *)v6 = v12;
    v13 = v10 + this[45].m128i_i32[2];
    this[45].m128i_i32[2] = v13;
    v14 = v12;
    v15 = _mm_srli_si128(v11, 8).m128i_u64[0];
    if ( (int)v15 < v12 )
      v14 = v15;
    if ( v11.m128i_i32[0] <= v14 )
    {
      if ( (int)v15 < v12 )
        v12 = v15;
    }
    else
    {
      v12 = v11.m128i_i32[0];
    }
    *(_DWORD *)v6 = v12;
    v16 = HIDWORD(v11.m128i_i64[0]);
    v17 = HIDWORD(v15);
    if ( SHIDWORD(v15) >= v13 )
      v17 = v13;
    if ( v11.m128i_i32[1] <= v17 )
    {
      if ( SHIDWORD(v15) < v13 )
        v13 = HIDWORD(v15);
      LODWORD(v16) = v13;
    }
    this[45].m128i_i32[2] = v16;
    GridLayout::HitTestRow(
      (GridLayout *)&this[35],
      (const struct Geometry::CPoint *)((char *)this[45].m128i_i64 + 4),
      &v34);
    rc = *(struct tagRECT *)(this[38].m128i_i64[0] + 56 * v34 + 8);
    InflateRect(&rc, 0, this[35].m128i_i32[1]);
    v18 = *(_DWORD *)v6;
    right = *(_DWORD *)v6;
    if ( rc.right < *(_DWORD *)v6 )
      right = rc.right;
    left = rc.left;
    if ( rc.left <= right )
    {
      if ( rc.right < v18 )
        v18 = rc.right;
      left = v18;
    }
    *(_DWORD *)v6 = left;
    v21 = this[45].m128i_i32[2];
    bottom = v21;
    if ( rc.bottom < v21 )
      bottom = rc.bottom;
    top = (unsigned int)rc.top;
    if ( rc.top <= bottom )
    {
      if ( rc.bottom < v21 )
        v21 = rc.bottom;
      top = (unsigned int)v21;
    }
    this[45].m128i_i32[2] = top;
    v24 = 0LL;
    v33 = 0LL;
    v25 = 0x7FFFFFFF;
    v26 = (__int64 *)this[-12].m128i_i64[0];
    v27 = &v26[this[-12].m128i_i64[1]];
    if ( v26 != v27 )
    {
      while ( 1 )
      {
        v34 = 0LL;
        Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IMultitaskingViewGridElement>(v26, &v34);
        v28 = (_QWORD *)*v26;
        v29 = *(_QWORD *)*v26;
        v37 = *v6;
        LODWORD(v37) = v35 + (_DWORD)v37;
        HIDWORD(v37) += v36;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, ElementHelpers **))(v29 + 112))(v28, &v37) )
          break;
        v30 = (__m128i *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*v26 + 88LL))(*v26, v40);
        v31 = *v30;
        v38[0] = _mm_cvtsi128_si32(*v30) - v35;
        v38[2] = v31.m128i_i32[2] - v35;
        v38[3] = v31.m128i_i32[3] - v36;
        v38[1] = v31.m128i_i32[1] - v36;
        NearestEdgeToPointDistanceSquared = Geometry::CRect::GetNearestEdgeToPointDistanceSquared(
                                              (Geometry::CRect *)v38,
                                              (const struct Geometry::CPoint *)((char *)this[45].m128i_i64 + 4));
        if ( NearestEdgeToPointDistanceSquared < v25 )
        {
          v25 = NearestEdgeToPointDistanceSquared;
          Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink>::operator=((__int64 *)&v33, v26);
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v34);
        if ( ++v26 == v27 )
          goto LABEL_36;
      }
      Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink>::operator=((__int64 *)&v33, v26);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v34);
LABEL_36:
      v24 = v33;
    }
    if ( !ElementHelpers::IsSameElement(
            v24,
            (struct IMultitaskingViewElement *)this[-3].m128i_i64[1],
            (struct IMultitaskingViewElement *)top) )
      (*(void (__fastcall **)(char *, ElementHelpers *))(*(_QWORD *)m128i_i8 + 288LL))(m128i_i8, v24);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v33);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F2,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
}
