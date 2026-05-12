/*
 * XREFs of sub_1C00557CC @ 0x1C00557CC
 * Callers:
 *     sub_1C007AF40 @ 0x1C007AF40 (sub_1C007AF40.c)
 *     sub_1C007D14C @ 0x1C007D14C (sub_1C007D14C.c)
 *     sub_1C007DA18 @ 0x1C007DA18 (sub_1C007DA18.c)
 *     sub_1C007DF34 @ 0x1C007DF34 (sub_1C007DF34.c)
 * Callees:
 *     sub_1C0004C64 @ 0x1C0004C64 (sub_1C0004C64.c)
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
 *     sub_1C0018124 @ 0x1C0018124 (sub_1C0018124.c)
 *     sub_1C001FCD0 @ 0x1C001FCD0 (sub_1C001FCD0.c)
 *     sub_1C001FE14 @ 0x1C001FE14 (sub_1C001FE14.c)
 *     sub_1C001FE60 @ 0x1C001FE60 (sub_1C001FE60.c)
 *     sub_1C0037008 @ 0x1C0037008 (sub_1C0037008.c)
 */

__int64 __fastcall sub_1C00557CC(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // r13
  IRP *v6; // r14
  ULONG_PTR v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rbp
  void *v10; // r12
  IRP *v11; // rax
  int Status; // ebx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // eax
  ULONG v18; // eax
  struct _IO_STATUS_BLOCK v20; // [rsp+30h] [rbp-38h] BYREF
  ULONG v21; // [rsp+80h] [rbp+18h]

  v4 = a1;
  v20 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( *(_DWORD *)a1 == 1431193940 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    v8 = a1;
  }
  else if ( *(_DWORD *)a1 != 1094997074 )
  {
    return (unsigned int)-1073741637;
  }
  if ( !byte_1C0093AE8 )
    return (unsigned int)-1073741637;
  *(_BYTE *)(a2 + 3) = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v7 = a2;
    v10 = *(void **)(a2 + 64);
    v21 = *(_DWORD *)(a2 + 60);
    *(_BYTE *)(*(unsigned int *)(a2 + 120) + a2 + 8) = 0;
  }
  else
  {
    v10 = *(void **)(a2 + 24);
    v21 = *(_DWORD *)(a2 + 16);
  }
  if ( v8 )
  {
    v11 = sub_1C001FCD0(*(_QWORD *)(v8 + 8), a2, a3, &v20);
    v6 = v11;
    if ( !v11 )
      return (unsigned int)-1073741801;
    Status = sub_1C0018124(*(PDEVICE_OBJECT *)(v8 + 8), v11);
    if ( Status >= 0 )
    {
      Status = v6->IoStatus.Status;
      if ( Status >= 0 )
        Status = sub_1C001FE60(*(_BYTE *)(a2 + 3));
    }
  }
  else
  {
    v14 = sub_1C0008424(((*(_DWORD *)(v4 + 484) + 7) & 0xFFFFFFF8) + 1104, 0LL, v4);
    v5 = v14;
    if ( !v14 )
      return (unsigned int)-1073741801;
    v9 = v14 + 48;
    sub_1C0004C64(v14 + 48, v15, 0, 0LL);
    *(_QWORD *)(v9 + 176) = 0LL;
    *(_QWORD *)(v9 + 168) = a2;
    *(_QWORD *)(v9 + 184) = v10;
    Status = sub_1C0008510(v9, v10, v21);
    if ( Status < 0 )
    {
LABEL_39:
      sub_1C0008C44(v9, 0, v13);
      sub_1C00084E4(v4, v5);
      return (unsigned int)Status;
    }
    if ( v7 )
      *(_QWORD *)(v7 + 96) = v9;
    else
      *(_QWORD *)(a2 + 48) = v9;
    sub_1C0008870(v4, a2, v5 + 1104);
    KeInitializeEvent((PRKEVENT)(v9 + 664), NotificationEvent, 0);
    *(_QWORD *)(v9 + 656) = sub_1C00100B0;
    if ( *(_QWORD *)(v4 + 4896) )
      sub_1C0008BF0(v4, 0LL, 1LL);
    if ( *(_BYTE *)(v4 + 4306) )
      v17 = sub_1C0008DB8(v4, v9);
    else
      v17 = sub_1C0008E14(v4, (_QWORD *)v9, v16);
    Status = v17;
    if ( v17 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(v9 + 664), Executive, 0, 0, 0LL);
      Status = sub_1C0008570(*(_BYTE *)(a2 + 3));
    }
    if ( *(_QWORD *)(v4 + 4896) )
    {
      if ( (*(_BYTE *)(v9 + 17) & 1) != 0 )
      {
        sub_1C0037008(v4, *(unsigned int *)(v9 + 748));
        *(_BYTE *)(v9 + 17) &= ~1u;
      }
      sub_1C0008BB4(v4, 0LL, 0LL);
    }
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v18 = *(_DWORD *)(v7 + 60);
    *(_QWORD *)(v7 + 64) = v10;
  }
  else
  {
    v18 = *(_DWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 24) = v10;
  }
  if ( Status == -2147483643 && v18 <= v21 )
    Status = 0;
  if ( v6 )
    sub_1C001FE14(v6);
  if ( v5 )
    goto LABEL_39;
  return (unsigned int)Status;
}
