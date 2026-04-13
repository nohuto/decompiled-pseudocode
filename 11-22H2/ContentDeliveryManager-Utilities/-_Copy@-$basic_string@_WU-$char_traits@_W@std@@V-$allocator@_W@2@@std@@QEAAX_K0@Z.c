/*
 * XREFs of ?_Copy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K0@Z @ 0x180096728
 * Callers:
 *     ?insert@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0_W@Z @ 0x18001BEA0 (-insert@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0_W@Z.c)
 *     ?_Grow@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_N_K_N@Z @ 0x180096908 (-_Grow@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA_N_K_N@Z.c)
 * Callees:
 *     ??$_Allocate@G@std@@YAPEAG_KPEAG@Z @ 0x18004F59C (--$_Allocate@G@std@@YAPEAG_KPEAG@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x1800627B4 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?copy@?$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z @ 0x180062EFC (-copy@-$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z.c)
 */

const void **__fastcall std::wstring::_Copy(const void **a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  const void **v4; // rdi
  const void **v5; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rcx
  void *v9; // r15
  unsigned __int64 *v10; // r14
  const void *v11; // rdx
  const void **result; // rax
  void *v17; // [rsp+88h] [rbp+20h]

  v3 = a3;
  v4 = a1;
  v5 = a1;
  v6 = a2 | 7;
  if ( (a2 | 7) <= 0x7FFFFFFFFFFFFFFELL )
  {
    v7 = (unsigned __int64)a1[3];
    v8 = v7 >> 1;
    if ( v7 >> 1 > v6 / 3 )
    {
      v6 = v8 + v7;
      if ( v7 > 0x7FFFFFFFFFFFFFFELL - v8 )
        v6 = 0x7FFFFFFFFFFFFFFELL;
    }
  }
  else
  {
    v6 = a2;
  }
  try
  {
    v9 = std::_Allocate<unsigned short>(v6 + 1);
  }
  catch ( ... )
  {
    try
    {
      v17 = std::_Allocate<unsigned short>(a2 + 1);
    }
    catch ( ... )
    {
      std::wstring::_Tidy(a1, 1, 0LL);
      throw;
    }
    v4 = a1;
    v3 = a3;
    v6 = a2;
    v9 = v17;
    v5 = a1;
  }
  if ( v3 )
  {
    v10 = (unsigned __int64 *)(v4 + 3);
    if ( (unsigned __int64)v4[3] < 8 )
      v11 = v4;
    else
      v11 = *v4;
    std::char_traits<wchar_t>::copy(v9, v11, v3);
  }
  else
  {
    v10 = (unsigned __int64 *)(v5 + 3);
  }
  std::wstring::_Tidy(v4, 1, 0LL);
  *v4 = v9;
  *v10 = v6;
  result = v4;
  if ( v6 >= 8 )
    result = (const void **)v9;
  v4[2] = (const void *)v3;
  *((_WORD *)result + v3) = 0;
  return result;
}
