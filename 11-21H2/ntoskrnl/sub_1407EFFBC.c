/*
 * XREFs of sub_1407EFFBC @ 0x1407EFFBC
 * Callers:
 *     sub_14036A698 @ 0x14036A698 (sub_14036A698.c)
 *     sub_14081CBF0 @ 0x14081CBF0 (sub_14081CBF0.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_14036AC64 @ 0x14036AC64 (sub_14036AC64.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1407EFFBC(char a1, __int64 a2)
{
  const EVENT_DESCRIPTOR *v4; // rdx
  int *v5; // rax
  __int64 Pool2; // rax
  __int64 v7; // rdi
  __int64 v8; // r9
  wchar_t *v9; // r10
  __int64 v10; // rcx
  _WORD *v11; // r9
  __int64 v12; // r8
  _WORD *v13; // rax
  wchar_t *v14; // rax
  __int64 v15; // r8
  _WORD *v16; // r8
  __int64 v17; // rcx
  _WORD *v18; // rax
  const WCHAR *v19; // rdx
  __int64 v20; // r8
  int v21; // eax
  int v22; // eax
  bool v23; // zf
  int v24; // eax
  unsigned int v25; // r9d
  unsigned __int16 v26; // dx
  __int64 v27; // rcx
  __int64 v28; // rax
  const EVENT_DESCRIPTOR *v29; // rdx
  __int64 v30; // rax
  unsigned int v31; // r9d
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  ULONG v36; // r9d
  __int16 v37; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v38; // [rsp+34h] [rbp-CCh] BYREF
  int v39; // [rsp+38h] [rbp-C8h] BYREF
  int v40; // [rsp+3Ch] [rbp-C4h] BYREF
  int v41; // [rsp+40h] [rbp-C0h] BYREF
  int v42; // [rsp+44h] [rbp-BCh] BYREF
  int v43; // [rsp+48h] [rbp-B8h] BYREF
  int v44; // [rsp+4Ch] [rbp-B4h] BYREF
  int v45; // [rsp+50h] [rbp-B0h] BYREF
  int v46; // [rsp+54h] [rbp-ACh] BYREF
  int v47; // [rsp+58h] [rbp-A8h] BYREF
  int v48; // [rsp+5Ch] [rbp-A4h] BYREF
  __int128 v49; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v50; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  int *v53; // [rsp+A0h] [rbp-60h]
  __int64 v54; // [rsp+A8h] [rbp-58h]
  int *v55; // [rsp+B0h] [rbp-50h]
  __int64 v56; // [rsp+B8h] [rbp-48h]
  int *v57; // [rsp+C0h] [rbp-40h]
  __int64 v58; // [rsp+C8h] [rbp-38h]
  int *v59; // [rsp+D0h] [rbp-30h]
  __int64 v60; // [rsp+D8h] [rbp-28h]
  int *v61; // [rsp+E0h] [rbp-20h]
  __int64 v62; // [rsp+E8h] [rbp-18h]
  int *v63; // [rsp+F0h] [rbp-10h]
  __int64 v64; // [rsp+F8h] [rbp-8h]
  int *v65; // [rsp+100h] [rbp+0h]
  __int64 v66; // [rsp+108h] [rbp+8h]
  __int64 v67; // [rsp+110h] [rbp+10h]
  __int64 v68; // [rsp+118h] [rbp+18h]
  __int64 v69; // [rsp+120h] [rbp+20h]
  __int64 v70; // [rsp+128h] [rbp+28h]
  __int64 v71; // [rsp+130h] [rbp+30h]
  __int64 v72; // [rsp+138h] [rbp+38h]
  __int16 *v73; // [rsp+140h] [rbp+40h]
  __int64 v74; // [rsp+148h] [rbp+48h]
  __int16 *v75; // [rsp+150h] [rbp+50h]
  __int64 v76; // [rsp+158h] [rbp+58h]
  __int64 v77; // [rsp+160h] [rbp+60h]
  int v78; // [rsp+168h] [rbp+68h]
  int v79; // [rsp+16Ch] [rbp+6Ch]
  wchar_t v80[24]; // [rsp+1E0h] [rbp+E0h] BYREF

  v50 = a2;
  v37 = 0;
  v38 = 0;
  DestinationString = 0LL;
  if ( byte_140C5AE14 )
  {
    v4 = &stru_140011148;
    if ( a1 )
      v4 = (const EVENT_DESCRIPTOR *)qword_140038DE0;
    if ( EtwEventEnabled(RegHandle, v4) )
    {
      v5 = *(int **)(a2 + 96);
      *(_QWORD *)&v49 = 0LL;
      v39 = *v5;
      v42 = 0;
      v43 = 0;
      v40 = 0;
      v44 = 0;
      v45 = 0;
      v46 = 0;
      v41 = 0;
      v48 = 0;
      v47 = 0;
      sub_14036AC64(*(_QWORD *)(a2 + 96), 0LL, (unsigned __int64 *)&v49, 0);
      Pool2 = ExAllocatePool2(256LL, v49, 1346721364LL);
      v7 = Pool2;
      if ( Pool2 )
      {
        if ( (int)sub_14036AC64(*(_QWORD *)(v50 + 96), Pool2, (unsigned __int64 *)&v49, 0) >= 0 )
        {
          if ( v39 )
          {
            v42 = *(_DWORD *)(v7 + 24);
            v43 = sub_140287F30(*(_QWORD *)(*(_QWORD *)(v50 + 96) + 8LL));
            v15 = *(_QWORD *)(v7 + 16);
            v49 = 0LL;
            v16 = (_WORD *)(v7 + v15);
            if ( v16 )
            {
              v17 = 0x7FFFLL;
              v18 = v16;
              while ( *v18 )
              {
                ++v18;
                if ( !--v17 )
                  goto LABEL_27;
              }
              *((_QWORD *)&v49 + 1) = v16;
              LOWORD(v49) = -2 - 2 * v17;
            }
LABEL_27:
            if ( v39 == 2 )
            {
              sub_1402E1280(v80, 0x2CuLL, L"%d", *(unsigned int *)(v7 + 28));
              v19 = v80;
            }
            else
            {
              v19 = 0LL;
            }
            RtlInitUnicodeString(&DestinationString, v19);
          }
          else
          {
            v8 = *(_QWORD *)(v7 + 16);
            v9 = (wchar_t *)(v7 + *(_QWORD *)(v7 + 24));
            v10 = 0x7FFFLL;
            v49 = 0LL;
            v11 = (_WORD *)(v7 + v8);
            if ( v11 )
            {
              v12 = 0x7FFFLL;
              v13 = v11;
              while ( *v13 )
              {
                ++v13;
                if ( !--v12 )
                  goto LABEL_15;
              }
              *((_QWORD *)&v49 + 1) = v11;
              LOWORD(v49) = -2 - 2 * v12;
            }
LABEL_15:
            DestinationString = 0LL;
            if ( v9 )
            {
              v14 = v9;
              while ( *v14 )
              {
                ++v14;
                if ( !--v10 )
                  goto LABEL_31;
              }
              DestinationString.Buffer = v9;
              DestinationString.Length = -2 - 2 * v10;
            }
          }
LABEL_31:
          v20 = v50;
          v21 = v40;
          if ( !*(_QWORD *)(v50 + 96) )
            v21 = 1;
          v40 = v21;
          v22 = *(_DWORD *)(v50 + 20);
          if ( (v22 & 2) != 0 )
          {
            v44 = 1;
            v22 = *(_DWORD *)(v50 + 20);
          }
          if ( (v22 & 1) != 0 )
          {
            v45 = 1;
            v22 = *(_DWORD *)(v50 + 20);
          }
          if ( (v22 & 4) != 0 )
          {
            v46 = 1;
            v22 = *(_DWORD *)(v50 + 20);
          }
          if ( (v22 & 8) != 0 )
          {
            v47 = 1;
            v22 = *(_DWORD *)(v50 + 20);
          }
          if ( (v22 & 0x10) != 0 )
          {
            v48 = 1;
            v22 = *(_DWORD *)(v50 + 20);
          }
          v23 = (v22 & 0x20) == 0;
          v24 = v41;
          v25 = 13;
          if ( !v23 )
            v24 = 1;
          v41 = v24;
          UserData.Ptr = (ULONGLONG)&v50;
          v53 = &v39;
          v55 = &v42;
          v57 = &v43;
          v59 = &v40;
          v61 = &v44;
          v63 = &v45;
          v65 = &v46;
          v67 = v50 + 44;
          v69 = v50 + 40;
          v71 = v50 + 48;
          v26 = DestinationString.Length >> 1;
          v73 = &v37;
          v75 = &v38;
          v37 = (unsigned __int16)v49 >> 1;
          v38 = DestinationString.Length >> 1;
          *(_QWORD *)&UserData.Size = 8LL;
          v54 = 4LL;
          v56 = 4LL;
          v58 = 4LL;
          v60 = 4LL;
          v62 = 4LL;
          v64 = 4LL;
          v66 = 4LL;
          v68 = 4LL;
          v70 = 4LL;
          v72 = 4LL;
          v74 = 2LL;
          v76 = 2LL;
          if ( (unsigned __int16)v49 >> 1 )
          {
            v25 = 14;
            v77 = *((_QWORD *)&v49 + 1);
            v79 = 0;
            v78 = 2 * ((unsigned __int16)v49 >> 1);
          }
          if ( v26 )
          {
            v27 = 2LL * v25;
            *(&UserData.Ptr + v27) = (ULONGLONG)DestinationString.Buffer;
            *(&UserData.Reserved + 2 * v27) = 0;
            *(&UserData.Size + 2 * v27) = 2 * v26;
            ++v25;
          }
          v28 = 2LL * v25;
          v29 = (const EVENT_DESCRIPTOR *)qword_140038DE0;
          *(&UserData.Ptr + v28) = (ULONGLONG)&v47;
          *((_QWORD *)&UserData.Size + v28) = 4LL;
          v30 = v25 + 1;
          v31 = v25 + 2;
          v30 *= 2LL;
          *(&UserData.Ptr + v30) = (ULONGLONG)&v48;
          *((_QWORD *)&UserData.Size + v30) = 4LL;
          v32 = 2LL * v31;
          *(&UserData.Ptr + v32) = (ULONGLONG)&v41;
          *((_QWORD *)&UserData.Size + v32) = 4LL;
          v33 = v31 + 1;
          v31 += 2;
          v33 *= 2LL;
          *(&UserData.Ptr + v33) = v20 + 52;
          *((_QWORD *)&UserData.Size + v33) = 4LL;
          v34 = 2LL * v31;
          *(&UserData.Ptr + v34) = v20 + 56;
          *((_QWORD *)&UserData.Size + v34) = 4LL;
          v35 = v31 + 1;
          v36 = v31 + 2;
          v35 *= 2LL;
          *(&UserData.Ptr + v35) = v20 + 60;
          *((_QWORD *)&UserData.Size + v35) = 4LL;
          if ( !a1 )
            v29 = &stru_140011148;
          EtwWrite(RegHandle, v29, 0LL, v36, &UserData);
        }
        ExFreePoolWithTag((PVOID)v7, 0x50455654u);
      }
    }
  }
}
