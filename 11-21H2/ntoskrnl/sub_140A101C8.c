/*
 * XREFs of sub_140A101C8 @ 0x140A101C8
 * Callers:
 *     sub_140A100D4 @ 0x140A100D4 (sub_140A100D4.c)
 * Callees:
 *     sub_140361540 @ 0x140361540 (sub_140361540.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A102DC @ 0x140A102DC (sub_140A102DC.c)
 *     sub_140A103F4 @ 0x140A103F4 (sub_140A103F4.c)
 */

__int64 __fastcall sub_140A101C8(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // edi
  int v6; // eax

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    v4 = v3 - 1;
    *(_QWORD *)(a1 + 64) = v4;
    if ( !v4 )
    {
      v5 = *(_DWORD *)(a1 + 72);
      while ( --v5 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 48) == 1 )
        {
          v6 = sub_140A103F4(a1, 16LL * v5 + *(_QWORD *)(a1 + 56) + 248LL);
        }
        else
        {
          if ( (unsigned int)sub_140361540((__int64)&unk_140CE21C8, 0xE67B5Au, 0, 0, 6u) && qword_140D048F8 )
            sub_14042A5E0(15104858LL, &qword_14000FFC8);
          if ( *(_DWORD *)(a1 + 48) )
            return (unsigned int)-1073741811;
          v6 = sub_140A102DC(a1, *(_QWORD *)(a1 + 56) + 4 * (3LL * v5 + 61));
        }
        v2 = v6;
        if ( v6 < 0 )
          return v2;
        --*(_DWORD *)(a1 + 72);
      }
    }
  }
  return v2;
}
