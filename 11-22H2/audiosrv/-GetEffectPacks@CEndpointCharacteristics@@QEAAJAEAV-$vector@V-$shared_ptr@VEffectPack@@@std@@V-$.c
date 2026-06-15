/*
 * XREFs of ?GetEffectPacks@CEndpointCharacteristics@@QEAAJAEAV?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@@Z @ 0x18014C94C
 * Callers:
 *     ?GetEffectPackDescriptorsForEndpoint@CPolicyConfig@@QEAAJPEBGPEAPEAUEffectPackDescriptor@@PEAI@Z @ 0x180115CA8 (-GetEffectPackDescriptorsForEndpoint@CPolicyConfig@@QEAAJPEBGPEAPEAUEffectPackDescriptor@@PEAI@Z.c)
 * Callees:
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180025520 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VEffectPack@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VEffectPack@@@std@@@0@@Z @ 0x18004AA0C (--$_Destroy_range@V-$allocator@V-$shared_ptr@VEffectPack@@@std@@@std@@@std@@YAXPEAV-$shared_ptr@.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VEffectPack@@@std@@@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VEffectPack@@@1@QEAV21@AEBV21@@Z @ 0x18014A13C (--$_Emplace_reallocate@AEBV-$shared_ptr@VEffectPack@@@std@@@-$vector@V-$shared_ptr@VEffectPack@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetEffectPacks(__int64 a1, __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  const char *v5; // r9
  char *v6; // r14
  char *v7; // rsi
  _QWORD *v8; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 288);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 288));
  std::_Destroy_range<std::allocator<std::shared_ptr<EffectPack>>>(*a2, a2[1]);
  try
  {
    a2[1] = *a2;
    v6 = *(char **)(a1 + 336);
    v7 = *(char **)(a1 + 328);
    if ( (v6 - v7) >> 4 )
    {
      while ( v7 != v6 )
      {
        v8 = (_QWORD *)a2[1];
        if ( v8 == (_QWORD *)a2[2] )
        {
          std::vector<std::shared_ptr<EffectPack>>::_Emplace_reallocate<std::shared_ptr<EffectPack> const &>(
            a2,
            (char *)a2[1],
            v7);
        }
        else
        {
          std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(v8, v7);
          a2[1] += 16LL;
        }
        v7 += 16;
      }
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x766,
                           (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                           v5);
  }
  return result;
}
