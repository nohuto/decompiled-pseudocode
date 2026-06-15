/*
 * XREFs of ??8@YA_NAEBU_GUID@@0@Z @ 0x1400552AC
 * Callers:
 *     ?GetDisplayName@CDisplayNode@@QEAAPEBDXZ @ 0x14005E3F0 (-GetDisplayName@CDisplayNode@@QEAAPEBDXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator==(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax

  v2 = *a1 - *a2;
  if ( *a1 == *a2 )
    v2 = a1[1] - a2[1];
  return v2 == 0;
}
