/*
 * XREFs of ??$_Sort_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YAXPEAU?$pair@MH@0@0_JU?$less@X@0@@Z @ 0x18055FE5C
 * Callers:
 *     ??$_Sort_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YAXPEAU?$pair@MH@0@0_JU?$less@X@0@@Z @ 0x18055FE5C (--$_Sort_unchecked@PEAU-$pair@MH@std@@U-$less@X@2@@std@@YAXPEAU-$pair@MH@0@0_JU-$less@X@0@@Z.c)
 *     ?GetAssistantLight@AssistantLightFactory@Lighting@TwinUI@@SAJV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@Z @ 0x180560224 (-GetAssistantLight@AssistantLightFactory@Lighting@TwinUI@@SAJV-$ComPtr@UILampArray@Lights@Device.c)
 * Callees:
 *     ??$_Insertion_sort_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YAPEAU?$pair@MH@0@QEAU10@0U?$less@X@0@@Z @ 0x18055F8EC (--$_Insertion_sort_unchecked@PEAU-$pair@MH@std@@U-$less@X@2@@std@@YAPEAU-$pair@MH@0@QEAU10@0U-$l.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YA?AU?$pair@PEAU?$pair@MH@std@@PEAU12@@0@PEAU?$pair@MH@0@0U?$less@X@0@@Z @ 0x18055FA5C (--$_Partition_by_median_guess_unchecked@PEAU-$pair@MH@std@@U-$less@X@2@@std@@YA-AU-$pair@PEAU-$p.c)
 *     ??$_Pop_heap_hole_by_index@PEAU?$pair@MH@std@@U12@U?$less@X@2@@std@@YAXPEAU?$pair@MH@0@_J1$$QEAU10@U?$less@X@0@@Z @ 0x18055FD68 (--$_Pop_heap_hole_by_index@PEAU-$pair@MH@std@@U12@U-$less@X@2@@std@@YAXPEAU-$pair@MH@0@_J1$$QEAU.c)
 *     ??$_Sort_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YAXPEAU?$pair@MH@0@0_JU?$less@X@0@@Z @ 0x18055FE5C (--$_Sort_unchecked@PEAU-$pair@MH@std@@U-$less@X@2@@std@@YAXPEAU-$pair@MH@0@0_JU-$less@X@0@@Z.c)
 */

__int64 __fastcall std::_Sort_unchecked<std::pair<float,int> *,std::less<void>>(
        char *a1,
        char *a2,
        __int64 a3,
        char a4)
{
  signed __int64 v5; // rax
  char *v7; // rsi
  char *i; // rdi
  char *v9; // r14
  __int64 v10; // r9
  __int64 result; // rax
  __int64 j; // r14
  char *v13; // r14
  char *v14; // [rsp+30h] [rbp-28h] BYREF
  char *v15; // [rsp+38h] [rbp-20h]

  v5 = a2 - a1;
  v7 = a2;
  for ( i = a1; ; v5 = v7 - i )
  {
    result = v5 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( result <= 256 )
      return (__int64)std::_Insertion_sort_unchecked<std::pair<float,int> *,std::less<void>>((__int64)i, v7);
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked<std::pair<float,int> *,std::less<void>>(
      (unsigned __int64 *)&v14,
      (unsigned __int64)i,
      (unsigned __int64)v7);
    v9 = v15;
    LOBYTE(v10) = a4;
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)((v14 - i) & 0xFFFFFFFFFFFFFFF8uLL) >= (__int64)((v7 - v15) & 0xFFFFFFFFFFFFFFF8uLL) )
    {
      std::_Sort_unchecked<std::pair<float,int> *,std::less<void>>(v15, v7, a3, v10);
      v7 = v14;
    }
    else
    {
      std::_Sort_unchecked<std::pair<float,int> *,std::less<void>>(i, v14, a3, v10);
      i = v9;
    }
  }
  for ( j = (v7 - i) >> 4;
        j > 0;
        result = std::_Pop_heap_hole_by_index<std::pair<float,int> *,std::pair<float,int>,std::less<void>>(
                   (__int64)i,
                   j,
                   (v7 - i) >> 3) )
  {
    --j;
  }
  if ( (v7 - i) >> 3 >= 2 )
  {
    v13 = v7 - 8;
    do
    {
      *(_DWORD *)v13 = *(_DWORD *)i;
      *((_DWORD *)v13 + 1) = *((_DWORD *)i + 1);
      std::_Pop_heap_hole_by_index<std::pair<float,int> *,std::pair<float,int>,std::less<void>>(
        (__int64)i,
        0LL,
        (v13 - i) >> 3);
      v13 -= 8;
      result = (unsigned __int64)&v13[8LL - (_QWORD)i] & 0xFFFFFFFFFFFFFFF8uLL;
    }
    while ( result >= 16 );
  }
  return result;
}
