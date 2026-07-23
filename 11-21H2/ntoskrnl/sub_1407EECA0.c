/*
 * XREFs of sub_1407EECA0 @ 0x1407EECA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1407EED48 @ 0x1407EED48 (sub_1407EED48.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_1407EECA0(__int64 a1, __int64 a2, char a3)
{
  int v4; // ebx
  _BYTE *v5; // rsi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx

  if ( (_DWORD)a2 == 3 )
  {
    v4 = 2;
    v5 = &unk_140D3B0BD;
  }
  else
  {
    v5 = &unk_140D3B0BE;
    v4 = 1;
    if ( !dword_140D3B114 )
      goto LABEL_6;
  }
  if ( qword_140C5ADE0 && *v5 != a3 )
  {
    LOBYTE(a1) = a3;
    sub_14042A5E0(a1, a2);
    *v5 = a3;
  }
LABEL_6:
  sub_140A48330(a1);
  if ( a3 )
    v6 = v4 | dword_140C22704;
  else
    v6 = ~v4 & dword_140C22704;
  dword_140C22704 = v6;
  if ( !v6 )
    dword_140C22720 = dword_140C226E8;
  sub_1407EED48();
  return sub_140A47CF8(v8, v7);
}
