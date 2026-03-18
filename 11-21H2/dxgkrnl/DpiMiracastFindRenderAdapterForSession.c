/*
 * XREFs of DpiMiracastFindRenderAdapterForSession @ 0x1C01EEE34
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C0020F80 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0064E20 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C0064FA0 (DpiIndirectCbOpmSetSrmList.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C01EECBC (DxgkMiracastQueryMiracastSupportInternal.c)
 * Callees:
 *     DpiGetFdoFromDevice @ 0x1C001BAFC (DpiGetFdoFromDevice.c)
 */

__int64 DpiMiracastFindRenderAdapterForSession()
{
  __int64 result; // rax
  int v1; // edx

  result = DpiGetFdoFromDevice(qword_1C0130740);
  if ( result )
  {
    v1 = *(_DWORD *)(result + 236);
    if ( v1 != 2 && (*(_DWORD *)(result + 240) != 2 || ((v1 - 3) & 0xFFFFFFFC) != 0 || v1 == 4) )
    {
      WdLogSingleEntry0(3LL);
      return 0LL;
    }
  }
  return result;
}
