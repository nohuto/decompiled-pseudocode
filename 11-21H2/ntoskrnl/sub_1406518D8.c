/*
 * XREFs of sub_1406518D8 @ 0x1406518D8
 * Callers:
 *     sub_140650E68 @ 0x140650E68 (sub_140650E68.c)
 *     sub_140651304 @ 0x140651304 (sub_140651304.c)
 *     sub_140651540 @ 0x140651540 (sub_140651540.c)
 *     sub_1406515E8 @ 0x1406515E8 (sub_1406515E8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406518D8(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // eax
  __int64 result; // rax

  *a1 = a2;
  v2 = *(_QWORD *)(a2 + 216);
  if ( !v2 || v2 > 1024 )
  {
    *(_QWORD *)(a2 + 216) = 1024LL;
    a2 = *a1;
  }
  v3 = *(_DWORD *)(a2 + 228);
  if ( !v3 || v3 > 0xFF )
  {
    *(_DWORD *)(a2 + 228) = 255;
    a2 = *a1;
  }
  result = (unsigned int)(*(_DWORD *)(a2 + 232) - 1);
  if ( (unsigned int)result > 0x3E )
    *(_DWORD *)(a2 + 232) = 63;
  return result;
}
