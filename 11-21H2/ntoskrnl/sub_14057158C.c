/*
 * XREFs of sub_14057158C @ 0x14057158C
 * Callers:
 *     sub_1406D5424 @ 0x1406D5424 (sub_1406D5424.c)
 *     sub_1409E3B04 @ 0x1409E3B04 (sub_1409E3B04.c)
 *     sub_1409F36F4 @ 0x1409F36F4 (sub_1409F36F4.c)
 *     sub_140A06B80 @ 0x140A06B80 (sub_140A06B80.c)
 *     sub_140B5197C @ 0x140B5197C (sub_140B5197C.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402631C0 (KeQueryMaximumProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140571A40 @ 0x140571A40 (sub_140571A40.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

char __fastcall sub_14057158C(ULONG_PTR a1)
{
  SIZE_T v1; // rbx
  PVOID PoolWithTag; // rax
  ULONG_PTR Context; // [rsp+20h] [rbp-E0h] BYREF
  int v5; // [rsp+28h] [rbp-D8h]
  int v6; // [rsp+2Ch] [rbp-D4h]
  int v7; // [rsp+30h] [rbp-D0h]
  _DWORD v8[69]; // [rsp+34h] [rbp-CCh] BYREF

  v6 = dword_140D06884;
  v5 = dword_140D06884;
  v7 = 2097153;
  Context = a1;
  memset(v8, 0, sizeof(v8));
  v1 = 4 * KeQueryMaximumProcessorCountEx(0xFFFFu) + 292;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v1, 0x666F7250u);
  *(_QWORD *)&v8[65] = PoolWithTag;
  if ( !PoolWithTag )
    return 1;
  memset(PoolWithTag, 0, v1);
  if ( (unsigned int)dword_140D06884 <= 1 )
    sub_140571A40((ULONG_PTR)&Context);
  else
    KeIpiGenericCall(sub_140571A40, (ULONG_PTR)&Context);
  if ( *(_QWORD *)&v8[65] )
    ExFreePoolWithTag(*(PVOID *)&v8[65], 0x666F7250u);
  return v8[67];
}
