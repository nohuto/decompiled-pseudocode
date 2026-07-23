/*
 * XREFs of sub_1405FCF84 @ 0x1405FCF84
 * Callers:
 *     sub_140847F40 @ 0x140847F40 (sub_140847F40.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 *     sub_140376BB8 @ 0x140376BB8 (sub_140376BB8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1405FCF84(__int64 a1, __int64 a2)
{
  _OWORD *PoolWithTag; // rax
  __int64 v5; // rcx
  void *v6; // rsi
  int v7; // edi
  struct _EX_RUNDOWN_REF *v8; // rax
  LARGE_INTEGER v10[2]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD Object[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v12[3]; // [rsp+48h] [rbp-18h] BYREF

  Object[1] = 0;
  v12[1] = v12;
  Object[0] = 393216;
  v12[0] = v12;
  *(_OWORD *)&v10[0].LowPart = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x64576D73u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    *((_DWORD *)PoolWithTag + 2) = -1;
    *(_DWORD *)PoolWithTag = 3;
    v7 = sub_140376BB8(v5, a2, (__int64)PoolWithTag, (__int64)Object, v10);
    if ( v7 >= 0 )
    {
      KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      return v10[0].LowPart;
    }
    ExFreePoolWithTag(v6, 0);
  }
  else
  {
    v7 = -1073741670;
  }
  if ( a2 )
  {
    v8 = (struct _EX_RUNDOWN_REF *)sub_14035F5E8(a1, *(_DWORD *)(a2 + 6016) & 0x3FF);
    sub_1402AD030(v8 + 1);
  }
  return (unsigned int)v7;
}
