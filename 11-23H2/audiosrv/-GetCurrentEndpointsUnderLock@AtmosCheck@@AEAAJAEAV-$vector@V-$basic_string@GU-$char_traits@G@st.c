/*
 * XREFs of ?GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x18015B088
 * Callers:
 *     ?CheckInstalledAppServicesAvailable@AtmosCheck@@AEAA_NXZ @ 0x18015AAD0 (-CheckInstalledAppServicesAvailable@AtmosCheck@@AEAA_NXZ.c)
 *     ?PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z @ 0x18015C4C8 (-PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x18015CED8 (-RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180027F80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D2CB0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Emplace_reallocate@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@$$QEAV21@@Z @ 0x180159B24 (--$_Emplace_reallocate@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vector@V.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall AtmosCheck::GetCurrentEndpointsUnderLock(__int64 a1, __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  _QWORD *v5; // rbx
  _WORD *v6; // rdx
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rdx
  void *v9; // rcx
  void *v11; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v12[2]; // [rsp+28h] [rbp-50h] BYREF
  __int128 v13; // [rsp+38h] [rbp-40h] BYREF
  __int128 v14; // [rsp+48h] [rbp-30h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  v12[1] = (unsigned __int64)v4;
  v5 = *(_QWORD **)(a1 + 616);
  while ( 1 )
  {
    v5 = (_QWORD *)*v5;
    if ( v5 == *(_QWORD **)(a1 + 616) )
      break;
    v6 = v5 + 2;
    if ( v5[5] >= 8uLL )
      v6 = *(_WORD **)v6;
    std::wstring::wstring(&v13, v6);
    v7 = (_QWORD *)a2[1];
    if ( v7 == (_QWORD *)a2[2] )
    {
      std::vector<std::wstring>::_Emplace_reallocate<std::wstring>(a2, (__int64)v7, (__int64)&v13);
      v8 = *((_QWORD *)&v14 + 1);
    }
    else
    {
      *v7 = 0LL;
      v7[2] = 0LL;
      v7[3] = 0LL;
      *(_OWORD *)v7 = v13;
      *((_OWORD *)v7 + 1) = v14;
      *(_QWORD *)&v14 = 0LL;
      v8 = 7LL;
      *((_QWORD *)&v14 + 1) = 7LL;
      LOWORD(v13) = 0;
      a2[1] += 32LL;
    }
    if ( v8 >= 8 )
    {
      v12[0] = 2 * v8 + 2;
      v9 = (void *)v13;
      v11 = (void *)v13;
      if ( v12[0] >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v11, v12);
        v9 = v11;
      }
      operator delete(v9);
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
