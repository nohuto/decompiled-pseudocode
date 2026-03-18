/*
 * XREFs of DxgkInitializeDpi @ 0x1C01D3860
 * Callers:
 *     <none>
 * Callees:
 *     ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x1C01D3878 (-SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ.c)
 */

__int64 __fastcall DxgkInitializeDpi(DpiPersistence *a1)
{
  return DpiPersistence::SaveHKCUPathInSessionData(a1);
}
