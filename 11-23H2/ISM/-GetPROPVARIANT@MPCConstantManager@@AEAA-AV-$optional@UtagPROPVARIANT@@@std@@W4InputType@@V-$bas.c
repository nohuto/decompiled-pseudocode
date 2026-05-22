/*
 * XREFs of ?GetPROPVARIANT@MPCConstantManager@@AEAA?AV?$optional@UtagPROPVARIANT@@@std@@W4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x1800ABEEC
 * Callers:
 *     ?GetConstant@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGPEAVBamoAsyncResult_PROPVARIANT_Proxy@@@Z @ 0x1800AB8C0 (-GetConstant@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGPEA.c)
 * Callees:
 *     ??$_Try_emplace@AEBW4InputType@@$$V@?$map@W4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@W4InputType@@@3@V?$allocator@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@PEAX@std@@_N@1@AEBW4InputType@@@Z @ 0x180051250 (--$_Try_emplace@AEBW4InputType@@$$V@-$map@W4InputType@@V-$map@V-$basic_string@GU-$char_traits@G@.c)
 *     ??$?RAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@?$less@X@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@Z @ 0x1800AA114 (--$-RAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBV-$basic_string_view@GU.c)
 *     ??$?RAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@?$less@X@std@@QEBA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800AA154 (--$-RAEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@AEBV-$basic_string@GU-$char_traits@G@s.c)
 *     ?CheckConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800AB354 (-CheckConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V-$basic_string_view@GU-$char_tra.c)
 *     ?CheckModifiedConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800AB3E4 (-CheckModifiedConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V-$basic_string_view@GU-$.c)
 *     ?GetPROPVARIANTFromConstantValue@MPCConstantManager@@AEAA?AV?$optional@UtagPROPVARIANT@@@std@@V?$variant@K_NM@3@@Z @ 0x1800AC01C (-GetPROPVARIANTFromConstantValue@MPCConstantManager@@AEAA-AV-$optional@UtagPROPVARIANT@@@std@@V-.c)
 */

__int64 __fastcall MPCConstantManager::GetPROPVARIANT(__int64 a1, __int64 a2, int a3, __m128i *a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 *v9; // r14
  __int64 *v10; // rdi
  __int64 *v11; // rbx
  __int64 v12; // rax
  __int64 *v13; // rbx
  __m128i v15[2]; // [rsp+20h] [rbp-28h] BYREF
  int v16; // [rsp+60h] [rbp+18h] BYREF

  v16 = a3;
  v15[0] = *a4;
  if ( MPCConstantManager::CheckModifiedConstantExistence(a1, a3, v15) )
  {
    v7 = std::map<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>>::_Try_emplace<enum InputType const &,>(
           (__int64 *)(a1 + 72),
           (__int64)v15,
           (__int64)&v16);
    v8 = *(_QWORD *)v7;
    v9 = *(__int64 **)(*(_QWORD *)v7 + 40LL);
    v10 = v9;
    v11 = (__int64 *)v9[1];
    while ( !*((_BYTE *)v11 + 25) )
    {
      if ( (unsigned __int8)std::less<void>::operator()<std::wstring const &,std::basic_string_view<unsigned short> const &>(
                              v8,
                              v11 + 4,
                              a4) )
      {
        v11 = (__int64 *)v11[2];
      }
      else
      {
        v10 = v11;
        v11 = (__int64 *)*v11;
      }
    }
  }
  else
  {
    v15[0] = *a4;
    if ( !MPCConstantManager::CheckConstantExistence(a1, v16, v15) )
    {
      *(_BYTE *)(a2 + 24) = 0;
      return a2;
    }
    v12 = std::map<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>>::_Try_emplace<enum InputType const &,>(
            (__int64 *)(a1 + 56),
            (__int64)v15,
            (__int64)&v16);
    v8 = *(_QWORD *)v12;
    v9 = *(__int64 **)(*(_QWORD *)v12 + 40LL);
    v10 = v9;
    v13 = (__int64 *)v9[1];
    while ( !*((_BYTE *)v13 + 25) )
    {
      if ( (unsigned __int8)std::less<void>::operator()<std::wstring const &,std::basic_string_view<unsigned short> const &>(
                              v8,
                              v13 + 4,
                              a4) )
      {
        v13 = (__int64 *)v13[2];
      }
      else
      {
        v10 = v13;
        v13 = (__int64 *)*v13;
      }
    }
  }
  if ( *((_BYTE *)v10 + 25)
    || (unsigned __int8)std::less<void>::operator()<std::basic_string_view<unsigned short> const &,std::wstring const &>(
                          v8,
                          a4,
                          v10 + 4) )
  {
    v10 = v9;
  }
  MPCConstantManager::GetPROPVARIANTFromConstantValue(v8, a2, v10[8]);
  return a2;
}
