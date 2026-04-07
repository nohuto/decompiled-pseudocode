/*
 * XREFs of ?GetBorderMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x1800E4B70
 * Callers:
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800D0860 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::GetBorderMargins(CTopLevelWindow *this, struct _MARGINS *a2)
{
  char v2; // bl
  int v4; // r11d
  int v5; // r10d
  __m128i v6; // xmm0
  int v7; // ecx
  unsigned __int64 v8; // xmm0_8
  unsigned __int64 v9; // rax
  int v10; // ecx
  unsigned __int64 v11; // [rsp+0h] [rbp-18h]

  v2 = *((_BYTE *)this + 248);
  v4 = *((_DWORD *)this + 154);
  v5 = *((_DWORD *)this + 153);
  a2->cxLeftWidth = v5;
  v6 = *(__m128i *)((char *)this + 4 * (v2 & 4 | 0xA1LL));
  v7 = *((_DWORD *)this + 156);
  v11 = v6.m128i_i64[0];
  v8 = _mm_srli_si128(v6, 8).m128i_u64[0];
  a2->cyTopHeight = v8;
  if ( v4 <= 0 )
    v4 = *(_DWORD *)(*((_QWORD *)this + 94) + 112LL);
  v9 = HIDWORD(v11);
  if ( SHIDWORD(v11) <= v4 )
    LODWORD(v9) = v4;
  a2->cxRightWidth = v9;
  if ( (v2 & 4) != 0 )
  {
    a2->cxRightWidth = v9 + 1;
    v10 = v7 + 1;
  }
  else
  {
    v10 = v7 - HIDWORD(v8);
    a2->cyTopHeight = v8 + 1;
    a2->cxLeftWidth = v5 - v11;
  }
  a2->cyBottomHeight = v10;
}
