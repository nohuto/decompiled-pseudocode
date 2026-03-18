/*
 * XREFs of ?CalcDesktopClip@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAVCRegion@@@Z @ 0x18003EAD4
 * Callers:
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x18003E884 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 * Callees:
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_K@Z @ 0x180016D18 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003FA54 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800823C8 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008248C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

_DWORD *__fastcall COverlayContext::CalcDesktopClip(_QWORD *a1, gsl::details *a2, CRegion *a3)
{
  __int64 v5; // rax
  __int64 v6; // r11
  unsigned __int64 v7; // xmm0_8
  _DWORD *result; // rax
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  _DWORD *v12; // rdx
  _DWORD *v13; // r8
  _BYTE v14[80]; // [rsp+20h] [rbp-78h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  v5 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 168LL))(*a1);
  v6 = *(_QWORD *)(v5 + 20);
  v7 = _mm_srli_si128(*(__m128i *)(v5 + 20), 8).m128i_u64[0];
  if ( (int)v6 >= (int)v7 || SHIDWORD(v6) >= SHIDWORD(v7) )
  {
    result = *(_DWORD **)a3;
    **(_DWORD **)a3 = 0;
  }
  else
  {
    v12 = *(_DWORD **)a3;
    v13 = (_DWORD *)(*(_QWORD *)a3 + 28LL);
    *v12 = 2;
    *v13 = v6;
    v12[3] = HIDWORD(v6);
    v13[1] = v7;
    v12[4] = (_DWORD)v13 - ((_DWORD)v12 + 12);
    result = v12 + 5;
    v12[1] = v6;
    v12[2] = v7;
    v12[6] = (_DWORD)v13 - ((_DWORD)v12 + 20) + 8;
    v12[5] = HIDWORD(v7);
  }
  v9 = *(_DWORD *)a2;
  while ( --v9 >= 0 )
  {
    v10 = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, v9);
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v14, (const struct tagRECT *)(*(_QWORD *)v10 + 68LL));
    CRegion::Subtract(a3, (const struct CRegion *)v14);
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v14);
    result = (_DWORD *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, v9);
    if ( !*(_BYTE *)(*(_QWORD *)result + 179LL) )
    {
      v11 = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, v9);
      result = (_DWORD *)FastRegion::CRegion::Union(a3, *(const struct CRegion **)(*(_QWORD *)v11 + 160LL));
      if ( (int)result < 0 )
        ModuleFailFastForHRESULT((unsigned int)result, retaddr);
    }
  }
  return result;
}
