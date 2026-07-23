/*
 * XREFs of sub_14023DADC @ 0x14023DADC
 * Callers:
 *     sub_14023CDE0 @ 0x14023CDE0 (sub_14023CDE0.c)
 *     sub_14023D6AC @ 0x14023D6AC (sub_14023D6AC.c)
 * Callees:
 *     sub_14023DB74 @ 0x14023DB74 (sub_14023DB74.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall sub_14023DADC(__int64 a1)
{
  __int64 v2; // r9
  unsigned __int16 v3; // r11
  __int64 v4; // rdx
  BOOLEAN v5; // r8
  __int64 v6; // rax

  v2 = sub_14023DB74();
  v3 = *(_WORD *)(v2 + 24);
  if ( v3 != *(_WORD *)(a1 + 40) )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 && v4 )
      v4 ^= a1 + 8;
    v5 = 0;
    if ( v4 )
    {
      while ( 1 )
      {
        if ( v3 >= *(_WORD *)(v4 + 24) )
        {
          v6 = *(_QWORD *)(v4 + 8);
          if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
          {
            if ( !v6 )
              goto LABEL_16;
            v6 ^= v4;
          }
          if ( !v6 )
          {
LABEL_16:
            v5 = 1;
            break;
          }
        }
        else
        {
          v6 = *(_QWORD *)v4;
          if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
          {
            if ( !v6 )
              break;
            v6 ^= v4;
          }
          if ( !v6 )
            break;
        }
        v4 = v6;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 8), (PRTL_BALANCED_NODE)v4, v5, (PRTL_BALANCED_NODE)v2);
    return 0LL;
  }
  return v2;
}
