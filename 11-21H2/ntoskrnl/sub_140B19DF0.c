/*
 * XREFs of sub_140B19DF0 @ 0x140B19DF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140B19F5C @ 0x140B19F5C (sub_140B19F5C.c)
 */

__int64 __fastcall sub_140B19DF0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = a1;
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    ++**(_DWORD **)a1;
    LODWORD(result) = *(_DWORD *)(a1 + 12) + 12;
    *(_DWORD *)(a1 + 12) = result;
    if ( (_DWORD)result == 36 )
    {
      sub_140B19F5C(a1);
      LODWORD(result) = *(_DWORD *)(v1 + 12);
    }
  }
  else
  {
    LODWORD(result) = -1;
    *(_DWORD *)(a1 + 12) = -1;
    *(_DWORD *)(a1 + 16) = 1;
  }
  result = (int)result;
  *(_QWORD *)(v1 + 24) += (int)result;
  return result;
}
