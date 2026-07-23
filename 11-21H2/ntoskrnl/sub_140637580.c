/*
 * XREFs of sub_140637580 @ 0x140637580
 * Callers:
 *     sub_1409E4C24 @ 0x1409E4C24 (sub_1409E4C24.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140637580(_OWORD *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 (***v4)[2]; // rdx
  __int64 v5; // r9

  result = 17LL;
  if ( a2 <= 0x11 )
    result = a2;
  if ( (_DWORD)result )
  {
    v4 = &off_1400081A0;
    v5 = (unsigned int)result;
    do
    {
      result = (__int64)*v4++;
      *a1++ = *(_OWORD *)*(_QWORD *)(result + 16);
      --v5;
    }
    while ( v5 );
  }
  return result;
}
