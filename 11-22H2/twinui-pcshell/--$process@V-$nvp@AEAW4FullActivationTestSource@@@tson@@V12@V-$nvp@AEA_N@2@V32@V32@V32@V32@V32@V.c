/*
 * XREFs of ??$process@V?$nvp@AEAW4FullActivationTestSource@@@tson@@V12@V?$nvp@AEA_N@2@V32@V32@V32@V32@V32@V32@V32@V32@V32@V32@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V32@V?$nvp@AEAI@2@V?$nvp@AEAJ@2@V32@V32@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4FullActivationTestSource@@@1@0$$QEAV?$nvp@AEA_N@1@1111111111$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@11$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAJ@1@111@Z @ 0x180463D10
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_SearchFullActivationTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180465474 (--$serialize@Vinput_archive@tson@@@_tip_SearchFullActivationTest@@QEAAXAEAVinput_archive@tson@@@.c)
 * Callees:
 *     ??$process@V?$nvp@AEAW4FullActivationTestSource@@@tson@@V?$nvp@AEA_N@2@V32@V32@V32@V32@V32@V32@V32@V32@V32@V32@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V32@V?$nvp@AEAI@2@V?$nvp@AEAJ@2@V32@V32@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4FullActivationTestSource@@@1@$$QEAV?$nvp@AEA_N@1@1111111111$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@11$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAJ@1@111@Z @ 0x180463EA0 (--$process@V-$nvp@AEAW4FullActivationTestSource@@@tson@@V-$nvp@AEA_N@2@V32@V32@V32@V32@V32@V32@V.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x18046BD20 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<enum FullActivationTestSource &>,tson::nvp<enum FullActivationTestSource &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<long &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
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
        __int64 a21,
        __int64 a22)
{
  char v22; // r10
  int v23; // edi
  _DWORD *v25; // r14
  __int64 v26; // rdx
  __int64 v28; // [rsp+20h] [rbp-A8h]
  __int64 v29; // [rsp+28h] [rbp-A0h]
  __int64 v30; // [rsp+30h] [rbp-98h]
  __int64 v31; // [rsp+38h] [rbp-90h]
  __int64 v32; // [rsp+40h] [rbp-88h]
  __int64 v33; // [rsp+48h] [rbp-80h]
  __int64 v34; // [rsp+50h] [rbp-78h]
  __int64 v35; // [rsp+58h] [rbp-70h]
  __int64 v36; // [rsp+60h] [rbp-68h]
  __int64 v37; // [rsp+68h] [rbp-60h]
  __int64 v38; // [rsp+70h] [rbp-58h]
  __int64 v39; // [rsp+78h] [rbp-50h]
  __int64 v40; // [rsp+80h] [rbp-48h]
  __int64 v41; // [rsp+88h] [rbp-40h]
  __int64 v42; // [rsp+90h] [rbp-38h]
  __int64 v43; // [rsp+98h] [rbp-30h]
  __int64 v44; // [rsp+A0h] [rbp-28h]
  int v45; // [rsp+D0h] [rbp+8h] BYREF

  v22 = *(_BYTE *)(a2 + 8);
  v23 = 0;
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v22;
  v25 = *(_DWORD **)(a2 + 16);
  v45 = 0;
  if ( tson::input_archive::search(this) )
  {
    LOBYTE(v26) = 18;
    tson::input_archive::consume_expected_marker(this, v26, 2147944029LL);
    tson::read_buffer::consume_n(*(tson::read_buffer **)this, &v45, 4uLL);
    v23 = v45;
  }
  v44 = a22;
  v43 = a21;
  v42 = a20;
  v41 = a19;
  v40 = a18;
  v39 = a17;
  v38 = a16;
  v37 = a15;
  v36 = a14;
  v35 = a13;
  v34 = a12;
  v33 = a11;
  v32 = a10;
  v31 = a9;
  v30 = a8;
  v29 = a7;
  v28 = a6;
  *v25 = v23;
  return tson::input_archive::process<tson::nvp<enum FullActivationTestSource &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<long &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           this,
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
           v42,
           v43,
           v44);
}
