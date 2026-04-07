/*
 * XREFs of ?str@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x1800429B8
 * Callers:
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800423D8 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180042A60 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::stringbuf::str(__int64 a1, _QWORD *a2)
{
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 && std::streambuf::pptr(a1) )
  {
    std::streambuf::pbase(a1);
    std::streambuf::pptr(a1);
LABEL_4:
    std::string::assign(a2);
    return a2;
  }
  if ( (*(_BYTE *)(a1 + 112) & 4) == 0 && std::streambuf::gptr(a1) )
  {
    std::streambuf::eback(a1);
    std::streambuf::egptr(a1);
    goto LABEL_4;
  }
  return a2;
}
