/*
 * XREFs of ?DxgkGetMaximumAdapterCountInSession@@YAKXZ @ 0x1C01E9FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?GetMaximumAdapterCountInSession@DXGGLOBAL@@QEAAKXZ @ 0x1C01BFEEC (-GetMaximumAdapterCountInSession@DXGGLOBAL@@QEAAKXZ.c)
 */

__int64 DxgkGetMaximumAdapterCountInSession(void)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL_GetGlobal();
  return DXGGLOBAL::GetMaximumAdapterCountInSession(Global);
}
