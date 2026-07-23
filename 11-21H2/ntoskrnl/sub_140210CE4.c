/*
 * XREFs of sub_140210CE4 @ 0x140210CE4
 * Callers:
 *     sub_140207F60 @ 0x140207F60 (sub_140207F60.c)
 *     sub_140208368 @ 0x140208368 (sub_140208368.c)
 *     sub_1402108CC @ 0x1402108CC (sub_1402108CC.c)
 *     sub_140210D6C @ 0x140210D6C (sub_140210D6C.c)
 *     sub_14022A040 @ 0x14022A040 (sub_14022A040.c)
 *     sub_140290B9C @ 0x140290B9C (sub_140290B9C.c)
 *     sub_1402B3140 @ 0x1402B3140 (sub_1402B3140.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 */

char __fastcall sub_140210CE4(_RTL_RB_TREE *a1, __int64 a2, char a3)
{
  _RTL_RB_TREE *v4; // rsi
  __int64 *v5; // rbx
  __int64 v6; // rax
  _RTL_RB_TREE *v7; // rcx
  __int64 v8; // rax

  v4 = a1 + 2035;
  do
  {
    v5 = (__int64 *)(a2 + 408);
    v6 = *(_QWORD *)(a2 + 408);
    v7 = (_RTL_RB_TREE *)(v6 + 392);
    if ( !v6 )
      v7 = v4;
    if ( a3 )
      *(_QWORD *)(a2 + 56) += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 64);
    *(_BYTE *)(a2 + 112) &= ~1u;
    LOBYTE(v8) = RtlRbRemoveNode(v7, (PRTL_BALANCED_NODE)(a2 + 88));
    a2 = *v5;
    if ( !*v5 || (*(_BYTE *)(a2 + 112) & 1) == 0 )
      break;
    v8 = *(_QWORD *)(a2 + 392);
    if ( (*(_BYTE *)(a2 + 400) & 1) == 0 )
      goto LABEL_12;
    if ( v8 )
    {
      v8 ^= a2 + 392;
LABEL_12:
      if ( v8 )
        return v8;
    }
  }
  while ( !*(_WORD *)(a2 + 114) );
  return v8;
}
