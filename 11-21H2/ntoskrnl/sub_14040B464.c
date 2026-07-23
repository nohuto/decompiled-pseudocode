/*
 * XREFs of sub_14040B464 @ 0x14040B464
 * Callers:
 *     sub_14040B1B0 @ 0x14040B1B0 (sub_14040B1B0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14040B464(_DWORD *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 result; // rax
  _DWORD *v5; // r10
  unsigned __int64 v6; // rax

  result = 0LL;
  v5 = a1;
  if ( (_DWORD)a4 )
  {
    a4 = (unsigned int)a4;
    do
    {
      v6 = (a3 & *(_DWORD *)((char *)v5 + a2 - (_QWORD)a1)) + (unsigned int)*v5 + result;
      *v5++ = v6;
      result = HIDWORD(v6);
      --a4;
    }
    while ( a4 );
  }
  return result;
}
