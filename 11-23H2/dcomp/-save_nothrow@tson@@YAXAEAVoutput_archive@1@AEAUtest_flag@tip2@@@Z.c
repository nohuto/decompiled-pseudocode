/*
 * XREFs of ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x18009ED20
 * Callers:
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x18009D014 (--$process@V-$nvp@AEAV-$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@output_archive@tson@@AEAA.c)
 * Callees:
 *     ??$?RAEAUansistring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUansistring_tag@1@@Z @ 0x18009C2DC (--$-RAEAUansistring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUansistring_tag@1@@Z.c)
 *     ??$?RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z @ 0x18009C330 (--$-RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z.c)
 *     ??$?RV?$nvp@AEAD@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAD@1@@Z @ 0x18009C448 (--$-RV-$nvp@AEAD@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAD@1@@Z.c)
 *     ??$?RV?$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAE@1@@Z @ 0x18009C534 (--$-RV-$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAE@1@@Z.c)
 *     ??$?RV?$nvp@AEAN@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAN@1@@Z @ 0x18009C728 (--$-RV-$nvp@AEAN@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAN@1@@Z.c)
 *     ??$?RV?$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@Uansistring_tag@tson@@@1@@Z @ 0x18009CA54 (--$-RV-$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@Uansistrin.c)
 *     ??$?RV?$nvp@_N@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@_N@1@@Z @ 0x18009CA84 (--$-RV-$nvp@_N@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@_N@1@@Z.c)
 *     ??$process@V?$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x18009CE5C (--$process@V-$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x18009CEB8 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ?make_string_tag@tson@@YA?AUansistring_tag@1@PEBD@Z @ 0x18009E8C8 (-make_string_tag@tson@@YA-AUansistring_tag@1@PEBD@Z.c)
 *     ?make_string_tag@tson@@YA?AUstring_tag@1@PEBG@Z @ 0x18009E8F4 (-make_string_tag@tson@@YA-AUstring_tag@1@PEBG@Z.c)
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x18009E96C (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x18009FA64 (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 */

void __fastcall tson::save_nothrow(tson *this, struct tson::output_archive *a2, struct tip2::test_flag *a3)
{
  __int64 string_tag; // rax
  __int64 v6; // xmm1_8
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  bool v18; // zf
  rsize_t v19; // r8
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  __int64 v24; // rax
  __int128 v25; // xmm0
  __int64 v26; // xmm1_8
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // xmm1_8
  __int64 v30; // r8
  const char *v31; // [rsp+20h] [rbp-29h] BYREF
  char v32; // [rsp+28h] [rbp-21h]
  char *v33; // [rsp+30h] [rbp-19h]
  const char *v34; // [rsp+38h] [rbp-11h] BYREF
  char v35; // [rsp+40h] [rbp-9h]
  __int128 v36; // [rsp+48h] [rbp-1h] BYREF
  __int64 v37; // [rsp+58h] [rbp+Fh]
  const char *v38; // [rsp+60h] [rbp+17h] BYREF
  char v39; // [rsp+68h] [rbp+1Fh]
  bool v40; // [rsp+69h] [rbp+20h]
  struct tson::output_archive *v41; // [rsp+70h] [rbp+27h]
  _BYTE v42[24]; // [rsp+78h] [rbp+2Fh] BYREF
  __int64 v43; // [rsp+B0h] [rbp+67h] BYREF

  string_tag = tson::make_string_tag((__int64)v42, *((_QWORD *)a2 + 1));
  v32 = 4;
  v31 = "type";
  v33 = (char *)a2 + 16;
  v6 = *(_QWORD *)(string_tag + 16);
  v36 = *(_OWORD *)string_tag;
  v34 = "name";
  v35 = 4;
  v37 = v6;
  v38 = "reason";
  v39 = 6;
  v41 = a2;
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, (__int64 *)&v38, v7);
  *(_QWORD *)this = "name";
  *((_BYTE *)this + 8) = 4;
  tson::output_archive::operator()<tson::ansistring_tag &>(this, &v36, v8);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, (__int64 *)&v31, v9);
  v12 = *((unsigned __int16 *)a2 + 8);
  if ( v12 <= 0x12 )
  {
    if ( v12 == 18 )
    {
      v32 = 5;
      v31 = "value";
      v33 = (char *)a2 + 24;
      tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, (__int64 *)&v31, v11);
      return;
    }
    v13 = v12 - 2;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 2;
        if ( v15 )
        {
          v16 = v15 - 6;
          if ( v16 )
          {
            v17 = v16 - 5;
            if ( v17 )
            {
              if ( v17 == 1 )
              {
                v32 = 5;
                v31 = "value";
                v33 = (char *)a2 + 24;
                tson::output_archive::operator()<tson::nvp<unsigned char &>>((__int64)this, (__int64 *)&v31, v11);
              }
            }
            else
            {
              v32 = 5;
              v31 = "value";
              v33 = (char *)a2 + 24;
              tson::output_archive::operator()<tson::nvp<char &>>((__int64)this, (__int64 *)&v31, v11);
            }
          }
          else
          {
            v39 = 5;
            v18 = *((_WORD *)a2 + 12) == 0;
            v38 = "value";
            v40 = !v18;
            tson::output_archive::operator()<tson::nvp<bool>>((__int64)this, (__int64 *)&v38, v11);
          }
        }
        else
        {
          v32 = 5;
          v31 = "value";
          v33 = (char *)a2 + 24;
          tson::output_archive::operator()<tson::nvp<double &>>((__int64)this, (__int64)&v31, v11);
        }
      }
      else
      {
        v32 = 5;
        v31 = "value";
        v33 = (char *)a2 + 24;
        tson::output_archive::process<tson::nvp<long &>>((__int64)this, (__int64 *)&v31, v11);
      }
      return;
    }
    *((_BYTE *)this + 8) = 5;
    *(_QWORD *)this = "value";
    LOBYTE(v11) = 13;
    LOWORD(v43) = *((_WORD *)a2 + 12);
    LOBYTE(v10) = (_WORD)v43 == 0;
    if ( !(unsigned __int8)tson::output_archive::write_type(this, v10, v11) )
      return;
    v19 = 2LL;
LABEL_30:
    tson::write_buffer::push_back(*((void ***)this + 18), &v43, v19);
    return;
  }
  v20 = v12 - 19;
  if ( !v20 )
  {
    *((_BYTE *)this + 8) = 5;
    *(_QWORD *)this = "value";
    LOBYTE(v11) = 18;
    LODWORD(v43) = *((_DWORD *)a2 + 6);
    LOBYTE(v10) = (_DWORD)v43 == 0;
    if ( !(unsigned __int8)tson::output_archive::write_type(this, v10, v11) )
      return;
    v19 = 4LL;
    goto LABEL_30;
  }
  v21 = v20 - 1;
  if ( !v21 )
  {
    LOBYTE(v11) = 19;
    goto LABEL_25;
  }
  v22 = v21 - 1;
  if ( !v22 )
  {
    LOBYTE(v11) = 20;
LABEL_25:
    *((_BYTE *)this + 8) = 5;
    *(_QWORD *)this = "value";
    v43 = *((_QWORD *)a2 + 3);
    LOBYTE(v10) = v43 == 0;
    if ( !(unsigned __int8)tson::output_archive::write_type(this, v10, v11) )
      return;
    v19 = 8LL;
    goto LABEL_30;
  }
  v23 = v22 - 9;
  if ( v23 )
  {
    if ( v23 == 1 )
    {
      v24 = tson::make_string_tag((__int64)v42, *((_QWORD *)a2 + 3));
      v35 = 5;
      v34 = "value";
      v25 = *(_OWORD *)v24;
      v26 = *(_QWORD *)(v24 + 16);
      *(_QWORD *)this = "value";
      v36 = v25;
      *((_BYTE *)this + 8) = 5;
      v37 = v26;
      tson::output_archive::operator()<tson::string_tag &>(this, &v36, v27);
    }
  }
  else
  {
    v28 = tson::make_string_tag((__int64)v42, *((_QWORD *)a2 + 3));
    v35 = 5;
    v34 = "value";
    v29 = *(_QWORD *)(v28 + 16);
    v36 = *(_OWORD *)v28;
    v37 = v29;
    tson::output_archive::operator()<tson::nvp<tson::ansistring_tag>>(this, (__int64)&v34, v30);
  }
}
