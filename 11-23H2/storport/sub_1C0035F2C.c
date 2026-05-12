/*
 * XREFs of sub_1C0035F2C @ 0x1C0035F2C
 * Callers:
 *     sub_1C00346C4 @ 0x1C00346C4 (sub_1C00346C4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0035F2C(__int64 a1, const void *a2, char a3)
{
  unsigned int i; // ebx
  unsigned __int64 v7; // rcx
  int v8; // eax

  for ( i = 0; i < *(_DWORD *)(a1 + 5552); ++i )
  {
    v7 = *(_QWORD *)(a1 + 5560) + ((unsigned __int64)i << 6);
    v8 = *(_DWORD *)(v7 + 44);
    if ( (v8 == 2 || a3 && v8 == 1) && RtlCompareMemory((const void *)(v7 + 4), a2, 0x20uLL) == 32 )
      break;
  }
  return i;
}
