/*
 * XREFs of ??$_Resize@U_Value_init_tag@std@@@?$vector@IV?$allocator@I@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18008F13C
 * Callers:
 *     ?SetVolumeData@ColorTransform@Engine@Spectre@@AEAAX_KAEBV?$vector@UColor@Math@Utils@Spectre@@V?$allocator@UColor@Math@Utils@Spectre@@@std@@@std@@W4NormalizationMode@123@@Z @ 0x180090F94 (-SetVolumeData@ColorTransform@Engine@Spectre@@AEAAX_KAEBV-$vector@UColor@Math@Utils@Spectre@@V-$.c)
 * Callees:
 *     ??$_Zero_range@PEAI@std@@YAPEAIQEAI0@Z @ 0x180054F0C (--$_Zero_range@PEAI@std@@YAPEAIQEAI0@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@IV?$allocator@I@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18008F210 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@IV-$allocator@I@std@@@std@@AEAAX_KAEBU_Val.c)
 */

__int64 __fastcall std::vector<unsigned int>::_Resize<std::_Value_init_tag>(__int64 *a1, unsigned __int64 a2)
{
  void *v2; // r9
  __int64 v4; // r8
  unsigned __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rbx

  v2 = (void *)a1[1];
  v4 = *a1;
  v5 = ((__int64)v2 - *a1) >> 2;
  if ( a2 >= v5 )
  {
    if ( a2 > v5 )
    {
      if ( a2 <= (a1[2] - v4) >> 2 )
      {
        v7 = (__int64)v2 + 4 * (a2 - v5);
        result = std::_Zero_range<unsigned int *>(v2, v7);
        a1[1] = v7;
      }
      else
      {
        return std::vector<unsigned int>::_Resize_reallocate<std::_Value_init_tag>(a1);
      }
    }
  }
  else
  {
    result = v4 + 4 * a2;
    a1[1] = result;
  }
  return result;
}
