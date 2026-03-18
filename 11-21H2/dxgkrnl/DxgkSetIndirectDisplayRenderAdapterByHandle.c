/*
 * XREFs of DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1C02D48F4
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02FF2BC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkHandleIndirectEscape @ 0x1C0392C44 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C02B9AE4 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C02D4418 (DxgkSetIndirectDisplayRenderAdapter.c)
 */

__int64 __fastcall DxgkSetIndirectDisplayRenderAdapterByHandle(
        unsigned int a1,
        struct _LUID *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v6; // ebx
  struct DXGADAPTER *v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v8[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByHandle(v8, a1, a3, a4);
  if ( v8[0] )
  {
    v6 = DxgkSetIndirectDisplayRenderAdapter(v8[0], a2, 0LL);
  }
  else
  {
    WdLogSingleEntry2(3LL, a1, -1073741811LL);
    v6 = -1073741585;
  }
  DXGADAPTER_REFERENCE::Assign(v8, 0LL);
  return v6;
}
