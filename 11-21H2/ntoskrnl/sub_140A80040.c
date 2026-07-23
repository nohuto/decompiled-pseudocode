/*
 * XREFs of sub_140A80040 @ 0x140A80040
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A90660 @ 0x140A90660 (sub_140A90660.c)
 */

__int64 __fastcall sub_140A80040(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+40h] [rbp-18h] BYREF
  int v5; // [rsp+48h] [rbp-10h]
  int v6; // [rsp+4Ch] [rbp-Ch]

  v6 = 0;
  v4 = 1LL;
  v5 = 32;
  result = sub_140A90660(NonPagedPool, LowPoolPriority, (__int64)&v4, 1, a2);
  if ( result )
  {
    *(_QWORD *)(result + 56) = 0LL;
    *(_QWORD *)(result + 40) = a1;
    *(_DWORD *)(result + 64) = 1;
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result + 16) = sub_1402F8870;
    *(_QWORD *)(result + 24) = result;
  }
  return result;
}
