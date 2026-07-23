/*
 * XREFs of sub_1405362F0 @ 0x1405362F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2FA8 @ 0x1403A2FA8 (sub_1403A2FA8.c)
 *     sub_1403A3038 @ 0x1403A3038 (sub_1403A3038.c)
 *     sub_1403CC31C @ 0x1403CC31C (sub_1403CC31C.c)
 *     sub_14053639C @ 0x14053639C (sub_14053639C.c)
 */

void __fastcall sub_1405362F0(__int64 a1)
{
  int v2; // edi
  int *v3; // rax
  __int64 v4; // rcx
  int *v5; // rax

  v2 = 1;
  if ( !*(_BYTE *)(a1 + 139) )
    goto LABEL_5;
  if ( *(_BYTE *)(a1 + 137) )
    v2 = *(_DWORD *)(a1 + 28);
  else
    v2 = *(unsigned __int16 *)(a1 + 28);
  while ( v2 )
  {
LABEL_5:
    v3 = sub_1403CC31C(a1, *(_DWORD *)(a1 + 116), 6u);
    sub_1403A2FA8(a1, (unsigned __int16 *)v3);
    v5 = sub_1403CC31C(v4, 0, 7u);
    sub_1403A3038(a1, (unsigned __int16 *)v5);
    sub_14053639C();
    --v2;
    if ( ((*(_DWORD *)(a1 + 16) & 0x40) != 0) != *(_BYTE *)(a1 + 141) )
      break;
  }
  if ( *(_BYTE *)(a1 + 139) )
  {
    if ( *(_BYTE *)(a1 + 137) )
      *(_DWORD *)(a1 + 28) = v2;
    else
      *(_WORD *)(a1 + 28) = v2;
  }
}
