/*
 * XREFs of sub_1408031CC @ 0x1408031CC
 * Callers:
 *     sub_140802BE0 @ 0x140802BE0 (sub_140802BE0.c)
 * Callees:
 *     sub_140803EC0 @ 0x140803EC0 (sub_140803EC0.c)
 *     sub_140A1DCEC @ 0x140A1DCEC (sub_140A1DCEC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1408031CC(PCWSTR SourceString, PVOID *a2, __int64 a3)
{
  int v6; // edi
  char *v7; // rax
  int v8; // ecx

  *a2 = 0LL;
  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 32) = 0LL;
  v6 = sub_140803EC0(SourceString);
  if ( v6 >= 0
    || (v6 = sub_140A1DCEC(SourceString), v6 >= 0)
    && (v6 = sub_140803EC0(0LL), ExFreePoolWithTag(0LL, 0x4B444342u), v6 >= 0) )
  {
    *(_DWORD *)a3 = 0;
    v7 = (char *)*a2;
    v8 = *(_DWORD *)*a2;
    if ( !v8 )
    {
      *(_DWORD *)(a3 + 4) = 1;
      *(_DWORD *)(a3 + 8) = *((_DWORD *)v7 + 2);
      return (unsigned int)v6;
    }
    if ( v8 == 1 )
    {
      *(_DWORD *)(a3 + 4) = 0;
      *(_OWORD *)(a3 + 8) = *(_OWORD *)(v7 + 8);
      return (unsigned int)v6;
    }
    v6 = -1073741811;
  }
  if ( *a2 )
  {
    ExFreePoolWithTag(*a2, 0x4B444342u);
    *a2 = 0LL;
  }
  return (unsigned int)v6;
}
