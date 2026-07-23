/*
 * XREFs of sub_140534FB0 @ 0x140534FB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A30B4 @ 0x1403A30B4 (sub_1403A30B4.c)
 *     longjmp @ 0x1403DF970 (longjmp.c)
 */

__int64 __fastcall sub_140534FB0(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 result; // rax
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  *(_BYTE *)(a1 + 143) = 1;
  v2 = sub_1403A30B4(a1, (int *)&v5);
  if ( *(_BYTE *)(a1 + 142) )
    longjmp((_JBTYPE *)(a1 + 160), 11);
  v3 = v5 + 6LL;
  *(_DWORD *)(a1 + 108) = v2;
  result = 1LL;
  *(_QWORD *)(a1 + 88) = a1 + 4 * v3;
  return result;
}
