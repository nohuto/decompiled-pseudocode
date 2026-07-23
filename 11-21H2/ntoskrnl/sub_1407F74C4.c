/*
 * XREFs of sub_1407F74C4 @ 0x1407F74C4
 * Callers:
 *     sub_140671BE0 @ 0x140671BE0 (sub_140671BE0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402EDEB4 @ 0x1402EDEB4 (sub_1402EDEB4.c)
 *     sub_1402EDFB0 @ 0x1402EDFB0 (sub_1402EDFB0.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14070BB0C @ 0x14070BB0C (sub_14070BB0C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1407F74C4(int a1, __int64 a2, UNICODE_STRING *a3, UNICODE_STRING *a4)
{
  __int64 *v5; // r14
  char v8; // r12
  unsigned __int16 Length; // bx
  wchar_t *Buffer; // r15
  int v11; // eax
  const wchar_t *v12; // rcx
  int v13; // eax
  __int16 v14; // bx
  int v15; // eax
  int v16; // eax
  ULONGLONG v17; // r10
  int v18; // r8d
  unsigned int v19; // r9d
  ULONGLONG v20; // r11
  ULONG v21; // r8d
  __int16 v22; // ax
  __int64 v23; // rax
  __int64 v24; // rcx
  ULONG v25; // r8d
  __int16 v26; // ax
  __int64 v27; // rax
  __int64 v28; // rcx
  ULONG v29; // r9d
  const EVENT_DESCRIPTOR *v30; // rdx
  int v31; // r15d
  wchar_t *v32; // rbx
  int v33; // r9d
  __int64 v34; // r11
  int v35; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v36; // [rsp+3Ch] [rbp-CCh] BYREF
  int v37; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v38; // [rsp+44h] [rbp-C4h] BYREF
  __int16 DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v41; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v42; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING v43; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING v44; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45[2]; // [rsp+98h] [rbp-70h] BYREF
  __int64 *v46; // [rsp+B8h] [rbp-50h]
  __int64 v47; // [rsp+C0h] [rbp-48h]
  __int64 *v48; // [rsp+C8h] [rbp-40h]
  __int64 v49; // [rsp+D0h] [rbp-38h] BYREF
  __int64 *v50; // [rsp+D8h] [rbp-30h]
  __int64 v51; // [rsp+E0h] [rbp-28h] BYREF
  wchar_t *v52; // [rsp+E8h] [rbp-20h]
  __int64 v53; // [rsp+F0h] [rbp-18h] BYREF
  __int64 *v54; // [rsp+F8h] [rbp-10h]
  __int64 v55; // [rsp+100h] [rbp-8h] BYREF
  unsigned __int64 *v56; // [rsp+108h] [rbp+0h]
  __int64 v57; // [rsp+110h] [rbp+8h] BYREF
  int *v58; // [rsp+118h] [rbp+10h]
  __int64 v59; // [rsp+120h] [rbp+18h]
  wchar_t *v60; // [rsp+128h] [rbp+20h]
  int v61; // [rsp+130h] [rbp+28h] BYREF
  int v62; // [rsp+134h] [rbp+2Ch]
  _DWORD *v63; // [rsp+138h] [rbp+30h]
  __int64 v64; // [rsp+140h] [rbp+38h]
  wchar_t *v65; // [rsp+148h] [rbp+40h]
  _DWORD v66[2]; // [rsp+150h] [rbp+48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+158h] [rbp+50h] BYREF
  const wchar_t *v68; // [rsp+168h] [rbp+60h]
  int v69; // [rsp+170h] [rbp+68h]
  int v70; // [rsp+174h] [rbp+6Ch]
  __int16 *v71; // [rsp+178h] [rbp+70h]
  __int64 v72; // [rsp+180h] [rbp+78h]
  const wchar_t *v73; // [rsp+188h] [rbp+80h]
  int v74; // [rsp+190h] [rbp+88h]
  int v75; // [rsp+194h] [rbp+8Ch]
  __int64 v76[24]; // [rsp+198h] [rbp+90h] BYREF

  v37 = a1;
  v5 = &qword_140001AF8;
  v41 = 0LL;
  v8 = 1;
  if ( *(_QWORD *)(a2 + 1472) )
    v5 = *(__int64 **)(a2 + 1472);
  DestinationString_8 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  sub_14070BB0C(a2, (__int64)&DestinationString_8);
  Length = DestinationString_8.Length;
  if ( !DestinationString_8.Length )
  {
    RtlInitUnicodeString(&DestinationString_8, L"Unknown");
    Length = DestinationString_8.Length;
    v8 = 0;
  }
  if ( !a3 || !a3->Length )
  {
    RtlInitUnicodeString(&v43, L"Unknown");
    a3 = &v43;
  }
  if ( !a4 || !a4->Length )
  {
    RtlInitUnicodeString(&v44, L"Unknown");
    a4 = &v44;
  }
  Buffer = DestinationString_8.Buffer;
  if ( v37 == 2 && (unsigned int)dword_140C043A8 > 5 && sub_1402A2000((__int64)&dword_140C043A8, 0x200000000001LL) )
  {
    HIDWORD(v49) = v33;
    v46 = &v49;
    v48 = (__int64 *)v5[1];
    LODWORD(v49) = *(unsigned __int16 *)v5;
    v50 = &v53;
    LODWORD(v53) = Length;
    v54 = &v57;
    v56 = (unsigned __int64 *)a3->Buffer;
    LODWORD(v57) = a3->Length;
    v58 = &v61;
    v60 = a4->Buffer;
    v61 = a4->Length;
    HIDWORD(v53) = v33;
    HIDWORD(v57) = v33;
    v62 = v33;
    v47 = v34;
    v51 = v34;
    v52 = Buffer;
    v55 = v34;
    v59 = v34;
    sub_14020A9C4((__int64)&dword_140C043A8, (unsigned __int8 *)byte_140035CBB, 0LL, 0LL, 0xAu, v45);
  }
  if ( v5 && *(_WORD *)v5 )
  {
    LOWORD(v35) = *(_WORD *)v5 >> 1;
    UserData.Ptr = (ULONGLONG)&v35;
    *(_QWORD *)&UserData.Size = 2LL;
    v11 = *(unsigned __int16 *)v5;
    v12 = (const wchar_t *)v5[1];
  }
  else
  {
    LOWORD(v35) = 6;
    UserData.Ptr = (ULONGLONG)&v35;
    v12 = L"(null)";
    v11 = 12;
    *(_QWORD *)&UserData.Size = 2LL;
  }
  v69 = v11;
  v71 = &v36;
  v68 = v12;
  v70 = 0;
  v72 = 2LL;
  if ( Length )
  {
    v13 = Length;
    v14 = Length >> 1;
    v73 = Buffer;
  }
  else
  {
    v73 = L"(null)";
    v13 = 12;
    v14 = 6;
  }
  v75 = 0;
  v36 = v14;
  v74 = v13;
  v15 = sub_1402EDEB4(v76, a2, &v41);
  v16 = sub_1402EDFB0((__int64)(&UserData + (unsigned int)(v15 + 4)), (__int64)KeGetCurrentThread());
  v19 = v16 + v18;
  if ( a3 && a3->Length )
  {
    v20 = (ULONGLONG)a3->Buffer;
    v21 = a3->Length;
    v22 = a3->Length >> 1;
  }
  else
  {
    v21 = 12;
    v20 = v17;
    v22 = 6;
  }
  v38 = v22;
  v23 = 2LL * v19;
  v24 = 2LL * (v19 + 1);
  *(&UserData.Ptr + v23) = (ULONGLONG)&v38;
  *((_QWORD *)&UserData.Size + v23) = 2LL;
  *(&UserData.Ptr + v24) = v20;
  *(&UserData.Size + 2 * v24) = v21;
  *(&UserData.Reserved + 2 * v24) = 0;
  if ( a4 && a4->Length )
  {
    v17 = (ULONGLONG)a4->Buffer;
    v25 = a4->Length;
    v26 = a4->Length >> 1;
  }
  else
  {
    v26 = 6;
    v25 = 12;
  }
  DestinationString = v26;
  v27 = 2LL * (v19 + 2);
  v28 = 2LL * (v19 + 3);
  v29 = v19 + 4;
  *(&UserData.Ptr + v27) = (ULONGLONG)&DestinationString;
  v30 = (const EVENT_DESCRIPTOR *)qword_14000EDB8;
  *((_QWORD *)&UserData.Size + v27) = 2LL;
  *(&UserData.Ptr + v28) = v17;
  *(&UserData.Size + 2 * v28) = v25;
  *(&UserData.Reserved + 2 * v28) = 0;
  v31 = v37;
  if ( v37 != 1 )
    v30 = &stru_140037208;
  EtwWrite(qword_140C15FC8, v30, 0LL, v29, &UserData);
  v32 = DestinationString_8.Buffer;
  if ( (unsigned int)dword_140C043E0 > 5 && sub_1402A2000((__int64)&dword_140C043E0, 0x400000000000LL) )
  {
    v37 = v31;
    v46 = (__int64 *)&v37;
    v47 = 4LL;
    v48 = &v51;
    v50 = (__int64 *)v5[1];
    v51 = *(unsigned __int16 *)v5;
    v52 = (wchar_t *)&v55;
    v55 = DestinationString_8.Length;
    v42 = v41;
    v56 = &v42;
    v58 = &v61;
    v60 = a3->Buffer;
    v61 = a3->Length;
    v63 = v66;
    v65 = a4->Buffer;
    v66[0] = a4->Length;
    v49 = 2LL;
    v53 = 2LL;
    v54 = (__int64 *)v32;
    v57 = 8LL;
    v59 = 2LL;
    v62 = 0;
    v64 = 2LL;
    v66[1] = 0;
    sub_14020A9C4((__int64)&dword_140C043E0, (unsigned __int8 *)byte_140035C23, 0LL, 0LL, 0xCu, v45);
  }
  if ( v8 )
    ExFreePoolWithTag(v32, 0);
}
