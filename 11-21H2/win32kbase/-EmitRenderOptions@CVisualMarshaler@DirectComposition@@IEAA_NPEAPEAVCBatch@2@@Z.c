/*
 * XREFs of ?EmitRenderOptions@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0011554
 * Callers:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0010FE0 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0011E08 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::EmitRenderOptions(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v4; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x8000) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x34uLL, &v5) )
  {
    v4 = (char *)v5;
    *(_DWORD *)v5 = 52;
    *(_OWORD *)(v4 + 4) = 0LL;
    *(_OWORD *)(v4 + 20) = 0LL;
    *(_OWORD *)(v4 + 36) = 0LL;
    *((_DWORD *)v4 + 1) = 425;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    if ( *((_DWORD *)this + 67) != -1 )
    {
      *((_DWORD *)v4 + 3) |= 2u;
      *((_DWORD *)v4 + 4) = *((_DWORD *)this + 67);
    }
    if ( *((_DWORD *)this + 66) != -1 )
    {
      *((_DWORD *)v4 + 3) |= 8u;
      *((_DWORD *)v4 + 5) = *((_DWORD *)this + 66);
    }
    if ( *((_DWORD *)this + 68) != -1 )
    {
      *((_DWORD *)v4 + 3) |= 0x10u;
      *((_DWORD *)v4 + 8) = *((_DWORD *)this + 68);
    }
    if ( *((_DWORD *)this + 69) != -1 )
    {
      *((_DWORD *)v4 + 3) |= 0x20u;
      *((_DWORD *)v4 + 9) = *((_DWORD *)this + 69);
    }
    if ( *((_DWORD *)this + 70) != -1 )
    {
      *((_DWORD *)v4 + 3) |= 0x40u;
      *((_DWORD *)v4 + 10) = *((_DWORD *)this + 70);
    }
    if ( *((_DWORD *)this + 71) != -1 )
    {
      *((_DWORD *)v4 + 3) |= 0x80u;
      *((_DWORD *)v4 + 11) = *((_DWORD *)this + 71);
    }
    *((_DWORD *)this + 4) &= ~0x8000u;
    return 1;
  }
  return 0;
}
