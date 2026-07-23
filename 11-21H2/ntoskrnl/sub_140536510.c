/*
 * XREFs of sub_140536510 @ 0x140536510
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2E60 @ 0x1403A2E60 (sub_1403A2E60.c)
 *     sub_1403A2FA8 @ 0x1403A2FA8 (sub_1403A2FA8.c)
 *     sub_1403CC31C @ 0x1403CC31C (sub_1403CC31C.c)
 */

_WORD *__fastcall sub_140536510(__int64 a1)
{
  int v2; // edi
  _WORD *result; // rax
  int *v4; // rax
  __int64 v5; // rcx

  v2 = 1;
  if ( *(_BYTE *)(a1 + 139) )
  {
    if ( *(_BYTE *)(a1 + 137) )
    {
      v2 = *(_DWORD *)(a1 + 28);
      *(_DWORD *)(a1 + 28) = 0;
    }
    else
    {
      v2 = *(unsigned __int16 *)(a1 + 28);
      *(_WORD *)(a1 + 28) = 0;
    }
  }
  result = (_WORD *)(a1 + 24);
  for ( *(_QWORD *)(a1 + 88) = a1 + 24; v2; --v2 )
  {
    v4 = sub_1403CC31C(a1, *(_DWORD *)(a1 + 116), 6u);
    sub_1403A2FA8(a1, (unsigned __int16 *)v4);
    result = sub_1403A2E60(v5, *(_DWORD *)(a1 + 108));
  }
  return result;
}
