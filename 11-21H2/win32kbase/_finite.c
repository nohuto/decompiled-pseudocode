/*
 * XREFs of _finite @ 0x1C00D63F4
 * Callers:
 *     ?SetFloatProperty@CAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00C37F0 (-SetFloatProperty@CAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?D3DXMatrixDeterminant@@YAHPEAMPEBU_D3DMATRIX@@@Z @ 0x1C01E0E4C (-D3DXMatrixDeterminant@@YAHPEAMPEBU_D3DMATRIX@@@Z.c)
 * Callees:
 *     <none>
 */

int __cdecl finite(double X)
{
  return ((*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) - 0x7FF0000000000000LL) >> 63;
}
