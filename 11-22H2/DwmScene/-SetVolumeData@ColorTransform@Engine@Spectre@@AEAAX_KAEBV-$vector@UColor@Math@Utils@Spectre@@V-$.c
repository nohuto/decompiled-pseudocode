/*
 * XREFs of ?SetVolumeData@ColorTransform@Engine@Spectre@@AEAAX_KAEBV?$vector@UColor@Math@Utils@Spectre@@V?$allocator@UColor@Math@Utils@Spectre@@@std@@@std@@W4NormalizationMode@123@@Z @ 0x180090F94
 * Callers:
 *     ?Generate@ColorTransform@Engine@Spectre@@QEAAX_KV?$function@$$A6A?AUColor@Math@Utils@Spectre@@U1234@@Z@std@@@Z @ 0x18008FD48 (-Generate@ColorTransform@Engine@Spectre@@QEAAX_KV-$function@$$A6A-AUColor@Math@Utils@Spectre@@U1.c)
 *     ?Import@ColorTransform@Engine@Spectre@@QEAAXPEBX_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18009003C (-Import@ColorTransform@Engine@Spectre@@QEAAXPEBX_KAEBV-$basic_string@DU-$char_traits@D@std@@V-$a.c)
 * Callees:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@IV?$allocator@I@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18008F13C (--$_Resize@U_Value_init_tag@std@@@-$vector@IV-$allocator@I@std@@@std@@AEAAX_KAEBU_Value_init_tag.c)
 */

unsigned __int64 __fastcall Spectre::Engine::ColorTransform::SetVolumeData(__int64 *a1, __int64 a2, float **a3)
{
  float v3; // xmm2_4
  float *i; // rax
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm2_4
  _QWORD *v9; // r14
  unsigned __int64 v10; // rbp
  unsigned __int64 result; // rax
  __int64 v12; // r15
  int v13; // edi
  int v14; // ebx

  v3 = 0.0;
  a1[17] = a2;
  a1[18] = a2;
  a1[19] = a2 * a2 * a2;
  for ( i = *a3; i != a3[1]; i += 4 )
  {
    v6 = i[1];
    v7 = fmaxf(*i, v3);
    v8 = i[2];
    v3 = fmaxf(v8, fmaxf(v6, v7));
  }
  v9 = a1 + 14;
  std::vector<unsigned int>::_Resize<std::_Value_init_tag>(a1 + 14, a2 * a2 * a2);
  v10 = 0LL;
  result = ((char *)a3[1] - (char *)*a3) >> 4;
  if ( result )
  {
    v12 = 0LL;
    do
    {
      v13 = (int)_o_roundf();
      v14 = (int)_o_roundf();
      v12 += 16LL;
      *(_DWORD *)(*v9 + 4 * v10++) = (int)_o_roundf() | ((v14 | (v13 << 8)) << 8);
      result = ((char *)a3[1] - (char *)*a3) >> 4;
    }
    while ( v10 < result );
  }
  return result;
}
