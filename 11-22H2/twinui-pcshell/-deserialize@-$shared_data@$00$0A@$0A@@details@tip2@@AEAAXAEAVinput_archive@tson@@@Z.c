/*
 * XREFs of ?deserialize@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEAVinput_archive@tson@@@Z @ 0x18046BE88
 * Callers:
 *     ?deserialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z @ 0x18046BF0C (-deserialize_data@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall tip2::details::shared_data<1,0,0>::deserialize(__int64 *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *a1;
  if ( !tip2::details::g_test_interface_exception_guard )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  result = tip2::details::g_test_interface_exception_guard(v3, 0LL, 0LL, a2, 0LL);
  if ( !(_BYTE)result && !*((_BYTE *)a1 + 160) )
  {
    *((_BYTE *)a1 + 160) = 3;
    result = 16397LL;
    *((_WORD *)a1 + 81) = 16397;
    a1[21] = 0LL;
  }
  return result;
}
