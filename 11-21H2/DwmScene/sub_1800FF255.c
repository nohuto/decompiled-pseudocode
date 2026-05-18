/*
 * XREFs of sub_1800FF255 @ 0x1800FF255
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012B58 @ 0x180012B58 (sub_180012B58.c)
 */

__int64 __fastcall sub_1800FF255(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_180012B58(*(_QWORD *)(a2 + 40));
  }
  return result;
}
