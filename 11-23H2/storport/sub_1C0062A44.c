/*
 * XREFs of sub_1C0062A44 @ 0x1C0062A44
 * Callers:
 *     sub_1C0061CC4 @ 0x1C0061CC4 (sub_1C0061CC4.c)
 * Callees:
 *     sub_1C0007BA4 @ 0x1C0007BA4 (sub_1C0007BA4.c)
 *     sub_1C0018124 @ 0x1C0018124 (sub_1C0018124.c)
 *     sub_1C001D420 @ 0x1C001D420 (sub_1C001D420.c)
 *     sub_1C001FCD0 @ 0x1C001FCD0 (sub_1C001FCD0.c)
 *     sub_1C001FE14 @ 0x1C001FE14 (sub_1C001FE14.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C00230AC @ 0x1C00230AC (sub_1C00230AC.c)
 *     sub_1C0023100 @ 0x1C0023100 (sub_1C0023100.c)
 *     sub_1C005CAC4 @ 0x1C005CAC4 (sub_1C005CAC4.c)
 *     sub_1C006BCD8 @ 0x1C006BCD8 (sub_1C006BCD8.c)
 */

__int64 __fastcall sub_1C0062A44(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r15
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  ULONG_PTR v8; // rsi
  int Status; // r15d
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 LockArray_high; // rdx
  unsigned int v13; // eax
  unsigned int v14; // eax
  IRP *v15; // rax
  IRP *v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  char v22; // di
  __int64 v23; // rcx
  char v25; // [rsp+38h] [rbp-89h] BYREF
  char v26; // [rsp+39h] [rbp-88h] BYREF
  char v27; // [rsp+3Ah] [rbp-87h] BYREF
  int v28; // [rsp+3Ch] [rbp-85h]
  int v29; // [rsp+40h] [rbp-81h] BYREF
  __int64 v30; // [rsp+48h] [rbp-79h] BYREF
  struct _IO_STATUS_BLOCK v31; // [rsp+50h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+68h] [rbp-59h] BYREF
  __int64 v33; // [rsp+88h] [rbp-39h]
  __int64 v34; // [rsp+90h] [rbp-31h]
  int *v35; // [rsp+98h] [rbp-29h]
  __int64 v36; // [rsp+A0h] [rbp-21h]
  char *v37; // [rsp+A8h] [rbp-19h]
  __int64 v38; // [rsp+B0h] [rbp-11h]
  char *v39; // [rsp+B8h] [rbp-9h]
  __int64 v40; // [rsp+C0h] [rbp-1h]
  char *v41; // [rsp+C8h] [rbp+7h]
  __int64 v42; // [rsp+D0h] [rbp+Fh]
  __int64 *v43; // [rsp+D8h] [rbp+17h]
  __int64 v44; // [rsp+E0h] [rbp+1Fh]

  v31 = 0LL;
  v2 = MEMORY[0xFFFFF78000000014];
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 96);
  v5 = *(_QWORD *)(a1 + 8);
  v28 = v4;
  v6 = sub_1C0007BA4(v5, 0x13u, *(_BYTE *)(v3 + 442), 0);
  v8 = v6;
  if ( v6 )
  {
    if ( *(_BYTE *)(v3 + 442) == 1 )
    {
      v10 = *(unsigned int *)(v6 + 52);
      *(_DWORD *)(v6 + 20) = 19;
      *(_BYTE *)(v10 + v6 + 8) = *(_BYTE *)(a1 + 96);
      *(_BYTE *)(v10 + v6 + 9) = *(_BYTE *)(a1 + 97);
      *(_BYTE *)(v10 + v6 + 10) = 0;
      *(_DWORD *)(v6 + 24) = 524560;
      if ( (unsigned int)sub_1C00230AC() && sub_1C0023100(*(_QWORD *)(a1 + 24)) )
      {
        LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
        _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(v7 + 6080) + 8 * LockArray_high));
        v11 = **(_QWORD **)(*(_QWORD *)(v7 + 6080) + 8 * LockArray_high);
        *(_DWORD *)(v8 + 44) = HIDWORD(v11);
      }
      else
      {
        LODWORD(v11) = -1;
      }
      *(_DWORD *)(v8 + 32) = v11;
      *(_QWORD *)(v8 + 64) = 0LL;
      *(_DWORD *)(v8 + 60) = 0;
      *(_QWORD *)(v8 + 80) = 0LL;
      if ( *(_BYTE *)(a1 + 3280) )
      {
        v13 = *(_DWORD *)(a1 + 3300);
      }
      else
      {
        v13 = *(_DWORD *)(a1 + 1320);
        if ( v13 < 0x1E )
          v13 = 30;
      }
      *(_DWORD *)(v8 + 40) = v13;
    }
    else
    {
      *(_BYTE *)(v6 + 2) = 19;
      *(_WORD *)v6 = 88;
      *(_BYTE *)(v6 + 5) = *(_BYTE *)(a1 + 96);
      *(_BYTE *)(v6 + 6) = *(_BYTE *)(a1 + 97);
      *(_WORD *)(v6 + 7) = -256;
      *(_QWORD *)(v6 + 12) = 524560LL;
      *(_QWORD *)(v6 + 24) = 0LL;
      *(_QWORD *)(v6 + 48) = 0LL;
      if ( *(_BYTE *)(a1 + 3280) )
      {
        v14 = *(_DWORD *)(a1 + 3300);
      }
      else
      {
        v14 = *(_DWORD *)(a1 + 1320);
        if ( v14 < 0x1E )
          v14 = 30;
      }
      *(_DWORD *)(v8 + 20) = v14;
    }
    v15 = sub_1C001FCD0(*(_QWORD *)(a1 + 8), v8, v7, &v31);
    v16 = v15;
    if ( v15 )
    {
      Status = sub_1C0018124(*(PDEVICE_OBJECT *)(a1 + 8), v15);
      if ( Status >= 0 )
        Status = v16->IoStatus.Status;
      sub_1C001FE14(v16);
      LOBYTE(v17) = *(_BYTE *)(v8 + 3);
      sub_1C006BCD8(*(_QWORD *)(a1 + 24), v17, MEMORY[0xFFFFF78000000014] - v2);
      v22 = BYTE1(v28);
      if ( (unsigned int)dword_1C00930C8 > 5 )
      {
        v23 = *(_QWORD *)(a1 + 24);
        v34 = 16LL;
        v33 = v23 + 5000;
        v29 = *(_DWORD *)(v23 + 56);
        v35 = &v29;
        v37 = &v25;
        v39 = &v26;
        v36 = 4LL;
        v25 = v4;
        v38 = 1LL;
        v26 = BYTE1(v28);
        v40 = 1LL;
        v27 = *(_BYTE *)(v8 + 3);
        v41 = &v27;
        v43 = &v30;
        v42 = 1LL;
        v30 = v20;
        v44 = 8LL;
        sub_1C001D420(8LL, (unsigned __int8 *)dword_1C00851FC, v20, v21, 8u, &v32);
      }
      if ( (byte_1C0093A00 & 1) != 0 )
        sub_1C005CAC4(v19, v18, v20, *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL), v4, v22);
    }
    else
    {
      Status = -1073741801;
    }
    ExFreePoolWithTag((PVOID)v8, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)Status;
}
