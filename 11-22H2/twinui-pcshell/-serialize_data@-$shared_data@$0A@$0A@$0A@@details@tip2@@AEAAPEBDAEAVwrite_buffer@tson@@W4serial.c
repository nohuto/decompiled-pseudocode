/*
 * XREFs of ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180086A50
 * Callers:
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x1800864D4 (-start@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?evaluate_and_report@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x18008660C (-evaluate_and_report@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180086920 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 * Callees:
 *     ?write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z @ 0x1800132C4 (-write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z.c)
 *     ?finish@output_archive@tson@@QEAAJXZ @ 0x180013330 (-finish@output_archive@tson@@QEAAJXZ.c)
 *     ?make_string_tag@tson@@YA?AUansistring_tag@1@PEBD@Z @ 0x180013644 (-make_string_tag@tson@@YA-AUansistring_tag@1@PEBD@Z.c)
 *     ??0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z @ 0x180013670 (--0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x180013724 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x180013878 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800138B4 (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x180013B78 (--$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x18046D8AC (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x18046DCB4 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall tip2::details::shared_data<0,0,0>::serialize_data(
        __int64 *a1,
        struct tson::write_buffer *a2,
        unsigned int a3)
{
  char v6; // al
  unsigned __int64 v7; // rcx
  _BYTE *v8; // rax
  __int64 *v9; // rdi
  __int64 *i; // rsi
  unsigned __int64 v11; // rcx
  _BYTE *v12; // rax
  struct tson::output_archive *v13; // rdi
  struct tson::output_archive *v14; // rsi
  unsigned __int64 v15; // rcx
  _BYTE *v16; // rax
  struct tson::output_archive *v17; // rdi
  struct tson::output_archive *v18; // rsi
  __int64 v19; // rcx
  __int64 v21; // rdx
  __int64 string_tag; // rax
  __int128 v23; // xmm1
  int v24; // eax
  __int128 v25; // xmm1
  int v26; // eax
  struct wil::StoredFailureInfo *v27; // r8
  int v28; // eax
  struct tip2::test_flag *v29; // r8
  _BYTE v30[16]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v31[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v32[16]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v33[2]; // [rsp+70h] [rbp-90h]
  __int64 v34; // [rsp+80h] [rbp-80h]
  const char *v35; // [rsp+90h] [rbp-70h] BYREF
  char v36; // [rsp+98h] [rbp-68h]
  __int16 v37; // [rsp+9Ah] [rbp-66h]
  _BYTE v38[4]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v39[100]; // [rsp+ACh] [rbp-54h] BYREF
  __int64 v40; // [rsp+110h] [rbp+10h]
  int v41; // [rsp+118h] [rbp+18h]
  tson::write_buffer *v42; // [rsp+120h] [rbp+20h]

  if ( a3 )
  {
    tson::output_archive::output_archive((tson::output_archive *)&v35, a2, *((_BYTE *)a1 + 33));
    if ( (a3 & 4) != 0 )
    {
      v6 = *((_BYTE *)a1 + 33);
      if ( v6 )
      {
        v35 = "version";
        v36 = 7;
        v30[0] = v6;
        if ( tson::output_archive::write_type((tson::output_archive *)&v35, 0, 12) )
          tson::write_buffer::push_back<unsigned char>(v42, v30);
      }
    }
    if ( (a3 & 1) != 0 )
    {
      if ( (*((_DWORD *)a1 + 5) & 0x40000) != 0 )
      {
        v21 = a1[1];
        if ( !v21 )
          v21 = a1[3];
        string_tag = tson::make_string_tag((__int64)v31, v21);
        v23 = *(_OWORD *)string_tag;
        *(_OWORD *)v33 = v23;
        v34 = *(_QWORD *)(string_tag + 16);
        v35 = "name";
        v36 = 4;
        if ( tson::output_archive::write_type((tson::output_archive *)&v35, (_QWORD)v23 == 0LL, 23) )
          tson::output_archive::write_string_bytes((tson::output_archive *)&v35, v33[1], (void *)v23, v33[1]);
      }
      v35 = "log";
      v36 = 3;
      tson::output_archive::startNode((tson::output_archive *)&v35);
      v7 = a1[14];
      if ( v40 )
      {
        v8 = &v38[4 * v40];
      }
      else
      {
        v38[0] = 1;
        v8 = v39;
      }
      *(_DWORD *)v8 = 2;
      if ( v7 > 0xFFFF )
      {
        v24 = v41;
        if ( v41 >= 0 )
          v24 = -2147483637;
        v41 = v24;
      }
      v37 = v7;
      v9 = (__int64 *)a1[12];
      for ( i = &v9[a1[14]]; v9 != i; ++v9 )
      {
        v25 = *(_OWORD *)tson::make_string_tag((__int64)v32, *v9);
        *(_OWORD *)v31 = v25;
        if ( tson::output_archive::write_type((tson::output_archive *)&v35, (_QWORD)v25 == 0LL, 23) )
          tson::output_archive::write_string_bytes((tson::output_archive *)&v35, v31[1], (void *)v25, v31[1]);
      }
      tson::output_archive::finishNode((tson::output_archive *)&v35);
      v35 = "errors";
      v36 = 6;
      tson::output_archive::startNode((tson::output_archive *)&v35);
      v11 = a1[11];
      if ( v40 )
      {
        v12 = &v38[4 * v40];
      }
      else
      {
        v38[0] = 1;
        v12 = v39;
      }
      *(_DWORD *)v12 = 2;
      if ( v11 > 0xFFFF )
      {
        v26 = v41;
        if ( v41 >= 0 )
          v26 = -2147483637;
        v41 = v26;
      }
      v37 = v11;
      v13 = (struct tson::output_archive *)a1[9];
      v14 = (struct tson::output_archive *)((char *)v13 + 168 * a1[11]);
      while ( v13 != v14 )
      {
        tson::output_archive::startNode((tson::output_archive *)&v35);
        tson::save_nothrow((tson *)&v35, v13, v27);
        tson::output_archive::finishNode((tson::output_archive *)&v35);
        v13 = (struct tson::output_archive *)((char *)v13 + 168);
      }
      tson::output_archive::finishNode((tson::output_archive *)&v35);
      v35 = "flags";
      v36 = 5;
      tson::output_archive::startNode((tson::output_archive *)&v35);
      v15 = a1[17];
      if ( v40 )
      {
        v16 = &v38[4 * v40];
      }
      else
      {
        v38[0] = 1;
        v16 = v39;
      }
      *(_DWORD *)v16 = 2;
      if ( v15 > 0xFFFF )
      {
        v28 = v41;
        if ( v41 >= 0 )
          v28 = -2147483637;
        v41 = v28;
      }
      v37 = v15;
      v17 = (struct tson::output_archive *)a1[15];
      v18 = (struct tson::output_archive *)((char *)v17 + 104 * a1[17]);
      while ( v17 != v18 )
      {
        tson::output_archive::startNode((tson::output_archive *)&v35);
        tson::save_nothrow((tson *)&v35, v17, v29);
        tson::output_archive::finishNode((tson::output_archive *)&v35);
        v17 = (struct tson::output_archive *)((char *)v17 + 104);
      }
      tson::output_archive::finishNode((tson::output_archive *)&v35);
    }
    v19 = *a1;
    if ( tip2::details::g_test_interface_exception_guard )
    {
      if ( !(unsigned __int8)tip2::details::g_test_interface_exception_guard(v19, &v35, a3, 0LL, 0LL) )
      {
        *((_BYTE *)a1 + 160) = 3;
        *((_WORD *)a1 + 81) = 16396;
        a1[21] = 0LL;
      }
    }
    else
    {
      (*(void (__fastcall **)(__int64, const char **, _QWORD))(*(_QWORD *)v19 + 8LL))(v19, &v35, a3);
    }
    if ( (int)tson::output_archive::finish((tson::output_archive *)&v35) >= 0 )
      return *((_QWORD *)a2 + 258);
    *((_DWORD *)a1 + 16) |= 0x100000u;
  }
  return 0LL;
}
