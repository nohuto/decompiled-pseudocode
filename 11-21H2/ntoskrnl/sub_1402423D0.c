/*
 * XREFs of sub_1402423D0 @ 0x1402423D0
 * Callers:
 *     sub_140242104 @ 0x140242104 (sub_140242104.c)
 *     sub_14024215C @ 0x14024215C (sub_14024215C.c)
 *     sub_1402421DC @ 0x1402421DC (sub_1402421DC.c)
 *     sub_140AA1B9C @ 0x140AA1B9C (sub_140AA1B9C.c)
 *     sub_140AA1C3C @ 0x140AA1C3C (sub_140AA1C3C.c)
 * Callees:
 *     sub_14042AB50 @ 0x14042AB50 (sub_14042AB50.c)
 */

__int64 __fastcall sub_1402423D0(_DWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // r8d
  int v6; // ecx

  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    return sub_14042AB50(a1, a2, a3, a1);
  result = a2;
  if ( (a2 & 6) == 4 )
  {
    v5 = a1[6];
    v6 = a1[7];
    _xsave(a1, a2);
    a1[6] = v5;
    a1[7] = v6;
  }
  else
  {
    _xsave(a1, a2);
  }
  return result;
}
