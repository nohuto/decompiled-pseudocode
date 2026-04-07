/*
 * XREFs of ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x180020020
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x18000E9E8 (-SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z.c)
 *     ?DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z @ 0x180020330 (-DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180021080 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CButton::UpdateLayout(CButton *this)
{
  int v2; // edi
  const struct tagSIZE *v3; // rcx
  int v4; // eax
  char v5; // bp
  __int64 v6; // rsi
  __int64 v7; // rcx
  CButton *v8; // r8
  __int64 v9; // rax
  __int64 v11; // rcx
  struct tagPOINT v12; // [rsp+50h] [rbp+8h] BYREF
  tagSIZE v13; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  v3 = (const struct tagSIZE *)*((_QWORD *)this + 3);
  if ( v3
    && CVisual::DoCanvasLayout(
         v3 + 16,
         (const struct _MARGINS *)((char *)this + 136),
         (const struct tagSIZE *)this + 16,
         &v12,
         &v13) )
  {
    v4 = (*(__int64 (__fastcall **)(CButton *, tagSIZE *))(*(_QWORD *)this + 96LL))(this, &v13);
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x116u);
LABEL_24:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x88u);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xB7u);
      return (unsigned int)v2;
    }
    if ( v12.x != *((_DWORD *)this + 30) || v12.y != *((_DWORD *)this + 31) )
    {
      *((struct tagPOINT *)this + 15) = v12;
      (*(void (__fastcall **)(CButton *, __int64))(*(_QWORD *)this + 24LL))(this, 8LL);
    }
  }
  v5 = 0;
  LODWORD(v6) = -1;
  while ( 1 )
  {
    if ( v5 )
    {
      v6 = (unsigned int)(v6 + 1);
    }
    else
    {
      v5 = 1;
      v6 = 0LL;
    }
    if ( (unsigned int)v6 >= *((_DWORD *)this + 18) )
      break;
    v11 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v6);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 24LL))(v11, 2LL);
  }
  if ( v2 < 0 )
    goto LABEL_24;
  (*(void (__fastcall **)(CButton *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
  v7 = *((_QWORD *)this + 37);
  if ( *(_DWORD *)(v7 + 24) != *((_DWORD *)this + 32) || *(_DWORD *)(v7 + 28) != *((_DWORD *)this + 33) )
  {
    *(_QWORD *)(v7 + 24) = *((_QWORD *)this + 16);
    CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v7, 1u, 0x2000u);
    v7 = *((_QWORD *)this + 37);
  }
  v8 = *(CButton **)(v7 + 80);
  if ( v8 == this )
  {
    v12 = 0LL;
    CAtlasedImage::SetOffset((struct tagPOINT *)v7, &v12);
  }
  else if ( *((_DWORD *)this + 30) != *(_DWORD *)(v7 + 16) || *((_DWORD *)this + 31) != *(_DWORD *)(v7 + 20) )
  {
    v9 = *((_QWORD *)this + 15);
    *(_DWORD *)(v7 + 96) |= 1u;
    *(_QWORD *)(v7 + 16) = v9;
    if ( v8 )
      (*(void (__fastcall **)(CButton *, __int64))(*(_QWORD *)v8 + 24LL))(v8, 0x2000LL);
  }
  return (unsigned int)v2;
}
