/*
 * XREFs of sub_1406D5B38 @ 0x1406D5B38
 * Callers:
 *     sub_1407E2B70 @ 0x1407E2B70 (sub_1407E2B70.c)
 * Callees:
 *     sub_1406D5C1C @ 0x1406D5C1C (sub_1406D5C1C.c)
 *     sub_1406D5CF8 @ 0x1406D5CF8 (sub_1406D5CF8.c)
 *     sub_1407E3010 @ 0x1407E3010 (sub_1407E3010.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406D5B38(__int64 a1, _QWORD *a2, unsigned int a3)
{
  int v5; // edi
  _OWORD *v6; // rax
  _DWORD *v7; // rcx
  _QWORD *v8; // rbx
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  if ( a3 >= 0x10 && *a2 == 9LL )
  {
    v5 = sub_1407E3010(16LL, &P);
    if ( v5 >= 0 )
    {
      v6 = (_OWORD *)a2[1];
      if ( (unsigned __int64)(v6 + 1) > 0x7FFFFFFF0000LL || v6 + 1 < v6 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v6 = (_OWORD *)a2[1];
      }
      v7 = P;
      *(_OWORD *)P = *v6;
      if ( *v7 )
      {
        v5 = -1073741811;
      }
      else
      {
        v8 = P;
        sub_1406D5CF8(a1, *((_QWORD *)P + 1));
        sub_1406D5C1C(a1, v8[1]);
      }
    }
  }
  else
  {
    v5 = -1073741811;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v5;
}
