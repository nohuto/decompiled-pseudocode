/*
 * XREFs of sub_140536000 @ 0x140536000
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2E60 @ 0x1403A2E60 (sub_1403A2E60.c)
 *     sub_1403A54E0 @ 0x1403A54E0 (sub_1403A54E0.c)
 *     sub_1403CC31C @ 0x1403CC31C (sub_1403CC31C.c)
 */

_WORD *__fastcall sub_140536000(__int64 a1)
{
  _WORD *result; // rax
  int v3; // edi
  __int16 i; // si
  int *v5; // rax
  unsigned int v6; // ecx
  unsigned __int32 v7; // eax

  result = 0LL;
  v3 = 1;
  if ( *(_BYTE *)(a1 + 139) )
  {
    if ( *(_BYTE *)(a1 + 137) )
    {
      v3 = *(_DWORD *)(a1 + 28);
      *(_DWORD *)(a1 + 28) = 0;
    }
    else
    {
      v3 = *(unsigned __int16 *)(a1 + 28);
      *(_WORD *)(a1 + 28) = 0;
    }
  }
  for ( i = *(_WORD *)(a1 + 108); v3; --v3 )
  {
    v5 = sub_1403CC31C(a1, 0, 7u);
    v6 = *(_DWORD *)(a1 + 120);
    *(_QWORD *)(a1 + 88) = v5;
    v7 = sub_1403A54E0(v6, i);
    result = sub_1403A2E60(a1, v7);
  }
  return result;
}
