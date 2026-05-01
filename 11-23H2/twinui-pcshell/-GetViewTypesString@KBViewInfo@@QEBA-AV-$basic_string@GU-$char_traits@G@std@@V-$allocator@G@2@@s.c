/*
 * XREFs of ?GetViewTypesString@KBViewInfo@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180511124
 * Callers:
 *     ?InitializeIds@KBViewInfo@@QEAAXXZ @ 0x1802DB684 (-InitializeIds@KBViewInfo@@QEAAXXZ.c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180090D28 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x18019AC30 (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 *     ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x18019AC74 (--$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall KBViewInfo::GetViewTypesString(__int64 a1, _QWORD *a2)
{
  int v3; // r14d
  __int64 **v4; // rdi
  __int64 *i; // rbx
  _WORD *v6; // rax
  _QWORD *v7; // rdx
  _QWORD v9[9]; // [rsp+38h] [rbp-19h] BYREF
  _WORD v10[3]; // [rsp+82h] [rbp+31h] BYREF

  *a2 = 0LL;
  a2[2] = 0LL;
  a2[3] = 7LL;
  *(_WORD *)a2 = 0;
  v3 = 1;
  v4 = *(__int64 ***)(a1 + 48);
  for ( i = *v4; i != (__int64 *)v4; i = (__int64 *)*i )
  {
    if ( a2[2] )
      std::wstring::append(a2, L",", 1uLL);
    v6 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v10, *((_DWORD *)i + 4));
    std::wstring::wstring((__int64)v9, v6, v10);
    v3 |= 6u;
    v7 = v9;
    if ( v9[3] >= 8uLL )
      v7 = (_QWORD *)v9[0];
    std::wstring::append(a2, v7, v9[2]);
    std::wstring::_Tidy_deallocate((__int64)v9);
  }
  return a2;
}
