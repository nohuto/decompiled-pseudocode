/*
 * XREFs of sub_1403DA6C0 @ 0x1403DA6C0
 * Callers:
 *     KdPowerTransitionEx @ 0x1403DA590 (KdPowerTransitionEx.c)
 *     sub_1405C7D34 @ 0x1405C7D34 (sub_1405C7D34.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403DA6C0(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 33600);
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 3) )
    {
      *(_DWORD *)(v1 + 12) = dword_140CE2048 != 0;
      result = *(_QWORD *)(a1 + 33600);
      *(_BYTE *)(result + 3) = 0;
      *(_QWORD *)(result + 56) = 0LL;
    }
  }
  return result;
}
