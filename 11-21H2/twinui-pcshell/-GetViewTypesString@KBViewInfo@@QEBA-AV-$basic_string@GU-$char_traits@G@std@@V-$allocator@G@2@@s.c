/*
 * XREFs of ?GetViewTypesString@KBViewInfo@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18045F59C
 * Callers:
 *     ?InitializeIds@KBViewInfo@@QEAAXXZ @ 0x18022EA10 (-InitializeIds@KBViewInfo@@QEAAXXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180174FA4 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x180457A88 (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall KBViewInfo::GetViewTypesString(__int64 a1, _QWORD *a2)
{
  int v3; // r14d
  __int64 **v4; // rdi
  __int64 *i; // rbx
  unsigned int v6; // r8d
  _BYTE *v7; // r9
  _QWORD *v8; // rdx
  _QWORD v10[9]; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v11[6]; // [rsp+82h] [rbp+31h] BYREF

  a2[2] = 0LL;
  a2[3] = 7LL;
  *(_WORD *)a2 = 0;
  v3 = 1;
  v4 = *(__int64 ***)(a1 + 48);
  for ( i = *v4; i != (__int64 *)v4; i = (__int64 *)*i )
  {
    if ( a2[2] )
      std::wstring::append(a2, L",", 1uLL);
    v6 = *((_DWORD *)i + 4);
    v7 = v11;
    do
    {
      v7 -= 2;
      *(_WORD *)v7 = v6 % 0xA + 48;
      v6 /= 0xAu;
    }
    while ( v6 );
    std::wstring::wstring((__int64)v10, v7, v11);
    v3 |= 6u;
    v8 = v10;
    if ( v10[3] >= 8uLL )
      v8 = (_QWORD *)v10[0];
    std::wstring::append(a2, v8, v10[2]);
    std::wstring::_Tidy_deallocate((__int64)v10);
  }
  return a2;
}
