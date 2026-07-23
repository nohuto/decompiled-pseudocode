/*
 * XREFs of sub_1409FBB20 @ 0x1409FBB20
 * Callers:
 *     sub_1409FE350 @ 0x1409FE350 (sub_1409FE350.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 *     sub_1409FBD64 @ 0x1409FBD64 (sub_1409FBD64.c)
 *     sub_1409FBE5C @ 0x1409FBE5C (sub_1409FBE5C.c)
 *     sub_1409FC038 @ 0x1409FC038 (sub_1409FC038.c)
 *     sub_1409FC5BC @ 0x1409FC5BC (sub_1409FC5BC.c)
 *     sub_1409FD160 @ 0x1409FD160 (sub_1409FD160.c)
 *     sub_1409FEF6C @ 0x1409FEF6C (sub_1409FEF6C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409FBB20(int a1, void *a2, __int64 a3, wchar_t *a4, void *Src)
{
  __int64 result; // rax
  char v9; // di
  int v10; // eax
  int v11; // r12d
  wchar_t *PoolWithTag; // rax
  WCHAR *v13; // rdi
  int v14; // r12d
  unsigned int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // [rsp+20h] [rbp-69h]
  char v18[8]; // [rsp+40h] [rbp-49h] BYREF
  int v19; // [rsp+48h] [rbp-41h] BYREF
  unsigned int v20; // [rsp+4Ch] [rbp-3Dh] BYREF
  __int64 v21; // [rsp+50h] [rbp-39h] BYREF
  __int64 v22; // [rsp+58h] [rbp-31h] BYREF
  __int64 v23; // [rsp+60h] [rbp-29h] BYREF
  __int64 v24; // [rsp+68h] [rbp-21h] BYREF
  PVOID P[2]; // [rsp+70h] [rbp-19h] BYREF
  __int128 v26; // [rsp+80h] [rbp-9h] BYREF

  *(_DWORD *)&v18[4] = 0;
  v20 = 0;
  v21 = 0LL;
  v24 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v26 = 0LL;
  v18[0] = 0;
  v18[1] = 0;
  *(_OWORD *)P = 0LL;
  result = sub_1409FD160(a4, (__int64)&v21, (__int64)&v22, (__int64)v18, (__int64)&v18[1]);
  if ( (int)result >= 0 )
  {
    if ( v18[1] == 1 && a1 == 4 )
      return sub_1409FBE5C(a2, (__int64)&v21, (__int64)&v22, Src, v18[0]);
    v9 = v18[0];
    v10 = 0;
    if ( !v18[0] )
      v10 = *(_DWORD *)&v18[4];
    v19 = v10;
    result = sub_1409FC5BC(
               (unsigned int)&v26,
               (unsigned int)&v19,
               (unsigned int)&v20,
               (unsigned int)&v24,
               (__int64)&v23,
               v18[0]);
    if ( (int)result >= 0 )
    {
      v11 = v19;
      if ( v18[1] == 1 && (*(_DWORD *)&v18[4] != v19 || v21 != v24 || v22 != v23) )
        return 3221225485LL;
      if ( a1 == 4 )
        return sub_1409FBE5C(a2, (__int64)&v24, (__int64)&v23, Src, v9);
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x5EuLL, 0x72766E45u);
      v13 = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225626LL;
      LODWORD(v17) = v11;
      swprintf_s(PoolWithTag, 0x2FuLL, L"\\Device\\Harddisk%lu\\Partition%lu", v20);
      v14 = sub_1409FEF6C(v13);
      ExFreePoolWithTag(v13, 0);
      if ( v14 < 0 )
        return (unsigned int)v14;
      if ( a1 == 3 )
      {
        v15 = sub_1409FC038(a2, a3, P, Src, v17);
      }
      else
      {
        if ( a1 != 1 )
        {
          v16 = -1073741811;
          goto LABEL_26;
        }
        v15 = sub_1409FBD64(a2, a3, P, Src);
      }
      v16 = v15;
LABEL_26:
      ExFreePoolWithTag(P[1], 0);
      return v16;
    }
  }
  return result;
}
