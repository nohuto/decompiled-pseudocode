/*
 * XREFs of ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x18046D188
 * Callers:
 *     ??$load_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@Z @ 0x18046323C (--$load_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@VStor.c)
 * Callees:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180045680 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??$process@V?$nvp@AEAJ@tson@@V?$nvp@AEAUansistring_buffer_tag@tson@@@2@V?$nvp@AEAG@2@V32@V?$nvp@AEAI@2@V?$nvp@AEAUstring_buffer_tag@tson@@@2@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAUansistring_buffer_tag@tson@@@1@$$QEAV?$nvp@AEAG@1@1$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAUstring_buffer_tag@tson@@@1@1@Z @ 0x1804639FC (--$process@V-$nvp@AEAJ@tson@@V-$nvp@AEAUansistring_buffer_tag@tson@@@2@V-$nvp@AEAG@2@V32@V-$nvp@.c)
 */

void __fastcall tson::load_nothrow(tson *this, struct tson::input_archive *a2, struct wil::StoredFailureInfo *a3)
{
  unsigned __int16 v4; // [rsp+40h] [rbp-C0h] BYREF
  int v5; // [rsp+44h] [rbp-BCh] BYREF
  int v6; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v7[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v8[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v9[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v10[2]; // [rsp+80h] [rbp-80h] BYREF
  const char *v11; // [rsp+90h] [rbp-70h] BYREF
  char v12; // [rsp+98h] [rbp-68h]
  _QWORD *v13; // [rsp+A0h] [rbp-60h]
  const char *v14; // [rsp+A8h] [rbp-58h] BYREF
  char v15; // [rsp+B0h] [rbp-50h]
  _QWORD *v16; // [rsp+B8h] [rbp-48h]
  const char *v17; // [rsp+C0h] [rbp-40h] BYREF
  char v18; // [rsp+C8h] [rbp-38h]
  int *v19; // [rsp+D0h] [rbp-30h]
  __int64 v20; // [rsp+D8h] [rbp-28h] BYREF
  char v21; // [rsp+E0h] [rbp-20h]
  _QWORD *v22; // [rsp+E8h] [rbp-18h]
  __int64 v23; // [rsp+F0h] [rbp-10h] BYREF
  char v24; // [rsp+F8h] [rbp-8h]
  unsigned __int16 *v25; // [rsp+100h] [rbp+0h]
  __int64 v26; // [rsp+108h] [rbp+8h] BYREF
  char v27; // [rsp+110h] [rbp+10h]
  _QWORD *v28; // [rsp+118h] [rbp+18h]
  __int64 v29; // [rsp+120h] [rbp+20h] BYREF
  char v30; // [rsp+128h] [rbp+28h]
  int *v31; // [rsp+130h] [rbp+30h]
  _DWORD v32[6]; // [rsp+140h] [rbp+40h] BYREF
  _WORD *v33; // [rsp+158h] [rbp+58h]
  _BYTE *v34; // [rsp+178h] [rbp+78h]
  int v35; // [rsp+180h] [rbp+80h]
  _BYTE *v36; // [rsp+188h] [rbp+88h]
  _BYTE *v37; // [rsp+1C0h] [rbp+C0h]
  _BYTE v38[128]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v39[256]; // [rsp+260h] [rbp+160h] BYREF
  _BYTE v40[256]; // [rsp+360h] [rbp+260h] BYREF
  _WORD v41[256]; // [rsp+460h] [rbp+360h] BYREF

  v9[1] = 128LL;
  v5 = 0;
  v4 = 0;
  v6 = 0;
  v39[0] = 0;
  v38[0] = 0;
  v41[0] = 0;
  v40[0] = 0;
  v10[0] = v39;
  v9[0] = v38;
  v8[0] = v41;
  v7[0] = v40;
  v11 = "context";
  v13 = v7;
  v14 = "message";
  v16 = v8;
  v17 = "type";
  v19 = &v6;
  v20 = (__int64)"module";
  v22 = v9;
  v23 = (__int64)"line";
  v25 = &v4;
  v26 = (__int64)"file";
  v28 = v10;
  v29 = (__int64)"hr";
  v31 = &v5;
  v10[1] = 256LL;
  v8[1] = 256LL;
  v7[1] = 256LL;
  v12 = 7;
  v15 = 7;
  v18 = 4;
  v21 = 6;
  v24 = 4;
  v27 = 4;
  v30 = 2;
  tson::input_archive::process<tson::nvp<long &>,tson::nvp<tson::ansistring_buffer_tag &>,tson::nvp<unsigned short &>,tson::nvp<tson::ansistring_buffer_tag &>,tson::nvp<unsigned int &>,tson::nvp<tson::string_buffer_tag &>,tson::nvp<tson::ansistring_buffer_tag &>>(
    this,
    (__int64)&v29,
    &v26,
    (__int64)&v23,
    &v20,
    (__int64 *)&v17,
    (__int64 *)&v14,
    (__int64 *)&v11);
  memset_0(v32, 0, 0x98uLL);
  v32[2] = v5;
  v34 = v39;
  v35 = v4;
  v37 = v38;
  v32[0] = v6;
  v33 = v41;
  v36 = v40;
  wil::StoredFailureInfo::SetFailureInfo(a2, (const struct wil::FailureInfo *)v32);
}
