/*
 * XREFs of sub_1403CFBE0 @ 0x1403CFBE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2FA8 @ 0x1403A2FA8 (sub_1403A2FA8.c)
 *     sub_1403A30B4 @ 0x1403A30B4 (sub_1403A30B4.c)
 */

__int64 __fastcall sub_1403CFBE0(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 112) & 1;
  v8 = 0;
  *(_DWORD *)(a1 + 120) = v1;
  result = sub_1403A30B4(a1, (int *)&v8);
  if ( result )
  {
    sub_1403A2FA8(a1, (unsigned __int16 *)result);
    v4 = *(_DWORD *)(a1 + 112) & 8;
    if ( *(_DWORD *)(a1 + 120) )
    {
      if ( v4 )
        v5 = *(__int16 *)(a1 + 108);
      else
        v5 = *(unsigned __int16 *)(a1 + 108);
    }
    else if ( v4 )
    {
      v5 = *(char *)(a1 + 108);
    }
    else
    {
      v5 = *(unsigned __int8 *)(a1 + 108);
    }
    *(_DWORD *)(a1 + 108) = v5;
    if ( *(_BYTE *)(a1 + 138) )
    {
      v6 = 3;
    }
    else
    {
      *(_WORD *)(a1 + 110) = 0;
      v6 = 1;
    }
    v7 = v8 + 6LL;
    *(_DWORD *)(a1 + 120) = v6;
    result = 1LL;
    *(_QWORD *)(a1 + 88) = a1 + 4 * v7;
  }
  return result;
}
