/*
 * XREFs of ??$emplace_back@AEAV?$basic_string_view@DU?$char_traits@D@std@@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QEAAAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@AEAV?$basic_string_view@DU?$char_traits@D@std@@@1@@Z @ 0x1800F2728
 * Callers:
 *     ?log_message@?$test_common_data@$0A@@details@tip@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z @ 0x1800F6358 (-log_message@-$test_common_data@$0A@@details@tip@@QEAAXV-$basic_string_view@DU-$char_traits@D@st.c)
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180042A60 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall std::vector<std::string>::emplace_back<std::string_view &>(__int64 *a1, const void **a2)
{
  __int64 v3; // rax
  unsigned __int64 result; // rax

  v3 = a1[1];
  if ( v3 == a1[2] )
    return std::vector<std::string>::_Emplace_reallocate<std::string_view &>(a1, a1[1], a2);
  *(_QWORD *)(v3 + 16) = 0LL;
  *(_QWORD *)(v3 + 24) = 15LL;
  *(_BYTE *)v3 = 0;
  std::string::assign((void **)v3, *a2, _mm_srli_si128(*(__m128i *)a2, 8).m128i_u64[0]);
  result = a1[1];
  a1[1] = result + 32;
  return result;
}
