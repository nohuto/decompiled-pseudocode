/*
 * XREFs of ?GetCompositionSurfaceInfoByLuid@CCompositionSurfaceManager@@QEAAPEAVCCompositionSurfaceInfo@@U_LUID@@@Z @ 0x180031E2C
 * Callers:
 *     ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ @ 0x18002E9C0 (-ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ.c)
 *     ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x180094B98 (-GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfa.c)
 * Callees:
 *     <none>
 */

struct CCompositionSurfaceInfo *__fastcall CCompositionSurfaceManager::GetCompositionSurfaceInfoByLuid(
        CCompositionSurfaceManager *this,
        struct _LUID a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = a2;
  v2 = 0LL;
  Buffer[1] = 0LL;
  v3 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
  if ( v3 )
    return (struct CCompositionSurfaceInfo *)v3[1];
  return (struct CCompositionSurfaceInfo *)v2;
}
