/*
 * XREFs of ??0runtime_error@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x1803D4648
 * Callers:
 *     ??0_System_error@std@@IEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x1803D4368 (--0_System_error@std@@IEAA@Verror_code@1@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ?search@Iterator@JSONInputArchive@cereal@@QEAAXPEBD@Z @ 0x18041AE70 (-search@Iterator@JSONInputArchive@cereal@@QEAAXPEBD@Z.c)
 * Callees:
 *     _o___std_exception_copy_0 @ 0x1801C7312 (_o___std_exception_copy_0.c)
 */

__int64 __fastcall std::runtime_error::runtime_error(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  _QWORD *v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  v2 = a2;
  if ( a2[3] >= 0x10uLL )
    v2 = (_QWORD *)*a2;
  v5 = v2;
  *(_QWORD *)a1 = &std::exception::`vftable';
  v6 = 1;
  *(_OWORD *)(a1 + 8) = 0LL;
  o___std_exception_copy_0((__int64)&v5, a1 + 8);
  *(_QWORD *)a1 = &std::logic_error::`vftable';
  return a1;
}
