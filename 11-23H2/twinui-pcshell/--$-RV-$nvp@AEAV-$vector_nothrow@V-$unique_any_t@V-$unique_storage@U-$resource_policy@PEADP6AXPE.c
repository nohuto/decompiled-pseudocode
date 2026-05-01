/*
 * XREFs of ??$?RV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@tson@@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x18046194C
 * Callers:
 *     ?serialize_data@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180289230 (-serialize_data@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 * Callees:
 *     ?write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z @ 0x1800132C4 (-write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z.c)
 *     ?make_string_tag@tson@@YA?AUansistring_tag@1@PEBD@Z @ 0x180013644 (-make_string_tag@tson@@YA-AUansistring_tag@1@PEBD@Z.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x180013724 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x180013878 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800138B4 (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x18046D8AC (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x18046DCB4 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z.c)
 */

tson *__fastcall tson::output_archive::operator()<tson::nvp<tip2::vector_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>>> &>,tson::nvp<tip2::vector_nothrow<wil::StoredFailureInfo> &>,tson::nvp<tip2::vector_nothrow<tip2::test_flag> &>>(
        tson *this,
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  char v4; // r10
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 *v13; // rdi
  __int64 i; // rsi
  _OWORD *string_tag; // rax
  void *v16; // r14
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  struct tson::output_archive *v22; // rdi
  __int64 v23; // rsi
  struct wil::StoredFailureInfo *v24; // r8
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  struct tson::output_archive *v29; // rdi
  __int64 v30; // rsi
  struct tip2::test_flag *v31; // r8
  unsigned __int64 v33[2]; // [rsp+20h] [rbp-58h]
  _BYTE v34[32]; // [rsp+40h] [rbp-38h] BYREF

  v4 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v4;
  v8 = *(_QWORD *)(a2 + 16);
  tson::output_archive::startNode(this);
  v9 = *((_QWORD *)this + 16);
  v10 = 4LL;
  v11 = *(_QWORD *)(v8 + 16);
  if ( v9 )
  {
    v12 = 4 * v9;
  }
  else
  {
    *((_BYTE *)this + 24) = 1;
    v12 = 4LL;
  }
  *(_DWORD *)((char *)this + v12 + 24) = 2;
  if ( v11 > 0xFFFF && *((int *)this + 34) >= 0 )
    *((_DWORD *)this + 34) = -2147483637;
  *((_WORD *)this + 5) = v11;
  v13 = *(__int64 **)v8;
  for ( i = *(_QWORD *)v8 + 8LL * *(_QWORD *)(v8 + 16); v13 != (__int64 *)i; ++v13 )
  {
    string_tag = (_OWORD *)tson::make_string_tag((__int64)v34, *v13);
    *(_OWORD *)v33 = *string_tag;
    v16 = *(void **)string_tag;
    if ( tson::output_archive::write_type(this, *(_QWORD *)string_tag == 0LL, 23) )
      tson::output_archive::write_string_bytes(this, v33[1], v16, v33[1]);
  }
  tson::output_archive::finishNode(this);
  v17 = *a3;
  *((_BYTE *)this + 8) = *((_BYTE *)a3 + 8);
  *(_QWORD *)this = v17;
  v18 = a3[2];
  tson::output_archive::startNode(this);
  v19 = *((_QWORD *)this + 16);
  v20 = *(_QWORD *)(v18 + 16);
  if ( v19 )
  {
    v21 = 4 * v19;
  }
  else
  {
    *((_BYTE *)this + 24) = 1;
    v21 = 4LL;
  }
  *(_DWORD *)((char *)this + v21 + 24) = 2;
  if ( v20 > 0xFFFF && *((int *)this + 34) >= 0 )
    *((_DWORD *)this + 34) = -2147483637;
  *((_WORD *)this + 5) = v20;
  v22 = *(struct tson::output_archive **)v18;
  v23 = *(_QWORD *)v18 + 168LL * *(_QWORD *)(v18 + 16);
  while ( v22 != (struct tson::output_archive *)v23 )
  {
    tson::output_archive::startNode(this);
    tson::save_nothrow(this, v22, v24);
    tson::output_archive::finishNode(this);
    v22 = (struct tson::output_archive *)((char *)v22 + 168);
  }
  tson::output_archive::finishNode(this);
  v25 = *a4;
  *((_BYTE *)this + 8) = *((_BYTE *)a4 + 8);
  *(_QWORD *)this = v25;
  v26 = a4[2];
  tson::output_archive::startNode(this);
  v27 = *((_QWORD *)this + 16);
  v28 = *(_QWORD *)(v26 + 16);
  if ( v27 )
    v10 = 4 * v27;
  else
    *((_BYTE *)this + 24) = 1;
  *(_DWORD *)((char *)this + v10 + 24) = 2;
  if ( v28 > 0xFFFF && *((int *)this + 34) >= 0 )
    *((_DWORD *)this + 34) = -2147483637;
  *((_WORD *)this + 5) = v28;
  v29 = *(struct tson::output_archive **)v26;
  v30 = *(_QWORD *)v26 + 104LL * *(_QWORD *)(v26 + 16);
  while ( v29 != (struct tson::output_archive *)v30 )
  {
    tson::output_archive::startNode(this);
    tson::save_nothrow(this, v29, v31);
    tson::output_archive::finishNode(this);
    v29 = (struct tson::output_archive *)((char *)v29 + 104);
  }
  tson::output_archive::finishNode(this);
  return this;
}
