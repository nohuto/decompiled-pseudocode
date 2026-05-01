/*
 * XREFs of ??$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x180462FB8
 * Callers:
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x180463C0C (--$process@V-$nvp@AEAV-$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@input_archive@tson@@AEAAX.c)
 *     ?deserialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z @ 0x18046BF0C (-deserialize_data@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@.c)
 * Callees:
 *     ?clear@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAAXXZ @ 0x1801B1834 (-clear@-$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x18046BD20 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?finishNode@input_archive@tson@@QEAAXXZ @ 0x18046CAC4 (-finishNode@input_archive@tson@@QEAAXXZ.c)
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x18046CBC8 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 *     ?push_back@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAA_N$$QEAUtest_flag@2@@Z @ 0x18046D564 (-push_back@-$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAA_N$$QEAUtest_flag@2@@Z.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x18046E058 (-startNode@input_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tson::load_nothrow<tip2::test_flag>(tson *this, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  tson::read_buffer *v7; // rcx
  struct tip2::test_flag *v8; // r8
  _WORD v9[8]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v10[16]; // [rsp+30h] [rbp-98h] BYREF
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v12; // [rsp+50h] [rbp-78h]

  v4 = 0LL;
  if ( !*((_BYTE *)this + 25) )
  {
    v5 = *((_QWORD *)this + 17);
    if ( v5 )
    {
      v6 = 4 * v5;
    }
    else
    {
      *((_BYTE *)this + 32) = 1;
      v6 = 4LL;
    }
    if ( *(_DWORD *)((char *)this + v6 + 32) != 1 && *((int *)this + 2) >= 0 )
      *((_DWORD *)this + 2) = -2147023267;
    v7 = *(tson::read_buffer **)this;
    v9[0] = 0;
    tson::read_buffer::consume_n(v7, v9, 2uLL);
    v4 = v9[0];
  }
  tip2::vector_nothrow<tip2::test_flag>::clear(a2, (unsigned int)a2);
  for ( ; v4; --v4 )
  {
    v12 = 0LL;
    *(_OWORD *)pvar = 0LL;
    memset_0(v10, 0, 0x68uLL);
    tson::input_archive::startNode(this);
    tson::load_nothrow(this, (struct tson::input_archive *)v10, v8);
    tson::input_archive::finishNode(this);
    tip2::vector_nothrow<tip2::test_flag>::push_back(a2, v10);
    PropVariantClear(pvar);
  }
}
