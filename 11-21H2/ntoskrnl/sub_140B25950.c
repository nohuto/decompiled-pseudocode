/*
 * XREFs of sub_140B25950 @ 0x140B25950
 * Callers:
 *     sub_140B25898 @ 0x140B25898 (sub_140B25898.c)
 * Callees:
 *     _strupr @ 0x1403E03F0 (_strupr.c)
 *     strstr @ 0x1403E0C40 (strstr.c)
 *     sub_140B25A50 @ 0x140B25A50 (sub_140B25A50.c)
 *     sub_140B25AE4 @ 0x140B25AE4 (sub_140B25AE4.c)
 */

char __fastcall sub_140B25950(unsigned int a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // r8
  unsigned int v7; // edi
  __int64 v8; // rbx
  __int64 v9; // rax
  char *v10; // rcx
  char *v11; // rax

  v5 = a2;
  LOBYTE(a2) = 0;
  if ( byte_140C54D4B == 1 )
    return 1;
  qword_140C48600 = 0LL;
  if ( a1 == 1 && !dword_140C54D50 )
  {
    v10 = *(char **)(v5 + 216);
    LOBYTE(a2) = !v10 || (v11 = strupr(v10)) == 0LL || strstr(v11, "BOOTLOGO") == 0LL;
  }
  byte_140C54D4A = VidInitialize(a1, a2, v5);
  if ( byte_140C54D4A )
  {
    if ( a1 != 1 )
      return byte_140C54D4A;
    byte_140C54D4B = 1;
    dword_140C54D4C = a3;
    if ( a3 > 7 )
    {
      dword_140C54D4C = 7;
    }
    else if ( !a3 )
    {
LABEL_10:
      sub_140B25AE4();
      dword_140C48610 = 0;
      dword_140C48614 = 10000;
      dword_140C48618 = 100;
      return byte_140C54D4A;
    }
    v7 = 1;
    do
    {
      v8 = v7 - 1;
      v9 = sub_140B25A50(v7++, (char *)&unk_140C485A0 + 4 * v8);
      qword_140C485C0[v8] = v9;
    }
    while ( v7 <= dword_140C54D4C );
    goto LABEL_10;
  }
  return 0;
}
