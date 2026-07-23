/*
 * XREFs of sub_140579060 @ 0x140579060
 * Callers:
 *     sub_1405788B0 @ 0x1405788B0 (sub_1405788B0.c)
 * Callees:
 *     sub_140551F2C @ 0x140551F2C (sub_140551F2C.c)
 *     sub_140553968 @ 0x140553968 (sub_140553968.c)
 */

__int64 __fastcall sub_140579060(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax

  result = (unsigned int)dword_140D0195C;
  *a2 = 0;
  if ( (_DWORD)result )
  {
    if ( !qword_140C2AAA8 || (_DWORD)result == 1 )
    {
      if ( !sub_140551F2C() )
        return 3221225473LL;
      *a2 = 1;
    }
    return sub_140553968(
             KiBugCheckData,
             qword_140C2BD88,
             xmmword_140C2BD90,
             *((__int64 *)&xmmword_140C2BD90 + 1),
             qword_140C2BDA0,
             qword_140C2BDC0,
             qword_140C2BDC8,
             qword_140C2BDD0 == 0);
  }
  return result;
}
