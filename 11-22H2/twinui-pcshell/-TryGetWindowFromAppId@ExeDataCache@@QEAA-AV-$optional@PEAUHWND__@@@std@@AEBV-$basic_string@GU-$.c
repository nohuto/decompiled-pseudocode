/*
 * XREFs of ?TryGetWindowFromAppId@ExeDataCache@@QEAA?AV?$optional@PEAUHWND__@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@@Z @ 0x18062690C
 * Callers:
 *     ?GetDisplayName@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180625900 (-GetDisplayName@Win32AppStateManager@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 *     ?GetWindowTitle@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180625BE0 (-GetWindowTitle@Win32AppStateManager@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x18008FC14 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUhstring@winrt@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801E8DE0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUhstring@win.c)
 *     ??0ExeData@@QEAA@AEBU0@@Z @ 0x180624CC0 (--0ExeData@@QEAA@AEBU0@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ExeDataCache::TryGetWindowFromAppId(PSRWLOCK SRWLock, __int64 a2, __int64 *a3)
{
  __int64 v6; // rdx
  _QWORD *v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13[2]; // [rsp+20h] [rbp-29h] BYREF
  __int64 v14; // [rsp+30h] [rbp-19h]
  _BYTE v15[8]; // [rsp+38h] [rbp-11h] BYREF
  _BYTE v16[32]; // [rsp+40h] [rbp-9h] BYREF
  _QWORD v17[4]; // [rsp+60h] [rbp+17h] BYREF

  AcquireSRWLockShared(SRWLock);
  v13[1] = (__int64)SRWLock;
  v6 = *(_QWORD *)SRWLock[1].Ptr;
  v13[0] = v6;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    v14 = *(_QWORD *)(v6 + 32);
    ExeData::ExeData((ExeData *)v15, (const struct ExeData *)(v6 + 40));
    v7 = v17;
    if ( v17[3] >= 8uLL )
      v7 = (_QWORD *)v17[0];
    v8 = (__int64)a3;
    if ( (unsigned __int64)a3[3] >= 8 )
      v8 = *a3;
    if ( std::_Traits_equal<std::char_traits<unsigned short>>(v8, a3[2], (__int64)v7, v17[2]) )
    {
      *(_QWORD *)a2 = v14;
      *(_BYTE *)(a2 + 8) = 1;
      std::wstring::_Tidy_deallocate((__int64)v17);
      std::wstring::_Tidy_deallocate((__int64)v16);
      goto LABEL_11;
    }
    std::wstring::_Tidy_deallocate((__int64)v17);
    std::wstring::_Tidy_deallocate((__int64)v16);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,winrt::hstring>>>,std::_Iterator_base0>::operator++(
      v13,
      v9,
      v10,
      v11);
    v6 = v13[0];
  }
  *(_BYTE *)(a2 + 8) = 0;
LABEL_11:
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return a2;
}
