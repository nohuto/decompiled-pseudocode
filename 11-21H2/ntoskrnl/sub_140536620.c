/*
 * XREFs of sub_140536620 @ 0x140536620
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2FA8 @ 0x1403A2FA8 (sub_1403A2FA8.c)
 *     sub_1403A3038 @ 0x1403A3038 (sub_1403A3038.c)
 *     sub_1403CC31C @ 0x1403CC31C (sub_1403CC31C.c)
 *     sub_14053639C @ 0x14053639C (sub_14053639C.c)
 */

__int64 __fastcall sub_140536620(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax
  int *v4; // rax
  __int64 v5; // rcx

  v2 = 1;
  if ( *(_BYTE *)(a1 + 139) )
  {
    if ( *(_BYTE *)(a1 + 137) )
      v2 = *(_DWORD *)(a1 + 28);
    else
      v2 = *(unsigned __int16 *)(a1 + 28);
  }
  result = sub_1403A2FA8(a1, (unsigned __int16 *)(a1 + 24));
  do
  {
    if ( !v2 )
      break;
    v4 = sub_1403CC31C(a1, 0, 7u);
    sub_1403A3038(a1, (unsigned __int16 *)v4);
    result = sub_14053639C(v5);
    --v2;
  }
  while ( ((*(_DWORD *)(a1 + 16) & 0x40) != 0) == *(_BYTE *)(a1 + 141) );
  if ( *(_BYTE *)(a1 + 139) )
  {
    if ( *(_BYTE *)(a1 + 137) )
      *(_DWORD *)(a1 + 28) = v2;
    else
      *(_WORD *)(a1 + 28) = v2;
  }
  return result;
}
