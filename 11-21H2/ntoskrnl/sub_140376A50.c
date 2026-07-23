/*
 * XREFs of sub_140376A50 @ 0x140376A50
 * Callers:
 *     sub_14025E94C @ 0x14025E94C (sub_14025E94C.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_140376B48 @ 0x140376B48 (sub_140376B48.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140376A50(int a1, __int64 a2, unsigned __int8 a3)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rdi
  int v8; // r8d
  int v9; // eax
  int v10; // edx
  signed int LowPart; // ebx
  LARGE_INTEGER v13[2]; // [rsp+30h] [rbp-30h] BYREF
  __int16 Object; // [rsp+40h] [rbp-20h] BYREF
  char v15; // [rsp+42h] [rbp-1Eh]
  char v16; // [rsp+43h] [rbp-1Dh]
  int v17; // [rsp+44h] [rbp-1Ch]
  _QWORD v18[3]; // [rsp+48h] [rbp-18h] BYREF

  v16 = 0;
  *(_OWORD *)&v13[0].LowPart = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x64576D73u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    v8 = (int)PoolWithTag;
    *(_OWORD *)PoolWithTag = 0LL;
    *((_OWORD *)PoolWithTag + 1) = 0LL;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    v9 = PoolWithTag[2];
    *v7 = 5;
    v7[2] ^= (a3 ^ (unsigned __int8)v9) & 7;
    Object = 0;
    v17 = 0;
    v10 = *(_DWORD *)(a2 + 6016);
    v18[1] = v18;
    v18[0] = v18;
    v15 = 6;
    LowPart = sub_140376B48(a1, v10, v8, (unsigned int)&Object, (__int64)v13);
    if ( LowPart < 0 )
    {
      ExFreePoolWithTag(v7, 0);
    }
    else
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      LowPart = v13[0].LowPart;
      if ( (v13[0].LowPart & 0x80000000) == 0 )
        return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)LowPart;
}
