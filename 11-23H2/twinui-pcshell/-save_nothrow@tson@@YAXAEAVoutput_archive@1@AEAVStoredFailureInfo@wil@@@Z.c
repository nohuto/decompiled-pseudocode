/*
 * XREFs of ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x18046DCB4
 * Callers:
 *     ?serialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1800133CC (-serialize_data@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180086A50 (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 *     ??$?RV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@tson@@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x18046194C (--$-RV-$nvp@AEAV-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPE.c)
 * Callees:
 *     ?make_string_tag@tson@@YA?AUansistring_tag@1@PEBD@Z @ 0x180013644 (-make_string_tag@tson@@YA-AUansistring_tag@1@PEBD@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@V?$nvp@AEAUansistring_tag@tson@@@2@V?$nvp@AEAG@2@V32@V?$nvp@AEAI@2@V?$nvp@AEAUstring_tag@tson@@@2@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAUansistring_tag@tson@@@1@$$QEAV?$nvp@AEAG@1@1$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAUstring_tag@tson@@@1@1@Z @ 0x180463AB8 (--$process@V-$nvp@AEAJ@tson@@V-$nvp@AEAUansistring_tag@tson@@@2@V-$nvp@AEAG@2@V32@V-$nvp@AEAI@2@.c)
 *     ?make_string_tag@tson@@YA?AUstring_tag@1@PEBG@Z @ 0x18046D488 (-make_string_tag@tson@@YA-AUstring_tag@1@PEBG@Z.c)
 */

void __fastcall tson::save_nothrow(tson *this, struct tson::output_archive *a2, struct wil::StoredFailureInfo *a3)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 string_tag; // rax
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int64 v16; // xmm1_8
  tson::output_archive *v17; // r10
  const char *v18; // [rsp+40h] [rbp-C0h] BYREF
  char v19; // [rsp+48h] [rbp-B8h]
  int *v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  char v22; // [rsp+60h] [rbp-A0h]
  __int128 *v23; // [rsp+68h] [rbp-98h]
  __int64 v24; // [rsp+70h] [rbp-90h] BYREF
  char v25; // [rsp+78h] [rbp-88h]
  __int128 *v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h] BYREF
  char v28; // [rsp+90h] [rbp-70h]
  int *v29; // [rsp+98h] [rbp-68h]
  __int64 v30; // [rsp+A0h] [rbp-60h] BYREF
  char v31; // [rsp+A8h] [rbp-58h]
  __int128 *v32; // [rsp+B0h] [rbp-50h]
  const char *v33; // [rsp+B8h] [rbp-48h] BYREF
  char v34; // [rsp+C0h] [rbp-40h]
  __int16 *v35; // [rsp+C8h] [rbp-38h]
  const char *v36; // [rsp+D0h] [rbp-30h] BYREF
  char v37; // [rsp+D8h] [rbp-28h]
  __int128 *v38; // [rsp+E0h] [rbp-20h]
  __int128 v39; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v40; // [rsp+F8h] [rbp-8h]
  __int128 v41; // [rsp+100h] [rbp+0h] BYREF
  __int64 v42; // [rsp+110h] [rbp+10h]
  __int128 v43; // [rsp+118h] [rbp+18h] BYREF
  __int64 v44; // [rsp+128h] [rbp+28h]
  __int128 v45; // [rsp+130h] [rbp+30h] BYREF
  __int64 v46; // [rsp+140h] [rbp+40h]
  __int16 v47; // [rsp+168h] [rbp+68h] BYREF
  int v48; // [rsp+170h] [rbp+70h] BYREF
  int v49; // [rsp+178h] [rbp+78h] BYREF

  v49 = *((_DWORD *)a2 + 2);
  v47 = *((_WORD *)a2 + 32);
  v3 = *(_DWORD *)a2;
  v4 = *((_QWORD *)a2 + 7);
  v48 = v3;
  string_tag = tson::make_string_tag((__int64)&v18, v4);
  v7 = *(_QWORD *)(v6 + 128);
  v45 = *(_OWORD *)string_tag;
  v46 = *(_QWORD *)(string_tag + 16);
  v8 = tson::make_string_tag((__int64)&v18, v7);
  v10 = *(_QWORD *)(v9 + 24);
  v43 = *(_OWORD *)v8;
  v44 = *(_QWORD *)(v8 + 16);
  v11 = tson::make_string_tag((__int64)&v18, v10);
  v13 = *(_QWORD *)(v12 + 72);
  v41 = *(_OWORD *)v11;
  v42 = *(_QWORD *)(v11 + 16);
  v14 = tson::make_string_tag((__int64)&v18, v13);
  v22 = 7;
  v25 = 7;
  v28 = 4;
  v15 = *(_OWORD *)v14;
  v31 = 6;
  v34 = 4;
  v39 = v15;
  v37 = 4;
  v16 = *(_QWORD *)(v14 + 16);
  v21 = (__int64)"context";
  v23 = &v39;
  v24 = (__int64)"message";
  v26 = &v41;
  v27 = (__int64)"type";
  v29 = &v48;
  v30 = (__int64)"module";
  v32 = &v43;
  v33 = "line";
  v35 = &v47;
  v36 = "file";
  v38 = &v45;
  v18 = "hr";
  v20 = &v49;
  v40 = v16;
  v19 = 2;
  tson::output_archive::process<tson::nvp<long &>,tson::nvp<tson::ansistring_tag &>,tson::nvp<unsigned short &>,tson::nvp<tson::ansistring_tag &>,tson::nvp<unsigned int &>,tson::nvp<tson::string_tag &>,tson::nvp<tson::ansistring_tag &>>(
    v17,
    (__int64)&v18,
    (__int64 *)&v36,
    (__int64)&v33,
    &v30,
    &v27,
    &v24,
    &v21);
}
