/*
 * XREFs of ExpGenuinePolicyPostProcess @ 0x1409F9E40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x14041E2C0 (ZwQueryLicenseValue.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExpOsProductCacheProviderHelper @ 0x14085E124 (ExpOsProductCacheProviderHelper.c)
 *     sub_1409F992C @ 0x1409F992C (sub_1409F992C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpGenuinePolicyPostProcess(
        _QWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        unsigned int a4,
        _DWORD *a5,
        _BYTE *a6)
{
  unsigned int v9; // ebx
  void *v10; // rsi
  bool v11; // zf
  __int64 v12; // rcx
  unsigned int v13; // ebx
  PVOID PoolWithTag; // rax
  __int64 v15; // rcx
  int v16; // eax
  _BYTE v18[4]; // [rsp+40h] [rbp-40h] BYREF
  SIZE_T NumberOfBytes; // [rsp+44h] [rbp-3Ch] BYREF
  _DWORD v20[3]; // [rsp+4Ch] [rbp-34h] BYREF
  _DWORD *v21; // [rsp+58h] [rbp-28h]
  __int128 v22; // [rsp+60h] [rbp-20h]

  v21 = a5;
  v20[0] = 0;
  *a6 = 0;
  v9 = 0;
  v10 = 0LL;
  v20[1] = 4;
  v22 = 0LL;
  NumberOfBytes = 0LL;
  if ( *a1 )
  {
    v9 = sub_1409F992C(a2, a3, a4, a5, 2);
    *a6 = 1;
    return v9;
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
          return v9;
        goto LABEL_11;
      }
      v11 = *(_WORD *)a3 == 1;
    }
    if ( v11 )
      return v9;
  }
LABEL_11:
  ZwQueryLicenseValue((__int64)L"JL", 0LL);
  if ( !qword_140D3B3E8 )
    return (unsigned int)-1073741637;
  v9 = qword_140D3B3E8(v20);
  if ( (v9 & 0x80000000) != 0 )
    return v9;
  if ( !qword_140D3B3A8 )
    return (unsigned int)-1073741637;
  v9 = ExpOsProductCacheProviderHelper(v12, (UNICODE_STRING *)&qword_140A37F90, 0LL, 0LL, 0, &NumberOfBytes, v18);
  if ( v9 == -1073741789 )
  {
    v13 = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20534C53u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    v9 = ExpOsProductCacheProviderHelper(
           v15,
           (UNICODE_STRING *)&qword_140A37F90,
           0LL,
           PoolWithTag,
           v13,
           &NumberOfBytes,
           v18);
  }
  if ( (v9 & 0x80000000) != 0 )
    goto LABEL_26;
  v16 = ((__int64 (__fastcall *)(__int64, void *, _QWORD))qword_140D3B3A8)(3LL, v10, 0LL);
  v9 = v16;
  if ( v16 < 0 )
  {
    if ( v16 == -1073741198 )
      goto LABEL_21;
  }
  else if ( (v22 & 0x40) != 0 )
  {
LABEL_21:
    v9 = 0;
    goto LABEL_24;
  }
  if ( v16 >= 0 )
  {
LABEL_24:
    if ( !v20[0] )
    {
      v9 = sub_1409F992C(a2, a3, a4, v21, 2);
      *a6 = 1;
    }
  }
LABEL_26:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return v9;
}
