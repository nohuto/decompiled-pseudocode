/*
 * XREFs of ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z @ 0x1800419E0
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x1800404D0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 * Callees:
 *     ?DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z @ 0x180041B38 (-DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCanvasVisual::UpdateLayout(CCanvasVisual *this)
{
  int v2; // ebp
  const struct tagSIZE *v3; // rcx
  int v4; // eax
  char v5; // si
  __int64 v6; // rdi
  char v7; // al
  char v8; // cl
  unsigned int v9; // eax
  __int64 v10; // rcx
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
    v4 = (*(__int64 (__fastcall **)(CCanvasVisual *, tagSIZE *))(*(_QWORD *)this + 104LL))(this, &v13);
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x116u, 0LL);
LABEL_18:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x53u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x3Bu, 0LL);
      return (unsigned int)v2;
    }
    if ( v12.x != *((_DWORD *)this + 30) || v12.y != *((_DWORD *)this + 31) )
    {
      *((struct tagPOINT *)this + 15) = v12;
      (*(void (__fastcall **)(CCanvasVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 8LL);
    }
  }
  v5 = 0;
  LODWORD(v6) = -1;
  while ( 1 )
  {
    v7 = v5;
    v8 = v5;
    if ( !v5 )
      v7 = 1;
    v5 = v7;
    v9 = v6 + 1;
    v6 = 0LL;
    if ( v8 )
      v6 = v9;
    if ( (unsigned int)v6 >= *((_DWORD *)this + 18) )
      break;
    v10 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v6);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 24LL))(v10, 2LL);
  }
  if ( v2 < 0 )
    goto LABEL_18;
  (*(void (__fastcall **)(CCanvasVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 4LL);
  return (unsigned int)v2;
}
