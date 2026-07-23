/*
 * XREFs of sub_140510F68 @ 0x140510F68
 * Callers:
 *     sub_1403B043C @ 0x1403B043C (sub_1403B043C.c)
 *     sub_1403B9214 @ 0x1403B9214 (sub_1403B9214.c)
 *     sub_1403D57DC @ 0x1403D57DC (sub_1403D57DC.c)
 *     sub_140508270 @ 0x140508270 (sub_140508270.c)
 *     sub_14051DB28 @ 0x14051DB28 (sub_14051DB28.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_140510F68(char a1, __int64 a2)
{
  __int64 *v2; // rbx
  int v3; // esi
  char v4; // bp
  unsigned int v5; // r14d
  __int64 *v7; // rdi

  v2 = (__int64 *)qword_140C4BCE0;
  v3 = 0;
  v4 = 0;
  v5 = a2;
  while ( v2 != &qword_140C4BCE0 )
  {
    v7 = v2;
    v2 = (__int64 *)*v2;
    if ( (v7[59] & 0x40) != 0 )
    {
      if ( !v3 || dword_140C4BE40 == 2 || *((_DWORD *)v7 + 119) == 6 )
      {
        LOBYTE(a2) = a1;
        v4 = sub_14042A5E0(v7[2], a2);
      }
      if ( v4 )
        sub_14042A5E0(v7[2], v5);
      ++v3;
    }
  }
}
