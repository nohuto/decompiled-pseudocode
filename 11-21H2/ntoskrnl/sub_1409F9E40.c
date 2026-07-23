/*
 * XREFs of sub_1409F9E40 @ 0x1409F9E40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x14041E2C0 (ZwQueryLicenseValue.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14085E124 @ 0x14085E124 (sub_14085E124.c)
 *     sub_1409F992C @ 0x1409F992C (sub_1409F992C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409F9E40(_QWORD *a1, _DWORD *a2, _DWORD *a3, unsigned int a4, _DWORD *a5, _BYTE *a6)
{
  int v9; // ebx
  void *v10; // rsi
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  PVOID PoolWithTag; // rax
  __int64 v16; // rcx
  int v17; // eax
  _BYTE v19[4]; // [rsp+40h] [rbp-40h] BYREF
  SIZE_T NumberOfBytes; // [rsp+44h] [rbp-3Ch] BYREF
  int v21; // [rsp+4Ch] [rbp-34h] BYREF
  ULONG ResultDataSize; // [rsp+50h] [rbp-30h] BYREF
  _DWORD *v23; // [rsp+58h] [rbp-28h]
  __int128 v24; // [rsp+60h] [rbp-20h]

  v23 = a5;
  v21 = 0;
  *a6 = 0;
  v9 = 0;
  v10 = 0LL;
  ResultDataSize = 4;
  v24 = 0LL;
  NumberOfBytes = 0LL;
  if ( *a1 )
  {
    v9 = sub_1409F992C(a2, a3, a4, a5, 2);
    *a6 = 1;
    return (unsigned int)v9;
  }
  if ( a3 )
  {
    if ( a4 == 1 )
    {
      v11 = *(_BYTE *)a3 == 1;
    }
    else
    {
      if ( a4 != 2 )
      {
        if ( *a3 == 1 )
          return (unsigned int)v9;
        goto LABEL_11;
      }
      v11 = *(_WORD *)a3 == 1;
    }
    if ( v11 )
      return (unsigned int)v9;
  }
LABEL_11:
  v9 = ZwQueryLicenseValue((PUNICODE_STRING)&stru_140A38AA0, 0LL, (char *)&NumberOfBytes + 4, 4u, &ResultDataSize);
  if ( v9 >= 0 && HIDWORD(NumberOfBytes) == 1 )
    return (unsigned int)v9;
  if ( !qword_140D3B3E8 )
    return (unsigned int)-1073741637;
  v9 = sub_14042A5E0(&v21, v12);
  if ( v9 < 0 )
    return (unsigned int)v9;
  if ( !qword_140D3B3A8 )
    return (unsigned int)-1073741637;
  v9 = sub_14085E124(v13, (UNICODE_STRING *)&qword_140A37F90, 0LL, 0LL, 0, &NumberOfBytes, v19);
  if ( v9 == -1073741789 )
  {
    v14 = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20534C53u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    v9 = sub_14085E124(v16, (UNICODE_STRING *)&qword_140A37F90, 0LL, PoolWithTag, v14, &NumberOfBytes, v19);
  }
  if ( v9 >= 0 )
  {
    v17 = sub_14042A5E0(3LL, v10);
    v9 = v17;
    if ( v17 < 0 )
    {
      if ( v17 == -1073741198 )
        goto LABEL_23;
    }
    else if ( (v24 & 0x40) != 0 )
    {
LABEL_23:
      v9 = 0;
      goto LABEL_26;
    }
    if ( v17 >= 0 )
    {
LABEL_26:
      if ( !v21 )
      {
        v9 = sub_1409F992C(a2, a3, a4, v23, 2);
        *a6 = 1;
      }
    }
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)v9;
}
