/*
 * XREFs of sub_1C00622C0 @ 0x1C00622C0
 * Callers:
 *     sub_1C0060808 @ 0x1C0060808 (sub_1C0060808.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0061F7C @ 0x1C0061F7C (sub_1C0061F7C.c)
 */

__int64 __fastcall sub_1C00622C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v5; // rdi
  unsigned int v6; // ebx
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v8 = 256;
  v5 = sub_1C0007CF4(64LL, 256LL, 1918067026LL, v2);
  if ( v5 )
  {
    v6 = sub_1C0061F7C(a1, a2, 13, 0, (char *)&v8, (_BYTE *)v5);
    if ( (int)(v6 + 0x80000000) < 0 || v6 == -2147483643 )
    {
      *(_WORD *)(v5 + 2) = 0;
      v6 = -1073741668;
    }
    ExFreePoolWithTag((PVOID)v5, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v6;
}
