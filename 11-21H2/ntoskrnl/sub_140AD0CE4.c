/*
 * XREFs of sub_140AD0CE4 @ 0x140AD0CE4
 * Callers:
 *     sub_1403ED150 @ 0x1403ED150 (sub_1403ED150.c)
 *     sub_140AB9010 @ 0x140AB9010 (sub_140AB9010.c)
 *     sub_140ACD048 @ 0x140ACD048 (sub_140ACD048.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140AD0CE4(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax
  unsigned __int64 *v4; // r9
  unsigned __int64 v5; // rdx
  __int64 v6; // r10
  __int64 v7; // rax
  BOOL v8; // r10d
  int v9; // r9d
  int v10; // r11d
  _QWORD v12[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = 0;
  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1464);
  else
    v3 = qword_140D05410;
  v4 = v12;
  v5 = v3 + ((a2 >> 9) & 0x7FFFFFFFF8LL);
  v6 = 4LL;
  do
  {
    *v4 = v5;
    if ( a1 )
      v7 = *(_QWORD *)(a1 + 1464);
    else
      v7 = qword_140D05410;
    ++v4;
    v5 = v7 + ((v5 >> 9) & 0x7FFFFFFFF8LL);
    --v6;
  }
  while ( v6 );
  v8 = 0;
  v9 = 3;
  do
  {
    v10 = v9;
    if ( v8 )
    {
      v12[v9] = 0LL;
    }
    else
    {
      if ( !v9 )
        break;
      v8 = *(char *)v12[v9] < 0;
    }
    --v9;
  }
  while ( v10 );
  LOBYTE(v2) = v12[0] == 0LL;
  return v2;
}
