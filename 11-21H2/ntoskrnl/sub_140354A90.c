/*
 * XREFs of sub_140354A90 @ 0x140354A90
 * Callers:
 *     <none>
 * Callees:
 *     sub_140354B08 @ 0x140354B08 (sub_140354B08.c)
 *     sub_140354B48 @ 0x140354B48 (sub_140354B48.c)
 *     sub_140354BBC @ 0x140354BBC (sub_140354BBC.c)
 */

void __fastcall sub_140354A90(__int64 a1, __int64 a2)
{
  int v4; // eax

  if ( a2 )
  {
    *(_QWORD *)(a2 + 136) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)(a2 + 152) = *(_DWORD *)(a2 + 188) - 1;
    v4 = sub_140354BBC(a2, *(_QWORD *)(a2 + 120));
    *(_DWORD *)(a2 + 4) &= ~1u;
    *(_DWORD *)(a2 + 160) = v4;
    sub_140354B48(a1, a2, 0LL);
    sub_140354B08(a1, a2);
  }
}
