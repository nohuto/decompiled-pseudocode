/*
 * XREFs of ?PointerTypeToInputType@@YA?AW4InputType@@K_N@Z @ 0x18014E778
 * Callers:
 *     ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x180074B34 (-StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z.c)
 *     ?InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@_NPEAUPointerInputInfo@@@Z @ 0x180108648 (-InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@_NPEAUPointerInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PointerTypeToInputType(int a1, char a2)
{
  __int64 result; // rax
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  result = 2LL;
  v3 = a1 - 2;
  if ( !v3 )
    return 8LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 16LL;
  v5 = v4 - 1;
  if ( v5 )
  {
    if ( v5 == 1 )
      return a2 != 0 ? 0x1000000 : 32;
    else
      return 0LL;
  }
  return result;
}
