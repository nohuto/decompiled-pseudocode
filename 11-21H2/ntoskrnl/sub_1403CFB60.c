/*
 * XREFs of sub_1403CFB60 @ 0x1403CFB60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2E60 @ 0x1403A2E60 (sub_1403A2E60.c)
 *     sub_1403A2F5C @ 0x1403A2F5C (sub_1403A2F5C.c)
 *     sub_1403A3038 @ 0x1403A3038 (sub_1403A3038.c)
 */

_WORD *__fastcall sub_1403CFB60(__int64 a1)
{
  unsigned int v2; // edi
  unsigned __int16 *v3; // rdx
  int v4; // eax
  _WORD *result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 8;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  v6 = *(_DWORD *)(a1 + 40);
  do
  {
    if ( --v2 == 4 )
      v3 = (unsigned __int16 *)&v6;
    else
      v3 = (unsigned __int16 *)(a1 + 4 * (v2 + 6LL));
    sub_1403A3038(a1, v3);
    v4 = sub_1403A2F5C(a1);
    result = sub_1403A2E60(a1, v4);
  }
  while ( v2 );
  return result;
}
