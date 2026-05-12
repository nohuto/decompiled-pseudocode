/*
 * XREFs of DoScreenSave_0 @ 0x1C0062D50
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
 *     sub_1C005CB48 @ 0x1C005CB48 (sub_1C005CB48.c)
 *     sub_1C006BC84 @ 0x1C006BC84 (sub_1C006BC84.c)
 */

__int64 __fastcall DoScreenSave_0(__int64 a1)
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
  char v23; // r12
  __int64 v24; // rcx
  char v26; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v27; // [rsp+49h] [rbp-BFh] BYREF
  char v28; // [rsp+4Bh] [rbp-BDh] BYREF
  int v29; // [rsp+4Ch] [rbp-BCh]
  __int64 v30; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v31[4]; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+78h] [rbp-90h] BYREF
  __int64 v33; // [rsp+98h] [rbp-70h]
  __int64 v34; // [rsp+A0h] [rbp-68h]
  __int64 v35; // [rsp+A8h] [rbp-60h]
  __int64 v36; // [rsp+B0h] [rbp-58h]
  __int64 *v37; // [rsp+B8h] [rbp-50h]
  __int64 v38; // [rsp+C0h] [rbp-48h]
  char *v39; // [rsp+C8h] [rbp-40h]
  __int64 v40; // [rsp+D0h] [rbp-38h]
  __int16 *v41; // [rsp+D8h] [rbp-30h]
  __int64 v42; // [rsp+E0h] [rbp-28h]
  char *v43; // [rsp+E8h] [rbp-20h]
  __int64 v44; // [rsp+F0h] [rbp-18h]
  char *v45; // [rsp+F8h] [rbp-10h]
  __int64 v46; // [rsp+100h] [rbp-8h]
  _QWORD *v47; // [rsp+108h] [rbp+0h]
  __int64 v48; // [rsp+110h] [rbp+8h]

  *(_OWORD *)&v31[1] = 0LL;
  v2 = MEMORY[0xFFFFF78000000014];
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 96);
  v5 = *(_QWORD *)(a1 + 8);
  v29 = v4;
  v6 = sub_1C0007BA4(v5, 0x20u, *(_BYTE *)(v3 + 442), 0);
  v8 = v6;
  if ( v6 )
  {
    if ( *(_BYTE *)(v3 + 442) == 1 )
    {
      v10 = *(unsigned int *)(v6 + 52);
      *(_DWORD *)(v6 + 20) = 32;
      *(_BYTE *)(v10 + v6 + 8) = *(_BYTE *)(a1 + 96);
      *(_BYTE *)(v10 + v6 + 9) = *(_BYTE *)(a1 + 97);
      *(_BYTE *)(v10 + v6 + 10) = *(_BYTE *)(a1 + 98);
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
      *(_BYTE *)(v6 + 2) = 32;
      *(_WORD *)v6 = 88;
      *(_BYTE *)(v6 + 5) = *(_BYTE *)(a1 + 96);
      *(_BYTE *)(v6 + 6) = *(_BYTE *)(a1 + 97);
      *(_BYTE *)(v6 + 7) = *(_BYTE *)(a1 + 98);
      *(_QWORD *)(v6 + 12) = 524560LL;
      *(_BYTE *)(v6 + 8) = -1;
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
    v15 = sub_1C001FCD0(*(_QWORD *)(a1 + 8), v8, v7, (struct _IO_STATUS_BLOCK *)&v31[1]);
    v16 = v15;
    if ( v15 )
    {
      Status = sub_1C0018124(*(PDEVICE_OBJECT *)(a1 + 8), v15);
      if ( Status >= 0 )
        Status = v16->IoStatus.Status;
      sub_1C001FE14(v16);
      LOBYTE(v17) = *(_BYTE *)(v8 + 3);
      sub_1C006BC84(*(_QWORD *)(a1 + 24), v17, MEMORY[0xFFFFF78000000014] - v2);
      v22 = BYTE2(v29);
      v23 = BYTE1(v29);
      if ( (unsigned int)dword_1C00930C8 > 5 )
      {
        v24 = *(_QWORD *)(a1 + 24);
        v34 = 16LL;
        v36 = 16LL;
        v33 = v24 + 5000;
        v35 = a1 + 2024;
        LODWORD(v30) = *(_DWORD *)(v24 + 56);
        v37 = &v30;
        v39 = &v26;
        v41 = &v27;
        v43 = (char *)&v27 + 1;
        v38 = 4LL;
        v26 = v4;
        v40 = 1LL;
        v27 = *(_WORD *)((char *)&v29 + 1);
        v42 = 1LL;
        v44 = 1LL;
        v28 = *(_BYTE *)(v8 + 3);
        v45 = &v28;
        v47 = v31;
        v46 = 1LL;
        v31[0] = v20;
        v48 = 8LL;
        sub_1C001D420(v24, (unsigned __int8 *)dword_1C008526E, v20, v21, 0xAu, &v32);
      }
      if ( (byte_1C0093A00 & 1) != 0 )
        sub_1C005CB48(v19, v18, v20, *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL), v4, v23, v22);
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
