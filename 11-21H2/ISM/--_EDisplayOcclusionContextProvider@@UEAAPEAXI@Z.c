/*
 * XREFs of ??_EDisplayOcclusionContextProvider@@UEAAPEAXI@Z @ 0x18019E764
 * Callers:
 *     ??_EDisplayOcclusionContextProvider@@W7EAAPEAXI@Z @ 0x180053620 (--_EDisplayOcclusionContextProvider@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ @ 0x1800FA300 (-_Tidy@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ.c)
 *     ??1SystemContextProvider@@MEAA@XZ @ 0x1800FA590 (--1SystemContextProvider@@MEAA@XZ.c)
 */

DisplayOcclusionContextProvider *__fastcall DisplayOcclusionContextProvider::`vector deleting destructor'(
        DisplayOcclusionContextProvider *this,
        char a2)
{
  std::vector<DisplayOcclusionRect>::_Tidy((__int64)this + 88);
  SystemContextProvider::~SystemContextProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
