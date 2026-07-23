/*
 * XREFs of sub_140536590 @ 0x140536590
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2E60 @ 0x1403A2E60 (sub_1403A2E60.c)
 *     sub_1403A2FA8 @ 0x1403A2FA8 (sub_1403A2FA8.c)
 *     sub_1403CC31C @ 0x1403CC31C (sub_1403CC31C.c)
 */

_WORD *__fastcall sub_140536590(__int64 a1)
{
  _WORD *result; // rax
  int v3; // edi
  int *v4; // rax
  __int64 v5; // rcx
  int *v6; // rax
  int v7; // edx

  result = 0LL;
  v3 = 1;
  if ( !*(_BYTE *)(a1 + 139)
    || (!*(_BYTE *)(a1 + 137)
      ? (v3 = *(unsigned __int16 *)(a1 + 28), *(_WORD *)(a1 + 28) = 0)
      : (v3 = *(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 28) = 0),
        v3) )
  {
    do
    {
      v4 = sub_1403CC31C(a1, *(_DWORD *)(a1 + 116), 6u);
      sub_1403A2FA8(a1, (unsigned __int16 *)v4);
      v6 = sub_1403CC31C(v5, 0, 7u);
      v7 = *(_DWORD *)(a1 + 108);
      *(_QWORD *)(a1 + 88) = v6;
      result = sub_1403A2E60(a1, v7);
      --v3;
    }
    while ( v3 );
  }
  return result;
}
