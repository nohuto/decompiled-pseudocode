/*
 * XREFs of sub_1403B6250 @ 0x1403B6250
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403B6250(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rdx

  v2 = 0;
  if ( byte_140D011A2 )
    return (unsigned int)-1073741637;
  if ( *(_DWORD *)a2 == 4 )
  {
    sub_14042A5E0(208LL, 0LL);
    if ( !byte_140C54C30 )
      return v2;
    v5 = 0xFFFFFFFLL;
    v4 = 224LL;
    goto LABEL_5;
  }
  if ( *(_DWORD *)a2 == 5 )
  {
    byte_140C54C30 = 0;
    sub_14042A5E0(224LL, 0xFFFFFFFFLL);
    v4 = 208LL;
    v5 = (unsigned int)(*(_DWORD *)(a2 + 8) << 24);
LABEL_5:
    sub_14042A5E0(v4, v5);
    return v2;
  }
  if ( *(_DWORD *)a2 != 6 )
    return (unsigned int)-1073741637;
  byte_140C54C30 = 1;
  sub_14042A5E0(224LL, 0xFFFFFFFLL);
  if ( (unsigned int)sub_14042A5E0(224LL, v7) == 0xFFFFFFF )
  {
    v8 = (*(unsigned __int16 *)(a2 + 12) | (unsigned __int16)(16 * *(_WORD *)(a2 + 8))) << 24;
    sub_14042A5E0(208LL, v8);
    if ( (unsigned int)sub_14042A5E0(208LL, v9) == v8 )
      return v2;
    sub_14042A5E0(208LL, 0LL);
  }
  return 3221225659LL;
}
