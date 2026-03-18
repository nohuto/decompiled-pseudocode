/*
 * XREFs of NtDxgkPinResources @ 0x1C01D8570
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1C01D91E0 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1C02CEAA0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 */

__int64 __fastcall NtDxgkPinResources(struct _D3DKMT_PINRESOURCES *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned int v3; // edi
  __int64 v4; // r8
  __int64 v5; // r9
  struct DXGPROCESS *Current; // rax

  v3 = DxgkPinResourcesInternal(a1);
  if ( v3 == -1073741811 )
  {
    if ( byte_1C0130157 )
    {
      Current = DXGPROCESS::GetCurrent(v2, v1, v4, v5);
      if ( !Current || (*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 216LL))() )
      {
        DxgCreateLiveDumpWithWdLogs(403LL, 2062LL);
        byte_1C0130157 = 0;
      }
    }
  }
  return v3;
}
