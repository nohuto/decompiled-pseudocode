/*
 * XREFs of ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x1800E6A30
 * Callers:
 *     ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x1800E684C (-RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z.c)
 * Callees:
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x180007928 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateTargetBounds@CIndirectSwapchainRenderTargetProxy@@QEAAJIIII@Z @ 0x1800C552C (-UpdateTargetBounds@CIndirectSwapchainRenderTargetProxy@@QEAAJIIII@Z.c)
 */

__int64 __fastcall CTopLevelWindow::SendBoundsToSwapchainTarget(CIndirectSwapchainRenderTargetProxy **this)
{
  unsigned int v1; // ebx
  unsigned int cxLeftWidth; // r11d
  unsigned int cyTopHeight; // r8d
  __int64 v5; // rax
  unsigned __int64 v6; // xmm0_8
  int v7; // edx
  unsigned int v8; // ecx
  CIndirectSwapchainRenderTargetProxy *v9; // rax
  float v10; // xmm2_4
  __int64 v11; // rcx
  unsigned __int64 v12; // xmm0_8
  int updated; // eax
  struct _MARGINS v15; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  if ( this[100] )
  {
    cxLeftWidth = 0;
    cyTopHeight = 0;
    if ( *((_BYTE *)this + 792) )
    {
      CTopLevelWindow::GetFrameMargins((CTopLevelWindow *)this, &v15);
      cxLeftWidth = v15.cxLeftWidth;
      cyTopHeight = v15.cyTopHeight;
      v5 = *((_QWORD *)this[94] + 6);
      v6 = _mm_srli_si128(*((__m128i *)this[94] + 3), 8).m128i_u64[0];
      v7 = v6 - v15.cxRightWidth - v5 - v15.cxLeftWidth;
      v8 = HIDWORD(v6) - HIDWORD(v5) - v15.cyBottomHeight - v15.cyTopHeight;
    }
    else
    {
      v9 = this[94];
      v10 = *((float *)v9 + 83);
      v11 = *((_QWORD *)v9 + 29);
      v12 = _mm_srli_si128(*(__m128i *)((char *)v9 + 232), 8).m128i_u64[0];
      v7 = (int)(float)((float)((int)v12 - v11) * v10);
      v8 = (int)(float)((float)(HIDWORD(v12) - HIDWORD(v11)) * v10);
    }
    updated = CIndirectSwapchainRenderTargetProxy::UpdateTargetBounds(this[100], cxLeftWidth, cyTopHeight, v7, v8);
    v1 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1758u);
  }
  return v1;
}
