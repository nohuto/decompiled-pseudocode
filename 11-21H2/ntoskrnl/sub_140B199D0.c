/*
 * XREFs of sub_140B199D0 @ 0x140B199D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140B19F5C @ 0x140B19F5C (sub_140B19F5C.c)
 */

__int64 __fastcall sub_140B199D0(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    ++**(_DWORD **)a1;
  }
  else
  {
    *(_DWORD *)(a1 + 12) = -1;
    *(_DWORD *)(a1 + 16) = 1;
  }
  result = *(int *)(a1 + 12);
  *(_QWORD *)(a1 + 24) += result;
  return result;
}
