/*
 * XREFs of ??$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x18009CCA8
 * Callers:
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x18009CFCC (--$process@V-$nvp@AEAV-$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@input_archive@tson@@AEAAX.c)
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??0test_flag@tip2@@QEAA@$$QEAU01@@Z @ 0x18009D86C (--0test_flag@tip2@@QEAA@$$QEAU01@@Z.c)
 *     ?clear@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAAXXZ @ 0x18009DBBC (-clear@-$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAAXXZ.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x18009DEA4 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?finishNode@input_archive@tson@@QEAAXXZ @ 0x18009E42C (-finishNode@input_archive@tson@@QEAAXXZ.c)
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x18009E584 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 *     ?reserve@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAA_N_K@Z @ 0x18009EA58 (-reserve@-$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAA_N_K@Z.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x18009F7B8 (-startNode@input_archive@tson@@QEAAXXZ.c)
 */

HRESULT __fastcall tson::load_nothrow<tip2::test_flag>(tson *this, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  tson::read_buffer *v7; // rcx
  HRESULT result; // eax
  struct tip2::test_flag *v9; // r8
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  char v13; // al
  _WORD v14[8]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v15[16]; // [rsp+30h] [rbp-98h] BYREF
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v17; // [rsp+50h] [rbp-78h]

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
    v14[0] = 0;
    tson::read_buffer::consume_n(v7, v14, 2uLL);
    v4 = v14[0];
  }
  result = tip2::vector_nothrow<tip2::test_flag>::clear(a2);
  while ( v4 )
  {
    v17 = 0LL;
    --v4;
    *(_OWORD *)pvar = 0LL;
    memset_0(v15, 0, 0x68uLL);
    tson::input_archive::startNode(this);
    tson::load_nothrow(this, (struct tson::input_archive *)v15, v9);
    tson::input_archive::finishNode(this);
    v10 = a2[2];
    v11 = a2[1];
    if ( v10 < v11
      || (!v11 ? (v12 = 10LL) : (v12 = 2 * v11),
          v13 = tip2::vector_nothrow<tip2::test_flag>::reserve(a2, v12),
          v10 = a2[2],
          v13) )
    {
      tip2::test_flag::test_flag(*a2 + 104 * v10, v15);
      ++a2[2];
    }
    result = PropVariantClear(pvar);
  }
  return result;
}
