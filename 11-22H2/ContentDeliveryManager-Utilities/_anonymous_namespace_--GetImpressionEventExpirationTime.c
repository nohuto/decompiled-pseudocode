/*
 * XREFs of _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x180058850
 * Callers:
 *     ContentManagement::ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___ @ 0x18004C834 (ContentManagement--ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___.c)
 *     ?IsReportedEventExpired@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x18005A430 (-IsReportedEventExpired@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4Crea.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_10_unsigned_int_unsigned___int64_ @ 0x18004D350 (_anonymous_namespace_--PlacementHealth--HandleEvent_10_unsigned_int_unsigned___int64_.c)
 *     ??0?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180051758 (--0-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@G.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x180051928 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEAI@Z @ 0x1800538AC (--5-$basic_istream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@AEAI@Z.c)
 *     ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEA_K@Z @ 0x1800539D0 (--5-$basic_istream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@AEA_K@Z.c)
 *     ??_D?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180053DF4 (--_D-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     _anonymous_namespace_::SplitString @ 0x18005E4E4 (_anonymous_namespace_--SplitString.c)
 *     ?_Destroy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@IEAAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@0@Z @ 0x180060610 (-_Destroy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x1800627B4 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall anonymous_namespace_::GetImpressionEventExpirationTime(LPCWCH lpString1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // r8
  void *v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rbx
  unsigned int v11; // ebx
  int v12; // eax
  int v14; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+28h] [rbp-D8h] BYREF
  void *v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h]
  _QWORD v18[30]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v19[32]; // [rsp+140h] [rbp+40h] BYREF

  v15 = 0LL;
  std::wstring::wstring((__int64)v19);
  anonymous_namespace_::SplitString(&v16, v19, L"`");
  LOBYTE(v5) = 1;
  std::wstring::_Tidy(v19, v5, 0LL);
  v8 = v16;
  if ( (unsigned __int64)((v17 - (__int64)v16) >> 5) > 6
    && (std::basic_istringstream<unsigned short>::basic_istringstream<unsigned short>(v18, (__int64)v16 + 192, v7),
        std::basic_istream<unsigned short>::operator>>((__int64)v18, (__int64)&v15),
        v9 = v15,
        std::basic_istringstream<unsigned short>::`vbase destructor'((__int64)v18),
        v8 = v16,
        v9) )
  {
    v10 = v9 + 600000000;
  }
  else
  {
    v11 = 86400;
    v14 = 86400;
    if ( (unsigned __int64)((v17 - (__int64)v8) >> 5) > 4 )
    {
      std::basic_istringstream<unsigned short>::basic_istringstream<unsigned short>(v18, (__int64)v8 + 128, v7);
      std::basic_istream<unsigned short>::operator>>((__int64)v18, (__int64)&v14);
      v12 = v14;
      if ( !v14 )
        v12 = 86400;
      v14 = v12;
      std::basic_istringstream<unsigned short>::`vbase destructor'((__int64)v18);
      v8 = v16;
      v11 = v14;
    }
    v10 = a3 + 10000000 * (v11 + 600LL);
  }
  if ( lpString1 )
  {
    anonymous_namespace_::PlacementHealth::HandleEvent_10_unsigned_int_unsigned___int64_(lpString1);
    v8 = v16;
  }
  if ( v8 )
  {
    std::vector<std::wstring>::_Destroy(v6, v8, v17);
    operator delete(v16);
  }
  return v10;
}
