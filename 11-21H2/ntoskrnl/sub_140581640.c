/*
 * XREFs of sub_140581640 @ 0x140581640
 * Callers:
 *     <none>
 * Callees:
 *     sub_140315D60 @ 0x140315D60 (sub_140315D60.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_1403941B0 @ 0x1403941B0 (sub_1403941B0.c)
 */

__int64 __fastcall sub_140581640(__int64 a1, ULONG_PTR a2, int a3)
{
  ULONG_PTR v5; // rax
  ULONG_PTR v6; // rbx

  if ( !a3 && (sub_140317A10(a2) & 0xC01) == 0x800 )
  {
    v5 = sub_140315D60(a2, 0LL, 0);
    v6 = v5;
    if ( v5 )
    {
      if ( (*(_BYTE *)(v5 + 34) & 0x10) == 0 && (*(_DWORD *)(v5 + 16) & 4) == 0 && !*(_WORD *)(v5 + 32) )
      {
        sub_140326870(v5, 0);
        sub_1403941B0(v6, 0);
        ++**(_QWORD **)(a1 + 168);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return 0LL;
}
