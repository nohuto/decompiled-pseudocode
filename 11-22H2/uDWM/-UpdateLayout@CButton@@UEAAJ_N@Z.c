/*
 * XREFs of ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x180050280
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18000AE54 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x1800503F0 (-UpdateLayout@CVisual@@UEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x1800AC828 (-SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall CButton::UpdateLayout(CButton *this)
{
  int updated; // eax
  unsigned int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  CButton *v6; // r8
  __int64 v7; // rax
  struct tagPOINT v9; // [rsp+50h] [rbp+18h] BYREF

  updated = CVisual::UpdateLayout(this, 1);
  v3 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x87u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xCFu, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(CButton *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
    v4 = *((_QWORD *)this + 37);
    if ( *(_DWORD *)(v4 + 24) != *((_DWORD *)this + 32) || *(_DWORD *)(v4 + 28) != *((_DWORD *)this + 33) )
    {
      *(_QWORD *)(v4 + 24) = *((_QWORD *)this + 16);
      CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v4, 1, 0x2000u);
    }
    v5 = *((_QWORD *)this + 37);
    v6 = *(CButton **)(v5 + 80);
    if ( v6 == this )
    {
      v9 = 0LL;
      CAtlasedImage::SetOffset((CAtlasedImage *)v5, &v9);
    }
    else if ( *((_DWORD *)this + 30) != *(_DWORD *)(v5 + 16) || *((_DWORD *)this + 31) != *(_DWORD *)(v5 + 20) )
    {
      v7 = *((_QWORD *)this + 15);
      *(_DWORD *)(v5 + 96) |= 1u;
      *(_QWORD *)(v5 + 16) = v7;
      if ( v6 )
        (*(void (__fastcall **)(CButton *, __int64))(*(_QWORD *)v6 + 24LL))(v6, 0x2000LL);
    }
  }
  return v3;
}
