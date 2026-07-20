/*
 * XREFs of ApiSetpGetSearchKeyInfo_V7 @ 0x1400122E4
 * Callers:
 *     ApiSetResolveToHost_V7 @ 0x140012034 (ApiSetResolveToHost_V7.c)
 * Callees:
 *     <none>
 */

char __fastcall ApiSetpGetSearchKeyInfo_V7(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        unsigned __int16 *a4,
        _BYTE *a5)
{
  char v5; // r8
  char v6; // bl
  unsigned __int16 v7; // r11
  bool v8; // cc
  char *v9; // r10
  char v10; // al
  unsigned __int16 v11; // cx

  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = a2 <= 1u;
  v9 = (char *)(a1 + 2LL * a2);
  v10 = 0;
  v11 = a2;
  while ( !v8 )
  {
    v9 -= 2;
    --v11;
    if ( *v9 == 45 )
    {
      if ( (unsigned __int8)(v10 - 48) > 9u )
      {
        *a4 = a2;
LABEL_12:
        *a5 = 1;
      }
      else
      {
        *a4 = v11;
        *a5 = 0;
      }
      return 1;
    }
    if ( *v9 == 46 )
    {
      if ( v6 )
      {
        *a4 = v7;
        goto LABEL_12;
      }
      v7 = v11;
      v6 = 1;
    }
    v10 = *v9;
    v8 = v11 <= 1u;
  }
  return v5;
}
