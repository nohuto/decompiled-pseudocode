/*
 * XREFs of sub_140A0F2FC @ 0x140A0F2FC
 * Callers:
 *     sub_140A0F208 @ 0x140A0F208 (sub_140A0F208.c)
 * Callees:
 *     sub_140361540 @ 0x140361540 (sub_140361540.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A0F4D4 @ 0x140A0F4D4 (sub_140A0F4D4.c)
 *     sub_140A0F68C @ 0x140A0F68C (sub_140A0F68C.c)
 */

__int64 __fastcall sub_140A0F2FC(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edi
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned int v6; // r14d
  unsigned int v7; // esi
  unsigned int v8; // eax
  unsigned int v9; // ebp
  int v10; // eax

  v1 = *(_QWORD *)(a1 + 64);
  v2 = 0;
  if ( v1 != -1 )
  {
    v4 = v1 + 1;
    *(_QWORD *)(a1 + 64) = v4;
    if ( v4 == 1 )
    {
      if ( *(_DWORD *)(a1 + 48) == 1 )
      {
        v5 = *(_QWORD *)(a1 + 56);
      }
      else
      {
        if ( (unsigned int)sub_140361540((__int64)&unk_140CE21C8, 0xE67B5Au, 0, 0, 6u) && qword_140D048F8 )
          sub_14042A5E0(15104858LL, &qword_14000FFC8);
        if ( *(_DWORD *)(a1 + 48) )
          return (unsigned int)-1073741811;
        v5 = *(_QWORD *)(a1 + 56);
      }
      v6 = *(_DWORD *)(v5 + 240);
      v7 = *(_DWORD *)(a1 + 72);
      if ( v7 < v6 )
      {
        v8 = *(_DWORD *)(a1 + 76);
        while ( 1 )
        {
          v9 = v7 >= v8;
          if ( *(_DWORD *)(a1 + 48) == 1 )
          {
            v10 = sub_140A0F68C(a1, v7 >= v8, 16LL * v7 + *(_QWORD *)(a1 + 56) + 248LL);
          }
          else
          {
            if ( (unsigned int)sub_140361540((__int64)&unk_140CE21C8, 0xE67B5Au, 0, 0, 6u) && qword_140D048F8 )
              sub_14042A5E0(15104858LL, &qword_14000FFC8);
            if ( *(_DWORD *)(a1 + 48) )
              return (unsigned int)-1073741811;
            v10 = sub_140A0F4D4(a1, v9, *(_QWORD *)(a1 + 56) + 4 * (3LL * v7 + 61));
          }
          v2 = v10;
          if ( v10 >= 0 )
          {
            *(_DWORD *)(a1 + 76) += v9;
            ++v7;
            ++*(_DWORD *)(a1 + 72);
            v8 = *(_DWORD *)(a1 + 76);
            if ( v7 < v6 )
              continue;
          }
          return v2;
        }
      }
    }
  }
  return v2;
}
