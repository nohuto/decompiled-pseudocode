/*
 * XREFs of ??_Gtest_flag@tip2@@QEAAPEAXI@Z @ 0x18006A624
 * Callers:
 *     ?clear@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAAXXZ @ 0x18006B080 (-clear@-$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAAXXZ.c)
 *     ?reserve@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAA_N_K@Z @ 0x18006C218 (-reserve@-$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAA_N_K@Z.c)
 * Callees:
 *     <none>
 */

PROPVARIANT *__fastcall tip2::test_flag::`scalar deleting destructor'(PROPVARIANT *this)
{
  PropVariantClear(this + 2);
  return this;
}
