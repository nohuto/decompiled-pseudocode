/*
 * XREFs of sub_1409E7418 @ 0x1409E7418
 * Callers:
 *     sub_1406F884C @ 0x1406F884C (sub_1406F884C.c)
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

void __fastcall sub_1409E7418(int a1, __int64 a2, unsigned __int16 *a3)
{
  __int64 *v4; // rdi
  const wchar_t *v5; // r15
  __int64 *v8; // rax
  ULONG v9; // r14d
  unsigned __int16 v10; // ax
  int v11; // eax
  const wchar_t *v12; // rcx
  int v13; // eax
  __int16 v14; // cx
  int v15; // eax
  int v16; // eax
  int v17; // r8d
  unsigned int v18; // edx
  __int16 v19; // ax
  __int64 v20; // rax
  __int64 v21; // rcx
  ULONG v22; // r9d
  const EVENT_DESCRIPTOR *v23; // rdx
  void *v24; // r14
  _WORD v25[2]; // [rsp+38h] [rbp-D0h] BYREF
  int v26; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v27; // [rsp+40h] [rbp-C8h] BYREF
  int v28; // [rsp+44h] [rbp-C4h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v30; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v31; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+68h] [rbp-A0h] BYREF
  int *v33; // [rsp+88h] [rbp-80h]
  __int64 v34; // [rsp+90h] [rbp-78h]
  _DWORD *v35; // [rsp+98h] [rbp-70h]
  __int64 v36; // [rsp+A0h] [rbp-68h]
  __int64 v37; // [rsp+A8h] [rbp-60h]
  _DWORD v38[2]; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD *v39; // [rsp+B8h] [rbp-50h]
  __int64 v40; // [rsp+C0h] [rbp-48h]
  void *v41; // [rsp+C8h] [rbp-40h]
  _DWORD v42[2]; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int64 *v43; // [rsp+D8h] [rbp-30h]
  __int64 v44; // [rsp+E0h] [rbp-28h]
  _DWORD *v45; // [rsp+E8h] [rbp-20h]
  __int64 v46; // [rsp+F0h] [rbp-18h]
  __int64 v47; // [rsp+F8h] [rbp-10h]
  _DWORD v48[2]; // [rsp+100h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+108h] [rbp+0h] BYREF
  const wchar_t *v50; // [rsp+118h] [rbp+10h]
  int v51; // [rsp+120h] [rbp+18h]
  int v52; // [rsp+124h] [rbp+1Ch]
  int *v53; // [rsp+128h] [rbp+20h]
  __int64 v54; // [rsp+130h] [rbp+28h]
  const wchar_t *v55; // [rsp+138h] [rbp+30h]
  int v56; // [rsp+140h] [rbp+38h]
  int v57; // [rsp+144h] [rbp+3Ch]
  _QWORD v58[20]; // [rsp+148h] [rbp+40h] BYREF

  v4 = &qword_140001AF8;
  v5 = L"(null)";
  v29 = 0LL;
  v8 = *(__int64 **)(a2 + 1472);
  v30 = 0LL;
  if ( v8 )
    v4 = v8;
  v9 = 12;
  v10 = *(_WORD *)v4;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v10 )
  {
    v25[0] = v10 >> 1;
    UserData.Ptr = (ULONGLONG)v25;
    v11 = *(unsigned __int16 *)v4;
    v12 = (const wchar_t *)v4[1];
  }
  else
  {
    v25[0] = 6;
    UserData.Ptr = (ULONGLONG)v25;
    v12 = L"(null)";
    v11 = 12;
  }
  v50 = v12;
  v52 = 0;
  v51 = v11;
  sub_14070BB0C(a2, (__int64)&v30);
  v54 = 2LL;
  v53 = &v26;
  if ( (_WORD)v30 )
  {
    v55 = (const wchar_t *)*((_QWORD *)&v30 + 1);
    v13 = (unsigned __int16)v30;
    v14 = (unsigned __int16)v30 >> 1;
  }
  else
  {
    v55 = L"(null)";
    v13 = 12;
    v14 = 6;
  }
  LOWORD(v26) = v14;
  v57 = 0;
  v56 = v13;
  v15 = sub_1402EDEB4(v58, a2, &v29);
  v16 = sub_1402EDFB0((__int64)(&UserData + (unsigned int)(v15 + 4)), (__int64)KeGetCurrentThread());
  v18 = v16 + v17;
  if ( a3 && *a3 )
  {
    v5 = (const wchar_t *)*((_QWORD *)a3 + 1);
    v9 = *a3;
    v19 = *a3 >> 1;
  }
  else
  {
    v19 = 6;
  }
  v27 = v19;
  v20 = 2LL * v18;
  v21 = 2LL * (v18 + 1);
  v22 = v18 + 2;
  *(&UserData.Ptr + v20) = (ULONGLONG)&v27;
  v23 = (const EVENT_DESCRIPTOR *)qword_140038470;
  *((_QWORD *)&UserData.Size + v20) = 2LL;
  *(&UserData.Ptr + v21) = (ULONGLONG)v5;
  if ( a1 != 1 )
    v23 = &stru_140038AE0;
  *(&UserData.Size + 2 * v21) = v9;
  *(&UserData.Reserved + 2 * v21) = 0;
  EtwWrite(qword_140C15FC8, v23, 0LL, v22, &UserData);
  v24 = (void *)*((_QWORD *)&v30 + 1);
  if ( (unsigned int)dword_140C043E0 > 5 && sub_1402A2000((__int64)&dword_140C043E0, 0x400000000000LL) )
  {
    v28 = a1;
    v33 = &v28;
    v34 = 4LL;
    v35 = v38;
    v37 = v4[1];
    v38[0] = *(unsigned __int16 *)v4;
    v39 = v42;
    v42[0] = (unsigned __int16)v30;
    v31 = v29;
    v43 = &v31;
    v45 = v48;
    v47 = *((_QWORD *)a3 + 1);
    v48[0] = *a3;
    v36 = 2LL;
    v38[1] = 0;
    v40 = 2LL;
    v41 = v24;
    v42[1] = 0;
    v44 = 8LL;
    v46 = 2LL;
    v48[1] = 0;
    sub_14020A9C4((__int64)&dword_140C043E0, (unsigned __int8 *)word_140035BBA, 0LL, 0LL, 0xAu, &v32);
  }
  if ( v24 )
    ExFreePoolWithTag(v24, 0);
}
