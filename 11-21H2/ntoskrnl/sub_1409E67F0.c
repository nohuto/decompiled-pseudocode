/*
 * XREFs of sub_1409E67F0 @ 0x1409E67F0
 * Callers:
 *     sub_1409AD258 @ 0x1409AD258 (sub_1409AD258.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402EDEB4 @ 0x1402EDEB4 (sub_1402EDEB4.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14070BB0C @ 0x14070BB0C (sub_14070BB0C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409E67F0(int a1, __int64 a2, int a3, int a4, unsigned __int16 *a5, int a6)
{
  __int64 *v7; // rdi
  const wchar_t *v8; // r13
  __int64 *v9; // rax
  ULONG v10; // r12d
  unsigned __int16 v11; // ax
  int v12; // eax
  const wchar_t *v13; // rcx
  int v14; // r15d
  void *v15; // rsi
  __int16 v16; // ax
  int v17; // ecx
  int v18; // eax
  unsigned __int16 *v19; // r14
  unsigned int v20; // r8d
  __int16 v21; // ax
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // r12d
  __int64 v25; // rax
  const EVENT_DESCRIPTOR *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  REGHANDLE v29; // rcx
  _WORD v30[2]; // [rsp+38h] [rbp-D0h] BYREF
  int v31; // [rsp+3Ch] [rbp-CCh] BYREF
  int v32; // [rsp+40h] [rbp-C8h] BYREF
  int v33; // [rsp+44h] [rbp-C4h] BYREF
  int v34; // [rsp+48h] [rbp-C0h] BYREF
  int v35; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v36; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v37; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v38; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v39[4]; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+88h] [rbp-80h] BYREF
  int *v41; // [rsp+A8h] [rbp-60h]
  __int64 v42; // [rsp+B0h] [rbp-58h]
  _DWORD *v43; // [rsp+B8h] [rbp-50h]
  __int64 v44; // [rsp+C0h] [rbp-48h]
  __int64 v45; // [rsp+C8h] [rbp-40h]
  _DWORD v46[2]; // [rsp+D0h] [rbp-38h] BYREF
  _DWORD *v47; // [rsp+D8h] [rbp-30h]
  __int64 v48; // [rsp+E0h] [rbp-28h]
  void *v49; // [rsp+E8h] [rbp-20h]
  _DWORD v50[2]; // [rsp+F0h] [rbp-18h] BYREF
  unsigned __int64 *v51; // [rsp+F8h] [rbp-10h]
  __int64 v52; // [rsp+100h] [rbp-8h]
  _DWORD *v53; // [rsp+108h] [rbp+0h]
  __int64 v54; // [rsp+110h] [rbp+8h]
  __int64 v55; // [rsp+118h] [rbp+10h]
  _DWORD v56[2]; // [rsp+120h] [rbp+18h] BYREF
  int *v57; // [rsp+128h] [rbp+20h]
  __int64 v58; // [rsp+130h] [rbp+28h]
  int *v59; // [rsp+138h] [rbp+30h]
  __int64 v60; // [rsp+140h] [rbp+38h]
  __int64 *v61; // [rsp+148h] [rbp+40h]
  __int64 v62; // [rsp+150h] [rbp+48h]
  _QWORD *v63; // [rsp+158h] [rbp+50h]
  __int64 v64; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+168h] [rbp+60h] BYREF
  const wchar_t *v66; // [rsp+178h] [rbp+70h]
  int v67; // [rsp+180h] [rbp+78h]
  int v68; // [rsp+184h] [rbp+7Ch]
  int *v69; // [rsp+188h] [rbp+80h]
  __int64 v70; // [rsp+190h] [rbp+88h]
  const wchar_t *v71; // [rsp+198h] [rbp+90h]
  int v72; // [rsp+1A0h] [rbp+98h]
  int v73; // [rsp+1A4h] [rbp+9Ch]
  _QWORD v74[22]; // [rsp+1A8h] [rbp+A0h] BYREF
  int v75; // [rsp+2B8h] [rbp+1B0h] BYREF
  int v76; // [rsp+2C0h] [rbp+1B8h] BYREF

  v76 = a4;
  v75 = a3;
  v33 = a1;
  v7 = &qword_140001AF8;
  v37 = 0LL;
  v8 = L"(null)";
  v9 = *(__int64 **)(a2 + 1472);
  *(_OWORD *)&v39[1] = 0LL;
  if ( v9 )
    v7 = v9;
  v10 = 12;
  v11 = *(_WORD *)v7;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v11 )
  {
    v30[0] = v11 >> 1;
    UserData.Ptr = (ULONGLONG)v30;
    v12 = *(unsigned __int16 *)v7;
    v13 = (const wchar_t *)v7[1];
  }
  else
  {
    v30[0] = 6;
    UserData.Ptr = (ULONGLONG)v30;
    v13 = L"(null)";
    v12 = 12;
  }
  v66 = v13;
  v68 = 0;
  v67 = v12;
  sub_14070BB0C(a2, (__int64)&v39[1]);
  v14 = LOWORD(v39[1]);
  v15 = (void *)v39[2];
  v70 = 2LL;
  v69 = &v31;
  if ( LOWORD(v39[1]) )
  {
    v71 = (const wchar_t *)v39[2];
    v16 = LOWORD(v39[1]) >> 1;
    v17 = LOWORD(v39[1]);
  }
  else
  {
    v71 = L"(null)";
    v17 = 12;
    v16 = 6;
  }
  v72 = v17;
  LOWORD(v31) = v16;
  v73 = 0;
  v18 = sub_1402EDEB4(v74, a2, &v37);
  v19 = a5;
  v20 = v18 + 4;
  if ( a5 && *a5 )
  {
    v8 = (const wchar_t *)*((_QWORD *)a5 + 1);
    v10 = *a5;
    v21 = *a5 >> 1;
  }
  else
  {
    v21 = 6;
  }
  LOWORD(v32) = v21;
  v22 = 2LL * (v20 + 1);
  v23 = 2LL * v20;
  *(&UserData.Ptr + v23) = (ULONGLONG)&v32;
  *((_QWORD *)&UserData.Size + v23) = 2LL;
  *(&UserData.Ptr + v22) = (ULONGLONG)v8;
  *(&UserData.Size + 2 * v22) = v10;
  *(&UserData.Reserved + 2 * v22) = 0;
  v24 = v33;
  v25 = 2LL * (v20 + 2);
  *(&UserData.Ptr + v25) = (ULONGLONG)&v75;
  v26 = (const EVENT_DESCRIPTOR *)qword_1400378E8;
  *((_QWORD *)&UserData.Size + v25) = 4LL;
  v27 = 2LL * (v20 + 3);
  *(&UserData.Ptr + v27) = (ULONGLONG)&v76;
  *((_QWORD *)&UserData.Size + v27) = 4LL;
  v28 = 2LL * (v20 + 4);
  *(&UserData.Ptr + v28) = (ULONGLONG)&a6;
  v29 = qword_140C15FC8;
  *((_QWORD *)&UserData.Size + v28) = 4LL;
  if ( v24 != 1 )
    v26 = &stru_140037D68;
  EtwWrite(v29, v26, 0LL, v20 + 5, &UserData);
  if ( (unsigned int)dword_140C043E0 > 5 && sub_1402A2000((__int64)&dword_140C043E0, 0x400000000000LL) )
  {
    v33 = v24;
    v41 = &v33;
    v42 = 4LL;
    v43 = v46;
    v45 = v7[1];
    v46[0] = *(unsigned __int16 *)v7;
    v47 = v50;
    v38 = v37;
    v51 = &v38;
    v53 = v56;
    v55 = *((_QWORD *)v19 + 1);
    v56[0] = *v19;
    v34 = v75;
    v57 = &v34;
    v35 = v76;
    v59 = &v35;
    LODWORD(v36) = a6;
    v61 = &v36;
    v63 = v39;
    v44 = 2LL;
    v46[1] = 0;
    v48 = 2LL;
    v49 = v15;
    v50[0] = v14;
    v50[1] = 0;
    v52 = 8LL;
    v54 = 2LL;
    v56[1] = 0;
    v58 = 4LL;
    v60 = 4LL;
    v62 = 4LL;
    v39[0] = 0x1000000LL;
    v64 = 8LL;
    sub_14020A9C4((__int64)&dword_140C043E0, (unsigned __int8 *)&dword_1400357FC, 0LL, 0LL, 0xEu, &v40);
  }
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
}
