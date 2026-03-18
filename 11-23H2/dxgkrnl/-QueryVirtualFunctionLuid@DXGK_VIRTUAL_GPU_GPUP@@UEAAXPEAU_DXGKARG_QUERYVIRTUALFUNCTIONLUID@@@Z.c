/*
 * XREFs of ?QueryVirtualFunctionLuid@DXGK_VIRTUAL_GPU_GPUP@@UEAAXPEAU_DXGKARG_QUERYVIRTUALFUNCTIONLUID@@@Z @ 0x1C03719E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiQueryVirtualFunctionLuid@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYVIRTUALFUNCTIONLUID@@@Z @ 0x1C036D050 (-DdiQueryVirtualFunctionLuid@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYVIRTUALFUNCTIONLUID@@@Z.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_GPUP::QueryVirtualFunctionLuid(
        ADAPTER_RENDER **this,
        struct _DXGKARG_QUERYVIRTUALFUNCTIONLUID *a2,
        __int64 a3)
{
  ADAPTER_RENDER::DdiQueryVirtualFunctionLuid(this[1], a2, a3);
}
