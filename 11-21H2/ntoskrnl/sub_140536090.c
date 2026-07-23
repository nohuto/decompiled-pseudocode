/*
 * XREFs of sub_140536090 @ 0x140536090
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2FA8 @ 0x1403A2FA8 (sub_1403A2FA8.c)
 *     sub_1403A5440 @ 0x1403A5440 (sub_1403A5440.c)
 *     sub_1403CC31C @ 0x1403CC31C (sub_1403CC31C.c)
 */

char __fastcall sub_140536090(__int64 a1)
{
  char result; // al
  int v3; // edi
  __int16 i; // si
  int *v5; // rax

  result = 0;
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
    v5 = sub_1403CC31C(a1, *(_DWORD *)(a1 + 116), 6u);
    sub_1403A2FA8(a1, (unsigned __int16 *)v5);
    result = sub_1403A5440(*(unsigned int *)(a1 + 120), i, *(_DWORD *)(a1 + 108));
  }
  return result;
}
