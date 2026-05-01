/*
 * XREFs of ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x18046CBC8
 * Callers:
 *     ??$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x180462FB8 (--$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@Utest_flag@t.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18009658C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$consume@E@read_buffer@tson@@QEAA_NAEAE@Z @ 0x180462F40 (--$consume@E@read_buffer@tson@@QEAA_NAEAE@Z.c)
 *     ??$read_string_buffer@Uansistring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUansistring_buffer_tag@1@@Z @ 0x180465154 (--$read_string_buffer@Uansistring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@de.c)
 *     ??$read_string_two_phase@Uansistring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUansistring_tag@1@@Z @ 0x18046531C (--$read_string_two_phase@Uansistring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@detail.c)
 *     ??$read_string_two_phase@Ustring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUstring_tag@1@@Z @ 0x1804653C0 (--$read_string_two_phase@Ustring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x18046BD20 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@QEAAXPEAD@Z @ 0x18046D7D4 (-reset@-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

void __fastcall tson::load_nothrow(tson *this, struct tson::input_archive *a2, struct tip2::test_flag *a3)
{
  _WORD *v3; // rsi
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // dl
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  __int64 v13; // r8
  char *v14; // rax
  char v15; // cl
  __int64 v16; // r8
  char *v17; // rax
  char v18; // cl
  char v19; // al
  __int16 v20; // ax
  size_t v21; // r8
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  void *v27; // rax
  unsigned __int8 v28; // dl
  LPVOID v29; // rax
  unsigned __int8 v30; // dl
  void *v31; // rax
  _QWORD v32[2]; // [rsp+20h] [rbp-30h] BYREF
  void *v33; // [rsp+30h] [rbp-20h] BYREF
  SIZE_T cb; // [rsp+38h] [rbp-18h]
  char v35; // [rsp+40h] [rbp-10h]
  void *v36; // [rsp+80h] [rbp+30h] BYREF

  v32[1] = 64LL;
  *((_QWORD *)a2 + 1) = (char *)a2 + 40;
  v3 = (_WORD *)((char *)a2 + 16);
  v32[0] = (char *)a2 + 40;
  *((_BYTE *)this + 24) = 6;
  *((_QWORD *)this + 2) = "reason";
  if ( tson::input_archive::search(this) )
  {
    tson::input_archive::consume_expected_marker((tson::read_buffer **)this);
    tson::read_buffer::consume_n(*(tson::read_buffer **)this, a2, 2uLL);
  }
  else
  {
    *(_WORD *)a2 = 0;
  }
  *((_BYTE *)this + 24) = 4;
  *((_QWORD *)this + 2) = "name";
  tson::input_archive::read_string_buffer<tson::ansistring_buffer_tag>(this, v6, (__int64)v32);
  *((_BYTE *)this + 24) = 4;
  *((_QWORD *)this + 2) = "type";
  if ( tson::input_archive::search(this) )
  {
    tson::input_archive::consume_expected_marker((tson::read_buffer **)this);
    tson::read_buffer::consume_n(*(tson::read_buffer **)this, v3, 2uLL);
  }
  else
  {
    *v3 = 0;
  }
  v8 = (unsigned __int16)*v3;
  if ( v8 > 0x11 )
  {
    v22 = v8 - 18;
    if ( !v22 )
    {
      *((_BYTE *)this + 24) = 5;
      *((_QWORD *)this + 2) = "value";
      if ( tson::input_archive::search(this) )
      {
LABEL_66:
        tson::input_archive::consume_expected_marker((tson::read_buffer **)this);
        v21 = 2LL;
        goto LABEL_67;
      }
LABEL_68:
      v20 = 0;
LABEL_69:
      *((_WORD *)a2 + 12) = v20;
      return;
    }
    v23 = v22 - 1;
    if ( !v23 )
    {
      *((_BYTE *)this + 24) = 5;
      *((_QWORD *)this + 2) = "value";
      if ( tson::input_archive::search(this) )
        goto LABEL_31;
      goto LABEL_32;
    }
    v24 = v23 - 1;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        v26 = v25 - 9;
        if ( !v26 )
        {
          v36 = 0LL;
          *((_QWORD *)this + 2) = "value";
          *((_BYTE *)this + 24) = 5;
          v33 = 0LL;
          cb = 0LL;
          v35 = 0;
          tson::input_archive::read_string_two_phase<tson::ansistring_tag>(this, v7, (__int64)&v33);
          if ( cb )
          {
            v29 = CoTaskMemAlloc(cb);
            wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>::reset(
              &v36,
              v29);
            if ( v36 )
            {
              v33 = v36;
              tson::input_archive::read_string_two_phase<tson::ansistring_tag>(this, v30, (__int64)&v33);
              goto LABEL_57;
            }
            if ( *((int *)this + 2) >= 0 )
              *((_DWORD *)this + 2) = -2147024882;
          }
          wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>::reset(
            &v36,
            0LL);
          goto LABEL_57;
        }
        if ( v26 != 1 )
          goto LABEL_43;
        v36 = 0LL;
        *((_QWORD *)this + 2) = "value";
        *((_BYTE *)this + 24) = 5;
        v33 = 0LL;
        cb = 0LL;
        v35 = 0;
        tson::input_archive::read_string_two_phase<tson::string_tag>(this, v7, (__int64)&v33);
        if ( cb )
        {
          v27 = CoTaskMemAlloc(2 * cb);
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
            &v36,
            v27);
          if ( v36 )
          {
            v33 = v36;
            tson::input_archive::read_string_two_phase<tson::string_tag>(this, v28, (__int64)&v33);
LABEL_57:
            v31 = v36;
LABEL_62:
            *((_QWORD *)a2 + 3) = v31;
            return;
          }
          if ( *((int *)this + 2) >= 0 )
            *((_DWORD *)this + 2) = -2147024882;
        }
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &v36,
          0LL);
        goto LABEL_57;
      }
      *((_BYTE *)this + 24) = 5;
      *((_QWORD *)this + 2) = "value";
      if ( tson::input_archive::search(this) )
        goto LABEL_29;
    }
    else
    {
      *((_BYTE *)this + 24) = 5;
      *((_QWORD *)this + 2) = "value";
      if ( tson::input_archive::search(this) )
        goto LABEL_29;
    }
LABEL_61:
    v31 = 0LL;
    goto LABEL_62;
  }
  if ( v8 == 17 )
  {
    *((_BYTE *)this + 24) = 5;
    *((_QWORD *)this + 2) = "value";
    if ( tson::input_archive::search(this) )
    {
      tson::input_archive::consume_expected_marker((tson::read_buffer **)this);
      tson::read_buffer::consume<unsigned char>(*(_QWORD *)this, (_BYTE *)a2 + 24);
      return;
    }
    goto LABEL_19;
  }
  if ( !*v3 )
    return;
  v9 = v8 - 2;
  if ( !v9 )
  {
    *((_BYTE *)this + 24) = 5;
    *((_QWORD *)this + 2) = "value";
    if ( tson::input_archive::search(this) )
      goto LABEL_66;
    goto LABEL_68;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    *((_BYTE *)this + 24) = 5;
    *((_QWORD *)this + 2) = "value";
    if ( tson::input_archive::search(this) )
    {
LABEL_31:
      tson::input_archive::consume_expected_marker((tson::read_buffer **)this);
      v21 = 4LL;
      goto LABEL_67;
    }
LABEL_32:
    *((_DWORD *)a2 + 6) = 0;
    return;
  }
  v11 = v10 - 2;
  if ( !v11 )
  {
    *((_BYTE *)this + 24) = 5;
    *((_QWORD *)this + 2) = "value";
    if ( tson::input_archive::search(this) )
    {
LABEL_29:
      tson::input_archive::consume_expected_marker((tson::read_buffer **)this);
      v21 = 8LL;
LABEL_67:
      tson::read_buffer::consume_n(*(tson::read_buffer **)this, (char *)a2 + 24, v21);
      return;
    }
    goto LABEL_61;
  }
  v12 = v11 - 6;
  if ( !v12 )
  {
    LOBYTE(v36) = 0;
    *((_QWORD *)this + 2) = "value";
    *((_BYTE *)this + 24) = 5;
    if ( tson::input_archive::search(this) )
    {
      tson::input_archive::consume_expected_marker((tson::read_buffer **)this);
      v16 = *(_QWORD *)this;
      v17 = *(char **)(*(_QWORD *)this + 8LL);
      if ( (unsigned __int64)v17 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
      {
        v18 = *v17;
        *(_QWORD *)(v16 + 8) = v17 + 1;
        v19 = v18 != 0;
        goto LABEL_25;
      }
      *(_BYTE *)(v16 + 24) = 1;
    }
    v19 = (char)v36;
LABEL_25:
    if ( v19 )
      v20 = -1;
    else
      v20 = 0;
    goto LABEL_69;
  }
  if ( v12 == 5 )
  {
    *((_BYTE *)this + 24) = 5;
    *((_QWORD *)this + 2) = "value";
    if ( tson::input_archive::search(this) )
    {
      tson::input_archive::consume_expected_marker((tson::read_buffer **)this);
      v13 = *(_QWORD *)this;
      v14 = *(char **)(*(_QWORD *)this + 8LL);
      if ( (unsigned __int64)v14 >= *(_QWORD *)(*(_QWORD *)this + 16LL) )
      {
        *(_BYTE *)(v13 + 24) = 1;
      }
      else
      {
        v15 = *v14;
        *(_QWORD *)(v13 + 8) = v14 + 1;
        *((_BYTE *)a2 + 24) = v15;
      }
      return;
    }
LABEL_19:
    *((_BYTE *)a2 + 24) = 0;
    return;
  }
LABEL_43:
  if ( *((int *)this + 2) >= 0 )
    *((_DWORD *)this + 2) = -2147024119;
}
