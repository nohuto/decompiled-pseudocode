/*
 * XREFs of sub_140A15D60 @ 0x140A15D60
 * Callers:
 *     sub_140A13EC0 @ 0x140A13EC0 (sub_140A13EC0.c)
 *     sub_140A17D10 @ 0x140A17D10 (sub_140A17D10.c)
 * Callees:
 *     sub_1402D87F0 @ 0x1402D87F0 (sub_1402D87F0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 */

__int64 __fastcall sub_140A15D60(_WORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  _WORD *v7; // rdx
  __int16 v8; // ax
  _WORD *v9; // rax
  signed int v10; // eax
  int v11; // edi

  memset(a1, 0, 2 * a2);
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    v10 = -1073741811;
    if ( a2 )
    {
      *a1 = 0;
      v11 = -1073741811;
      goto LABEL_10;
    }
  }
  else
  {
    v6 = a2;
    v7 = a1;
    do
    {
      if ( !(2147483646 - a2 + v6) )
        break;
      v8 = *(_WORD *)((char *)v7 + (char *)L"\\SystemRoot" - (char *)a1);
      if ( !v8 )
        break;
      *v7++ = v8;
      --v6;
    }
    while ( v6 );
    v9 = v7 - 1;
    if ( v6 )
      v9 = v7;
    *v9 = 0;
    v10 = v6 == 0 ? 0x80000005 : 0;
  }
  v11 = v10;
  if ( v10 < 0 )
  {
LABEL_10:
    sub_1406E0C3C(1LL, (__int64)"AslPathToSystemPathBuf");
    return (unsigned int)v11;
  }
  v11 = sub_1402D87F0(a1, a2, a3);
  if ( v11 < 0 )
  {
    sub_1406E0C3C(1LL, (__int64)"AslPathToSystemPathBuf");
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v11;
}
