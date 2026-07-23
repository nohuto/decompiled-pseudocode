/*
 * XREFs of sub_140862300 @ 0x140862300
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140862300(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rsi

  if ( qword_140D06DB0 )
    return 3221225485LL;
  if ( (_DWORD)dword_140D06884 )
  {
    v2 = qword_140D088C0;
    v3 = (unsigned int)dword_140D06884;
    do
    {
      sub_14042A5E0(*v2++ + 35300, 256LL);
      --v3;
    }
    while ( v3 );
  }
  qword_140D06DB0 = a1;
  return 0LL;
}
