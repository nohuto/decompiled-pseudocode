/*
 * XREFs of sub_140806630 @ 0x140806630
 * Callers:
 *     sub_140806424 @ 0x140806424 (sub_140806424.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14099E4C4 @ 0x14099E4C4 (sub_14099E4C4.c)
 *     sub_14099E530 @ 0x14099E530 (sub_14099E530.c)
 *     sub_14099E75C @ 0x14099E75C (sub_14099E75C.c)
 *     sub_14099E860 @ 0x14099E860 (sub_14099E860.c)
 */

__int64 sub_140806630()
{
  __int64 result; // rax
  UNICODE_STRING *v1; // r12
  unsigned int *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r9
  unsigned int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // r8
  unsigned int *v8; // rdi
  __int64 v9; // rdx
  UNICODE_STRING *v10; // r15
  UNICODE_STRING *v11; // r13
  UNICODE_STRING *v12; // r14
  UNICODE_STRING *v13; // rsi
  unsigned __int16 *v14; // r9
  REGHANDLE v15; // r12
  int Length; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  unsigned int v20; // r11d
  _QWORD *v21; // r10
  int v22; // r8d
  _DWORD *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  ULONGLONG v26; // rax
  __int64 v27; // rcx
  ULONGLONG v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  _BYTE v33[4]; // [rsp+38h] [rbp-D0h] BYREF
  int v34; // [rsp+3Ch] [rbp-CCh] BYREF
  int v35; // [rsp+40h] [rbp-C8h] BYREF
  int v36; // [rsp+44h] [rbp-C4h] BYREF
  int v37; // [rsp+48h] [rbp-C0h] BYREF
  int v38; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v39; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING *v40; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v41; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v42; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v43; // [rsp+68h] [rbp-A0h] BYREF
  int v44; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v45; // [rsp+70h] [rbp-98h] BYREF
  __int64 v46; // [rsp+78h] [rbp-90h] BYREF
  __int64 v47; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+88h] [rbp-80h] BYREF
  int *v49; // [rsp+A8h] [rbp-60h]
  __int64 v50; // [rsp+B0h] [rbp-58h]
  _DWORD *v51; // [rsp+B8h] [rbp-50h]
  __int64 v52; // [rsp+C0h] [rbp-48h]
  wchar_t *Buffer; // [rsp+C8h] [rbp-40h]
  _DWORD v54[2]; // [rsp+D0h] [rbp-38h] BYREF
  _DWORD *v55; // [rsp+D8h] [rbp-30h]
  __int64 v56; // [rsp+E0h] [rbp-28h]
  __int64 v57; // [rsp+E8h] [rbp-20h]
  _DWORD v58[2]; // [rsp+F0h] [rbp-18h] BYREF
  _DWORD *v59; // [rsp+F8h] [rbp-10h]
  __int64 v60; // [rsp+100h] [rbp-8h]
  wchar_t *v61; // [rsp+108h] [rbp+0h]
  _DWORD v62[2]; // [rsp+110h] [rbp+8h] BYREF
  _DWORD *v63; // [rsp+118h] [rbp+10h]
  __int64 v64; // [rsp+120h] [rbp+18h]
  wchar_t *v65; // [rsp+128h] [rbp+20h]
  _DWORD v66[2]; // [rsp+130h] [rbp+28h] BYREF
  unsigned int *v67; // [rsp+138h] [rbp+30h]
  __int64 v68; // [rsp+140h] [rbp+38h]
  unsigned int *v69; // [rsp+148h] [rbp+40h]
  __int64 v70; // [rsp+150h] [rbp+48h]
  unsigned int *v71; // [rsp+158h] [rbp+50h]
  __int64 v72; // [rsp+160h] [rbp+58h]
  int *v73; // [rsp+168h] [rbp+60h]
  __int64 v74; // [rsp+170h] [rbp+68h]
  _DWORD *v75; // [rsp+178h] [rbp+70h]
  __int64 v76; // [rsp+180h] [rbp+78h]
  wchar_t *v77; // [rsp+188h] [rbp+80h]
  _DWORD v78[2]; // [rsp+190h] [rbp+88h] BYREF
  __int64 *v79; // [rsp+198h] [rbp+90h]
  __int64 v80; // [rsp+1A0h] [rbp+98h]
  UNICODE_STRING **v81; // [rsp+1A8h] [rbp+A0h]
  __int64 v82; // [rsp+1B0h] [rbp+A8h]
  _DWORD *v83; // [rsp+1B8h] [rbp+B0h]
  __int64 v84; // [rsp+1C0h] [rbp+B8h]
  wchar_t *v85; // [rsp+1C8h] [rbp+C0h]
  _DWORD v86[2]; // [rsp+1D0h] [rbp+C8h] BYREF
  __int64 *v87; // [rsp+1D8h] [rbp+D0h]
  __int64 v88; // [rsp+1E0h] [rbp+D8h]
  _QWORD v89[28]; // [rsp+1E8h] [rbp+E0h] BYREF

  result = qword_140C21FA8;
  v1 = &stru_140C1CF10;
  v33[0] = qword_140C21FA8;
  v34 = 0;
  v38 = 0;
  LODWORD(v39) = 0;
  v36 = 0;
  v37 = 0;
  v45 = qword_140C21FA8;
  while ( 1 )
  {
    v2 = (unsigned int *)qword_140C1CB70;
    if ( qword_140C1CB70 == &qword_140C1CB70 )
      break;
    if ( *((PVOID **)qword_140C1CB70 + 1) != &qword_140C1CB70
      || (v3 = *(_QWORD *)qword_140C1CB70, *(PVOID *)(*(_QWORD *)qword_140C1CB70 + 8LL) != qword_140C1CB70) )
    {
      __fastfail(3u);
    }
    qword_140C1CB70 = *(PVOID *)qword_140C1CB70;
    v4 = 0LL;
    *(_QWORD *)(v3 + 8) = &qword_140C1CB70;
    v5 = 0;
    v34 = 0;
    v6 = v2[39];
    if ( (_DWORD)v6 )
    {
      sub_14099E530(v89, L"DFX Transition Count", v6, 0LL);
      v4 = (unsigned int)(v34 + 1);
      v34 = v4;
      v5 = v4;
    }
    v7 = v2[40];
    if ( (_DWORD)v7 )
    {
      sub_14099E530(&v89[7 * v5], L"PS4 Transition Count", v7, v4);
      v4 = (unsigned int)(v34 + 1);
      v34 = v4;
      v5 = v4;
    }
    v8 = v2 + 38;
    v9 = v2[38];
    if ( (_WORD)v9 )
    {
      sub_14099E4C4(&v89[7 * v5], L"Problem Device", v7, v4);
      v4 = (unsigned int)(v34 + 1);
      v34 = v4;
      v5 = v4;
      v9 = *v8;
    }
    if ( (v9 & 0x10000) != 0 )
    {
      sub_14099E4C4(&v89[7 * v5], L"Initiated PS4 Transition", v7, v4);
      v4 = (unsigned int)++v34;
      v9 = *v8;
    }
    if ( (v9 & 0x40000) != 0 )
    {
      v10 = &stru_140C1CF10;
      if ( *((_QWORD *)v2 + 7) )
        v10 = (UNICODE_STRING *)(v2 + 12);
      v11 = &stru_140C1CF10;
      if ( *((_QWORD *)v2 + 9) )
        v11 = (UNICODE_STRING *)(v2 + 16);
      v12 = &stru_140C1CF10;
      if ( *((_QWORD *)v2 + 11) )
        v12 = (UNICODE_STRING *)(v2 + 20);
      v13 = &stru_140C1CF10;
      if ( *((_QWORD *)v2 + 13) )
        v13 = (UNICODE_STRING *)(v2 + 24);
      if ( *((_QWORD *)v2 + 15) )
        v40 = (UNICODE_STRING *)(v2 + 28);
      else
        v40 = &stru_140C1CF10;
      if ( *((_QWORD *)v2 + 17) )
        v1 = (UNICODE_STRING *)(v2 + 32);
      sub_14099E860(v2 + 16, v9, v7, v4);
      if ( (unsigned int)dword_140D3B940 > 5 && sub_1402A2000((__int64)&dword_140D3B940, 0x400000000000LL) )
      {
        v49 = &v35;
        v51 = v54;
        Buffer = v10->Buffer;
        v54[0] = v10->Length;
        v55 = v58;
        v57 = *((_QWORD *)v14 + 1);
        v58[0] = *v14;
        v59 = v62;
        v61 = v12->Buffer;
        v62[0] = v12->Length;
        v63 = v66;
        v65 = v13->Buffer;
        v66[0] = v13->Length;
        v41 = v2[37];
        v67 = &v41;
        v42 = v2[39];
        v69 = &v42;
        v43 = v2[40];
        v71 = &v43;
        v44 = *v8;
        v73 = &v44;
        v75 = v78;
        LOBYTE(v35) = v33[0];
        v50 = 1LL;
        v52 = 2LL;
        v54[1] = 0;
        v77 = v40->Buffer;
        v78[0] = v40->Length;
        v46 = v45;
        v79 = &v46;
        LODWORD(v40) = v2[6];
        v81 = &v40;
        v83 = v86;
        v85 = v1->Buffer;
        v56 = 2LL;
        v58[1] = 0;
        v60 = 2LL;
        v62[1] = 0;
        v64 = 2LL;
        v66[1] = 0;
        v68 = 4LL;
        v70 = 4LL;
        v72 = 4LL;
        v74 = 4LL;
        v76 = 2LL;
        v78[1] = 0;
        v80 = 8LL;
        v82 = 4LL;
        v84 = 2LL;
        v86[0] = v1->Length;
        v86[1] = 0;
        v87 = &v47;
        v47 = 0x1000000LL;
        v88 = 8LL;
        sub_14020A9C4((__int64)&dword_140D3B940, (unsigned __int8 *)&dword_140031E44, 0LL, 0LL, 0x16u, &v48);
      }
      if ( byte_140C5AE14 )
      {
        v15 = RegHandle;
        if ( EtwEventEnabled(RegHandle, &stru_140038A28) )
        {
          *(_QWORD *)&UserData.Size = 1LL;
          UserData.Ptr = (ULONGLONG)v33;
          qword_140C1CDB8 = 8LL;
          qword_140C1CDB0 = (__int64)(v2 + 4);
          v36 = v10->Length >> 1;
          qword_140C1CDC0 = (__int64)&v36;
          qword_140C1CDC8 = 4LL;
          Length = v10->Length;
          qword_140C1CDD0 = (__int64)v10->Buffer;
          dword_140C1CDD8 = Length;
          dword_140C1CDDC = 0;
          v37 = v11->Length >> 1;
          qword_140C1CDE0 = (__int64)&v37;
          qword_140C1CDE8 = 4LL;
          v17 = v11->Length;
          qword_140C1CDF0 = (__int64)v11->Buffer;
          dword_140C1CDF8 = v17;
          dword_140C1CDFC = 0;
          v38 = v12->Length >> 1;
          qword_140C1CE00 = (__int64)&v38;
          qword_140C1CE08 = 4LL;
          v18 = v12->Length;
          qword_140C1CE10 = (__int64)v12->Buffer;
          dword_140C1CE18 = v18;
          dword_140C1CE1C = 0;
          LODWORD(v39) = v13->Length >> 1;
          qword_140C1CE20 = (__int64)&v39;
          qword_140C1CE28 = 4LL;
          v19 = v13->Length;
          qword_140C1CE30 = (__int64)v13->Buffer;
          qword_140C1CE40 = (__int64)(v2 + 37);
          qword_140C1CE50 = (__int64)(v2 + 39);
          dword_140C1CE38 = v19;
          qword_140C1CE60 = (__int64)(v2 + 40);
          dword_140C1CE3C = 0;
          qword_140C1CE48 = 4LL;
          qword_140C1CE58 = 4LL;
          qword_140C1CE68 = 4LL;
          qword_140C1CE70 = (__int64)(v2 + 38);
          qword_140C1CE78 = 4LL;
          EtwWrite(v15, &stru_140038A28, 0LL, 0xEu, &UserData);
        }
      }
      LODWORD(v4) = v34;
      v1 = &stru_140C1CF10;
    }
    if ( byte_140C5AE16 && (_DWORD)v4 )
    {
      v20 = 0;
      v21 = v89;
      do
      {
        v22 = 5 * v20++;
        v23 = v21 + 2;
        v24 = 2LL * (unsigned int)(v22 + 2);
        v25 = 2LL * (unsigned int)(v22 + 3);
        *(&UserData.Ptr + v24) = (ULONGLONG)(v2 + 8);
        *((_QWORD *)&UserData.Size + v24) = 16LL;
        v26 = v21[1];
        *(&UserData.Ptr + v25) = (ULONGLONG)v21;
        *((_QWORD *)&UserData.Size + v25) = 4LL;
        v27 = 2LL * (unsigned int)(v22 + 4);
        *(&UserData.Ptr + v27) = v26;
        LODWORD(v26) = *(_DWORD *)v21;
        *(&UserData.Reserved + 2 * v27) = 0;
        *(&UserData.Size + 2 * v27) = 2 * v26;
        v28 = (ULONGLONG)v21 + 20;
        v21 += 7;
        v29 = 2LL * (unsigned int)(v22 + 5);
        *(&UserData.Ptr + v29) = (ULONGLONG)v23;
        *((_QWORD *)&UserData.Size + v29) = 4LL;
        v30 = 2LL * (unsigned int)(v22 + 6);
        *(&UserData.Ptr + v30) = v28;
        *((_QWORD *)&UserData.Size + v30) = (unsigned int)(2 * *v23);
      }
      while ( v20 < (unsigned int)v4 );
      *(_QWORD *)&UserData.Size = 1LL;
      UserData.Ptr = (ULONGLONG)v33;
      qword_140C1CDB8 = 4LL;
      qword_140C1CDB0 = (__int64)&v34;
      v31 = 2LL * (unsigned int)(v22 + 7);
      *(&UserData.Ptr + v31) = (ULONGLONG)&v45;
      *((_QWORD *)&UserData.Size + v31) = 8LL;
      EtwWrite(CallbackContext, &stru_14003C138, 0LL, 5 * v4 + 3, &UserData);
    }
    v32 = *((_QWORD *)v2 + 2);
    if ( v32 )
    {
      *(_QWORD *)(v32 + 776) = 0LL;
      *((_QWORD *)v2 + 2) = 0LL;
    }
    result = sub_14099E75C(v2);
  }
  return result;
}
