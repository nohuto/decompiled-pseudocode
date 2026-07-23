/*
 * XREFs of sub_140536B70 @ 0x140536B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140536B70(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 138) )
    result = *(unsigned int *)(a1 + 28);
  else
    result = *(unsigned __int16 *)(a1 + 28);
  if ( !(_DWORD)result )
  {
    result = *(unsigned __int16 *)(a1 + 104);
    *(_DWORD *)(a1 + 20) = result;
  }
  return result;
}
