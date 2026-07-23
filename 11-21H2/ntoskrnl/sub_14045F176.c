/*
 * XREFs of sub_14045F176 @ 0x14045F176
 * Callers:
 *     sub_1402956D0 @ 0x1402956D0 (sub_1402956D0.c)
 *     sub_140296110 @ 0x140296110 (sub_140296110.c)
 *     sub_140297D10 @ 0x140297D10 (sub_140297D10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14045F176(int a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( (a1 & 0x10040) == 0x10040 )
  {
    result = 0x40000000000009FFLL;
  }
  else
  {
    result = 1048640LL;
    if ( (a1 & 0x100040) != 0x100040 )
      return result;
    result = 0x4000000000060DFFLL;
  }
  *a2 &= result;
  return result;
}
