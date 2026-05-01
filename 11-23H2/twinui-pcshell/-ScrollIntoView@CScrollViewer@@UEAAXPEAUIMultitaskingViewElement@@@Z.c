/*
 * XREFs of ?ScrollIntoView@CScrollViewer@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x18058CDE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_ApplyScroll@CScrollViewer@@AEAAXH_N@Z @ 0x18058D2A8 (-_ApplyScroll@CScrollViewer@@AEAAXH_N@Z.c)
 *     ?_GetVisibleRect@CScrollViewer@@AEAA?AUCRect@Geometry@@XZ @ 0x18058D7A8 (-_GetVisibleRect@CScrollViewer@@AEAA-AUCRect@Geometry@@XZ.c)
 */

void __fastcall CScrollViewer::ScrollIntoView(CScrollViewer *this, struct IMultitaskingViewElement *a2)
{
  void (__fastcall *v4)(__m128i *, int *); // rsi
  char *v5; // r15
  _DWORD *v6; // rbx
  __m128i v7; // xmm0
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  __int64 VisibleRect; // rax
  int v12; // edx
  int v13; // [rsp+20h] [rbp-40h] BYREF
  int v14; // [rsp+24h] [rbp-3Ch]
  int v15; // [rsp+28h] [rbp-38h] BYREF
  int v16; // [rsp+2Ch] [rbp-34h]
  _BYTE v17[8]; // [rsp+30h] [rbp-30h] BYREF
  __m128i v18; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v19[16]; // [rsp+48h] [rbp-18h] BYREF

  v4 = (void (__fastcall *)(__m128i *, int *))Geometry::CRect::GetVerticalSegment;
  v5 = (char *)this - 208;
  if ( (*(unsigned __int8 (__fastcall **)(CScrollViewer *))(*(_QWORD *)this + 96LL))(this) )
    v4 = (void (__fastcall *)(__m128i *, int *))Geometry::CRect::GetHorizontalSegment;
  v6 = (_DWORD *)(*(__int64 (__fastcall **)(char *, _BYTE *))(*(_QWORD *)v5 + 120LL))((char *)this - 208, v17);
  v18 = *(__m128i *)(*(__int64 (__fastcall **)(struct IMultitaskingViewElement *, _BYTE *))(*(_QWORD *)a2 + 96LL))(
                      a2,
                      v19);
  v7 = v18;
  v8 = v6[1];
  v9 = -*v6;
  v18.m128i_i32[2] -= *v6;
  v10 = -v8;
  v18.m128i_i32[3] += v10;
  v18.m128i_i32[1] += v10;
  v18.m128i_i32[0] = v9 + _mm_cvtsi128_si32(v7);
  v4(&v18, &v13);
  VisibleRect = CScrollViewer::_GetVisibleRect((char *)this - 208);
  v4((__m128i *)VisibleRect, &v15);
  if ( v13 < v15 || v14 > v16 )
  {
    if ( v14 <= v16 )
    {
      if ( v13 >= v15 )
        return;
      v12 = *((_DWORD *)this + 12) - v13 + v15;
    }
    else
    {
      v12 = v16 + *((_DWORD *)this + 12) - v14;
    }
    CScrollViewer::_ApplyScroll((CScrollViewer *)((char *)this - 208), v12, 0);
  }
}
