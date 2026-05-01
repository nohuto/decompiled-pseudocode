/*
 * XREFs of ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x18046D8AC
 * Callers:
 *     ?serialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1800133CC (-serialize_data@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180086A50 (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 *     ??$?RV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@tson@@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x18046194C (--$-RV-$nvp@AEAV-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPE.c)
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x180463C54 (--$process@V-$nvp@AEAV-$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@output_archive@tson@@AEAA.c)
 * Callees:
 *     ?write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z @ 0x1800132C4 (-write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z.c)
 *     ?make_string_tag@tson@@YA?AUansistring_tag@1@PEBD@Z @ 0x180013644 (-make_string_tag@tson@@YA-AUansistring_tag@1@PEBD@Z.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x180013820 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800138B4 (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 *     ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x180013B78 (--$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z.c)
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x180013BC4 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ?make_string_tag@tson@@YA?AUstring_tag@1@PEBG@Z @ 0x18046D488 (-make_string_tag@tson@@YA-AUstring_tag@1@PEBG@Z.c)
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x18046D6FC (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 */

void __fastcall tson::save_nothrow(tson *this, struct tson::output_archive *a2, struct tip2::test_flag *a3)
{
  void ***v5; // rdi
  __int128 v6; // xmm0
  void *v7; // r14
  bool v8; // zf
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  char v15; // r14
  void **v16; // rbx
  rsize_t v17; // r8
  char v18; // r8
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  __int128 v23; // xmm1
  void *v24; // rdi
  void *v25; // rdx
  void *v26; // r9
  __int128 v27; // xmm1
  char v28; // r8
  _BYTE v29[40]; // [rsp+20h] [rbp-40h] BYREF
  void *v30[2]; // [rsp+48h] [rbp-18h]
  double v31; // [rsp+90h] [rbp+30h] BYREF

  v5 = (void ***)((char *)this + 144);
  v6 = *(_OWORD *)tson::make_string_tag((__int64)v29, *((_QWORD *)a2 + 1));
  *((_BYTE *)this + 8) = 6;
  *(_QWORD *)this = "reason";
  LOWORD(v31) = *(_WORD *)a2;
  *(_OWORD *)v30 = v6;
  if ( tson::output_archive::write_type(this, LOWORD(v31) == 0, 14) )
    tson::write_buffer::push_back(*v5, &v31, 2uLL);
  v7 = v30[0];
  v8 = v30[0] == 0LL;
  *(_QWORD *)this = "name";
  *((_BYTE *)this + 8) = 4;
  if ( tson::output_archive::write_type(this, v8, 23) )
    tson::output_archive::write_string_bytes(this, (__int64)v30[1], v7, (unsigned __int64)v30[1]);
  *((_BYTE *)this + 8) = 4;
  *(_QWORD *)this = "type";
  LOWORD(v31) = *((_WORD *)a2 + 8);
  if ( tson::output_archive::write_type(this, LOWORD(v31) == 0, 14) )
    tson::write_buffer::push_back(*v5, &v31, 2uLL);
  v9 = *((unsigned __int16 *)a2 + 8);
  if ( v9 > 0x12 )
  {
    v19 = v9 - 19;
    if ( !v19 )
    {
      *((_BYTE *)this + 8) = 5;
      *(_QWORD *)this = "value";
      tson::output_archive::saveValue(this, *((_DWORD *)a2 + 6));
      return;
    }
    v20 = v19 - 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 9;
        if ( v22 )
        {
          if ( v22 != 1 )
            return;
          v23 = *(_OWORD *)tson::make_string_tag((__int64)v29, *((_QWORD *)a2 + 3));
          *((_BYTE *)this + 8) = 5;
          *(_QWORD *)this = "value";
          v24 = (void *)v23;
          *(_OWORD *)v30 = v23;
          if ( !tson::output_archive::write_type(this, (_QWORD)v23 == 0LL, 24) )
            return;
          v25 = v30[1];
          v26 = (void *)(2 * (__int64)v30[1]);
        }
        else
        {
          v27 = *(_OWORD *)tson::make_string_tag((__int64)v29, *((_QWORD *)a2 + 3));
          *((_BYTE *)this + 8) = 5;
          *(_QWORD *)this = "value";
          v24 = (void *)v27;
          *(_OWORD *)v30 = v27;
          if ( !tson::output_archive::write_type(this, (_QWORD)v27 == 0LL, 23) )
            return;
          v25 = v30[1];
          v26 = v30[1];
        }
        tson::output_archive::write_string_bytes(this, (__int64)v25, v24, (unsigned __int64)v26);
        return;
      }
      v28 = 20;
    }
    else
    {
      v28 = 19;
    }
    *((_BYTE *)this + 8) = 5;
    *(_QWORD *)this = "value";
    v31 = *((double *)a2 + 3);
    if ( !tson::output_archive::write_type(this, *(_QWORD *)&v31 == 0LL, v28) )
      return;
    v17 = 8LL;
LABEL_29:
    tson::write_buffer::push_back(*v5, &v31, v17);
    return;
  }
  if ( v9 == 18 )
  {
    v18 = 14;
    goto LABEL_27;
  }
  v10 = v9 - 2;
  if ( !v10 )
  {
    v18 = 13;
LABEL_27:
    *((_BYTE *)this + 8) = 5;
    *(_QWORD *)this = "value";
    LOWORD(v31) = *((_WORD *)a2 + 12);
    if ( !tson::output_archive::write_type(this, LOWORD(v31) == 0, v18) )
      return;
    v17 = 2LL;
    goto LABEL_29;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    *((_BYTE *)this + 8) = 5;
    *(_QWORD *)this = "value";
    LODWORD(v31) = *((_DWORD *)a2 + 6);
    if ( !tson::output_archive::write_type(this, LODWORD(v31) == 0, 17) )
      return;
    v17 = 4LL;
    goto LABEL_29;
  }
  v12 = v11 - 2;
  if ( !v12 )
  {
    *((_BYTE *)this + 8) = 5;
    *(_QWORD *)this = "value";
    v31 = *((double *)a2 + 3);
    if ( !tson::output_archive::write_type(this, v31 == 0.0, 21) )
      return;
    v17 = 8LL;
    goto LABEL_29;
  }
  v13 = v12 - 6;
  if ( v13 )
  {
    v14 = v13 - 5;
    if ( v14 )
    {
      if ( v14 == 1 )
      {
        *((_BYTE *)this + 8) = 5;
        *(_QWORD *)this = "value";
        LOBYTE(v31) = *((_BYTE *)a2 + 24);
        if ( tson::output_archive::write_type(this, LOBYTE(v31) == 0, 12) )
          tson::write_buffer::push_back<unsigned char>((tson::write_buffer *)*v5, &v31);
      }
    }
    else
    {
      *((_BYTE *)this + 8) = 5;
      *(_QWORD *)this = "value";
      v15 = *((_BYTE *)a2 + 24);
      if ( tson::output_archive::write_type(this, v15 == 0, 11) )
      {
        v16 = *v5;
        if ( (*v5)[259] < (*v5)[260] || tson::write_buffer::reserve((tson::write_buffer *)*v5, 1uLL) )
        {
          *(_BYTE *)v16[259] = v15;
          v16[259] = (char *)v16[259] + 1;
        }
      }
    }
  }
  else
  {
    v8 = *((_WORD *)a2 + 12) == 0;
    *(_QWORD *)this = "value";
    *((_BYTE *)this + 8) = 5;
    tson::output_archive::saveValue(this, !v8);
  }
}
