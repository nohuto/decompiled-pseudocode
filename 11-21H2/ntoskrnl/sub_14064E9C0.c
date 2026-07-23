/*
 * XREFs of sub_14064E9C0 @ 0x14064E9C0
 * Callers:
 *     sub_140567874 @ 0x140567874 (sub_140567874.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     sub_1403A7F70 @ 0x1403A7F70 (sub_1403A7F70.c)
 *     sub_1403A8368 @ 0x1403A8368 (sub_1403A8368.c)
 *     sub_140552B40 @ 0x140552B40 (sub_140552B40.c)
 *     sub_14064D4AC @ 0x14064D4AC (sub_14064D4AC.c)
 *     sub_14064DB50 @ 0x14064DB50 (sub_14064DB50.c)
 *     sub_14064DC1C @ 0x14064DC1C (sub_14064DC1C.c)
 *     sub_14064DF74 @ 0x14064DF74 (sub_14064DF74.c)
 *     sub_14064E1FC @ 0x14064E1FC (sub_14064E1FC.c)
 *     sub_14064E408 @ 0x14064E408 (sub_14064E408.c)
 *     sub_14064E594 @ 0x14064E594 (sub_14064E594.c)
 *     sub_140B572D0 @ 0x140B572D0 (sub_140B572D0.c)
 */

__int64 __fastcall sub_14064E9C0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, char a5)
{
  int v7; // ebp
  unsigned int v8; // ebx
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // r8
  int *v14; // rax
  int v15; // ecx
  __int64 *v16; // rcx
  int v17; // edx
  int v18; // r9d
  __int64 v19; // r8
  UNICODE_STRING *v20; // rcx
  __int16 v21; // cx
  __int64 v22; // r8
  char v23; // r14
  UNICODE_STRING *v24; // rcx
  UNICODE_STRING *v25; // rdx
  int v26; // r9d
  unsigned int v27; // eax
  __int64 v28; // r8
  int v29; // r15d
  __int64 v30; // r8
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-48h] BYREF
  __int64 v33; // [rsp+38h] [rbp-40h] BYREF
  _DWORD v34[4]; // [rsp+40h] [rbp-38h] BYREF

  v33 = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  v7 = a1;
  if ( (dword_140C0DF90 & 4) != 0 && (dword_140C0DF90 & 0x400000) == 0 )
  {
    v8 = sub_140B572D0(a1, a2, a4);
    sub_140552B40(131);
    return v8;
  }
  if ( (dword_140C0DF90 & 0x400000) != 0 || (dword_140C0DF90 & 0x10) == 0 )
  {
    sub_14064D4AC(0xFF000000);
    sub_140552B40(132);
    return 0LL;
  }
  v34[0] = DWORD2(xmmword_140C0DF20);
  v34[1] = DWORD1(xmmword_140C0DF20);
  v34[2] = HIDWORD(xmmword_140C0DF20);
  v10 = (int)sub_14064E594(v34);
  v11 = *(_QWORD *)(qword_140C5A830 + 24);
  if ( v7 == 456 )
  {
    v12 = -16777216;
    *(_DWORD *)(v11 + 40) = -16777216;
  }
  else
  {
    v12 = *(_DWORD *)(v11 + 40);
  }
  sub_14064D4AC(v12);
  sub_140552B40(133);
  LODWORD(qword_140C4EF78) = dword_140C0B2E0[18 * v10 + 4];
  v14 = &dword_140C0B2E0[18 * v10 + 5];
  v15 = *v14;
  HIDWORD(qword_140C4EF78) = *v14;
  if ( v14 )
    dword_140C4EF80 = v15;
  if ( (dword_140C0DF90 & 0x20000) == 0 )
  {
    v16 = &qword_140005FF8;
    if ( v7 == 456 )
      v16 = &qword_14000AD38;
    sub_14064DC1C((unsigned __int16 *)v16, dword_140C0B2E0[18 * v10 + 3], v13, (unsigned int)v10);
  }
  v17 = dword_140C0B2E0[18 * v10 + 8];
  v18 = dword_140C0B2E0[18 * v10 + 4];
  v19 = (unsigned int)dword_140C0B2E0[18 * v10 + 2];
  HIDWORD(qword_140C4EF78) = dword_140C4EF80 + dword_140C0B2E0[18 * v10 + 9];
  if ( v7 == 456 )
  {
    LODWORD(qword_140C4EF78) = v18 + v17;
    v20 = &stru_140C5A800;
  }
  else
  {
    v20 = &stru_140C5A7F0;
    LODWORD(qword_140C4EF78) = v18 + v17;
    if ( (dword_140C0DF90 & 0x10000000) == 0 )
      v20 = &stru_140C5A710;
  }
  sub_14064DC1C(&v20->Length, v19, v19, (unsigned int)v10);
  sub_14064DB50(v21, dword_140C0B2E0[18 * v10 + 2]);
  v23 = 1;
  if ( v7 == 456 )
  {
    v24 = &stru_140C5A810;
  }
  else
  {
    if ( (a5 & 1) != 0 )
      goto LABEL_28;
    if ( (a5 & 2) != 0 )
    {
      v25 = &stru_140C5A740;
      v24 = &stru_140C5A760;
    }
    else
    {
      v24 = &stru_140C5A750;
      v25 = &stru_140C5A730;
    }
    if ( (a5 & 4) == 0 )
      v24 = v25;
  }
  sub_14064DC1C(&v24->Length, dword_140C0B2E0[18 * v10 + 2], v22, (unsigned int)v10);
LABEL_28:
  v26 = 0;
  if ( !qword_140C0E018 || (v27 = sub_1403A8368(), *(_DWORD *)(v28 + 8) < v27) && (dword_140C0DF90 & 0xC00) != 0 )
    v23 = 0;
  else
    v26 = *(_DWORD *)(v28 + 4);
  v29 = sub_14064E408(&qword_140C0DEB0, &qword_140C0DEF0, (int *)&v33, v10, v26, (a5 & 4) == 0);
  if ( v29 >= 0 )
  {
    qword_140C4EF78 = qword_140C0DEF0;
    dword_140C4EF80 = dword_140C0DEF8;
    if ( v7 != 456 )
    {
      sub_14064DF74(v10, v7, a2, a3, (__int64)a4, a5);
      if ( v23 )
        sub_1403A7F70((_BYTE *)qword_140C0E018, (__int64)&v33);
    }
    sub_140552B40(134);
    if ( (a5 & 4) != 0 )
    {
      if ( (a5 & 2) == 0 )
      {
        KeQueryPerformanceCounter(&PerformanceFrequency);
        KeStallExecutionProcessor(10000000 * PerformanceFrequency.QuadPart / PerformanceFrequency.QuadPart);
      }
    }
    else
    {
      qword_140C4EF78 = qword_140C0DEB0;
      dword_140C4EF80 = dword_140C0DEB8;
      sub_14064E1FC(0, v10, v30);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      dword_140C0DEFC = 0;
      qword_140C0DE98 = PerformanceCounter.QuadPart;
      qword_140C0DEA0 = PerformanceCounter.QuadPart;
    }
    *a4 = &stru_140C5A710;
    a4[1] = &stru_140C5A720;
  }
  return (unsigned int)v29;
}
