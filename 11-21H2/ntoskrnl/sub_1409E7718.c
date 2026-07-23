/*
 * XREFs of sub_1409E7718 @ 0x1409E7718
 * Callers:
 *     sub_1406FF378 @ 0x1406FF378 (sub_1406FF378.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402EDEB4 @ 0x1402EDEB4 (sub_1402EDEB4.c)
 *     sub_1402EDFB0 @ 0x1402EDFB0 (sub_1402EDFB0.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14070BB0C @ 0x14070BB0C (sub_14070BB0C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409E7718(int a1, __int64 a2, char a3, char a4, unsigned __int16 *a5)
{
  __int64 *v5; // rax
  __int64 *v6; // rdi
  const wchar_t *v7; // rsi
  unsigned __int16 v10; // ax
  int v11; // eax
  const wchar_t *v12; // rcx
  int v13; // eax
  __int16 v14; // cx
  int v15; // eax
  int v16; // eax
  unsigned __int16 *v17; // r14
  int v18; // r9d
  unsigned int v19; // r9d
  __int64 v20; // rcx
  unsigned int v21; // r9d
  unsigned int v22; // r8d
  __int64 v23; // rax
  unsigned int v24; // r9d
  ULONG v25; // edx
  __int16 v26; // ax
  __int64 v27; // rax
  __int64 v28; // rcx
  ULONG v29; // r9d
  const EVENT_DESCRIPTOR *v30; // rdx
  PVOID v31; // rsi
  char v32; // [rsp+30h] [rbp-D0h] BYREF
  char v33; // [rsp+31h] [rbp-CFh] BYREF
  _WORD v34[2]; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v35; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v36; // [rsp+3Ch] [rbp-C4h] BYREF
  int v37; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v38; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v40; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+70h] [rbp-90h] BYREF
  int *v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  _DWORD *v44; // [rsp+A0h] [rbp-60h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  __int64 v46; // [rsp+B0h] [rbp-50h]
  _DWORD v47[2]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD *v48; // [rsp+C0h] [rbp-40h]
  __int64 v49; // [rsp+C8h] [rbp-38h]
  PVOID v50; // [rsp+D0h] [rbp-30h]
  _DWORD v51[2]; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 *v52; // [rsp+E0h] [rbp-20h]
  __int64 v53; // [rsp+E8h] [rbp-18h]
  _DWORD *v54; // [rsp+F0h] [rbp-10h]
  __int64 v55; // [rsp+F8h] [rbp-8h]
  __int64 v56; // [rsp+100h] [rbp+0h]
  _DWORD v57[2]; // [rsp+108h] [rbp+8h] BYREF
  char *v58; // [rsp+110h] [rbp+10h]
  __int64 v59; // [rsp+118h] [rbp+18h]
  char *v60; // [rsp+120h] [rbp+20h]
  __int64 v61; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+130h] [rbp+30h] BYREF
  const wchar_t *v63; // [rsp+140h] [rbp+40h]
  int v64; // [rsp+148h] [rbp+48h]
  int v65; // [rsp+14Ch] [rbp+4Ch]
  __int16 *v66; // [rsp+150h] [rbp+50h]
  __int64 v67; // [rsp+158h] [rbp+58h]
  const wchar_t *v68; // [rsp+160h] [rbp+60h]
  int v69; // [rsp+168h] [rbp+68h]
  int v70; // [rsp+16Ch] [rbp+6Ch]
  __int64 v71[24]; // [rsp+170h] [rbp+70h] BYREF
  char v72; // [rsp+290h] [rbp+190h] BYREF
  char v73; // [rsp+298h] [rbp+198h] BYREF

  v73 = a4;
  v72 = a3;
  v5 = *(__int64 **)(a2 + 1472);
  v6 = &qword_140001AF8;
  v7 = L"(null)";
  v38 = 0LL;
  if ( v5 )
    v6 = v5;
  *(_OWORD *)P = 0LL;
  v10 = *(_WORD *)v6;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v10 )
  {
    v34[0] = v10 >> 1;
    UserData.Ptr = (ULONGLONG)v34;
    v11 = *(unsigned __int16 *)v6;
    v12 = (const wchar_t *)v6[1];
  }
  else
  {
    v34[0] = 6;
    UserData.Ptr = (ULONGLONG)v34;
    v12 = L"(null)";
    v11 = 12;
  }
  v63 = v12;
  v64 = v11;
  v65 = 0;
  sub_14070BB0C(a2, (__int64)P);
  v67 = 2LL;
  v66 = &v35;
  if ( LOWORD(P[0]) )
  {
    v68 = (const wchar_t *)P[1];
    v13 = LOWORD(P[0]);
    v14 = LOWORD(P[0]) >> 1;
  }
  else
  {
    v13 = 12;
    v68 = L"(null)";
    v14 = 6;
  }
  v35 = v14;
  v69 = v13;
  v70 = 0;
  v15 = sub_1402EDEB4(v71, a2, &v38);
  v16 = sub_1402EDFB0((__int64)(&UserData + (unsigned int)(v15 + 4)), (__int64)KeGetCurrentThread());
  v17 = a5;
  v19 = v16 + v18;
  v20 = 2LL * v19;
  v21 = v19 + 1;
  *(&UserData.Ptr + v20) = (ULONGLONG)&v72;
  *((_QWORD *)&UserData.Size + v20) = 1LL;
  v22 = v21 + 1;
  v23 = 2LL * v21;
  *(&UserData.Ptr + v23) = (ULONGLONG)&v73;
  *((_QWORD *)&UserData.Size + v23) = 1LL;
  if ( v17 && *v17 )
  {
    v7 = (const wchar_t *)*((_QWORD *)v17 + 1);
    v24 = v21 + 2;
    v25 = *v17;
    v26 = *v17 >> 1;
  }
  else
  {
    v25 = 12;
    v24 = v21 + 2;
    v26 = 6;
  }
  v36 = v26;
  v27 = 2LL * v22;
  v28 = 2LL * v24;
  v29 = v24 + 1;
  *(&UserData.Ptr + v27) = (ULONGLONG)&v36;
  *((_QWORD *)&UserData.Size + v27) = 2LL;
  *(&UserData.Ptr + v28) = (ULONGLONG)v7;
  *(&UserData.Size + 2 * v28) = v25;
  v30 = (const EVENT_DESCRIPTOR *)qword_140037E58;
  if ( a1 != 1 )
    v30 = &stru_140039930;
  *(&UserData.Reserved + 2 * v28) = 0;
  EtwWrite(qword_140C15FC8, v30, 0LL, v29, &UserData);
  v31 = P[1];
  if ( (unsigned int)dword_140C043E0 > 5 && sub_1402A2000((__int64)&dword_140C043E0, 0x400000000000LL) )
  {
    v37 = a1;
    v42 = &v37;
    v43 = 4LL;
    v44 = v47;
    v46 = v6[1];
    v47[0] = *(unsigned __int16 *)v6;
    v48 = v51;
    v51[0] = LOWORD(P[0]);
    v40 = v38;
    v52 = &v40;
    v54 = v57;
    v56 = *((_QWORD *)v17 + 1);
    v57[0] = *v17;
    v32 = v72;
    v58 = &v32;
    v33 = v73;
    v60 = &v33;
    v45 = 2LL;
    v47[1] = 0;
    v49 = 2LL;
    v50 = v31;
    v51[1] = 0;
    v53 = 8LL;
    v55 = 2LL;
    v57[1] = 0;
    v59 = 1LL;
    v61 = 1LL;
    sub_14020A9C4((__int64)&dword_140C043E0, (unsigned __int8 *)word_140035B22, 0LL, 0LL, 0xCu, &v41);
  }
  if ( v31 )
    ExFreePoolWithTag(v31, 0);
}
