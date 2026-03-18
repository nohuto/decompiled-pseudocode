/*
 * XREFs of ?GetHDR10MetaData@CGlobalCompositionSurfaceInfo@@UEBA_NPEAUDXGI_HDR_METADATA_HDR10@@@Z @ 0x180014CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CGlobalCompositionSurfaceInfo::GetHDR10MetaData(
        CGlobalCompositionSurfaceInfo *this,
        struct DXGI_HDR_METADATA_HDR10 *a2)
{
  char v2; // r8

  v2 = 1;
  if ( *((_DWORD *)this + 58) != 1 )
    return 0;
  *a2 = *(struct DXGI_HDR_METADATA_HDR10 *)((char *)this + 236);
  return v2;
}
