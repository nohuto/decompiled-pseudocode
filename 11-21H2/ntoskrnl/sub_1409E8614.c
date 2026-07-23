/*
 * XREFs of sub_1409E8614 @ 0x1409E8614
 * Callers:
 *     sub_140960A90 @ 0x140960A90 (sub_140960A90.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402EDEB4 @ 0x1402EDEB4 (sub_1402EDEB4.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x14041BBC0 (ZwQueryVirtualMemory.c)
 *     sub_14070BB0C @ 0x14070BB0C (sub_14070BB0C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1409E8614(int a1, __int64 a2, void *a3, int a4, int a5)
{
  __int64 *v5; // rax
  __int64 *v6; // rsi
  const wchar_t *v7; // r13
  unsigned __int16 v9; // ax
  ULONG v10; // r12d
  int v11; // eax
  const wchar_t *v12; // rcx
  PVOID v13; // r15
  int v14; // ecx
  __int16 v15; // ax
  unsigned int v16; // r14d
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  const EVENT_DESCRIPTOR *v21; // rdx
  unsigned int v22; // r9d
  int v23; // r14d
  __int64 v24; // rax
  __int64 v25; // rax
  ULONG v26; // r9d
  REGHANDLE v27; // rcx
  unsigned __int16 *v28; // r9
  __int64 v29; // rax
  _WORD v30[2]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v31[2]; // [rsp+34h] [rbp-CCh] BYREF
  _WORD v32[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v33; // [rsp+3Ch] [rbp-C4h] BYREF
  int v34; // [rsp+40h] [rbp-C0h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v36; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P[2]; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+80h] [rbp-80h] BYREF
  int *v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  _DWORD *v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h]
  __int64 v45; // [rsp+C0h] [rbp-40h]
  _DWORD v46[2]; // [rsp+C8h] [rbp-38h] BYREF
  _DWORD *v47; // [rsp+D0h] [rbp-30h]
  __int64 v48; // [rsp+D8h] [rbp-28h]
  PVOID v49; // [rsp+E0h] [rbp-20h]
  _DWORD v50[2]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 *v51; // [rsp+F0h] [rbp-10h]
  __int64 v52; // [rsp+F8h] [rbp-8h]
  _DWORD *v53; // [rsp+100h] [rbp+0h]
  __int64 v54; // [rsp+108h] [rbp+8h]
  __int64 v55; // [rsp+110h] [rbp+10h]
  _DWORD v56[2]; // [rsp+118h] [rbp+18h] BYREF
  int *v57; // [rsp+120h] [rbp+20h]
  __int64 v58; // [rsp+128h] [rbp+28h]
  PVOID *p_BaseAddress; // [rsp+130h] [rbp+30h]
  __int64 v60; // [rsp+138h] [rbp+38h]
  __int64 *v61; // [rsp+140h] [rbp+40h]
  __int64 v62; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+150h] [rbp+50h] BYREF
  const wchar_t *v64; // [rsp+160h] [rbp+60h]
  int v65; // [rsp+168h] [rbp+68h]
  int v66; // [rsp+16Ch] [rbp+6Ch]
  _WORD *v67; // [rsp+170h] [rbp+70h]
  __int64 v68; // [rsp+178h] [rbp+78h]
  const wchar_t *v69; // [rsp+180h] [rbp+80h]
  int v70; // [rsp+188h] [rbp+88h]
  int v71; // [rsp+18Ch] [rbp+8Ch]
  _QWORD v72[20]; // [rsp+190h] [rbp+90h] BYREF
  int v73; // [rsp+298h] [rbp+198h] BYREF

  v73 = a4;
  v5 = *(__int64 **)(a2 + 1472);
  v6 = &qword_140001AF8;
  v34 = a1;
  v36 = 0LL;
  BaseAddress = a3;
  if ( v5 )
    v6 = v5;
  v7 = L"(null)";
  *(_OWORD *)P = 0LL;
  v9 = *(_WORD *)v6;
  v10 = 12;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v9 )
  {
    v30[0] = v9 >> 1;
    UserData.Ptr = (ULONGLONG)v30;
    v11 = *(unsigned __int16 *)v6;
    v12 = (const wchar_t *)v6[1];
  }
  else
  {
    v30[0] = 6;
    UserData.Ptr = (ULONGLONG)v30;
    v12 = L"(null)";
    v11 = 12;
  }
  v64 = v12;
  v65 = v11;
  v66 = 0;
  sub_14070BB0C(a2, (__int64)P);
  v13 = P[1];
  LOWORD(v33) = P[0];
  v68 = 2LL;
  if ( LOWORD(P[0]) )
  {
    v69 = (const wchar_t *)P[1];
    v67 = v32;
    v14 = LOWORD(P[0]);
    v15 = LOWORD(P[0]) >> 1;
  }
  else
  {
    v69 = L"(null)";
    v67 = v32;
    v14 = 12;
    v15 = 6;
  }
  v70 = v14;
  v32[0] = v15;
  v71 = 0;
  v16 = sub_1402EDEB4(v72, a2, &v36) + 4;
  Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, 512LL, 1853049172LL);
  v18 = Pool2;
  if ( !Pool2 )
    goto LABEL_12;
  if ( ZwQueryVirtualMemory(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         BaseAddress,
         MemoryMappedFilenameInformation,
         Pool2,
         0x200uLL,
         0LL) < 0 )
  {
    *v18 = 0;
LABEL_12:
    v31[0] = 6;
    v19 = 2LL * v16;
    *(&UserData.Ptr + v19) = (ULONGLONG)v31;
    *((_QWORD *)&UserData.Size + v19) = 2LL;
    goto LABEL_13;
  }
  if ( !*v18 )
    goto LABEL_12;
  v31[0] = *v18 >> 1;
  v29 = 2LL * v16;
  *(&UserData.Ptr + v29) = (ULONGLONG)v31;
  *((_QWORD *)&UserData.Size + v29) = 2LL;
  v10 = *v18;
  v7 = (const wchar_t *)*((_QWORD *)v18 + 1);
LABEL_13:
  v20 = 2LL * (v16 + 1);
  v21 = (const EVENT_DESCRIPTOR *)qword_140037DD8;
  v22 = v16 + 2;
  *(&UserData.Ptr + v20) = (ULONGLONG)v7;
  *(&UserData.Size + 2 * v20) = v10;
  *(&UserData.Reserved + 2 * v20) = 0;
  v23 = v34;
  v24 = 2LL * v22++;
  *(&UserData.Ptr + v24) = (ULONGLONG)&v73;
  *((_QWORD *)&UserData.Size + v24) = 4LL;
  v25 = 2LL * v22;
  v26 = v22 + 1;
  *(&UserData.Ptr + v25) = (ULONGLONG)&a5;
  v27 = qword_140C15FC8;
  *((_QWORD *)&UserData.Size + v25) = 4LL;
  if ( v23 != 1 )
    v21 = &stru_140039020;
  EtwWrite(v27, v21, 0LL, v26, &UserData);
  if ( (unsigned int)dword_140C043E0 > 5 && sub_1402A2000((__int64)&dword_140C043E0, 0x400000000000LL) )
  {
    v34 = v23;
    v41 = &v34;
    v42 = 4LL;
    v43 = v46;
    v45 = v6[1];
    v46[0] = *(unsigned __int16 *)v6;
    v47 = v50;
    v50[0] = (unsigned __int16)v33;
    v37 = v36;
    v51 = &v37;
    v53 = v56;
    v55 = *((_QWORD *)v28 + 1);
    v56[0] = *v28;
    v33 = v73;
    v57 = &v33;
    LODWORD(BaseAddress) = a5;
    p_BaseAddress = &BaseAddress;
    v61 = &v38;
    v44 = 2LL;
    v46[1] = 0;
    v48 = 2LL;
    v49 = v13;
    v50[1] = 0;
    v52 = 8LL;
    v54 = 2LL;
    v56[1] = 0;
    v58 = 4LL;
    v60 = 4LL;
    v38 = 0x1000000LL;
    v62 = 8LL;
    sub_14020A9C4((__int64)&dword_140C043E0, (unsigned __int8 *)&byte_1400358C7, 0LL, 0LL, 0xDu, &v40);
  }
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
}
