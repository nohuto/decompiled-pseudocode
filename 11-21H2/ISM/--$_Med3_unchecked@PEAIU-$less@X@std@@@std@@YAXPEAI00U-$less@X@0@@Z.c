/*
 * XREFs of ??$_Med3_unchecked@PEAIU?$less@X@std@@@std@@YAXPEAI00U?$less@X@0@@Z @ 0x1800EAAE8
 * Callers:
 *     ??$_Partition_by_median_guess_unchecked@PEAIU?$less@X@std@@@std@@YA?AU?$pair@PEAIPEAI@0@PEAI0U?$less@X@0@@Z @ 0x1800EAB1C (--$_Partition_by_median_guess_unchecked@PEAIU-$less@X@std@@@std@@YA-AU-$pair@PEAIPEAI@0@PEAI0U-$.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Med3_unchecked<unsigned int *,std::less<void>>(
        unsigned int *a1,
        unsigned int *a2,
        unsigned int *a3)
{
  unsigned int v3; // r9d
  __int64 result; // rax

  v3 = *a2;
  if ( *a2 < *a1 )
  {
    *a2 = *a1;
    *a1 = v3;
    v3 = *a2;
  }
  result = *a3;
  if ( (unsigned int)result < v3 )
  {
    *a3 = v3;
    *a2 = result;
    if ( (unsigned int)result < *a1 )
    {
      *a2 = *a1;
      *a1 = result;
    }
  }
  return result;
}
