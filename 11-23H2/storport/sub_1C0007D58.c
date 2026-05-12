/*
 * XREFs of sub_1C0007D58 @ 0x1C0007D58
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 *     sub_1C00085EC @ 0x1C00085EC (sub_1C00085EC.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0004C64 @ 0x1C0004C64 (sub_1C0004C64.c)
 *     sub_1C00071D4 @ 0x1C00071D4 (sub_1C00071D4.c)
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 *     sub_1C0007BA4 @ 0x1C0007BA4 (sub_1C0007BA4.c)
 *     sub_1C00081BC @ 0x1C00081BC (sub_1C00081BC.c)
 *     sub_1C0008424 @ 0x1C0008424 (sub_1C0008424.c)
 *     sub_1C00084E4 @ 0x1C00084E4 (sub_1C00084E4.c)
 *     sub_1C0008510 @ 0x1C0008510 (sub_1C0008510.c)
 *     sub_1C0008570 @ 0x1C0008570 (sub_1C0008570.c)
 *     sub_1C0008694 @ 0x1C0008694 (sub_1C0008694.c)
 *     sub_1C0008870 @ 0x1C0008870 (sub_1C0008870.c)
 *     sub_1C0008BB4 @ 0x1C0008BB4 (sub_1C0008BB4.c)
 *     sub_1C0008BF0 @ 0x1C0008BF0 (sub_1C0008BF0.c)
 *     sub_1C0008C44 @ 0x1C0008C44 (sub_1C0008C44.c)
 *     sub_1C0008DB8 @ 0x1C0008DB8 (sub_1C0008DB8.c)
 *     sub_1C0008E14 @ 0x1C0008E14 (sub_1C0008E14.c)
 *     sub_1C001AEA8 @ 0x1C001AEA8 (sub_1C001AEA8.c)
 *     sub_1C0037008 @ 0x1C0037008 (sub_1C0037008.c)
 */

__int64 __fastcall sub_1C0007D58(__int64 a1, IRP *a2, char a3, char a4, char a5, int a6)
{
  __int64 v8; // r12
  _QWORD *v9; // r13
  __int64 v10; // r15
  _QWORD *v11; // rsi
  __int64 v12; // r14
  int v13; // eax
  signed int v14; // edi
  ULONG_PTR v15; // rcx
  __int64 v16; // rcx
  char v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rdx
  char v20; // al
  char v21; // dl
  char v22; // cl
  __int64 v23; // rax
  __int64 v24; // rdi
  __int16 IoPriorityHint; // ax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // ecx
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rcx
  char v33; // al
  __int64 v34; // rax
  __int64 v35; // r8
  int v36; // eax
  unsigned int v37; // eax
  unsigned int v39; // [rsp+30h] [rbp-58h]
  unsigned int v40; // [rsp+34h] [rbp-54h] BYREF
  unsigned int v41; // [rsp+38h] [rbp-50h] BYREF
  __int64 v42; // [rsp+40h] [rbp-48h] BYREF
  __int64 v43; // [rsp+48h] [rbp-40h]

  v42 = 0LL;
  v40 = 0;
  v41 = 0;
  v43 = 0LL;
  HIBYTE(v39) = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = sub_1C0008694((_DWORD)a2, (unsigned int)&v42, (unsigned int)&v40, (unsigned int)&v41, 2);
  v14 = v13;
  if ( v13 < 0 )
  {
    a2->IoStatus.Status = v13;
LABEL_3:
    v15 = 0LL;
    goto LABEL_4;
  }
  v16 = *(_QWORD *)(a1 + 8);
  v17 = *(_BYTE *)(a1 + 442);
  v43 = a1 + 344;
  v11 = (_QWORD *)sub_1C0007BA4(v16, 2u, v17, 0);
  if ( !v11 )
  {
LABEL_8:
    v14 = -1073741801;
    goto LABEL_3;
  }
  v8 = sub_1C0008424(((*(_DWORD *)(a1 + 484) + 7) & 0xFFFFFFF8) + 1104, v18, a1);
  if ( !v8 )
  {
    if ( !*(_QWORD *)(a1 + 120) || _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 1u) )
      goto LABEL_8;
    v8 = *(_QWORD *)(a1 + 120);
  }
  v12 = v8 + 48;
  sub_1C0004C64(v8 + 48, v19, 0, 0LL);
  v14 = sub_1C0008510(v8 + 48, v42, v40);
  if ( v14 < 0 )
    goto LABEL_3;
  v20 = a5;
  v21 = a3;
  v22 = a4;
  BYTE2(v39) = a5;
  LOBYTE(v39) = a3;
  BYTE1(v39) = a4;
  if ( a6 == 1 )
  {
    v23 = sub_1C00081BC(a1, v39);
    v22 = a4;
    v10 = v23;
    v21 = a3;
    *(_QWORD *)(v8 + 272) = v23;
    v20 = a5;
  }
  if ( *(_BYTE *)(v43 + 98) == 1 )
  {
    v9 = v11;
    v24 = *((unsigned int *)v11 + 13);
    v11[12] = v12;
    v11[10] = a2;
    *((_DWORD *)v11 + 5) = 2;
    *((_DWORD *)v11 + 6) = 192;
    IoPriorityHint = IoGetIoPriorityHint(a2);
    v26 = v42;
    *((_WORD *)v11 + 18) = IoPriorityHint;
    *((_DWORD *)v11 + 10) = *(_DWORD *)(v26 + 12);
    *((_DWORD *)v11 + 15) = v40;
    v11[8] = v26;
    *((_BYTE *)v11 + v24 + 8) = a3;
    *((_BYTE *)v11 + v24 + 9) = a4;
    *((_BYTE *)v11 + v24 + 10) = a5;
    *(_QWORD *)(v8 + 216) = v11;
    *(_QWORD *)(v8 + 224) = v11[10];
    v27 = v11[8];
  }
  else
  {
    *((_BYTE *)v11 + 7) = v20;
    v28 = v42;
    v11[3] = v42;
    *((_BYTE *)v11 + 6) = v22;
    v29 = v40;
    v11[6] = v12;
    *(_WORD *)v11 = 88;
    *((_BYTE *)v11 + 2) = 2;
    *((_BYTE *)v11 + 5) = v21;
    *((_DWORD *)v11 + 3) = 192;
    *((_DWORD *)v11 + 4) = v29;
    *((_DWORD *)v11 + 5) = *(_DWORD *)(v28 + 12);
    *(_QWORD *)(v8 + 224) = a2;
    *(_QWORD *)(v8 + 216) = v11;
    v27 = v11[3];
  }
  *(_QWORD *)(v8 + 232) = v27;
  sub_1C0008870(a1, v11, v8 + 1104);
  KeInitializeEvent((PRKEVENT)(v8 + 712), NotificationEvent, 0);
  *(_QWORD *)(v8 + 704) = sub_1C00100B0;
  if ( *(_QWORD *)(a1 + 4896) )
    sub_1C0008BF0(a1, 0LL, 1LL);
  v30 = v8 + 48;
  if ( *(_BYTE *)(a1 + 4306) )
    v31 = sub_1C0008DB8(a1, v30);
  else
    v31 = sub_1C0008E14(a1, v30);
  v14 = v31;
  if ( v31 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(v8 + 712), Executive, 0, 0, 0LL);
    LOBYTE(v32) = *((_BYTE *)v11 + 3);
    v14 = sub_1C0008570(v32);
  }
  v33 = *(_BYTE *)(v8 + 65);
  if ( (v33 & 1) != 0 )
  {
    sub_1C0037008(a1, *(unsigned int *)(v8 + 796));
    *(_BYTE *)(v8 + 65) &= ~1u;
    v33 = *(_BYTE *)(v8 + 65);
  }
  if ( (v33 & 2) != 0 )
  {
    if ( a6 == 1
      || ((v34 = sub_1C00081BC(a1, v39), (v10 = v34) == 0)
        ? (v36 = -1073741823)
        : (LOBYTE(v35) = 1, v36 = sub_1C00071D4(v34, (__int64)a2, v35)),
          !v36) )
    {
      if ( v10 )
      {
        sub_1C001AEA8(v10, *(unsigned int *)(v8 + 796));
        *(_BYTE *)(v8 + 65) &= ~2u;
        if ( a6 != 1 )
          sub_1C000729C(v10);
      }
    }
  }
  if ( *(_QWORD *)(a1 + 4896) )
    sub_1C0008BB4(a1, 0LL, 0LL);
  if ( v14 < 0 )
    goto LABEL_3;
  if ( *((_BYTE *)v11 + 2) == 40 )
    v37 = *((_DWORD *)v9 + 15);
  else
    v37 = *((_DWORD *)v11 + 4);
  if ( v41 < v37 )
    v37 = v41;
  v15 = v37;
LABEL_4:
  a2->IoStatus.Information = v15;
  if ( v8 )
  {
    sub_1C0008C44(v12, 0LL);
    if ( v8 == *(_QWORD *)(a1 + 120) )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 128), 1u);
    else
      sub_1C00084E4(a1, v8);
  }
  if ( v11 )
  {
    if ( *(_BYTE *)(v43 + 98) == 1 )
    {
      if ( !v9 )
        v9 = v11;
      v9[10] = 0LL;
      v9[13] = 0LL;
    }
    else
    {
      v11[6] = 0LL;
      v11[7] = 0LL;
    }
    ExFreePoolWithTag(v11, 0x72536152u);
  }
  return sub_1C0003440(a2, 0, v14);
}
