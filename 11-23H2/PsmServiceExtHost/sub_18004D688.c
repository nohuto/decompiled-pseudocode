/*
 * XREFs of sub_18004D688 @ 0x18004D688
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004D688(__int64 a1)
{
  char v1; // of
  __int64 v2; // rbx
  int v3; // ebp
  _DWORD *v4; // rsi

  if ( !v1 )
    JUMPOUT(0x18004D6ADLL);
  BYTE1(a1) -= __CFADD__(*v4, v3) + a1;
  return HamRpcSrvServicingQueryPackageStateEx(a1, v2);
}
