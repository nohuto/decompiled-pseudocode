/*
 * XREFs of sub_1800CB548 @ 0x1800CB548
 * Callers:
 *     sub_1800CA060 @ 0x1800CA060 (sub_1800CA060.c)
 * Callees:
 *     sub_1800C88CC @ 0x1800C88CC (sub_1800C88CC.c)
 */

_BOOL8 __fastcall sub_1800CB548(__int64 *a1, unsigned int *a2)
{
  __int64 v2; // rax
  _DWORD *v3; // r10
  __int64 v4; // rcx
  __int64 v5; // rdx
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = sub_1800C88CC(a1, (__int64)v7, a2);
  v4 = 0LL;
  v5 = *(_QWORD *)(v2 + 16);
  if ( !*(_BYTE *)(v5 + 25) )
    return *v3 >= *(_DWORD *)(v5 + 32);
  return v4;
}
