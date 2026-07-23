/*
 * XREFs of sub_1403D9FA8 @ 0x1403D9FA8
 * Callers:
 *     sub_1403D9D88 @ 0x1403D9D88 (sub_1403D9D88.c)
 * Callees:
 *     sub_14030B860 @ 0x14030B860 (sub_14030B860.c)
 */

_DWORD *__fastcall sub_1403D9FA8(__int64 a1, unsigned int a2)
{
  _DWORD *v2; // r9
  unsigned __int64 v3; // rbx
  __int64 v4; // r10
  __int64 v5; // r8
  __int64 *v6; // rcx
  _QWORD *v7; // r8
  unsigned __int64 v8; // rbx
  _DWORD *v9; // rax

  v2 = 0LL;
  v3 = 0LL;
  v4 = 2LL;
  v5 = *(_QWORD *)(a1 + 16) + 24512LL * a2;
  v6 = qword_14001C780;
  v7 = (_QWORD *)(v5 + 8);
  do
  {
    if ( *v7 )
      v3 += *v6 * *v7;
    v7 += 134;
    ++v6;
    --v4;
  }
  while ( v4 );
  if ( !v3 )
    return 0LL;
  v8 = v3 >> 12;
  if ( 16LL * (unsigned int)v8 )
  {
    v9 = sub_14030B860(64LL, 16LL * (unsigned int)v8, 0x695A694Du, a2 | 0x80000000);
    v2 = v9;
    if ( v9 )
    {
      v9[1] = 0;
      *v9 = v8;
      v9[2] = 1;
    }
  }
  return v2;
}
