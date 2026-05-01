/*
 * XREFs of ?CreateDragVisual@SwitchItemThumbnailElement@@UEAAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUCRect@Geometry@@PEAPEAUIUnknown@@@Z @ 0x180586590
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetInnerBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x180586A4C (-GetInnerBorderInfo@SwitchItemThumbnailElement@@IEAA-AUDCompThumbnailFrameInfo@@XZ.c)
 *     ?GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x180586AA0 (-GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA-AUDCompThumbnailFrameInfo@@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SwitchItemThumbnailElement::CreateDragVisual(
        SwitchItemThumbnailElement *this,
        struct ISwitchThumbnailFactory *a2,
        struct IDCompThumbnail *a3,
        struct tagRECT *a4,
        struct IUnknown **a5)
{
  int v9; // edx
  __int64 (__fastcall *v10)(struct ISwitchThumbnailFactory *, struct IDCompThumbnail *, _QWORD, __int64, int *, _QWORD, GUID *, __int64 *); // rbx
  _QWORD *v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rbx
  void (__fastcall *v16)(__int64, __int64, __int64); // r14
  __int64 OuterBorderInfo; // rsi
  __int64 InnerBorderInfo; // rax
  unsigned __int64 v19; // xmm0_8
  __int64 v21; // [rsp+50h] [rbp-31h] BYREF
  int v22[2]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v23[12]; // [rsp+60h] [rbp-21h] BYREF
  _BYTE v24[12]; // [rsp+6Ch] [rbp-15h] BYREF
  struct tagRECT rc; // [rsp+78h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  *a5 = 0LL;
  v9 = a4->bottom - a4->top;
  v22[0] = a4->right - a4->left;
  v22[1] = v9;
  v21 = 0LL;
  v10 = *(__int64 (__fastcall **)(struct ISwitchThumbnailFactory *, struct IDCompThumbnail *, _QWORD, __int64, int *, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 64LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v21);
  v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 38) + 40LL))(*((_QWORD *)this + 38));
  v12 = v10(a2, a3, *v11, 0x40000000LL, v22, 0LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v21);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 362LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemthumbnailelement.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_10;
  }
  v15 = v21;
  v16 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v21 + 216LL);
  OuterBorderInfo = SwitchItemThumbnailElement::GetOuterBorderInfo((char *)this - 272, v23);
  InnerBorderInfo = SwitchItemThumbnailElement::GetInnerBorderInfo((char *)this - 272, v24);
  v16(v15, InnerBorderInfo, OuterBorderInfo);
  rc = *a4;
  v19 = _mm_srli_si128((__m128i)rc, 8).m128i_u64[0];
  InflateRect(
    &rc,
    -(int)((double)((int)v19 - rc.left) * (1.0 - *((double *)this - 5)) * 0.5),
    -(int)((double)(HIDWORD(v19) - rc.top) * (1.0 - *((double *)this - 5)) * 0.5));
  v12 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v21 + 24LL))(
          v21,
          &rc,
          0LL,
          0LL);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 367LL;
    goto LABEL_9;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, __int64))(*(_QWORD *)v21 + 24LL))(v21, a4, 3LL);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 368LL;
    goto LABEL_9;
  }
  v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IUnknown **))v21)(
          v21,
          &GUID_00000000_0000_0000_c000_000000000046,
          a5);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 370LL;
    goto LABEL_9;
  }
LABEL_10:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v21);
  return v13;
}
