/*
 * XREFs of ??0Exception@cereal@@QEAA@PEBD@Z @ 0x1804167A4
 * Callers:
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ?wstring_to_string@util@cereal@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@4@@Z @ 0x1802D3DFC (-wstring_to_string@util@cereal@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 *     ?string_to_wstring@util@cereal@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV?$basic_string_view@DU?$char_traits@D@std@@@4@@Z @ 0x18041B264 (-string_to_wstring@util@cereal@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std.c)
 * Callees:
 *     _o___std_exception_copy_0 @ 0x1801C7312 (_o___std_exception_copy_0.c)
 */

cereal::Exception *__fastcall cereal::Exception::Exception(cereal::Exception *this, const char *a2)
{
  const char *v4; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  v5 = 1;
  v4 = a2;
  *(_QWORD *)this = &std::exception::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0((__int64)&v4, (__int64)this + 8);
  *(_QWORD *)this = &cereal::Exception::`vftable';
  return this;
}
