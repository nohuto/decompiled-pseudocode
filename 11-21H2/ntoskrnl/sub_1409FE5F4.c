/*
 * XREFs of sub_1409FE5F4 @ 0x1409FE5F4
 * Callers:
 *     sub_140A01A20 @ 0x140A01A20 (sub_140A01A20.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 *     wcscpy_s @ 0x1403E76C0 (wcscpy_s.c)
 *     wcsncat_s @ 0x1403E7750 (wcsncat_s.c)
 *     sub_1407454A8 @ 0x1407454A8 (sub_1407454A8.c)
 *     sub_1409FBD64 @ 0x1409FBD64 (sub_1409FBD64.c)
 *     sub_1409FC038 @ 0x1409FC038 (sub_1409FC038.c)
 *     sub_1409FC108 @ 0x1409FC108 (sub_1409FC108.c)
 *     sub_1409FC5BC @ 0x1409FC5BC (sub_1409FC5BC.c)
 *     sub_1409FC9E0 @ 0x1409FC9E0 (sub_1409FC9E0.c)
 *     sub_1409FCF40 @ 0x1409FCF40 (sub_1409FCF40.c)
 *     sub_1409FEF6C @ 0x1409FEF6C (sub_1409FEF6C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409FE5F4(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int *v6; // rdi
  unsigned int v7; // r14d
  unsigned int v8; // esi
  unsigned int *v9; // r13
  int v10; // ebx
  SIZE_T v11; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v13; // r15
  rsize_t v14; // rbx
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rbx
  int v17; // eax
  unsigned int v18; // ecx
  wchar_t *v19; // rbx
  int v20; // r15d
  PVOID v21; // rbx
  int v22; // eax
  int v23; // esi
  __int64 v24; // [rsp+20h] [rbp-79h]
  char v25; // [rsp+40h] [rbp-59h] BYREF
  char v26; // [rsp+41h] [rbp-58h]
  PVOID v27; // [rsp+48h] [rbp-51h] BYREF
  PVOID v28; // [rsp+50h] [rbp-49h] BYREF
  unsigned int v29; // [rsp+58h] [rbp-41h] BYREF
  __int64 v30; // [rsp+60h] [rbp-39h] BYREF
  __int64 v31; // [rsp+68h] [rbp-31h] BYREF
  int v32[2]; // [rsp+70h] [rbp-29h]
  int v33[2]; // [rsp+78h] [rbp-21h]
  PVOID P[2]; // [rsp+80h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-9h] BYREF
  __int128 v36; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v37; // [rsp+B0h] [rbp+17h]

  v28 = 0LL;
  v27 = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  *(_QWORD *)v32 = a4;
  *(_QWORD *)v33 = a3;
  v37 = 0LL;
  v25 = 0;
  *(_OWORD *)P = 0LL;
  DestinationString = 0LL;
  v36 = 0LL;
  result = sub_1409FCF40((char *)(a1 + 12), &v28, &v27, &v25);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    v6 = (unsigned int *)v28;
    v7 = 0;
    v29 = 0;
    v26 = 0;
    v8 = 1;
    if ( v25 == 1 && a2 != 2 )
    {
      v9 = (unsigned int *)((char *)v28 + 24);
      v10 = sub_1407454A8((unsigned int *)v28 + 6, (__int64)P, 1);
      if ( v10 < 0 )
        goto LABEL_12;
      v11 = (unsigned int)LOWORD(P[0]) + 22;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x72766E45u);
      v13 = PoolWithTag;
      if ( !PoolWithTag )
      {
        ExFreePoolWithTag(P[1], 0);
LABEL_7:
        if ( v27 )
          ExFreePoolWithTag(v27, 0);
        v10 = -1073741670;
LABEL_42:
        ExFreePoolWithTag(v6, 0);
        return (unsigned int)v10;
      }
      v14 = v11 >> 1;
      wcscpy_s(PoolWithTag, v14, L"\\??\\Volume");
      wcsncat_s(v13, v14, (const wchar_t *)P[1], LOWORD(P[0]));
      ExFreePoolWithTag(P[1], 0);
      LODWORD(v14) = sub_1409FEF6C(v13);
      ExFreePoolWithTag(v13, 0);
      if ( (v14 & 0x80000000) == 0LL )
      {
LABEL_27:
        v21 = v27;
        if ( a2 == 3 )
        {
          v22 = sub_1409FC038(
                  *(__int64 *)v33,
                  *(unsigned int **)v32,
                  (const wchar_t **)&DestinationString,
                  (const wchar_t *)v27);
        }
        else if ( a2 == 2 )
        {
          if ( v26 == 1 )
          {
            v23 = sub_1409FC9E0(v7, &v36);
            if ( v23 < 0 )
            {
LABEL_36:
              ExFreePoolWithTag(DestinationString.Buffer, 0);
              if ( v21 )
                ExFreePoolWithTag(v21, 0);
              v10 = v23;
              goto LABEL_42;
            }
            v8 = HIDWORD(v37);
          }
          LODWORD(v28) = v6[1];
          v31 = v8 * *((_QWORD *)v6 + 1);
          v30 = v8 * *((_QWORD *)v6 + 2);
          v22 = sub_1409FC108(
                  *(__int64 *)v33,
                  *(unsigned int **)v32,
                  v9,
                  (unsigned int *)&v28,
                  &v31,
                  &v30,
                  (wchar_t *)v21,
                  v25);
        }
        else
        {
          v22 = sub_1409FBD64(*(_DWORD **)v33, *(unsigned int **)v32, (__int64)&DestinationString, (const wchar_t *)v27);
        }
        v23 = v22;
        goto LABEL_36;
      }
    }
    v9 = v6 + 6;
    LODWORD(v28) = v6[1];
    v10 = sub_1409FC5BC((_QWORD *)v6 + 3, &v28, &v29, &v31, &v30, v25);
    if ( v10 < 0 )
    {
LABEL_12:
      if ( v27 )
        ExFreePoolWithTag(v27, 0);
      goto LABEL_42;
    }
    if ( v6[1] == (_DWORD)v28 )
    {
      v15 = v31;
      v7 = v29;
      v16 = v30;
      if ( *((_QWORD *)v6 + 1) == v31 && *((_QWORD *)v6 + 2) == v30 )
        goto LABEL_22;
      v17 = sub_1409FC9E0(v29, &v36);
      v18 = HIDWORD(v37);
      if ( v17 < 0 )
        v18 = 1;
      HIDWORD(v37) = v18;
      if ( *((_QWORD *)v6 + 1) == v15 / v18 && *((_QWORD *)v6 + 2) == v16 / v18 )
      {
        v26 = 1;
LABEL_22:
        v19 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x5EuLL, 0x72766E45u);
        if ( !v19 )
          goto LABEL_7;
        LODWORD(v24) = (_DWORD)v28;
        swprintf_s(v19, 0x2FuLL, L"\\Device\\Harddisk%lu\\Partition%lu", v7, v24);
        v20 = sub_1409FEF6C(v19);
        ExFreePoolWithTag(v19, 0);
        if ( v20 < 0 )
        {
          if ( v27 )
            ExFreePoolWithTag(v27, 0);
          v10 = v20;
          goto LABEL_42;
        }
        goto LABEL_27;
      }
    }
    if ( v27 )
      ExFreePoolWithTag(v27, 0);
    v10 = -1073741811;
    goto LABEL_42;
  }
  return result;
}
