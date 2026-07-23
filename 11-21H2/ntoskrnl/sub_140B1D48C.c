/*
 * XREFs of sub_140B1D48C @ 0x140B1D48C
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 */

void __fastcall sub_140B1D48C(__int64 a1)
{
  _RTL_BALANCED_NODE *v1; // rsi
  _RTL_BALANCED_NODE *v3; // rdi
  __int64 v4; // rbx
  _RTL_BALANCED_NODE *v5; // r9
  unsigned __int64 v6; // rdx
  BOOLEAN v7; // r8
  unsigned __int64 v8; // rax

  v1 = (_RTL_BALANCED_NODE *)(a1 + 32);
  v3 = *(_RTL_BALANCED_NODE **)(a1 + 32);
  if ( v3 != (_RTL_BALANCED_NODE *)(a1 + 32) )
  {
    v4 = a1 + 352;
    do
    {
      v5 = v3;
      v3 = v3->Children[0];
      v6 = *(_QWORD *)v4;
      if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v6 )
        v6 ^= v4;
      v7 = 0;
      if ( v6 )
      {
        while ( 1 )
        {
          if ( v5[1].Children[1] >= (_RTL_BALANCED_NODE *)*(_QWORD *)(v6 + 32) )
          {
            v8 = *(_QWORD *)(v6 + 8);
            if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
            {
              if ( !v8 )
                goto LABEL_17;
              v8 ^= v6;
            }
            if ( !v8 )
            {
LABEL_17:
              v7 = 1;
              break;
            }
          }
          else
          {
            v8 = *(_QWORD *)v6;
            if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
            {
              if ( !v8 )
                goto LABEL_20;
              v8 ^= v6;
            }
            if ( !v8 )
            {
LABEL_20:
              v7 = 0;
              break;
            }
          }
          v6 = v8;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)v4, (PRTL_BALANCED_NODE)v6, v7, v5);
    }
    while ( v3 != v1 );
  }
  v1->Children[0] = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
}
