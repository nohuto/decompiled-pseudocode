/*
 * XREFs of ?TryGetProcessCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x180629434
 * Callers:
 *     ?TryGetMainClassNameFromJavaEngineProcess@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x180629308 (-TryGetMainClassNameFromJavaEngineProcess@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG_K@Z @ 0x180489DC4 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TryGetProcessCommandLine(__int64 a1, DWORD a2)
{
  char *v3; // rbx
  void **v4; // rax
  void **v5; // rsi
  ULONG ProcessInformationLength[4]; // [rsp+30h] [rbp-50h] BYREF
  char *v8; // [rsp+40h] [rbp-40h]
  void **v9; // [rsp+48h] [rbp-38h]
  __int128 v10; // [rsp+50h] [rbp-30h] BYREF
  __m128i si128; // [rsp+60h] [rbp-20h]

  *(_QWORD *)ProcessInformationLength = a1;
  v3 = (char *)OpenProcess(0x1000u, 0, a2);
  v8 = v3;
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    ProcessInformationLength[0] = 0;
    if ( NtQueryInformationProcess(v3, ProcessImageFileMapping|ProcessUserModeIOPL, 0LL, 0, ProcessInformationLength) == -1073741820 )
    {
      v4 = (void **)LocalAlloc(0x40u, ProcessInformationLength[0]);
      v5 = v4;
      v9 = v4;
      if ( v4
        && !NtQueryInformationProcess(
              v3,
              ProcessImageFileMapping|ProcessUserModeIOPL,
              v4,
              ProcessInformationLength[0],
              0LL) )
      {
        std::wstring::wstring((__int64)&v10, v5[1], (unsigned __int64)*(unsigned __int16 *)v5 >> 1);
        *(_OWORD *)a1 = v10;
        *(__m128i *)(a1 + 16) = si128;
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        LOWORD(v10) = 0;
        std::wstring::_Tidy_deallocate((__int64)&v10);
        LocalFree(v5);
LABEL_9:
        CloseHandle(v3);
        return a1;
      }
      if ( v5 )
        LocalFree(v5);
    }
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    goto LABEL_9;
  return a1;
}
