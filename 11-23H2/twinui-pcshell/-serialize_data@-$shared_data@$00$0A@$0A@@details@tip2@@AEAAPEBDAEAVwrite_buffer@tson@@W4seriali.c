/*
 * XREFs of ?serialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1800133CC
 * Callers:
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18001319C (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x180045EC4 (-start@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?evaluate_and_report@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x18046C7E4 (-evaluate_and_report@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAX_J@Z.c)
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
__int64 __fastcall tip2::details::shared_data<1,0,0>::serialize_data(
        __int64 *a1,
        struct tson::write_buffer *a2,
        unsigned int a3)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 string_tag; // rax
  __int128 v9; // xmm1
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  _BYTE *v13; // rax
  _QWORD *v14; // rdi
  _QWORD *i; // rsi
  unsigned __int64 v16; // rcx
  _BYTE *v17; // rax
  struct tson::output_archive *v18; // rdi
  struct tson::output_archive *v19; // rsi
  unsigned __int64 v20; // rcx
  _BYTE *v21; // rax
  struct tson::output_archive *v22; // rdi
  struct tson::output_archive *v23; // rsi
  __int64 v24; // rcx
  char v26; // al
  int v27; // eax
  __int128 v28; // xmm1
  __int64 v29; // rdx
  __int64 v30; // r8
  int v31; // eax
  struct wil::StoredFailureInfo *v32; // r8
  int v33; // eax
  struct tip2::test_flag *v34; // r8
  _BYTE v35[16]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v36[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v37[16]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v38[2]; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+80h] [rbp-80h]
  const char *v40; // [rsp+90h] [rbp-70h] BYREF
  char v41; // [rsp+98h] [rbp-68h]
  __int16 v42; // [rsp+9Ah] [rbp-66h]
  _BYTE v43[4]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v44[100]; // [rsp+ACh] [rbp-54h] BYREF
  __int64 v45; // [rsp+110h] [rbp+10h]
  int v46; // [rsp+118h] [rbp+18h]
  __int64 v47; // [rsp+120h] [rbp+20h]

  if ( a3 )
  {
    tson::output_archive::output_archive((tson::output_archive *)&v40, a2, *((_BYTE *)a1 + 33));
    if ( (a3 & 4) != 0 )
    {
      v26 = *((_BYTE *)a1 + 33);
      if ( v26 )
      {
        v40 = "version";
        v41 = 7;
        v35[0] = v26;
        LOBYTE(v6) = 12;
        if ( (unsigned __int8)tson::output_archive::write_type(&v40, 0LL, v6) )
          tson::write_buffer::push_back<unsigned char>(v47, v35);
      }
    }
    if ( (a3 & 1) != 0 )
    {
      if ( (*((_DWORD *)a1 + 5) & 0x40000) != 0 )
      {
        v7 = a1[1];
        if ( !v7 )
          v7 = a1[3];
        string_tag = tson::make_string_tag(v36, v7);
        v9 = *(_OWORD *)string_tag;
        *(_OWORD *)v38 = v9;
        v39 = *(_QWORD *)(string_tag + 16);
        v40 = "name";
        v41 = 4;
        LOBYTE(v10) = (_QWORD)v9 == 0LL;
        LOBYTE(v11) = 23;
        if ( (unsigned __int8)tson::output_archive::write_type(&v40, v10, v11) )
          tson::output_archive::write_string_bytes((tson::output_archive *)&v40, v38[1], (void *)v9, v38[1]);
      }
      v40 = "log";
      v41 = 3;
      tson::output_archive::startNode((tson::output_archive *)&v40);
      v12 = a1[14];
      if ( v45 )
      {
        v13 = &v43[4 * v45];
      }
      else
      {
        v43[0] = 1;
        v13 = v44;
      }
      *(_DWORD *)v13 = 2;
      if ( v12 > 0xFFFF )
      {
        v27 = v46;
        if ( v46 >= 0 )
          v27 = -2147483637;
        v46 = v27;
      }
      v42 = v12;
      v14 = (_QWORD *)a1[12];
      for ( i = &v14[a1[14]]; v14 != i; ++v14 )
      {
        v28 = *(_OWORD *)tson::make_string_tag(v37, *v14);
        *(_OWORD *)v36 = v28;
        LOBYTE(v29) = (_QWORD)v28 == 0LL;
        LOBYTE(v30) = 23;
        if ( (unsigned __int8)tson::output_archive::write_type(&v40, v29, v30) )
          tson::output_archive::write_string_bytes((tson::output_archive *)&v40, v36[1], (void *)v28, v36[1]);
      }
      tson::output_archive::finishNode((tson::output_archive *)&v40);
      v40 = "errors";
      v41 = 6;
      tson::output_archive::startNode((tson::output_archive *)&v40);
      v16 = a1[11];
      if ( v45 )
      {
        v17 = &v43[4 * v45];
      }
      else
      {
        v43[0] = 1;
        v17 = v44;
      }
      *(_DWORD *)v17 = 2;
      if ( v16 > 0xFFFF )
      {
        v31 = v46;
        if ( v46 >= 0 )
          v31 = -2147483637;
        v46 = v31;
      }
      v42 = v16;
      v18 = (struct tson::output_archive *)a1[9];
      v19 = (struct tson::output_archive *)((char *)v18 + 168 * a1[11]);
      while ( v18 != v19 )
      {
        tson::output_archive::startNode((tson::output_archive *)&v40);
        tson::save_nothrow((tson *)&v40, v18, v32);
        tson::output_archive::finishNode((tson::output_archive *)&v40);
        v18 = (struct tson::output_archive *)((char *)v18 + 168);
      }
      tson::output_archive::finishNode((tson::output_archive *)&v40);
      v40 = "flags";
      v41 = 5;
      tson::output_archive::startNode((tson::output_archive *)&v40);
      v20 = a1[17];
      if ( v45 )
      {
        v21 = &v43[4 * v45];
      }
      else
      {
        v43[0] = 1;
        v21 = v44;
      }
      *(_DWORD *)v21 = 2;
      if ( v20 > 0xFFFF )
      {
        v33 = v46;
        if ( v46 >= 0 )
          v33 = -2147483637;
        v46 = v33;
      }
      v42 = v20;
      v22 = (struct tson::output_archive *)a1[15];
      v23 = (struct tson::output_archive *)((char *)v22 + 104 * a1[17]);
      while ( v22 != v23 )
      {
        tson::output_archive::startNode((tson::output_archive *)&v40);
        tson::save_nothrow((tson *)&v40, v22, v34);
        tson::output_archive::finishNode((tson::output_archive *)&v40);
        v22 = (struct tson::output_archive *)((char *)v22 + 104);
      }
      tson::output_archive::finishNode((tson::output_archive *)&v40);
    }
    v24 = *a1;
    if ( tip2::details::g_test_interface_exception_guard )
    {
      if ( !(unsigned __int8)tip2::details::g_test_interface_exception_guard(v24, &v40, a3, 0LL, 0LL) )
      {
        *((_BYTE *)a1 + 160) = 3;
        *((_WORD *)a1 + 81) = 16396;
        a1[21] = 0LL;
      }
    }
    else
    {
      (*(void (__fastcall **)(__int64, const char **, _QWORD))(*(_QWORD *)v24 + 8LL))(v24, &v40, a3);
    }
    if ( (int)tson::output_archive::finish((tson::output_archive *)&v40) >= 0 )
      return *((_QWORD *)a2 + 258);
    *((_DWORD *)a1 + 16) |= 0x100000u;
  }
  return 0LL;
}
