/*
 * XREFs of PsGetProcessSignatureLevel @ 0x1403A1460
 * Callers:
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 * Callees:
 *     <none>
 */

char __fastcall PsGetProcessSignatureLevel(__int64 a1, _BYTE *a2)
{
  if ( a2 )
    *a2 = *(_BYTE *)(a1 + 2169);
  return *(_BYTE *)(a1 + 2168);
}
