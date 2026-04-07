/*
 * XREFs of ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18002A1F0
 * Callers:
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18001B9FC (-InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180024008 (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800381C0 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180038698 (-InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180046748 (-InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@W4CloneOptions@@@Z @ 0x1800468A0 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CSystemBackdropVisual@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800E16E4 (-InitializeVisualTreeClone@CSystemBackdropVisual@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CWindowTarget@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1801073C0 (-CloneVisualTree@CWindowTarget@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::InitializeVisualTreeClone(__int64 a1, __int64 *a2, unsigned int a3)
{
  unsigned int v6; // r14d
  __int64 v7; // rsi
  char v8; // bp
  char v9; // al
  char v10; // r8
  unsigned int v11; // eax
  double v12; // xmm5_8
  double v13; // xmm4_8
  char v14; // r8
  char v15; // cl
  _BYTE *v17; // rcx
  int v18; // eax
  int inserted; // eax
  CBaseObject *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  CBaseObject *v24; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  LODWORD(v7) = -1;
  v8 = 0;
LABEL_2:
  v24 = 0LL;
  while ( 1 )
  {
    v9 = v8;
    v10 = v8;
    if ( !v8 )
      v9 = 1;
    v8 = v9;
    v11 = v7 + 1;
    v7 = 0LL;
    if ( v10 )
      v7 = v11;
    if ( (unsigned int)v7 >= *(_DWORD *)(a1 + 72) )
      break;
    v17 = *(_BYTE **)(*(_QWORD *)(a1 + 48) + 8 * v7);
    if ( (v17[92] & 8) == 0 )
    {
      v18 = (*(__int64 (__fastcall **)(_BYTE *, CBaseObject **, _QWORD))(*(_QWORD *)v17 + 152LL))(v17, &v24, a3);
      v6 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x484u);
        goto LABEL_17;
      }
      inserted = VisualCollection::InsertRelative((VisualCollection *)(a2 + 4), v24, 0LL, 0, 1);
      v6 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x486u);
        goto LABEL_17;
      }
      v20 = v24;
      if ( v24 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v24 + 2, 0xFFFFFFFF) == 1 && v20 )
          (**(void (__fastcall ***)(CBaseObject *, __int64))v20)(v20, 1LL);
        goto LABEL_2;
      }
    }
  }
  if ( *(_DWORD *)(a1 + 120) != *((_DWORD *)a2 + 30) || *(_DWORD *)(a1 + 124) != *((_DWORD *)a2 + 31) )
  {
    a2[15] = *(_QWORD *)(a1 + 120);
    (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 24))(a2, 8LL);
  }
  (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 96))(a2, a1 + 128);
  v12 = *(double *)(a1 + 176);
  v13 = *(double *)(a1 + 184);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((double *)a2 + 22) - (float)v12) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((double *)a2 + 23) - (float)v13) & _xmm) > 0.0000011920929 )
  {
    v22 = *a2;
    *((double *)a2 + 22) = v12;
    *((double *)a2 + 23) = v13;
    (*(void (__fastcall **)(__int64 *, __int64))(v22 + 24))(a2, 16LL);
  }
  v14 = *((_BYTE *)a2 + 92);
  v15 = *(_BYTE *)(a1 + 92) & 1;
  if ( v15 != (v14 & 1) )
  {
    v23 = *a2;
    *((_BYTE *)a2 + 92) = v15 | v14 & 0xFE;
    (*(void (__fastcall **)(__int64 *, __int64))(v23 + 24))(a2, 16LL);
  }
  if ( *(_DWORD *)(a1 + 204) )
  {
    v21 = *a2;
    *(_OWORD *)((char *)a2 + 204) = *(_OWORD *)(a1 + 204);
    *(_OWORD *)((char *)a2 + 220) = *(_OWORD *)(a1 + 220);
    *(__int64 *)((char *)a2 + 236) = *(_QWORD *)(a1 + 236);
    (*(void (__fastcall **)(__int64 *, __int64))(v21 + 24))(a2, 64LL);
  }
  (*(void (__fastcall **)(__int64 *))(*a2 + 104))(a2);
LABEL_17:
  if ( v24 )
    CBaseObject::Release(v24);
  return v6;
}
