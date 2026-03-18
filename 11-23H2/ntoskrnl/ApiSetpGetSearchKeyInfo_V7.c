/*
 * XREFs of ApiSetpGetSearchKeyInfo_V7 @ 0x140417F64
 * Callers:
 *     ApiSetQuerySchemaInfo_V7 @ 0x140416A50 (ApiSetQuerySchemaInfo_V7.c)
 *     ApiSetResolveToHost_V7 @ 0x140416CCC (ApiSetResolveToHost_V7.c)
 *     ApiSetCompose_ProcessV7Extension_Phase0 @ 0x14041784C (ApiSetCompose_ProcessV7Extension_Phase0.c)
 *     ApiSetCompose_ProcessV7Extension_Phase1 @ 0x140417A9C (ApiSetCompose_ProcessV7Extension_Phase1.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase0 @ 0x140418E6C (ApiSetCompose_V7_ProcessV6Extension_Phase0.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase1 @ 0x140419060 (ApiSetCompose_V7_ProcessV6Extension_Phase1.c)
 * Callees:
 *     <none>
 */

char __fastcall ApiSetpGetSearchKeyInfo_V7(__int64 a1, unsigned __int16 a2, char a3, unsigned __int16 *a4, _BYTE *a5)
{
  char v5; // r10
  bool v6; // zf
  char v8; // r8
  char v9; // si
  unsigned __int16 v10; // di
  __int64 v11; // r11
  char *v12; // r11
  unsigned __int16 v13; // cx

  v5 = 0;
  v6 = a3 == 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 2LL * a2;
  if ( v6 )
    v11 = a2;
  v12 = (char *)(a1 + v11);
  v13 = a2;
  if ( a2 > 1u )
  {
    while ( 1 )
    {
      v12 += -(a3 != 0) - 1;
      --v13;
      if ( *v12 == 45 )
        break;
      if ( *v12 == 46 )
      {
        if ( v9 )
        {
          *a4 = v10;
          goto LABEL_14;
        }
        v10 = v13;
        v9 = 1;
      }
      v8 = *v12;
      if ( v13 <= 1u )
        return v5;
    }
    if ( (unsigned __int8)(v8 - 48) <= 9u )
    {
      *a4 = v13;
      *a5 = 0;
      return 1;
    }
    *a4 = a2;
LABEL_14:
    *a5 = 1;
    return 1;
  }
  return v5;
}
