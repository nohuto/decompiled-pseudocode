/*
 * XREFs of ?WriteVirtualFunctionConfigBlock@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_WRITEVIRTUALFUNCTIONCONFIGBLOCK@@@Z @ 0x1C035F5F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::WriteVirtualFunctionConfigBlock(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_WRITEVIRTUALFUNCTIONCONFIGBLOCK *a2)
{
  WdLogSingleEntry1(3LL, a2->VirtualFunctionIndex);
  return 0LL;
}
