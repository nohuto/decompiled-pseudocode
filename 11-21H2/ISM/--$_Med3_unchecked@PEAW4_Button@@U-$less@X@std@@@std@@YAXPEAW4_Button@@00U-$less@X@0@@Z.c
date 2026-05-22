/*
 * XREFs of ??$_Med3_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@00U?$less@X@0@@Z @ 0x1801A6934
 * Callers:
 *     ??$_Partition_by_median_guess_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YA?AU?$pair@PEAW4_Button@@PEAW41@@0@PEAW4_Button@@0U?$less@X@0@@Z @ 0x1801A6968 (--$_Partition_by_median_guess_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YA-AU-$pair@PEAW4_But.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Med3_unchecked<enum _Button *,std::less<void>>(int *a1, int *a2, int *a3)
{
  int v3; // r9d
  __int64 result; // rax

  v3 = *a2;
  if ( *a2 < *a1 )
  {
    *a2 = *a1;
    *a1 = v3;
    v3 = *a2;
  }
  result = (unsigned int)*a3;
  if ( (int)result < v3 )
  {
    *a3 = v3;
    *a2 = result;
    if ( (int)result < *a1 )
    {
      *a2 = *a1;
      *a1 = result;
    }
  }
  return result;
}
