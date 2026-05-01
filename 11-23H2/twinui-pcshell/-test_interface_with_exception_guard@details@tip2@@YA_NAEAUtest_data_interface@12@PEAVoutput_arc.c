/*
 * XREFs of ?test_interface_with_exception_guard@details@tip2@@YA_NAEAUtest_data_interface@12@PEAVoutput_archive@tson@@W4serialize_options@12@PEAVinput_archive@5@PEBUTipReportingInfo@@@Z @ 0x18018BF30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall tip2::details::test_interface_with_exception_guard(
        void (***a1)(void),
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  void (**v5)(void); // rax
  char result; // al
  void (*v7)(void); // rax

  try
  {
    v5 = *a1;
    if ( a2 )
    {
      v5[1]();
    }
    else
    {
      if ( a4 )
      {
        v7 = v5[2];
      }
      else
      {
        if ( !a5 )
        {
          (*v5)();
          goto LABEL_4;
        }
        v7 = v5[3];
      }
      v7();
    }
LABEL_4:
    result = 1;
  }
  catch ( ... )
  {
    return 0;
  }
  return result;
}
