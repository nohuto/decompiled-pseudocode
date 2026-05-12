/*
 * XREFs of sub_1C0061F7C @ 0x1C0061F7C
 * Callers:
 *     sub_1C00622C0 @ 0x1C00622C0 (sub_1C00622C0.c)
 *     sub_1C0072B64 @ 0x1C0072B64 (sub_1C0072B64.c)
 * Callees:
 *     sub_1C0007BA4 @ 0x1C0007BA4 (sub_1C0007BA4.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0018124 @ 0x1C0018124 (sub_1C0018124.c)
 *     sub_1C001FCD0 @ 0x1C001FCD0 (sub_1C001FCD0.c)
 *     sub_1C001FE14 @ 0x1C001FE14 (sub_1C001FE14.c)
 *     sub_1C001FE60 @ 0x1C001FE60 (sub_1C001FE60.c)
 *     sub_1C00230AC @ 0x1C00230AC (sub_1C00230AC.c)
 *     sub_1C0023100 @ 0x1C0023100 (sub_1C0023100.c)
 */

__int64 __fastcall sub_1C0061F7C(__int64 a1, __int64 a2, char a3, char a4, char *a5, _BYTE *a6)
{
  __int64 v6; // r14
  __int64 v9; // rcx
  unsigned int *v10; // rsi
  char *v11; // r15
  unsigned int *v12; // rdi
  int Status; // ebx
  __int64 v14; // r8
  void *v15; // r13
  char v16; // al
  __int64 v17; // rcx
  __int64 LockArray_high; // rdx
  char *v19; // r14
  _BYTE *v20; // r12
  __int64 v21; // rcx
  char *v22; // rcx
  IRP *v23; // rax
  IRP *v24; // rbp
  _DWORD *v25; // rcx
  unsigned int v26; // ecx
  __int64 v28; // [rsp+20h] [rbp-58h]
  struct _IO_STATUS_BLOCK v29; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int16 v30; // [rsp+80h] [rbp+8h]

  v28 = *(_QWORD *)(a1 + 24);
  v6 = v28;
  v9 = *(_QWORD *)(a1 + 8);
  v29 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = (unsigned int *)sub_1C0007BA4(v9, 0, *(_BYTE *)(v28 + 442), 1);
  if ( !v12 )
    return (unsigned int)-1073741801;
  v15 = (void *)sub_1C0007CF4(64LL, 255LL, 1314087250LL, *(_QWORD *)(a1 + 8));
  if ( v15 )
  {
    v16 = *(_BYTE *)(v28 + 442);
    *((_BYTE *)v12 + 3) = 0;
    if ( v16 == 1 )
    {
      v10 = v12;
      v12[5] = 0;
      v12[6] = 524626;
      if ( (unsigned int)sub_1C00230AC() && sub_1C0023100(*(_QWORD *)(a1 + 24)) )
      {
        LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
        _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(v14 + 6080) + 8 * LockArray_high));
        v17 = **(_QWORD **)(*(_QWORD *)(v14 + 6080) + 8 * LockArray_high);
        v12[11] = HIDWORD(v17);
      }
      else
      {
        LODWORD(v17) = -1;
      }
      v19 = a5;
      v20 = a6;
      v12[8] = v17;
      v21 = v12[13];
      *((_QWORD *)v12 + 8) = a6;
      v12[15] = *(_DWORD *)a5;
      *((_QWORD *)v12 + 10) = a2;
      v12[10] = *(_DWORD *)(a1 + 1320);
      *((_BYTE *)v12 + v21 + 8) = *(_BYTE *)(a1 + 96);
      *((_BYTE *)v12 + v21 + 9) = *(_BYTE *)(a1 + 97);
      *((_BYTE *)v12 + v21 + 10) = *(_BYTE *)(a1 + 98);
      v11 = (char *)v12 + v12[30];
      *(_DWORD *)v11 = 64;
      v22 = v11 + 24;
      *((_DWORD *)v11 + 1) = 32;
      *((_WORD *)v11 + 4) = -256;
      *((_QWORD *)v11 + 2) = v15;
      v11[10] = 10;
    }
    else
    {
      v19 = a5;
      v22 = (char *)(v12 + 18);
      *((_BYTE *)v12 + 2) = 0;
      v20 = a6;
      *(_WORD *)v12 = 88;
      v12[3] = 524626;
      *((_BYTE *)v12 + 5) = *(_BYTE *)(a1 + 96);
      *((_BYTE *)v12 + 6) = *(_BYTE *)(a1 + 97);
      *((_BYTE *)v12 + 7) = *(_BYTE *)(a1 + 98);
      *((_BYTE *)v12 + 8) = -1;
      *((_QWORD *)v12 + 3) = a6;
      v12[4] = *(_DWORD *)a5;
      *((_QWORD *)v12 + 6) = a2;
      v12[5] = *(_DWORD *)(a1 + 1320);
      *((_WORD *)v12 + 5) = -246;
      *((_QWORD *)v12 + 4) = v15;
    }
    if ( *((_BYTE *)v12 + 2) == 40 )
      *((_WORD *)v12 + 19) = 32;
    else
      *((_BYTE *)v12 + 9) = 32;
    *(_WORD *)(v22 + 5) = 0;
    v22[3] = a4;
    *v22 = 77;
    v22[2] = a3 & 0x3F;
    v22[8] = *v19;
    v22[7] = v19[1];
    v23 = sub_1C001FCD0(*(_QWORD *)(a1 + 8), (ULONG_PTR)v12, v14, &v29);
    v24 = v23;
    if ( !v23 )
    {
      Status = -1073741801;
LABEL_30:
      ExFreePoolWithTag(v15, 0x4E536152u);
      v6 = v28;
      goto LABEL_31;
    }
    Status = sub_1C0018124(*(PDEVICE_OBJECT *)(a1 + 8), v23);
    if ( Status >= 0 )
    {
      Status = v24->IoStatus.Status;
      if ( Status >= 0 )
        Status = sub_1C001FE60(*((_BYTE *)v12 + 3));
    }
    v25 = v12 + 4;
    if ( Status == -2147483643 )
    {
      if ( *v25 <= *(_DWORD *)v19 )
      {
        Status = 0;
        *((_BYTE *)v12 + 3) = 1;
      }
    }
    else if ( Status < 0 )
    {
LABEL_29:
      sub_1C001FE14(v24);
      goto LABEL_30;
    }
    if ( *v25 >= 4u && (HIBYTE(v30) = v20[2], LOBYTE(v30) = v20[3], v26 = v30 + 4, (*v20 & 0x3F) == a3) )
    {
      if ( v26 < *(_DWORD *)v19 )
        *(_DWORD *)v19 = v26;
    }
    else
    {
      Status = -1073741668;
    }
    goto LABEL_29;
  }
  Status = -1073741801;
LABEL_31:
  if ( *(_BYTE *)(v6 + 442) == 1 )
  {
    if ( !v10 )
      v10 = v12;
    *((_QWORD *)v10 + 10) = 0LL;
    *((_QWORD *)v10 + 13) = 0LL;
    if ( v11 )
      *((_QWORD *)v11 + 2) = 0LL;
  }
  else
  {
    *((_QWORD *)v12 + 6) = 0LL;
    *((_QWORD *)v12 + 7) = 0LL;
    *((_QWORD *)v12 + 4) = 0LL;
  }
  ExFreePoolWithTag(v12, 0x72536152u);
  return (unsigned int)Status;
}
