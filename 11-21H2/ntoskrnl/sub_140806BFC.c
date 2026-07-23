/*
 * XREFs of sub_140806BFC @ 0x140806BFC
 * Callers:
 *     sub_140806B90 @ 0x140806B90 (sub_140806B90.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_140806BFC(__int64 a1)
{
  _UNKNOWN **v1; // rax
  REGHANDLE v2; // rbx
  int v4; // [rsp+38h] [rbp-D0h] BYREF
  int v5; // [rsp+3Ch] [rbp-CCh] BYREF
  int v6; // [rsp+40h] [rbp-C8h] BYREF
  int v7; // [rsp+44h] [rbp-C4h] BYREF
  int v8; // [rsp+48h] [rbp-C0h] BYREF
  int v9; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v10; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  void *v12; // [rsp+68h] [rbp-A0h]
  __int64 v13; // [rsp+70h] [rbp-98h]
  int *v14; // [rsp+78h] [rbp-90h]
  __int64 v15; // [rsp+80h] [rbp-88h]
  void *v16; // [rsp+88h] [rbp-80h]
  __int64 v17; // [rsp+90h] [rbp-78h]
  void *v18; // [rsp+98h] [rbp-70h]
  __int64 v19; // [rsp+A0h] [rbp-68h]
  void *v20; // [rsp+A8h] [rbp-60h]
  __int64 v21; // [rsp+B0h] [rbp-58h]
  void *v22; // [rsp+B8h] [rbp-50h]
  __int64 v23; // [rsp+C0h] [rbp-48h]
  void *v24; // [rsp+C8h] [rbp-40h]
  __int64 v25; // [rsp+D0h] [rbp-38h]
  void *v26; // [rsp+D8h] [rbp-30h]
  __int64 v27; // [rsp+E0h] [rbp-28h]
  void *v28; // [rsp+E8h] [rbp-20h]
  __int64 v29; // [rsp+F0h] [rbp-18h]
  void *v30; // [rsp+F8h] [rbp-10h]
  __int64 v31; // [rsp+100h] [rbp-8h]
  void *v32; // [rsp+108h] [rbp+0h]
  __int64 v33; // [rsp+110h] [rbp+8h]
  void *v34; // [rsp+118h] [rbp+10h]
  __int64 v35; // [rsp+120h] [rbp+18h]
  int *v36; // [rsp+128h] [rbp+20h]
  __int64 v37; // [rsp+130h] [rbp+28h]
  int *v38; // [rsp+138h] [rbp+30h]
  __int64 v39; // [rsp+140h] [rbp+38h]
  void *v40; // [rsp+148h] [rbp+40h]
  __int64 v41; // [rsp+150h] [rbp+48h]
  int *v42; // [rsp+158h] [rbp+50h]
  __int64 v43; // [rsp+160h] [rbp+58h]
  void *v44; // [rsp+168h] [rbp+60h]
  __int64 v45; // [rsp+170h] [rbp+68h]
  void *v46; // [rsp+178h] [rbp+70h]
  __int64 v47; // [rsp+180h] [rbp+78h]
  void *v48; // [rsp+188h] [rbp+80h]
  __int64 v49; // [rsp+190h] [rbp+88h]
  void *v50; // [rsp+198h] [rbp+90h]
  __int64 v51; // [rsp+1A0h] [rbp+98h]
  void *v52; // [rsp+1A8h] [rbp+A0h]
  __int64 v53; // [rsp+1B0h] [rbp+A8h]
  void *v54; // [rsp+1B8h] [rbp+B0h]
  __int64 v55; // [rsp+1C0h] [rbp+B8h]
  void *v56; // [rsp+1C8h] [rbp+C0h]
  __int64 v57; // [rsp+1D0h] [rbp+C8h]
  void *v58; // [rsp+1D8h] [rbp+D0h]
  __int64 v59; // [rsp+1E0h] [rbp+D8h]
  int *v60; // [rsp+1E8h] [rbp+E0h]
  __int64 v61; // [rsp+1F0h] [rbp+E8h]
  void *v62; // [rsp+1F8h] [rbp+F0h]
  __int64 v63; // [rsp+200h] [rbp+F8h]
  void *v64; // [rsp+208h] [rbp+100h]
  __int64 v65; // [rsp+210h] [rbp+108h]
  int *v66; // [rsp+218h] [rbp+110h]
  __int64 v67; // [rsp+220h] [rbp+118h]
  __int64 *v68; // [rsp+228h] [rbp+120h]
  __int64 v69; // [rsp+230h] [rbp+128h]
  __int64 *v70; // [rsp+238h] [rbp+130h]
  __int64 v71; // [rsp+240h] [rbp+138h]
  void *v72; // [rsp+248h] [rbp+140h]
  __int64 v73; // [rsp+250h] [rbp+148h]
  void *v74; // [rsp+258h] [rbp+150h]
  __int64 v75; // [rsp+260h] [rbp+158h]
  _UNKNOWN *retaddr; // [rsp+280h] [rbp+178h] BYREF
  __int64 v77; // [rsp+288h] [rbp+180h] BYREF

  v1 = &retaddr;
  v77 = a1;
  if ( byte_140C5AE16 )
  {
    v2 = CallbackContext;
    LOBYTE(v1) = EtwEventEnabled(CallbackContext, &stru_14000FAA0);
    if ( (_BYTE)v1 )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      v4 = byte_140C21EDC & 1;
      v13 = 8LL;
      v6 = byte_140C21EDD & 1;
      v5 = ((unsigned __int8)byte_140C21EDD >> 1) & 1;
      LODWORD(v10) = (unsigned __int8)byte_140C21F35;
      v8 = (unsigned __int8)byte_140C21F34;
      v9 = (unsigned __int8)byte_140C21F0C;
      UserData.Ptr = (ULONGLONG)&unk_140C21E60;
      v12 = &unk_140C21E88;
      v14 = &v4;
      v16 = &unk_140C21EE0;
      v18 = &unk_140C21EE8;
      v20 = &unk_140C21EF0;
      v22 = &unk_140C21E80;
      v24 = &unk_140C21E7C;
      v26 = &unk_140C21EC0;
      v28 = &unk_140C21F00;
      v30 = &unk_140C21E78;
      v32 = &unk_140C21EB8;
      v34 = &unk_140C21ED8;
      v36 = &v5;
      v38 = &v6;
      v40 = &unk_140C21EC8;
      v42 = &v7;
      v44 = &unk_140C21F04;
      v46 = &unk_140C21F08;
      v48 = &unk_140C21F10;
      v7 = ((unsigned __int8)byte_140C21EDD >> 2) & 1;
      v15 = 4LL;
      v17 = 8LL;
      v19 = 8LL;
      v21 = 8LL;
      v23 = 8LL;
      v25 = 4LL;
      v27 = 8LL;
      v29 = 1LL;
      v31 = 4LL;
      v33 = 8LL;
      v35 = 4LL;
      v37 = 4LL;
      v39 = 4LL;
      v41 = 8LL;
      v43 = 4LL;
      v45 = 4LL;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      v50 = &unk_140C21F1C;
      v53 = 4LL;
      v52 = &unk_140C21F20;
      v55 = 4LL;
      v54 = &unk_140C21E68;
      v57 = 8LL;
      v56 = &unk_140C21E70;
      v59 = 4LL;
      v58 = &unk_140C21F30;
      v60 = &v8;
      v62 = &unk_140C21F38;
      v64 = &unk_140C21F3C;
      v66 = &v9;
      v68 = &v10;
      v70 = &v77;
      v72 = &unk_140C21F14;
      v74 = &unk_140C21F18;
      v61 = 4LL;
      v63 = 4LL;
      v65 = 4LL;
      v67 = 4LL;
      v69 = 4LL;
      v71 = 8LL;
      v73 = 4LL;
      v75 = 4LL;
      LOBYTE(v1) = EtwWrite(v2, &stru_14000FAA0, &OutputBuffer, 0x21u, &UserData);
    }
  }
  return (char)v1;
}
