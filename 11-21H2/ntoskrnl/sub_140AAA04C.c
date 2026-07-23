/*
 * XREFs of sub_140AAA04C @ 0x140AAA04C
 * Callers:
 *     sub_140AA8ED0 @ 0x140AA8ED0 (sub_140AA8ED0.c)
 * Callees:
 *     sub_14065461C @ 0x14065461C (sub_14065461C.c)
 */

void __fastcall sub_140AAA04C(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // rdi
  __int64 v4; // rax

  if ( a2 )
  {
    v2 = 0;
    v3 = a2;
    v4 = 0LL;
    do
    {
      LOBYTE(a2) = *(_BYTE *)(v4 + a1);
      sub_14065461C(*((_DWORD *)qword_140D01468 + 14), a2);
      v4 = ++v2;
    }
    while ( v2 < v3 );
  }
}
