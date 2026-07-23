/*
 * XREFs of sub_1402AC270 @ 0x1402AC270
 * Callers:
 *     sub_14071E230 @ 0x14071E230 (sub_14071E230.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     ObWaitForMultipleObjects @ 0x1407A1400 (ObWaitForMultipleObjects.c)
 *     sub_1407A8900 @ 0x1407A8900 (sub_1407A8900.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402AC270(unsigned __int64 *a1)
{
  unsigned __int64 v1; // r8
  __int64 result; // rax

  v1 = *a1;
  if ( (*a1 & 0x1FFFE) >= 0xFFFE )
    return 0LL;
  result = 0x7FFF - (unsigned int)(unsigned __int16)(v1 >> 1);
  *a1 = v1 & 0xFFFFFFFFFFFE0001uLL | 0xFFFE;
  return result;
}
