/*
 * XREFs of sub_1406E158C @ 0x1406E158C
 * Callers:
 *     sub_1407E2B70 @ 0x1407E2B70 (sub_1407E2B70.c)
 * Callees:
 *     sub_1407E3010 @ 0x1407E3010 (sub_1407E3010.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406E158C(__int64 a1, _QWORD *a2, unsigned int a3)
{
  int v5; // ebx
  unsigned __int64 v6; // rax
  PVOID v7; // rcx
  unsigned int v8; // ecx
  int v9; // eax
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  if ( a3 >= 0x10 && *a2 == 8LL )
  {
    v5 = sub_1407E3010(24LL, &P);
    if ( v5 >= 0 )
    {
      v6 = a2[1];
      if ( v6 + 24 > 0x7FFFFFFF0000LL || v6 + 24 < v6 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v6 = a2[1];
      }
      v7 = P;
      *(_OWORD *)P = *(_OWORD *)v6;
      *((_QWORD *)v7 + 2) = *(_QWORD *)(v6 + 16);
      if ( *(_DWORD *)v7 )
      {
        v5 = -1073741811;
      }
      else if ( *(_DWORD *)(a1 + 56) )
      {
        v8 = *((_DWORD *)v7 + 1);
        v9 = 60;
        if ( v8 < 0x3C )
          v9 = v8;
        *(_DWORD *)(a1 + 56) = v9;
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
