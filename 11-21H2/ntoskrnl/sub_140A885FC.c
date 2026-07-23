/*
 * XREFs of sub_140A885FC @ 0x140A885FC
 * Callers:
 *     sub_140A853A0 @ 0x140A853A0 (sub_140A853A0.c)
 *     sub_140A86510 @ 0x140A86510 (sub_140A86510.c)
 *     sub_140A896FC @ 0x140A896FC (sub_140A896FC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A885FC(__int64 a1)
{
  BOOL v1; // eax
  unsigned __int64 v2; // rcx

  v1 = 0;
  v2 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v2 )
    v1 = *(_DWORD *)v2 == -1393569779;
  return v2 & -(__int64)v1;
}
