/*
 * XREFs of sub_1403D0EC0 @ 0x1403D0EC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2E08 @ 0x1403A2E08 (sub_1403A2E08.c)
 *     sub_1403A2FA8 @ 0x1403A2FA8 (sub_1403A2FA8.c)
 */

__int64 __fastcall sub_1403D0EC0(__int64 a1)
{
  unsigned int v2; // edi
  unsigned __int16 *v3; // rdx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  v2 = 0;
  v5 = *(_DWORD *)(a1 + 40);
  do
  {
    if ( v2 == 4 )
      v3 = (unsigned __int16 *)&v5;
    else
      v3 = (unsigned __int16 *)(a1 + 4 * (v2 + 6LL));
    sub_1403A2FA8(a1, v3);
    result = sub_1403A2E08(a1, *(_DWORD *)(a1 + 108));
    ++v2;
  }
  while ( v2 <= 7 );
  return result;
}
