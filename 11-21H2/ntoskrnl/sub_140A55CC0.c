/*
 * XREFs of sub_140A55CC0 @ 0x140A55CC0
 * Callers:
 *     sub_140A56780 @ 0x140A56780 (sub_140A56780.c)
 * Callees:
 *     sub_140A55D44 @ 0x140A55D44 (sub_140A55D44.c)
 */

void __fastcall sub_140A55CC0(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v2 = 0LL;
    if ( (unsigned __int8)sub_140A55D44(a1, "XSAVEPOLICY", 11LL, &v2) )
      qword_140C0C6D8 = v2;
    if ( (unsigned __int8)sub_140A55D44(a1, "XSAVEREMOVEFEATURE", 18LL, &v2) && v2 )
      qword_140D01508 = v2 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (unsigned __int8)sub_140A55D44(a1, "XSAVEDISABLE", 12LL, &v2) )
      byte_140D01510 = v2 != 0;
  }
}
