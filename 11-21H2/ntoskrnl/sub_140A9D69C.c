/*
 * XREFs of sub_140A9D69C @ 0x140A9D69C
 * Callers:
 *     sub_140216974 @ 0x140216974 (sub_140216974.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 * Callees:
 *     sub_140A7F132 @ 0x140A7F132 (sub_140A7F132.c)
 *     sub_140A7F844 @ 0x140A7F844 (sub_140A7F844.c)
 *     sub_140A9DFBC @ 0x140A9DFBC (sub_140A9DFBC.c)
 */

void __fastcall sub_140A9D69C(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r11
  unsigned int v6; // r8d
  _DWORD *v8; // rax

  v5 = a4;
  v6 = 0;
  if ( a3 )
  {
    if ( (qword_140D01450 & 8) != 0 )
    {
      if ( (unsigned int)(dword_140C0D9F0 - 1) <= 9 )
      {
        v8 = &unk_140D01548;
        while ( *v8 != (_DWORD)a2 )
        {
          ++v6;
          ++v8;
          if ( v6 >= dword_140C0D9F0 )
            goto LABEL_9;
        }
      }
      LOBYTE(a4) = 1;
      sub_140A9DFBC(v5, a2, a3, a4);
    }
LABEL_9:
    if ( (qword_140D01450 & 0x20) != 0 || (qword_140D01450 & 0x10) != 0 || (qword_140D01450 & 0x800) != 0 )
    {
      sub_140A7F844(a1, a3);
      sub_140A7F132(a1, a3);
    }
  }
}
