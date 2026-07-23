/*
 * XREFs of sub_1407136E8 @ 0x1407136E8
 * Callers:
 *     sub_14070AC28 @ 0x14070AC28 (sub_14070AC28.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     PsGetProcessStartKey @ 0x14023FCD0 (PsGetProcessStartKey.c)
 *     PsGetProcessSessionId @ 0x14028AF60 (PsGetProcessSessionId.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402A2094 @ 0x1402A2094 (sub_1402A2094.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140711EE8 @ 0x140711EE8 (sub_140711EE8.c)
 */

char __fastcall sub_1407136E8(__int64 a1, int *a2, __int64 a3, unsigned __int16 *a4, unsigned __int8 **a5)
{
  __int64 v5; // rax
  __int64 *v6; // rbx
  __int64 v11; // rcx
  int v12; // r10d
  unsigned __int8 *v13; // rcx
  int v14; // eax
  int v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  int ProcessSessionId; // [rsp+40h] [rbp-C8h] BYREF
  int v19; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 ProcessStartKey; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v27; // [rsp+98h] [rbp-70h]
  __int64 v28; // [rsp+A0h] [rbp-68h]
  int *v29; // [rsp+A8h] [rbp-60h]
  __int64 v30; // [rsp+B0h] [rbp-58h]
  int *v31; // [rsp+B8h] [rbp-50h]
  __int64 v32; // [rsp+C0h] [rbp-48h]
  int *p_ProcessSessionId; // [rsp+C8h] [rbp-40h]
  __int64 v34; // [rsp+D0h] [rbp-38h]
  _DWORD *v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  __int64 v37; // [rsp+E8h] [rbp-20h]
  _DWORD v38[2]; // [rsp+F0h] [rbp-18h] BYREF
  unsigned __int64 *p_ProcessStartKey; // [rsp+F8h] [rbp-10h]
  __int64 v40; // [rsp+100h] [rbp-8h]
  __int64 *v41; // [rsp+108h] [rbp+0h]
  __int64 v42; // [rsp+110h] [rbp+8h]
  __int64 *v43; // [rsp+118h] [rbp+10h]
  __int64 v44; // [rsp+120h] [rbp+18h]
  __int64 *v45; // [rsp+128h] [rbp+20h]
  __int64 v46; // [rsp+130h] [rbp+28h]
  int *v47; // [rsp+138h] [rbp+30h]
  __int64 v48; // [rsp+140h] [rbp+38h]
  __int64 *v49; // [rsp+148h] [rbp+40h]
  __int64 v50; // [rsp+150h] [rbp+48h]
  _BYTE v51[16]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v52[16]; // [rsp+168h] [rbp+60h] BYREF
  unsigned __int8 *v53; // [rsp+178h] [rbp+70h]
  int v54; // [rsp+180h] [rbp+78h]
  int v55; // [rsp+184h] [rbp+7Ch]
  _DWORD *v56; // [rsp+188h] [rbp+80h]
  __int64 v57; // [rsp+190h] [rbp+88h]
  __int64 v58; // [rsp+198h] [rbp+90h]
  _DWORD v59[2]; // [rsp+1A0h] [rbp+98h] BYREF

  v5 = *(_QWORD *)(a1 + 1472);
  v6 = &qword_140001AF8;
  if ( v5 )
    v6 = *(__int64 **)(a1 + 1472);
  if ( (unsigned int)dword_140C043A8 > 5 )
  {
    LOBYTE(v5) = sub_1402A2000((__int64)&dword_140C043A8, 3LL);
    if ( (_BYTE)v5 )
    {
      v21 = *(_QWORD *)(a1 + 1128);
      v27 = &v21;
      v16 = *(_DWORD *)(a1 + 1088);
      v29 = &v16;
      v17 = *(_DWORD *)(a1 + 1344);
      v31 = &v17;
      v28 = 8LL;
      v30 = 4LL;
      v32 = 4LL;
      ProcessSessionId = PsGetProcessSessionId(a1);
      v34 = 4LL;
      p_ProcessSessionId = &ProcessSessionId;
      v36 = 2LL;
      v35 = v38;
      v37 = v6[1];
      v38[0] = *(unsigned __int16 *)v6;
      v38[1] = 0;
      ProcessStartKey = PsGetProcessStartKey(a1);
      p_ProcessStartKey = &ProcessStartKey;
      v23 = *(_QWORD *)(a1 + 2296);
      v41 = &v23;
      v24 = *(_QWORD *)(a1 + 2304);
      v43 = &v24;
      v40 = 8LL;
      v42 = 8LL;
      v44 = 8LL;
      v25 = sub_140711EE8(v11);
      v46 = 8LL;
      v45 = &v25;
      v19 = *a2;
      v47 = &v19;
      LODWORD(v20) = a2[1];
      v49 = &v20;
      v48 = 4LL;
      v50 = 4LL;
      sub_1402A2094((__int64)v51, (const WCHAR *)(a3 + 16));
      sub_1402A2094((__int64)v52, (const WCHAR *)(a3 + 272));
      if ( a5 )
        v13 = *a5;
      else
        v13 = (unsigned __int8 *)qword_140D3CAF8;
      v14 = v13[1];
      v53 = v13;
      v55 = v12;
      v57 = 2LL;
      v59[1] = v12;
      v54 = 4 * v14 + 8;
      v56 = v59;
      v58 = *((_QWORD *)a4 + 1);
      v59[0] = *a4;
      LOBYTE(v5) = sub_14020A9C4((__int64)&dword_140C043A8, (unsigned __int8 *)byte_140035351, 0LL, 0LL, 0x13u, &v26);
    }
  }
  return v5;
}
