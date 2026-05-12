/*
 * XREFs of sub_1C00AEFFC @ 0x1C00AEFFC
 * Callers:
 *     sub_1C003ECD8 @ 0x1C003ECD8 (sub_1C003ECD8.c)
 *     sub_1C0078140 @ 0x1C0078140 (sub_1C0078140.c)
 *     sub_1C00ACFB0 @ 0x1C00ACFB0 (sub_1C00ACFB0.c)
 *     sub_1C00AD11C @ 0x1C00AD11C (sub_1C00AD11C.c)
 *     sub_1C00AD268 @ 0x1C00AD268 (sub_1C00AD268.c)
 *     sub_1C00AD3A8 @ 0x1C00AD3A8 (sub_1C00AD3A8.c)
 *     sub_1C00AD828 @ 0x1C00AD828 (sub_1C00AD828.c)
 *     sub_1C00ADA98 @ 0x1C00ADA98 (sub_1C00ADA98.c)
 *     sub_1C00ADC5C @ 0x1C00ADC5C (sub_1C00ADC5C.c)
 *     sub_1C00AE090 @ 0x1C00AE090 (sub_1C00AE090.c)
 *     sub_1C00AE43C @ 0x1C00AE43C (sub_1C00AE43C.c)
 *     sub_1C00AE738 @ 0x1C00AE738 (sub_1C00AE738.c)
 *     sub_1C00AE918 @ 0x1C00AE918 (sub_1C00AE918.c)
 *     sub_1C00AEC48 @ 0x1C00AEC48 (sub_1C00AEC48.c)
 *     sub_1C00AEDD0 @ 0x1C00AEDD0 (sub_1C00AEDD0.c)
 *     sub_1C00AEEC4 @ 0x1C00AEEC4 (sub_1C00AEEC4.c)
 *     sub_1C00AF4CC @ 0x1C00AF4CC (sub_1C00AF4CC.c)
 *     sub_1C00AF6D8 @ 0x1C00AF6D8 (sub_1C00AF6D8.c)
 *     sub_1C00AF8D0 @ 0x1C00AF8D0 (sub_1C00AF8D0.c)
 *     sub_1C00AFB40 @ 0x1C00AFB40 (sub_1C00AFB40.c)
 *     sub_1C00AFE68 @ 0x1C00AFE68 (sub_1C00AFE68.c)
 *     sub_1C00B013C @ 0x1C00B013C (sub_1C00B013C.c)
 *     sub_1C00B0368 @ 0x1C00B0368 (sub_1C00B0368.c)
 * Callees:
 *     sub_1C0004C64 @ 0x1C0004C64 (sub_1C0004C64.c)
 *     sub_1C0007BA4 @ 0x1C0007BA4 (sub_1C0007BA4.c)
 *     sub_1C0008424 @ 0x1C0008424 (sub_1C0008424.c)
 *     sub_1C00084E4 @ 0x1C00084E4 (sub_1C00084E4.c)
 *     sub_1C0008510 @ 0x1C0008510 (sub_1C0008510.c)
 *     sub_1C0008570 @ 0x1C0008570 (sub_1C0008570.c)
 *     sub_1C0008870 @ 0x1C0008870 (sub_1C0008870.c)
 *     sub_1C0008BB4 @ 0x1C0008BB4 (sub_1C0008BB4.c)
 *     sub_1C0008BF0 @ 0x1C0008BF0 (sub_1C0008BF0.c)
 *     sub_1C0008C44 @ 0x1C0008C44 (sub_1C0008C44.c)
 *     sub_1C0008DB8 @ 0x1C0008DB8 (sub_1C0008DB8.c)
 *     sub_1C0008E14 @ 0x1C0008E14 (sub_1C0008E14.c)
 *     sub_1C0010124 @ 0x1C0010124 (sub_1C0010124.c)
 *     sub_1C0019CFC @ 0x1C0019CFC (sub_1C0019CFC.c)
 *     sub_1C001AA84 @ 0x1C001AA84 (sub_1C001AA84.c)
 *     sub_1C0023100 @ 0x1C0023100 (sub_1C0023100.c)
 *     sub_1C0037008 @ 0x1C0037008 (sub_1C0037008.c)
 *     sub_1C003DB10 @ 0x1C003DB10 (sub_1C003DB10.c)
 *     sub_1C0066EE4 @ 0x1C0066EE4 (sub_1C0066EE4.c)
 */

__int64 __fastcall sub_1C00AEFFC(
        __int64 a1,
        void *a2,
        __int64 a3,
        ULONG a4,
        _OWORD *a5,
        char a6,
        DWORD a7,
        char a8,
        unsigned int a9,
        _DWORD *a10,
        _DWORD *a11)
{
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rcx
  int v17; // r12d
  char v18; // r14
  unsigned int v19; // ebx
  __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rbx
  __int64 v26; // rax
  int v27; // r14d
  char v28; // bl
  __int64 v29; // rcx
  int v30; // r10d
  __int64 v31; // rcx
  __int64 LockArray_high; // rdx
  unsigned int v33; // eax
  bool v34; // cc
  _OWORD *v35; // rax
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  int v40; // eax
  KIRQL v41; // bl
  __int64 v42; // [rsp+30h] [rbp-68h]
  struct _KEVENT Event; // [rsp+38h] [rbp-60h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+8h] BYREF
  void *v45; // [rsp+A8h] [rbp+10h]
  __int64 v46; // [rsp+B0h] [rbp+18h]
  ULONG v47; // [rsp+B8h] [rbp+20h]

  v47 = a4;
  v46 = a3;
  v45 = a2;
  v12 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v13 = 0LL;
  v14 = *(_QWORD *)(a1 + 568);
  v15 = 0LL;
  v16 = a1 + 344;
  if ( (*(_DWORD *)(v14 + 184) & 0x4000) == 0 || !v16 || *(_BYTE *)(v16 + 98) != 1 )
    return 3221225659LL;
  v17 = a7 & 2;
  Timeout.LowPart = a7;
  v18 = a7 & 1;
  a6 = a7 & 1;
  if ( ((a7 & 1) != 0 || (a7 & 2) != 0) && (!a2 || !a4) )
    return 3221225485LL;
  v19 = (*(_DWORD *)(a1 + 484) + 7) & 0xFFFFFFF8;
  v20 = sub_1C0007BA4(*(_QWORD *)(a1 + 8), 0xAu, 1, 0);
  v22 = sub_1C0008424(v19 + 1104, v21, a1);
  v42 = v22;
  v25 = v22;
  if ( v20 && v22 )
  {
    v13 = v22 + 48;
    sub_1C0004C64(v22 + 48, v23, 0, 0LL);
    if ( v18 || v17 )
    {
      v26 = v46;
      if ( v46 )
      {
        *(_BYTE *)(v13 + 16) &= ~1u;
        *(_QWORD *)(v13 + 104) = v26;
      }
      else
      {
        v27 = sub_1C0008510(v13, v45, v47);
        if ( v27 < 0 )
          goto LABEL_33;
      }
    }
    v28 = a8;
    if ( !a8 )
    {
      if ( *(_BYTE *)(v20 + 2) == 40 )
        *(_WORD *)(v20 + 38) = 32;
      else
        *(_BYTE *)(v20 + 9) = 32;
    }
    sub_1C0008870(a1, v20, v42 + 1104);
    if ( v28 )
      *(_BYTE *)(v13 + 17) |= 8u;
    if ( *(_BYTE *)(a1 + 442) == 1 )
    {
      v12 = v20;
      v15 = v20 + *(unsigned int *)(v20 + 120);
      *(_DWORD *)(v20 + 20) = 10;
      *(_DWORD *)(v20 + 24) = v30;
      *(_BYTE *)(v20 + 3) = 0;
      if ( sub_1C0023100(v29) )
      {
        LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
        _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(a1 + 6080) + 8 * LockArray_high));
        v31 = **(_QWORD **)(*(_QWORD *)(a1 + 6080) + 8 * LockArray_high);
        *(_DWORD *)(v20 + 44) = HIDWORD(v31);
      }
      else
      {
        LODWORD(v31) = -1;
      }
      *(_DWORD *)(v20 + 32) = v31;
      *(_QWORD *)(v20 + 64) = v45;
      *(_DWORD *)(v20 + 60) = v47;
      v33 = *(_DWORD *)(a1 + 4060);
      v34 = a9 <= v33;
      *(_QWORD *)(v20 + 96) = v13;
      if ( !v34 )
        v33 = a9;
      *(_DWORD *)(v20 + 40) = v33;
      *(_QWORD *)(v13 + 168) = v20;
      *(_QWORD *)(v13 + 184) = *(_QWORD *)(v20 + 64);
      *(_QWORD *)(v13 + 176) = *(_QWORD *)(v20 + 96);
      *(_BYTE *)(v15 + 73) = Timeout.LowPart;
      v35 = a5;
      *(_DWORD *)v15 = 67;
      *(_DWORD *)(v15 + 4) = 80;
      *(_BYTE *)(v15 + 72) = 1;
      v36 = v35[1];
      *(_OWORD *)(v15 + 8) = *v35;
      v37 = v35[2];
      *(_OWORD *)(v15 + 24) = v36;
      v38 = v35[3];
      *(_OWORD *)(v15 + 40) = v37;
      *(_OWORD *)(v15 + 56) = v38;
    }
    KeInitializeEvent((PRKEVENT)(v13 + 664), NotificationEvent, 0);
    sub_1C0010124(v13, (__int64)sub_1C00100B0);
    if ( v28
      && (sub_1C0019CFC(a1),
          KeInitializeEvent(&Event, NotificationEvent, 0),
          sub_1C0066EE4(*(_QWORD *)(a1 + 896), &Event),
          Timeout.QuadPart = -1200000000LL,
          KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout)) )
    {
      v27 = -1073741823;
    }
    else
    {
      if ( *(_QWORD *)(a1 + 4896) )
        sub_1C0008BF0(a1, 0LL, 1LL);
      if ( *(_BYTE *)(a1 + 4306) )
        v40 = sub_1C0008DB8(a1, v13);
      else
        v40 = sub_1C0008E14(a1, (_QWORD *)v13, v24);
      v27 = v40;
      if ( v40 >= 0 )
      {
        KeWaitForSingleObject((PVOID)(v13 + 664), Executive, 0, 0, 0LL);
        v27 = sub_1C0008570(*(_BYTE *)(v20 + 3));
      }
      if ( v28 )
      {
        v41 = KfRaiseIrql(2u);
        sub_1C003DB10(a1);
        KeLowerIrql(v41);
      }
      if ( (*(_BYTE *)(v13 + 17) & 1) != 0 )
      {
        sub_1C0037008(a1, *(unsigned int *)(v13 + 748));
        *(_BYTE *)(v13 + 17) &= ~1u;
      }
      if ( *(_QWORD *)(a1 + 4896) )
        sub_1C0008BB4(a1, 0LL, 0LL);
      if ( v27 >= 0 && a10 )
      {
        v25 = v42;
        if ( v15 )
          *a10 = *(_DWORD *)(v15 + 84);
        goto LABEL_33;
      }
    }
    v25 = v42;
  }
  else
  {
    v27 = -1073741801;
  }
LABEL_33:
  if ( a11 && v15 )
    *a11 = *(unsigned __int16 *)(v15 + 74);
  if ( v25 )
  {
    sub_1C0008C44(v13, 0, v24);
    sub_1C00084E4(a1, v25);
  }
  if ( v20 )
  {
    if ( (*(_BYTE *)(a1 + 442) & 1) != 0 )
    {
      if ( !v12 )
        v12 = v20;
      *(_QWORD *)(v12 + 80) = 0LL;
      *(_QWORD *)(v12 + 104) = 0LL;
    }
    sub_1C001AA84((void *)v20);
  }
  return (unsigned int)v27;
}
