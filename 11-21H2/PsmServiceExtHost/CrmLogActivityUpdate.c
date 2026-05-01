/*
 * XREFs of CrmLogActivityUpdate @ 0x180031800
 * Callers:
 *     CrmGlobalsRegistrationRundownHelper @ 0x18002FC28 (CrmGlobalsRegistrationRundownHelper.c)
 *     CrmActivityListenerCallback @ 0x1800315E0 (CrmActivityListenerCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     Feature_IndexerFanBackoff__private_IsEnabledPreCheck @ 0x180031238 (Feature_IndexerFanBackoff__private_IsEnabledPreCheck.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
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
        __int64 a9,
        __int64 a10)
{
  char *v12; // rdi
  __int64 v15; // rax
  int v16; // edx
  bool v18; // [rsp+30h] [rbp-D0h] BYREF
  bool v19; // [rsp+31h] [rbp-CFh] BYREF
  int Key; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+44h] [rbp-BCh] BYREF
  int v23; // [rsp+48h] [rbp-B8h] BYREF
  int v24; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+70h] [rbp-90h] BYREF
  UUID *v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  __int64 *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  int *p_Key; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  __int64 *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  int *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  bool *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  bool *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  int *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  int *v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  int *v48; // [rsp+120h] [rbp+20h]
  __int64 v49; // [rsp+128h] [rbp+28h]
  __int64 *v50; // [rsp+130h] [rbp+30h]
  __int64 v51; // [rsp+138h] [rbp+38h]
  __int64 *v52; // [rsp+140h] [rbp+40h]
  __int64 v53; // [rsp+148h] [rbp+48h]

  Key = a2;
  v12 = (char *)&CrmPolicyTable + 648 * a2;
  Feature_IndexerFanBackoff__private_IsEnabledPreCheck();
  v15 = (__int64)bsearch(&Key, &CrmPolicyTableIndexerExperimentOverride, 6uLL, 0x288uLL, CrmPolicyTableCompare);
  if ( v15 )
    v12 = (char *)v15;
  v16 = *((_DWORD *)v12 + 1);
  if ( (unsigned int)dword_1800DC250 > 5 && (qword_1800DC260 & 4) != 0 )
  {
    v15 = qword_1800DC268 & 4;
    if ( v15 == qword_1800DC268 )
    {
      v30 = &Uuid;
      v18 = a5 != 0;
      v22 = v16;
      v32 = &v25;
      v31 = 16LL;
      p_Key = &Key;
      v19 = a6 != 0;
      v25 = a1;
      v36 = &v26;
      v33 = 8LL;
      v38 = &v21;
      Key = a2;
      v40 = &v18;
      v42 = &v19;
      v44 = &v22;
      v23 = a7;
      v46 = &v23;
      v24 = a8;
      v48 = &v24;
      v27 = a9;
      v50 = &v27;
      v28 = a10;
      v52 = &v28;
      v35 = 4LL;
      v26 = a3;
      v37 = 8LL;
      v21 = a4;
      v39 = 4LL;
      v41 = 1LL;
      v43 = 1LL;
      v45 = 4LL;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 8LL;
      v53 = 8LL;
      LODWORD(v15) = tlgWriteTransfer_EventWriteTransfer(
                       (__int64)&dword_1800DC250,
                       (unsigned __int8 *)dword_1800BD9CE,
                       0LL,
                       0LL,
                       0xEu,
                       &v29);
    }
  }
  return v15;
}
