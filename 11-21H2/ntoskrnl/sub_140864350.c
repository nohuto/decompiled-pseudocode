/*
 * XREFs of sub_140864350 @ 0x140864350
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1407EEF7C @ 0x1407EEF7C (sub_1407EEF7C.c)
 */

__int64 __fastcall sub_140864350(__int64 a1, _DWORD *a2, int a3)
{
  unsigned int v3; // ebx
  char v5; // di

  v3 = 0;
  if ( a2 && a3 == 4 )
  {
    v5 = 0;
    sub_1402D66A8((ULONG_PTR)&qword_140C1F5C0);
    if ( *a2 == 1 )
    {
      if ( !byte_140C23314 )
      {
        v5 = 1;
        byte_140C23314 = 1;
      }
    }
    else if ( !*a2 && byte_140C23314 )
    {
      v5 = 1;
      byte_140C23314 = 0;
    }
    sub_1402935D0((ULONG_PTR)&qword_140C1F5C0);
    if ( v5 )
      sub_1407EEF7C(0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
