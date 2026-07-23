/*
 * XREFs of RtlStringCchCatW @ 0x1800FB6E8
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x1800FD570 (RtlpSetPreferredUILanguages.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x18010B478 (RtlpOpenAndMapCustomCultureFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCatW(_WORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r10
  _WORD *v6; // rax
  unsigned int v7; // edx
  __int64 v8; // r8
  _WORD *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r11
  __int16 v13; // r8
  _WORD *v14; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v5 = a2;
    v6 = a1;
    do
    {
      if ( !*v6 )
        break;
      ++v6;
      --v5;
    }
    while ( v5 );
    v7 = v5 == 0 ? 0xC000000D : 0;
    v8 = (a2 - v5) & -(__int64)(v5 != 0);
    if ( v5 )
    {
      v9 = &a1[v8];
      v10 = a2 - v8;
      if ( a2 != v8 )
      {
        v11 = 2147483646LL;
        v12 = a3 - (_QWORD)v9;
        do
        {
          if ( !v11 )
            break;
          v13 = *(_WORD *)((char *)v9 + v12);
          if ( !v13 )
            break;
          *v9 = v13;
          --v11;
          ++v9;
          --v10;
        }
        while ( v10 );
      }
      v14 = v9 - 1;
      if ( v10 )
        v14 = v9;
      v7 = v10 == 0 ? 0x80000005 : 0;
      *v14 = 0;
    }
  }
  return v7;
}
