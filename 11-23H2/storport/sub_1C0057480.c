/*
 * XREFs of sub_1C0057480 @ 0x1C0057480
 * Callers:
 *     sub_1C0058B88 @ 0x1C0058B88 (sub_1C0058B88.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1C0057480(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // cl
  _BYTE *v4; // rdx

  v3 = 0;
  if ( *(_DWORD *)(a3 + 24) == 1 )
  {
    v4 = *(_BYTE **)(*(_QWORD *)(a3 + 32) + 144LL);
    if ( v4[5] == 11 && v4[6] == 0xBE )
      v3 = v4[7] == 0xF0;
    return dword_1C0093470 == 1 || dword_1C0093470 != 0 && v3;
  }
  return v3;
}
