/*
 * XREFs of sub_14078D764 @ 0x14078D764
 * Callers:
 *     sub_14078C5BC @ 0x14078C5BC (sub_14078C5BC.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     PsGetCurrentThreadProcessId @ 0x1402A7BC0 (PsGetCurrentThreadProcessId.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1402DE1B8 @ 0x1402DE1B8 (sub_1402DE1B8.c)
 *     sub_1402E08A0 @ 0x1402E08A0 (sub_1402E08A0.c)
 *     sub_1402E0AC4 @ 0x1402E0AC4 (sub_1402E0AC4.c)
 *     sub_1406C9680 @ 0x1406C9680 (sub_1406C9680.c)
 *     sub_1406DD8D0 @ 0x1406DD8D0 (sub_1406DD8D0.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     sub_14077B0A4 @ 0x14077B0A4 (sub_14077B0A4.c)
 *     sub_14078DAB0 @ 0x14078DAB0 (sub_14078DAB0.c)
 */

__int64 __fastcall sub_14078D764(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  char v5; // bp
  __int64 v8; // rdi
  int v9; // ebx
  int v10; // ecx
  int v11; // eax
  void **v12; // r14
  unsigned __int64 v13; // r11
  int v14; // ecx
  int v15; // ecx
  unsigned int v16; // eax
  char *v17; // rdx
  __int64 *v18; // rax
  int v20; // ecx
  int v21; // ecx
  char *v22; // rax
  __int64 *v23; // rcx
  int v24; // ecx
  int v25; // ecx
  unsigned int v26; // eax
  char *v27; // rcx
  __int64 *v28; // rax
  int v29; // eax
  unsigned int v30; // eax
  char *v31; // rcx
  __int64 *v32; // rax
  __int64 v33; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v34[6]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v35; // [rsp+68h] [rbp+10h] BYREF

  v33 = 0LL;
  v5 = 0;
  v34[0] = 0LL;
  if ( !a2 || a3 != 936 || a4 != 8 )
  {
    v9 = -1073741811;
    goto LABEL_67;
  }
  v8 = sub_14078DAB0();
  if ( !v8 )
  {
    v9 = -1073741670;
LABEL_67:
    v8 = 0LL;
    goto LABEL_24;
  }
  *(_QWORD *)(v8 + 48) = PsGetCurrentThreadProcessId();
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v8 + 56));
  v9 = sub_1402E0AC4((_WORD *)a2, 0x104uLL, &v35);
  if ( v9 < 0 )
    goto LABEL_51;
  if ( *(_DWORD *)(a2 + 520) != 416 )
    goto LABEL_51;
  v10 = *(_DWORD *)(a2 + 528);
  if ( v10 >= 4 )
    goto LABEL_51;
  v11 = *(_DWORD *)(a2 + 524);
  if ( (v11 & 0xFFFFFFFC) != 0 || (v11 & 1) != 0 && v10 )
    goto LABEL_51;
  if ( (v11 & 2) != 0 && (unsigned int)(v10 - 2) > 1 )
    goto LABEL_51;
  v12 = (void **)(a2 + 536);
  if ( v10 == 1 && (((unsigned __int64)*v12 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    goto LABEL_51;
  v13 = 200LL;
  if ( v10 == 2 )
  {
    v9 = sub_1402E0AC4((_WORD *)(a2 + 536), 0xC8uLL, &v35);
    if ( v9 < 0 )
      goto LABEL_51;
  }
  if ( *(_DWORD *)(a2 + 528) == 3 )
  {
    v9 = sub_1402E0AC4((_WORD *)(a2 + 536), v13, &v35);
    if ( v9 < 0 )
      goto LABEL_51;
  }
  *(_DWORD *)(v8 + 132) = *(_DWORD *)(a2 + 528);
  v14 = *(_DWORD *)(a2 + 528);
  if ( !v14 )
  {
    if ( (*(_DWORD *)(a2 + 524) & 1) == 0 )
      *(_OWORD *)(v8 + 24) = *(_OWORD *)v12;
    goto LABEL_17;
  }
  v20 = v14 - 1;
  if ( v20 )
  {
    v24 = v20 - 1;
    if ( !v24 || v24 == 1 )
    {
      if ( (*(_DWORD *)(a2 + 524) & 2) == 0 )
      {
        v29 = sub_14077B0A4(1LL, a2 + 536, (__int64 *)(v8 + 24));
        v9 = v29;
        if ( v29 < 0 )
          goto LABEL_52;
      }
      goto LABEL_17;
    }
LABEL_51:
    v9 = -1073741811;
    goto LABEL_52;
  }
  if ( (int)sub_1406C9680(*v12, &v33, v34) < 0 )
    goto LABEL_51;
  v9 = sub_14077B0A4(1LL, *(_QWORD *)(v33 + 8), (__int64 *)(v8 + 24));
  if ( v9 < 0 )
    goto LABEL_52;
  *(_QWORD *)(v8 + 32) = v34[0];
  *(_BYTE *)(v8 + 40) = 0;
LABEL_17:
  *(_QWORD *)a2 = *(_QWORD *)(v8 + 88);
  *(_QWORD *)(a5 + 8) = 8LL;
  ExAcquireFastMutex(&stru_140C46400);
  v15 = *(_DWORD *)(a2 + 528);
  if ( !v15 )
  {
    if ( (*(_DWORD *)(a2 + 524) & 1) != 0 )
      v16 = 13;
    else
      v16 = sub_1402DE1B8((unsigned __int8 *)(a2 + 536));
    v17 = (char *)&unk_140C46320 + 16 * v16;
    v18 = (__int64 *)*((_QWORD *)v17 + 1);
    if ( (char *)*v18 == v17 )
    {
      ++dword_140C4E91C;
      *(_QWORD *)v8 = v17;
      *(_QWORD *)(v8 + 8) = v18;
      *v18 = v8;
      *((_QWORD *)v17 + 1) = v8;
LABEL_22:
      v5 = 1;
      goto LABEL_23;
    }
    goto LABEL_65;
  }
  v21 = v15 - 1;
  if ( !v21 )
  {
    v22 = (char *)&unk_140C46600 + 16 * (unsigned int)sub_1402E08A0(*(PCWSTR *)(*(_QWORD *)(v8 + 24) + 16LL));
    v23 = (__int64 *)*((_QWORD *)v22 + 1);
    if ( (char *)*v23 == v22 )
    {
      ++dword_140C4E914;
      *(_QWORD *)v8 = v22;
      *(_QWORD *)(v8 + 8) = v23;
      *v23 = v8;
      *((_QWORD *)v22 + 1) = v8;
      goto LABEL_22;
    }
LABEL_65:
    __fastfail(3u);
  }
  v25 = v21 - 1;
  if ( !v25 )
  {
    if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
      v26 = 13;
    else
      v26 = sub_1402E08A0((PCWSTR)(a2 + 536));
    v27 = (char *)&unk_140C46520 + 16 * v26;
    v28 = (__int64 *)*((_QWORD *)v27 + 1);
    if ( (char *)*v28 == v27 )
    {
      ++dword_140C4E918;
      *(_QWORD *)v8 = v27;
      *(_QWORD *)(v8 + 8) = v28;
      *v28 = v8;
      *((_QWORD *)v27 + 1) = v8;
      goto LABEL_22;
    }
    goto LABEL_65;
  }
  if ( v25 == 1 )
  {
    if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
      v30 = 13;
    else
      v30 = sub_1402E08A0((PCWSTR)(a2 + 536));
    v31 = (char *)&unk_140C46440 + 16 * v30;
    v32 = (__int64 *)*((_QWORD *)v31 + 1);
    if ( (char *)*v32 == v31 )
    {
      ++dword_140D01120;
      *(_QWORD *)v8 = v31;
      *(_QWORD *)(v8 + 8) = v32;
      *v32 = v8;
      *((_QWORD *)v31 + 1) = v8;
      goto LABEL_22;
    }
    goto LABEL_65;
  }
  v9 = -1073741811;
LABEL_23:
  KeReleaseGuardedMutex(&stru_140C46400);
  if ( v9 < 0 )
  {
LABEL_52:
    sub_1406DD8D0((char *)v8, v5);
    goto LABEL_67;
  }
LABEL_24:
  *(_QWORD *)(a1 + 32) = v8;
  return (unsigned int)v9;
}
