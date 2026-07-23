/*
 * XREFs of sub_140B15550 @ 0x140B15550
 * Callers:
 *     sub_140B15450 @ 0x140B15450 (sub_140B15450.c)
 * Callees:
 *     sub_1403C77F8 @ 0x1403C77F8 (sub_1403C77F8.c)
 *     sub_140832A7C @ 0x140832A7C (sub_140832A7C.c)
 *     sub_140B15608 @ 0x140B15608 (sub_140B15608.c)
 */

__int64 sub_140B15550()
{
  unsigned int v0; // edi
  __int64 *v1; // rdx
  int v2; // r9d
  int v3; // r8d
  BOOL v4; // eax
  __int64 *i; // rcx
  __int64 *v6; // rax
  __int64 *v7; // rbx

  v0 = sub_140B15608();
  v1 = sub_1403C77F8((__int64 *)&off_1400C9DD8);
  if ( v1 )
  {
    v2 = 0;
    do
    {
      v3 = *(_DWORD *)*v1;
      if ( (v3 & 0x80u) != 0 )
      {
        if ( (v3 & 0x60) != 0 )
          v4 = (*(_DWORD *)*v1 & 0x60) == 64;
        else
          v4 = *((_BYTE *)v1 + 23) != 0;
        _InterlockedXor((volatile signed __int32 *)*v1, v2 & 0xFFFFFFEF | (16 * v4) ^ *(_DWORD *)*v1 & 0x10);
      }
      v1 = sub_1403C77F8(v1 + 6);
    }
    while ( v1 );
  }
  for ( i = (__int64 *)&off_1400C9DD8; ; i = v7 + 6 )
  {
    v6 = sub_1403C77F8(i);
    v7 = v6;
    if ( !v6 )
      break;
    sub_140832A7C((unsigned int *)*v6, (__int64)v6);
  }
  return v0;
}
