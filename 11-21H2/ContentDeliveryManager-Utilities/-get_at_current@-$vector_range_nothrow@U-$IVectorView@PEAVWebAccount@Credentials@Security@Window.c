/*
 * XREFs of ?get_at_current@?$vector_range_nothrow@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@wil@@QEAAXI@Z @ 0x1800D7F5C
 * Callers:
 *     ?GetHasMobilityAccount@MobilityExperienceManager@@UEAAJPEAE@Z @ 0x1800D7610 (-GetHasMobilityAccount@MobilityExperienceManager@@UEAAJPEAE@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
int *__fastcall wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *>>::get_at_current(
        __int64 *a1,
        unsigned int a2)
{
  int *result; // rax
  __int64 v5; // r14
  __int64 (__fastcall *v6)(__int64, _QWORD, _QWORD *); // rbp
  _QWORD *v7; // rsi
  __int64 v8; // rcx

  result = (int *)a1[2];
  if ( *result >= 0 && a2 < *((_DWORD *)a1 + 2) )
  {
    v5 = *a1;
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)*a1 + 48LL);
    v7 = a1 + 4;
    v8 = a1[4];
    if ( v8 )
    {
      *v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    result = (int *)v6(v5, a2, v7);
    *(_DWORD *)a1[2] = (_DWORD)result;
  }
  return result;
}
