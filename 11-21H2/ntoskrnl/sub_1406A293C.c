/*
 * XREFs of sub_1406A293C @ 0x1406A293C
 * Callers:
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x1407B13E0 (NtQueryInformationToken.c)
 * Callees:
 *     sub_14022B1FC @ 0x14022B1FC (sub_14022B1FC.c)
 *     RtlSidHashInitialize @ 0x1402E1660 (RtlSidHashInitialize.c)
 *     sub_1402ED7E0 @ 0x1402ED7E0 (sub_1402ED7E0.c)
 *     sub_14041A0D4 @ 0x14041A0D4 (sub_14041A0D4.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlCopySidAndAttributesArray @ 0x14066A420 (RtlCopySidAndAttributesArray.c)
 *     sub_1406A2E40 @ 0x1406A2E40 (sub_1406A2E40.c)
 */

__int64 __fastcall sub_1406A293C(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        int a9,
        unsigned int a10,
        unsigned int a11,
        int a12,
        int a13,
        char a14,
        unsigned __int8 *a15)
{
  int v18; // r15d
  __int64 v19; // rcx
  __int64 v20; // rcx
  char *v21; // rsi
  int v22; // eax
  ULONG v23; // r8d
  __int64 v24; // rbp
  void *SidArea; // rax
  int v26; // eax
  ULONG v27; // edx
  _SID_AND_ATTRIBUTES_HASH *v28; // r8
  __int64 v29; // rdi
  __int64 v30; // rbp
  ULONG v31; // ecx
  int v32; // eax
  ULONG v33; // edx
  __int64 v34; // rdi
  __int64 v35; // rbp
  ULONG v36; // ecx
  int v37; // eax
  ULONG v38; // edx
  char *v39; // rdi
  char *v40; // rbp
  unsigned __int8 *v41; // rdx
  char *v42; // rdi
  char *v43; // rdi
  char *v44; // rdx
  PSID RemainingSidArea; // [rsp+70h] [rbp+8h] BYREF

  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 192);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a2 + 44) = *(_DWORD *)(a1 + 200);
  v18 = a2 + a3;
  sub_14022B1FC(a1, (_DWORD *)(a2 + 40));
  v20 = *(_QWORD *)(v19 + 1080);
  v21 = 0LL;
  v22 = 0;
  if ( v20 )
    v22 = *(_DWORD *)(v20 + 40);
  v23 = a5 - a6;
  v24 = a2 + 360;
  *(_DWORD *)(a2 + 48) = v22;
  *(_DWORD *)(a2 + 88) = *(_DWORD *)(a1 + 124);
  SidArea = (void *)(a2 + 360 + a6);
  *(_QWORD *)(a2 + 96) = a2 + 360;
  *(_QWORD *)a2 = a2 + 88;
  RtlCopySidAndAttributesArray(
    *(_DWORD *)(a1 + 124),
    *(PSID_AND_ATTRIBUTES *)(a1 + 152),
    v23,
    (PSID_AND_ATTRIBUTES)(a2 + 360),
    SidArea,
    &RemainingSidArea,
    (PULONG)&RemainingSidArea);
  v26 = sub_14041A0D4();
  v27 = *(_DWORD *)(a1 + 124);
  v28 = (_SID_AND_ATTRIBUTES_HASH *)(a2 + 88);
  if ( v26 )
  {
    RtlSidHashInitialize(*(PSID_AND_ATTRIBUTES *)(a1 + 152), v27, v28);
    *(_QWORD *)(a2 + 96) = v24;
  }
  else
  {
    RtlSidHashInitialize((PSID_AND_ATTRIBUTES)(a2 + 360), v27, v28);
  }
  v29 = v24 + a5;
  *(_DWORD *)v29 = *(_DWORD *)(a1 + 128);
  v30 = v29 + 272;
  *(_QWORD *)(v29 + 8) = v29 + 272;
  *(_QWORD *)(a2 + 8) = v29;
  v31 = *(_DWORD *)(a1 + 128);
  if ( v31 )
  {
    RtlCopySidAndAttributesArray(
      v31,
      *(PSID_AND_ATTRIBUTES *)(a1 + 160),
      a7 - a8,
      (PSID_AND_ATTRIBUTES)(v29 + 272),
      (PSID)(v30 + a8),
      &RemainingSidArea,
      (PULONG)&RemainingSidArea);
    v32 = sub_14041A0D4();
    v33 = *(_DWORD *)(a1 + 128);
    if ( v32 )
    {
      RtlSidHashInitialize(*(PSID_AND_ATTRIBUTES *)(a1 + 160), v33, (PSID_AND_ATTRIBUTES_HASH)v29);
      *(_QWORD *)(v29 + 8) = v30;
    }
    else
    {
      RtlSidHashInitialize((PSID_AND_ATTRIBUTES)(v29 + 272), v33, (PSID_AND_ATTRIBUTES_HASH)v29);
    }
  }
  v34 = v30 + a7;
  *(_DWORD *)v34 = *(_DWORD *)(a1 + 800);
  v35 = v34 + 272;
  *(_QWORD *)(v34 + 8) = v34 + 272;
  *(_QWORD *)(a2 + 64) = v34;
  v36 = *(_DWORD *)(a1 + 800);
  if ( v36 )
  {
    RtlCopySidAndAttributesArray(
      v36,
      *(PSID_AND_ATTRIBUTES *)(a1 + 792),
      a10 - a11,
      (PSID_AND_ATTRIBUTES)(v34 + 272),
      (PSID)(v35 + a11),
      &RemainingSidArea,
      (PULONG)&RemainingSidArea);
    v37 = sub_14041A0D4();
    v38 = *(_DWORD *)(a1 + 800);
    if ( v37 )
    {
      RtlSidHashInitialize(*(PSID_AND_ATTRIBUTES *)(a1 + 792), v38, (PSID_AND_ATTRIBUTES_HASH)v34);
      *(_QWORD *)(v34 + 8) = v35;
    }
    else
    {
      RtlSidHashInitialize((PSID_AND_ATTRIBUTES)(v34 + 272), v38, (PSID_AND_ATTRIBUTES_HASH)v34);
    }
  }
  v39 = (char *)(v35 + a10);
  v40 = 0LL;
  if ( a9 )
  {
    v40 = v39;
    memmove(v39, *(const void **)(a1 + 784), 4LL * *(unsigned __int8 *)(*(_QWORD *)(a1 + 784) + 1LL) + 8);
  }
  v41 = a15;
  *(_QWORD *)(a2 + 56) = v40;
  if ( !a14 )
    v41 = *(unsigned __int8 **)(a1 + 1104);
  v42 = &v39[a9];
  if ( a12 )
  {
    v21 = v42;
    memmove(v42, v41, 4LL * v41[1] + 8);
  }
  v43 = &v42[a12];
  *(_QWORD *)(a2 + 72) = v21;
  sub_1406A2E40(*(_QWORD *)(a1 + 776), v43, (unsigned int)(v18 - (_DWORD)v43), &RemainingSidArea);
  v44 = &v43[a13];
  *(_QWORD *)(a2 + 80) = v43;
  *(_DWORD *)v44 = a4;
  *(_QWORD *)(a2 + 16) = v44;
  return sub_1402ED7E0((_QWORD *)a1, (__int64)(v44 + 4));
}
