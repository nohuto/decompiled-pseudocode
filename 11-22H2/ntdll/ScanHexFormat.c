/*
 * XREFs of ScanHexFormat @ 0x18006ED9C
 * Callers:
 *     RtlGUIDFromString @ 0x18006EBB0 (RtlGUIDFromString.c)
 * Callees:
 *     <none>
 */

__int64 ScanHexFormat(_WORD *a1, int a2, unsigned __int16 *a3, ...)
{
  unsigned int v3; // r9d
  _DWORD **v4; // rdi
  __int16 v6; // ax
  int v7; // ebx
  unsigned int v8; // r11d
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // rax
  __int64 v16; // [rsp+0h] [rbp-18h] BYREF

  v3 = 0;
  v4 = (_DWORD **)(&v16 + 6);
  while ( 1 )
  {
LABEL_2:
    v6 = *a3;
    if ( !*a3 )
    {
      if ( a2 && *a1 )
        return (unsigned int)-1;
      return v3;
    }
    if ( v6 != 37 )
      break;
    v6 = *++a3;
    if ( *a3 == 37 )
      break;
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      v9 = *a3;
      if ( v9 <= 0x39 && v9 >= 0x30 )
      {
        v8 = v9 + 2 * (5 * v8 - 24);
        goto LABEL_9;
      }
      if ( v9 != 108 )
        break;
      ++v7;
LABEL_9:
      ++a3;
    }
    if ( (((_WORD)v9 - 88) & 0xFFDF) != 0 )
      goto LABEL_9;
    v10 = 0;
    while ( v8 )
    {
      --v8;
      if ( !a2 )
        return 0xFFFFFFFFLL;
      v11 = 16 * v10;
      if ( (unsigned __int16)(*a1 - 48) > 9u )
      {
        if ( (unsigned __int16)(*a1 - 97) <= 5u )
        {
          v12 = v11 - 87;
        }
        else
        {
          if ( (unsigned __int16)(*a1 - 65) > 5u )
            return 0xFFFFFFFFLL;
          v12 = v11 - 55;
        }
      }
      else
      {
        v12 = v11 - 48;
      }
      v13 = (unsigned __int16)*a1++;
      v10 = v13 + v12;
      --a2;
    }
    v14 = *++v4;
    if ( v7 )
      *v14 = v10;
    else
      *(_WORD *)v14 = v10;
    ++a3;
    ++v3;
  }
  if ( a2 && *a1 == v6 )
  {
    ++a1;
    --a2;
    ++a3;
    goto LABEL_2;
  }
  return 0xFFFFFFFFLL;
}
