/*
 * XREFs of ??$process@V?$nvp@AEAW4FullActivationTestSource@@@tson@@V?$nvp@AEA_N@2@V32@V32@V32@V32@V32@V32@V32@V32@V32@V32@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V32@V?$nvp@AEAI@2@V?$nvp@AEAJ@2@V32@V32@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4FullActivationTestSource@@@1@$$QEAV?$nvp@AEA_N@1@1111111111$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@11$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAJ@1@111@Z @ 0x180463EA0
 * Callers:
 *     ??$process@V?$nvp@AEAW4FullActivationTestSource@@@tson@@V12@V?$nvp@AEA_N@2@V32@V32@V32@V32@V32@V32@V32@V32@V32@V32@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V32@V?$nvp@AEAI@2@V?$nvp@AEAJ@2@V32@V32@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4FullActivationTestSource@@@1@0$$QEAV?$nvp@AEA_N@1@1111111111$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@11$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAJ@1@111@Z @ 0x180463D10 (--$process@V-$nvp@AEAW4FullActivationTestSource@@@tson@@V12@V-$nvp@AEA_N@2@V32@V32@V32@V32@V32@V.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V12@V?$nvp@AEAI@2@V?$nvp@AEAJ@2@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000000000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@00$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAJ@1@000@Z @ 0x1804642EC (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@V-$nvp@AEAV-$_ea_1804642EC.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x18046BD20 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<enum FullActivationTestSource &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<long &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21)
{
  char v21; // r10
  int v22; // edi
  _DWORD *v24; // r14
  __int64 v25; // rdx
  __int64 v27; // [rsp+20h] [rbp-98h]
  __int64 v28; // [rsp+28h] [rbp-90h]
  __int64 v29; // [rsp+30h] [rbp-88h]
  __int64 v30; // [rsp+38h] [rbp-80h]
  __int64 v31; // [rsp+40h] [rbp-78h]
  __int64 v32; // [rsp+48h] [rbp-70h]
  __int64 v33; // [rsp+50h] [rbp-68h]
  __int64 v34; // [rsp+58h] [rbp-60h]
  __int64 v35; // [rsp+60h] [rbp-58h]
  __int64 v36; // [rsp+68h] [rbp-50h]
  __int64 v37; // [rsp+70h] [rbp-48h]
  __int64 v38; // [rsp+78h] [rbp-40h]
  __int64 v39; // [rsp+80h] [rbp-38h]
  __int64 v40; // [rsp+88h] [rbp-30h]
  __int64 v41; // [rsp+90h] [rbp-28h]
  __int64 v42; // [rsp+98h] [rbp-20h]
  int v43; // [rsp+C0h] [rbp+8h] BYREF

  v21 = *(_BYTE *)(a2 + 8);
  v22 = 0;
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v21;
  v24 = *(_DWORD **)(a2 + 16);
  v43 = 0;
  if ( tson::input_archive::search(this) )
  {
    LOBYTE(v25) = 18;
    tson::input_archive::consume_expected_marker(this, v25, 2147944029LL);
    tson::read_buffer::consume_n(*(tson::read_buffer **)this, &v43, 4uLL);
    v22 = v43;
  }
  v42 = a21;
  v41 = a20;
  v40 = a19;
  v39 = a18;
  v38 = a17;
  v37 = a16;
  v36 = a15;
  v35 = a14;
  v34 = a13;
  v33 = a12;
  v32 = a11;
  v31 = a10;
  v30 = a9;
  v29 = a8;
  v28 = a7;
  v27 = a6;
  *v24 = v22;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<long &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           this,
           v27,
           v28,
           v29,
           v30,
           v31,
           v32,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42);
}
