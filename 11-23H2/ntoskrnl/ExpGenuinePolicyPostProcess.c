/*
 * XREFs of ExpGenuinePolicyPostProcess @ 0x1409FA060
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x14041DCB0 (ZwQueryLicenseValue.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     ExpOsProductCacheProviderHelper @ 0x14085DB64 (ExpOsProductCacheProviderHelper.c)
 *     sub_1409F9B2C @ 0x1409F9B2C (sub_1409F9B2C.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpGenuinePolicyPostProcess(
        _QWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        unsigned int a4,
        _DWORD *a5,
        _BYTE *a6)
{
  int v9; // ebx
  void *v10; // rdi
  bool v11; // zf
  __int64 v12; // rcx
  unsigned int v13; // ebx
  void *Pool2; // rax
  __int64 v15; // rcx
  int v16; // eax
  _BYTE v18[8]; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v19; // [rsp+48h] [rbp-38h] BYREF
  int Data; // [rsp+50h] [rbp-30h] BYREF
  int v21; // [rsp+54h] [rbp-2Ch] BYREF
  ULONG ResultDataSize; // [rsp+58h] [rbp-28h] BYREF
  _DWORD *v23; // [rsp+60h] [rbp-20h]
  __int128 v24; // [rsp+68h] [rbp-18h]

  v23 = a5;
  v21 = 0;
  *a6 = 0;
  v9 = 0;
  v10 = 0LL;
  ResultDataSize = 4;
  Data = 0;
  v24 = 0LL;
  v19 = 0;
  if ( *a1 )
  {
    v9 = sub_1409F9B2C(a2, a3, a4, a5, 2);
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
  v9 = ZwQueryLicenseValue((PUNICODE_STRING)&stru_140A78BA0, 0LL, &Data, 4u, &ResultDataSize);
  if ( v9 >= 0 && Data == 1 )
    return (unsigned int)v9;
  if ( !qword_140D53428 )
    return (unsigned int)-1073741637;
  v9 = qword_140D53428(&v21);
  if ( v9 < 0 )
    return (unsigned int)v9;
  if ( !qword_140D533E8 )
    return (unsigned int)-1073741637;
  v9 = ExpOsProductCacheProviderHelper(v12, (UNICODE_STRING *)&qword_140A77F78, 0LL, 0LL, 0, &v19, v18);
  if ( v9 == -1073741789 )
  {
    v13 = v19;
    Pool2 = (void *)ExAllocatePool2(256LL, v19, 542329939LL);
    v10 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v9 = ExpOsProductCacheProviderHelper(v15, (UNICODE_STRING *)&qword_140A77F78, 0LL, Pool2, v13, &v19, v18);
  }
  if ( v9 >= 0 )
  {
    v16 = qword_140D533E8(3LL, v10, 0LL);
    v9 = v16;
    if ( v16 < 0 )
    {
      if ( v16 == -1073741198 )
        goto LABEL_23;
    }
    else if ( (v24 & 0x40) != 0 )
    {
LABEL_23:
      v9 = 0;
      goto LABEL_26;
    }
    if ( v16 >= 0 )
    {
LABEL_26:
      if ( !v21 )
      {
        v9 = sub_1409F9B2C(a2, a3, a4, v23, 2);
        *a6 = 1;
      }
    }
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)v9;
}
