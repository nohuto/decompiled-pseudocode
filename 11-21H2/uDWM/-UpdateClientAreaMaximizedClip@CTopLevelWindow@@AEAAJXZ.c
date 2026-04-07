/*
 * XREFs of ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x1800181B0
 * Callers:
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18002A830 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18002DB10 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180034138 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetMaximizedClipMargins@CClientArea@@QEAAJPEBU_MARGINS@@@Z @ 0x180018308 (-SetMaximizedClipMargins@CClientArea@@QEAAJPEBU_MARGINS@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     floorf @ 0x180060ED4 (floorf.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientAreaMaximizedClip(CTopLevelWindow *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  float v4; // xmm7_4
  float v5; // xmm6_4
  int v6; // eax
  __int128 v8; // [rsp+30h] [rbp-48h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 62) )
  {
    v3 = *((_QWORD *)this + 94);
    v4 = *(float *)(v3 + 208);
    v5 = *(float *)(v3 + 212);
    v8 = *(_OWORD *)((char *)this + 660);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v4 - 1.0) & _xmm) >= 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v5 - 1.0) & _xmm) >= 0.0000011920929 )
    {
      LODWORD(v8) = (int)floorf((float)(int)v8 / v4);
      DWORD1(v8) = (int)floorf((float)SDWORD1(v8) / v4);
      DWORD2(v8) = (int)floorf((float)SDWORD2(v8) / v5);
      HIDWORD(v8) = (int)floorf((float)SHIDWORD(v8) / v5);
    }
    v6 = CClientArea::SetMaximizedClipMargins(
           *((CClientArea **)this + 62),
           (const struct _MARGINS *)((unsigned __int64)&v8 & -(__int64)((*((_BYTE *)this + 248) & 4) != 0)));
    v1 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1513u);
  }
  return v1;
}
