/*
 * XREFs of ?GetBounds@CSceneWorld@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802637CC
 * Callers:
 *     ?GetBounds@CSceneWorld@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011E330 (-GetBounds@CSceneWorld@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSceneWorld::GetBounds(__int64 a1, _DWORD *a2, __int64 a3)
{
  char v5; // al
  int v6; // xmm0_4

  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 192) + 192LL))(a1 - 192);
  *(_QWORD *)a3 = 0LL;
  if ( v5 )
  {
    *(_DWORD *)(a3 + 8) = 0;
    v6 = 0;
  }
  else
  {
    *(_DWORD *)(a3 + 8) = *a2;
    v6 = a2[1];
  }
  *(_DWORD *)(a3 + 12) = v6;
  return 0LL;
}
