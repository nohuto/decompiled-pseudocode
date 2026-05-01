/*
 * XREFs of ?TryExtractJavaMainClassNameFromCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x180629120
 * Callers:
 *     ?TryGetMainClassNameFromJavaEngineProcess@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x180629308 (-TryGetMainClassNameFromJavaEngineProcess@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetJavaOption@@YA?AW4JavaOption@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV23@@Z @ 0x180628C94 (-GetJavaOption@@YA-AW4JavaOption@@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ?IsJavawExe@@YA_NPEBG@Z @ 0x1806290E0 (-IsJavawExe@@YA_NPEBG@Z.c)
 *     ?TryGetNameFromPath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x180629384 (-TryGetNameFromPath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBV12@@Z.c)
 */

_QWORD *__fastcall TryExtractJavaMainClassNameFromCommandLine(_QWORD *a1, __int64 a2)
{
  const WCHAR *v2; // rax
  const unsigned __int16 **v4; // rax
  const unsigned __int16 *v5; // rdx
  const unsigned __int16 **v6; // r15
  int JavaOption; // r14d
  int v8; // esi
  _WORD **v9; // rdi
  _WORD *v10; // rdx
  __int64 NameFromPath; // rdi
  _QWORD *v12; // rcx
  __int64 v13; // rdi
  int pNumArgs; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v16[4]; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v17[4]; // [rsp+48h] [rbp-28h] BYREF

  v2 = (const WCHAR *)a2;
  *a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 7LL;
  pNumArgs = 0;
  if ( *(_QWORD *)(a2 + 24) >= 8uLL )
    v2 = *(const WCHAR **)a2;
  v4 = (const unsigned __int16 **)CommandLineToArgvW(v2, &pNumArgs);
  v6 = v4;
  if ( pNumArgs > 0 && IsJavawExe(*v4, v5) )
  {
    JavaOption = 0;
    v8 = 1;
    if ( pNumArgs > 1 )
    {
      v9 = (_WORD **)(v6 + 1);
      while ( 1 )
      {
        v10 = *v9;
        if ( **v9 != 45 )
          break;
        if ( JavaOption == 2 )
          goto LABEL_21;
        v16[0] = 0LL;
        v16[2] = 0LL;
        v16[3] = 7LL;
        std::wstring::wstring(v17, v10);
        JavaOption = GetJavaOption((__int64)v17, (__int64)v16);
        std::wstring::_Tidy_deallocate((__int64)v17);
        if ( JavaOption == 1 )
        {
          ++v8;
          ++v9;
        }
        else if ( JavaOption == 3 )
        {
          NameFromPath = TryGetNameFromPath(v17, v16);
          if ( a1 != (_QWORD *)NameFromPath )
          {
            std::wstring::_Tidy_deallocate((__int64)a1);
            *(_OWORD *)a1 = *(_OWORD *)NameFromPath;
            *((_OWORD *)a1 + 1) = *(_OWORD *)(NameFromPath + 16);
            *(_QWORD *)(NameFromPath + 16) = 0LL;
            *(_QWORD *)(NameFromPath + 24) = 7LL;
            *(_WORD *)NameFromPath = 0;
          }
          std::wstring::_Tidy_deallocate((__int64)v17);
          v12 = v16;
          goto LABEL_20;
        }
        std::wstring::_Tidy_deallocate((__int64)v16);
        ++v8;
        ++v9;
        if ( v8 >= pNumArgs )
          goto LABEL_21;
      }
      std::wstring::wstring(v17, v10);
      v13 = TryGetNameFromPath(v16, v17);
      if ( a1 != (_QWORD *)v13 )
      {
        std::wstring::_Tidy_deallocate((__int64)a1);
        *(_OWORD *)a1 = *(_OWORD *)v13;
        *((_OWORD *)a1 + 1) = *(_OWORD *)(v13 + 16);
        *(_QWORD *)(v13 + 16) = 0LL;
        *(_QWORD *)(v13 + 24) = 7LL;
        *(_WORD *)v13 = 0;
      }
      std::wstring::_Tidy_deallocate((__int64)v16);
      v12 = v17;
LABEL_20:
      std::wstring::_Tidy_deallocate((__int64)v12);
    }
  }
LABEL_21:
  LocalFree(v6);
  return a1;
}
