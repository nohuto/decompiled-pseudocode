/*
 * XREFs of sub_14067A4C4 @ 0x14067A4C4
 * Callers:
 *     sub_1407444A8 @ 0x1407444A8 (sub_1407444A8.c)
 * Callees:
 *     sub_1406796E8 @ 0x1406796E8 (sub_1406796E8.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     SeCaptureSecurityDescriptor @ 0x1407B3DD0 (SeCaptureSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14067A4C4(HANDLE KeyHandle, __int64 a2)
{
  PVOID v4; // r14
  int v5; // eax
  int v6; // r9d
  PVOID v7; // rbx
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  void *v13; // rcx
  char *v14; // rcx
  __int64 v15; // rax
  int v16; // edx
  char *v17; // rcx
  __int64 v18; // rax
  int v19; // edx
  char *v20; // rcx
  __int64 v21; // rax
  int v22; // edx
  PVOID SecurityDescriptor[2]; // [rsp+30h] [rbp-10h] BYREF
  BOOLEAN v24; // [rsp+88h] [rbp+48h] BYREF
  int v25; // [rsp+90h] [rbp+50h] BYREF
  PVOID P; // [rsp+98h] [rbp+58h]

  v24 = 0;
  *(_OWORD *)a2 = 0LL;
  v25 = 0;
  *(_QWORD *)(a2 + 16) = 0LL;
  SecurityDescriptor[0] = 0LL;
  P = 0LL;
  v4 = 0LL;
  v5 = sub_14067B838(KeyHandle);
  v7 = P;
  v8 = v5;
  if ( v5 < 0 )
  {
    if ( v5 == -1073741772 )
    {
      v8 = 0;
      goto LABEL_8;
    }
LABEL_28:
    v13 = *(void **)(a2 + 8);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    *(_OWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    goto LABEL_24;
  }
  if ( *((_DWORD *)P + 1) != 3 )
  {
    v8 = -1073741492;
    goto LABEL_28;
  }
  LOBYTE(v6) = 1;
  v8 = SeCaptureSecurityDescriptor((int)P + *((_DWORD *)P + 2), 0, 1, v6, (__int64)SecurityDescriptor);
  if ( v8 < 0 )
  {
    v4 = SecurityDescriptor[0];
    goto LABEL_21;
  }
  ExFreePoolWithTag(v7, 0);
  v4 = SecurityDescriptor[0];
  v7 = 0LL;
  P = 0LL;
  if ( SecurityDescriptor[0] )
  {
    v8 = sub_1406796E8(SecurityDescriptor[0], &v24, &v25);
    if ( v8 < 0 )
      goto LABEL_21;
    if ( !v24 )
    {
      *(_DWORD *)a2 |= 2u;
      *(_QWORD *)(a2 + 8) = v4;
      v4 = 0LL;
    }
  }
LABEL_8:
  if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    v9 = sub_14067B838(KeyHandle);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v14 = (char *)P;
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      {
        v15 = *((unsigned int *)P + 2);
        *(_DWORD *)a2 |= 1u;
        v16 = *(_DWORD *)&v14[v15];
      }
      else
      {
        v16 = 0;
      }
      *(_DWORD *)(a2 + 4) = v16;
      ExFreePoolWithTag(v14, 0);
      v7 = 0LL;
      P = 0LL;
    }
    else
    {
      if ( v9 != -1073741772 )
        goto LABEL_20;
      v7 = P;
    }
  }
  if ( (*(_DWORD *)a2 & 4) == 0 )
  {
    v10 = sub_14067B838(KeyHandle);
    v8 = v10;
    if ( v10 >= 0 )
    {
      v17 = (char *)P;
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      {
        v18 = *((unsigned int *)P + 2);
        *(_DWORD *)a2 |= 4u;
        v19 = *(_DWORD *)&v17[v18];
      }
      else
      {
        v19 = 0;
      }
      *(_DWORD *)(a2 + 16) = v19;
      ExFreePoolWithTag(v17, 0);
      v7 = 0LL;
      P = 0LL;
      goto LABEL_16;
    }
    if ( v10 == -1073741772 )
    {
      v7 = P;
      goto LABEL_16;
    }
LABEL_20:
    v7 = P;
    goto LABEL_21;
  }
LABEL_16:
  if ( (*(_DWORD *)a2 & 8) != 0 )
    goto LABEL_21;
  v11 = sub_14067B838(KeyHandle);
  v8 = v11;
  if ( v11 < 0 )
  {
    if ( v11 == -1073741772 )
      v8 = 0;
    goto LABEL_20;
  }
  v20 = (char *)P;
  if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
  {
    v21 = *((unsigned int *)P + 2);
    *(_DWORD *)a2 |= 8u;
    v22 = *(_DWORD *)&v20[v21];
  }
  else
  {
    v22 = 0;
  }
  *(_DWORD *)(a2 + 20) = v22;
  ExFreePoolWithTag(v20, 0);
  v7 = 0LL;
LABEL_21:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v8 < 0 )
    goto LABEL_28;
LABEL_24:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v8;
}
