/*
 * XREFs of sub_1406B85C8 @ 0x1406B85C8
 * Callers:
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_14058D310 @ 0x14058D310 (sub_14058D310.c)
 *     sub_1406B79C8 @ 0x1406B79C8 (sub_1406B79C8.c)
 *     sub_14097A714 @ 0x14097A714 (sub_14097A714.c)
 * Callees:
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     sub_1402792E0 @ 0x1402792E0 (sub_1402792E0.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     sub_1406F4E78 @ 0x1406F4E78 (sub_1406F4E78.c)
 *     sub_1406FACF8 @ 0x1406FACF8 (sub_1406FACF8.c)
 *     sub_1407BCB30 @ 0x1407BCB30 (sub_1407BCB30.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406B85C8(int a1, int a2, __int64 a3, int a4, unsigned int a5, unsigned int a6)
{
  struct _KTHREAD *CurrentThread; // rbx
  int v7; // edi
  int v9; // eax
  PVOID v10; // rcx
  PVOID P[3]; // [rsp+40h] [rbp-18h] BYREF

  P[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v7 = sub_1407BCB30(0, a1, a2, 0, a3, a4, a6, (__int64)P);
  if ( v7 >= 0 && P[0] )
  {
    ++*((_BYTE *)CurrentThread + 1390);
    *((_DWORD *)P[0] + 26) = 0;
    v9 = sub_1402715A0((__int64)P[0], 0);
    v10 = P[0];
    v7 = v9;
    if ( v9 >= 0 && *((PVOID *)P[0] + 15) != (char *)P[0] + 120 )
    {
      sub_1406F4E78(P[0], a5, a6, 0LL);
      sub_1402792E0((_QWORD *)P[0] + 15, 0LL, 0LL);
      v10 = P[0];
    }
    sub_1406FACF8(v10);
    sub_1402AC800((__int64)CurrentThread);
    --*((_BYTE *)CurrentThread + 1390);
    ExFreePoolWithTag(P[0], 0);
  }
  else
  {
    sub_1402AC800((__int64)CurrentThread);
  }
  return (unsigned int)v7;
}
