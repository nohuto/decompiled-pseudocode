/*
 * XREFs of sub_140A13D98 @ 0x140A13D98
 * Callers:
 *     sub_140A1392C @ 0x140A1392C (sub_140A1392C.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140843C1C @ 0x140843C1C (sub_140843C1C.c)
 */

__int64 __fastcall sub_140A13D98(wchar_t *a1, __int64 a2, unsigned int *a3)
{
  signed int v4; // ebx
  __int64 v5; // rdx
  wchar_t *v6; // rax
  __int64 v7; // r8
  char *v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  signed __int64 v11; // rdx
  __int16 v12; // r8
  char *v13; // rax

  *a1 = 0;
  v4 = sub_140843C1C(a1, 0x2Bu, a3);
  if ( v4 < 0 )
    goto LABEL_2;
  v5 = 43LL;
  v6 = a1;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  v7 = (43 - v5) & -(__int64)(v5 != 0);
  v4 = v5 == 0 ? 0xC000000D : 0;
  if ( v5 )
  {
    v8 = (char *)&a1[v7];
    v9 = 43 - v7;
    if ( 43 != v7 )
    {
      v10 = 2147483646LL;
      v11 = (char *)L".sdb" - v8;
      do
      {
        if ( !v10 )
          break;
        v12 = *(_WORD *)&v8[v11];
        if ( !v12 )
          break;
        *(_WORD *)v8 = v12;
        --v10;
        v8 += 2;
        --v9;
      }
      while ( v9 );
    }
    v13 = v8 - 2;
    if ( v9 )
      v13 = v8;
    v4 = v9 == 0 ? 0x80000005 : 0;
    *(_WORD *)v13 = 0;
  }
  if ( v4 < 0 )
LABEL_2:
    sub_1406E0C3C(1LL, (__int64)"SdbpGetCustomSdbFileName");
  else
    return 0;
  return (unsigned int)v4;
}
