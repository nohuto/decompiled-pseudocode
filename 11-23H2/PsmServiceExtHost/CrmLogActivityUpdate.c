/*
 * XREFs of CrmLogActivityUpdate @ 0x18002A240
 * Callers:
 *     CrmActivityUpdate @ 0x180038D64 (CrmActivityUpdate.c)
 *     CrmGlobalsRegistrationRundownHelper @ 0x18003F760 (CrmGlobalsRegistrationRundownHelper.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     Feature_IndexerFanBackoff__private_ReportDeviceUsage @ 0x18004BA8C (Feature_IndexerFanBackoff__private_ReportDeviceUsage.c)
 */

int __fastcall CrmLogActivityUpdate(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        __int64 a14,
        __int64 a15)
{
  char *v17; // rbx
  __int64 v20; // rax
  int v21; // edx
  bool v23; // [rsp+30h] [rbp-D0h] BYREF
  bool v24; // [rsp+31h] [rbp-CFh] BYREF
  bool v25; // [rsp+32h] [rbp-CEh] BYREF
  int Key; // [rsp+38h] [rbp-C8h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+44h] [rbp-BCh] BYREF
  int v29; // [rsp+48h] [rbp-B8h] BYREF
  int v30; // [rsp+4Ch] [rbp-B4h] BYREF
  int v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+54h] [rbp-ACh] BYREF
  int v33; // [rsp+58h] [rbp-A8h] BYREF
  int v34; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-98h] BYREF
  __int64 v37; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+80h] [rbp-80h] BYREF
  UUID *v40; // [rsp+A0h] [rbp-60h]
  __int64 v41; // [rsp+A8h] [rbp-58h]
  __int64 *v42; // [rsp+B0h] [rbp-50h]
  __int64 v43; // [rsp+B8h] [rbp-48h]
  int *p_Key; // [rsp+C0h] [rbp-40h]
  __int64 v45; // [rsp+C8h] [rbp-38h]
  __int64 *v46; // [rsp+D0h] [rbp-30h]
  __int64 v47; // [rsp+D8h] [rbp-28h]
  int *v48; // [rsp+E0h] [rbp-20h]
  __int64 v49; // [rsp+E8h] [rbp-18h]
  int *v50; // [rsp+F0h] [rbp-10h]
  __int64 v51; // [rsp+F8h] [rbp-8h]
  int *v52; // [rsp+100h] [rbp+0h]
  __int64 v53; // [rsp+108h] [rbp+8h]
  bool *v54; // [rsp+110h] [rbp+10h]
  __int64 v55; // [rsp+118h] [rbp+18h]
  bool *v56; // [rsp+120h] [rbp+20h]
  __int64 v57; // [rsp+128h] [rbp+28h]
  int *v58; // [rsp+130h] [rbp+30h]
  __int64 v59; // [rsp+138h] [rbp+38h]
  int *v60; // [rsp+140h] [rbp+40h]
  __int64 v61; // [rsp+148h] [rbp+48h]
  int *v62; // [rsp+150h] [rbp+50h]
  __int64 v63; // [rsp+158h] [rbp+58h]
  int *v64; // [rsp+160h] [rbp+60h]
  __int64 v65; // [rsp+168h] [rbp+68h]
  int *v66; // [rsp+170h] [rbp+70h]
  __int64 v67; // [rsp+178h] [rbp+78h]
  bool *v68; // [rsp+180h] [rbp+80h]
  __int64 v69; // [rsp+188h] [rbp+88h]
  __int64 *v70; // [rsp+190h] [rbp+90h]
  __int64 v71; // [rsp+198h] [rbp+98h]
  __int64 *v72; // [rsp+1A0h] [rbp+A0h]
  __int64 v73; // [rsp+1A8h] [rbp+A8h]

  Key = a2;
  v17 = (char *)&CrmPolicyTable + 680 * a2;
  Feature_IndexerFanBackoff__private_ReportDeviceUsage();
  v20 = (__int64)bsearch(&Key, &CrmPolicyTableIndexerExperimentOverride, 6uLL, 0x2A8uLL, CrmPolicyTableCompare);
  if ( v20 )
    v17 = (char *)v20;
  v21 = *((_DWORD *)v17 + 1);
  if ( (unsigned int)dword_1800DB250 > 5 && (qword_1800DB260 & 4) != 0 )
  {
    v20 = qword_1800DB268 & 4;
    if ( v20 == qword_1800DB268 )
    {
      v40 = &Uuid;
      v42 = &v35;
      v23 = a7 != 0;
      p_Key = &Key;
      v46 = &v36;
      v24 = a8 != 0;
      v48 = &v27;
      v25 = a13 != 0;
      v28 = a5;
      v50 = &v28;
      v29 = a6;
      v52 = &v29;
      v54 = &v23;
      v56 = &v24;
      v58 = &v30;
      v31 = a9;
      v60 = &v31;
      v32 = a10;
      v62 = &v32;
      v33 = a11;
      v64 = &v33;
      v34 = a12;
      v66 = &v34;
      v68 = &v25;
      v37 = a14;
      v70 = &v37;
      v38 = a15;
      v72 = &v38;
      v41 = 16LL;
      v35 = a1;
      v43 = 8LL;
      Key = a2;
      v45 = 4LL;
      v36 = a3;
      v47 = 8LL;
      v27 = a4;
      v49 = 4LL;
      v51 = 4LL;
      v53 = 4LL;
      v55 = 1LL;
      v57 = 1LL;
      v30 = v21;
      v59 = 4LL;
      v61 = 4LL;
      v63 = 4LL;
      v65 = 4LL;
      v67 = 4LL;
      v69 = 1LL;
      v71 = 8LL;
      v73 = 8LL;
      LODWORD(v20) = tlgWriteTransfer_EventWriteTransfer(
                       (__int64)&dword_1800DB250,
                       (unsigned __int8 *)dword_1800BE87E,
                       0LL,
                       0LL,
                       0x13u,
                       &v39);
    }
  }
  return v20;
}
