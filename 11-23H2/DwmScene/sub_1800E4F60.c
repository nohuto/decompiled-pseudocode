/*
 * XREFs of sub_1800E4F60 @ 0x1800E4F60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 */

__int64 __fastcall sub_1800E4F60(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return sub_180010F54(*(_QWORD *)(a2 + 72));
  }
  return result;
}
