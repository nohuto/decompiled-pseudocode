/*
 * XREFs of WmipQueryAllDataMultiple @ 0x1409E0E74
 * Callers:
 *     WmipIoControl @ 0x1407D6440 (WmipIoControl.c)
 *     IoWMIQueryAllDataMultiple @ 0x1409DEFB0 (IoWMIQueryAllDataMultiple.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     Feature_1179641144__private_IsEnabledDeviceUsage @ 0x140412194 (Feature_1179641144__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x140435E00 (memset.c)
 *     WmipQueryAllData @ 0x1406C7AAC (WmipQueryAllData.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall WmipQueryAllDataMultiple(
        int a1,
        PVOID *a2,
        IRP *a3,
        KPROCESSOR_MODE a4,
        _DWORD *a5,
        unsigned int a6,
        unsigned int *a7,
        int *a8)
{
  _DWORD *v9; // r14
  __int64 v10; // rsi
  int v11; // r12d
  __int64 v12; // rdi
  __int64 Pool2; // rax
  char *v14; // r15
  _QWORD *v15; // rcx
  char *v16; // rcx
  char v17; // r13
  char *v18; // rbp
  char *v19; // rbx
  char *v22; // r15
  unsigned int v23; // r14d
  unsigned int v24; // esi
  bool v25; // zf
  PVOID *v26; // rax
  PVOID v27; // rax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  unsigned int v31; // esi
  unsigned int v32; // r14d
  int v33; // eax
  __int64 v35; // [rsp+34h] [rbp-104h] BYREF
  char *v36; // [rsp+40h] [rbp-F8h]
  PVOID *v37; // [rsp+48h] [rbp-F0h]
  unsigned int v38; // [rsp+50h] [rbp-E8h]
  PVOID *v39; // [rsp+58h] [rbp-E0h]
  PVOID Object; // [rsp+60h] [rbp-D8h]
  __int64 v41; // [rsp+68h] [rbp-D0h]
  char *v42; // [rsp+70h] [rbp-C8h]
  IRP *v43; // [rsp+80h] [rbp-B8h]
  _DWORD *v44; // [rsp+88h] [rbp-B0h]
  int *v45; // [rsp+90h] [rbp-A8h]
  _BYTE v46[80]; // [rsp+A0h] [rbp-98h] BYREF

  v9 = a5;
  LODWORD(v10) = a1;
  v39 = a2;
  v43 = a3;
  v44 = a5;
  v45 = a8;
  memset(v46, 0, 0x48uLL);
  v35 = 0LL;
  v11 = 0;
  v38 = 0;
  Object = 0LL;
  if ( a2 )
  {
    v14 = 0LL;
    v42 = 0LL;
LABEL_9:
    LODWORD(v12) = 0;
    v17 = 0;
    v18 = 0LL;
    v16 = (char *)a5;
    v36 = (char *)a5;
    v19 = (char *)a5;
    if ( !(_DWORD)v10 )
      goto LABEL_26;
    goto LABEL_10;
  }
  v10 = *a7;
  v12 = v10;
  Pool2 = ExAllocatePool2(256LL, 8 * v10, 1885957463LL);
  v42 = (char *)Pool2;
  v14 = (char *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  if ( !(_DWORD)v10 )
    goto LABEL_9;
  v15 = (_QWORD *)Pool2;
  do
  {
    *v15 = *(_QWORD *)((char *)v15 + (_QWORD)a7 - Pool2 + 8);
    ++v15;
    --v12;
  }
  while ( v12 );
  v16 = (char *)a5;
  v17 = 0;
  v36 = (char *)a5;
  v18 = 0LL;
  v19 = (char *)a5;
LABEL_10:
  v22 = (char *)(v14 - (char *)v39);
  v23 = v38;
  v37 = v39;
  v41 = (unsigned int)v10;
  do
  {
    if ( v19 == v46 || a6 < 0x48 )
    {
      v19 = v46;
      v24 = 72;
      v18 = 0LL;
    }
    else
    {
      v19 = v16;
      v24 = a6;
    }
    memset(v19, 0, 0x48uLL);
    v25 = v39 == 0LL;
    v26 = v37;
    *((_DWORD *)v19 + 11) = 1;
    *(_DWORD *)v19 = 48;
    if ( v25 )
    {
      *((_QWORD *)v19 + 2) = *(PVOID *)((char *)v26 + (_QWORD)v22);
      v27 = Object;
    }
    else
    {
      v27 = *v26;
      Object = v27;
    }
    if ( (int)WmipQueryAllData(v27, v43, a4, (__int64)v19, v24, &v35) < 0 )
      goto LABEL_23;
    v28 = *((_DWORD *)v19 + 11);
    if ( (v28 & 0x100) != 0 )
      goto LABEL_23;
    ++HIDWORD(v35);
    if ( (v28 & 0x20) != 0 )
    {
      v29 = *((_DWORD *)v19 + 12);
      v19 = v46;
LABEL_22:
      v17 = 1;
      LODWORD(v12) = ((v29 + 7) & 0xFFFFFFF8) + v12;
LABEL_23:
      v16 = v36;
      goto LABEL_24;
    }
    if ( v19 == v46 )
    {
      v29 = v35;
      goto LABEL_22;
    }
    if ( v18 )
      *((_DWORD *)v18 + 3) = v23;
    v30 = *((unsigned int *)v19 + 3);
    v18 = v19;
    while ( (_DWORD)v30 )
    {
      v18 += v30;
      v30 = *((unsigned int *)v18 + 3);
    }
    v31 = (v35 + 7) & 0xFFFFFFF8;
    LODWORD(v12) = v31 + v12;
    if ( (unsigned int)Feature_1179641144__private_IsEnabledDeviceUsage() )
      a6 = v31 < a6 ? a6 - v31 : 0;
    else
      a6 -= v31;
    v16 = &v36[v31];
    v32 = v31 + (_DWORD)v36;
    v36 = v16;
    v23 = v32 - (_DWORD)v18;
LABEL_24:
    ++v37;
    --v41;
  }
  while ( v41 );
  v9 = v44;
  v14 = v42;
  v11 = HIDWORD(v35);
LABEL_26:
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( !v11 )
    return 3221226133LL;
  if ( v17 )
  {
    v33 = 56;
    v9[11] = 32;
    *v9 = 56;
    v9[12] = v12;
  }
  else
  {
    v33 = v12;
  }
  *v45 = v33;
  return 0LL;
}
