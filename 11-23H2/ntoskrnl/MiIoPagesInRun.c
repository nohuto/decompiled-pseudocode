/*
 * XREFs of MiIoPagesInRun @ 0x140360368
 * Callers:
 *     MiFillSystemPtes @ 0x14027EB50 (MiFillSystemPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIoPagesInRun(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r9
  _QWORD *v3; // r8

  v2 = 0LL;
  v3 = (_QWORD *)(48 * a1 - 0x21FFFFFFFFD8LL);
  do
  {
    if ( a1 <= qword_140C65BA0 && ((*v3 >> 54) & 1) != 0 )
      break;
    ++v2;
    if ( !--a2 )
      break;
    ++a1;
    v3 += 6;
  }
  while ( (a1 & 0x1FF) != 0 );
  return v2;
}
