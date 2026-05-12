/*
 * XREFs of sub_1C0043604 @ 0x1C0043604
 * Callers:
 *     sub_1C0001770 @ 0x1C0001770 (sub_1C0001770.c)
 *     sub_1C00052B0 @ 0x1C00052B0 (sub_1C00052B0.c)
 *     sub_1C0009130 @ 0x1C0009130 (sub_1C0009130.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1C0043604(__int64 a1)
{
  int v2; // ecx
  int v3; // eax
  _BYTE *v4; // r8
  char v5; // bl
  unsigned int v6; // edi
  __int64 i; // r10
  __int64 v8; // rcx
  _BYTE *v9; // rsi
  unsigned __int64 v10; // r11
  __int64 v11; // r9
  int v12; // ecx
  int v13; // ecx

  v2 = *(unsigned __int8 *)(a1 + 2);
  if ( (_BYTE)v2 == 40 )
    v3 = *(_DWORD *)(a1 + 20);
  else
    v3 = v2;
  if ( v3 != 32 && v3 != 19 )
  {
    if ( v3 )
      return 1;
    if ( (_BYTE)v2 != 40 )
    {
      v4 = (_BYTE *)(a1 + 72);
      goto LABEL_29;
    }
    v4 = 0LL;
    v5 = 0;
    if ( !*(_DWORD *)(a1 + 20) )
    {
      v6 = *(_DWORD *)(a1 + 56);
      for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
      {
        v8 = *(unsigned int *)(a1 + 4 * i + 120);
        v9 = v4;
        if ( (unsigned int)v8 >= 0x80 )
        {
          v10 = *(unsigned int *)(a1 + 16);
          if ( (unsigned int)v8 < (unsigned int)v10 )
          {
            v11 = (unsigned int)v8;
            v12 = *(_DWORD *)(v8 + a1) - 64;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( v13 )
              {
                if ( v13 == 1 && v11 + 40 <= v10 )
                {
                  v4 = (_BYTE *)(v11 + a1 + 32);
                  if ( !*(_DWORD *)(v11 + a1 + 12) )
                    v4 = v9;
                  break;
                }
              }
              else if ( v11 + 56 <= v10 )
              {
                v5 = 1;
                if ( !*(_BYTE *)(v11 + a1 + 10) )
                  break;
                v4 = (_BYTE *)(v11 + a1 + 24);
              }
            }
            else if ( v11 + 40 <= v10 )
            {
              if ( *(_BYTE *)(v11 + a1 + 10) )
                v4 = (_BYTE *)(v11 + a1 + 24);
              break;
            }
            if ( v5 )
              break;
          }
        }
      }
    }
LABEL_29:
    if ( !v4 )
      return 1;
    if ( *v4 != 18 )
      return *v4 != 0xA0;
  }
  return 0;
}
