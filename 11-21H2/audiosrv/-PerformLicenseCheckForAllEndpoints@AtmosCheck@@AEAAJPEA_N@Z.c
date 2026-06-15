/*
 * XREFs of ?PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z @ 0x180155538
 * Callers:
 *     _lambda_25a52f7b70a5b2ddb41b08d731639da5_::operator() @ 0x180040DE0 (_lambda_25a52f7b70a5b2ddb41b08d731639da5_--operator().c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180064DB8 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1801525E4 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     ?GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x180154004 (-GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV-$vector@V-$basic_string@GU-$char_traits@G@st.c)
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18015563C (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::PerformLicenseCheckForAllEndpoints(AtmosCheck *this, bool *a2)
{
  bool v4; // si
  int CurrentEndpointsUnderLock; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  _QWORD *i; // rbx
  const unsigned __int16 *v9; // rax
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  bool v14; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v11 = 0LL;
  v12 = 0LL;
  CurrentEndpointsUnderLock = AtmosCheck::GetCurrentEndpointsUnderLock((__int64)this, (__int64 *)&v11);
  v6 = CurrentEndpointsUnderLock;
  if ( CurrentEndpointsUnderLock >= 0 )
  {
    for ( i = (_QWORD *)v11; i != *((_QWORD **)&v11 + 1); i += 4 )
    {
      v14 = 0;
      v9 = (const unsigned __int16 *)std::wstring::c_str(i);
      CurrentEndpointsUnderLock = AtmosCheck::PerformLicenseCheckForEndpoint(this, v9, &v14);
      v6 = CurrentEndpointsUnderLock;
      if ( CurrentEndpointsUnderLock < 0 )
      {
        v7 = 2192LL;
        goto LABEL_11;
      }
      if ( v4 || v14 )
        v4 = 1;
    }
    if ( a2 )
      *a2 = v4;
    v6 = 0;
  }
  else
  {
    v7 = 2186LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)CurrentEndpointsUnderLock);
  }
  if ( (_QWORD)v11 )
  {
    std::_Destroy_range<std::allocator<std::wstring>>(v11, *((__int64 *)&v11 + 1));
    std::_Deallocate<16,0>((void *)v11, (v12 - v11) & 0xFFFFFFFFFFFFFFE0uLL);
  }
  return v6;
}
