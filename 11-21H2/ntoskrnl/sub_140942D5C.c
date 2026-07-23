/*
 * XREFs of sub_140942D5C @ 0x140942D5C
 * Callers:
 *     sub_14055F904 @ 0x14055F904 (sub_14055F904.c)
 *     sub_14055FBE4 @ 0x14055FBE4 (sub_14055FBE4.c)
 *     sub_14076BB84 @ 0x14076BB84 (sub_14076BB84.c)
 *     sub_140942B68 @ 0x140942B68 (sub_140942B68.c)
 * Callees:
 *     sub_140772044 @ 0x140772044 (sub_140772044.c)
 */

void __fastcall sub_140942D5C(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx

  if ( a2 )
  {
    v3 = *(_QWORD *)(a2 + 48);
    if ( v3 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 48);
        if ( v5 )
          sub_140772044(a1, v5, 25);
      }
    }
  }
  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 48);
    if ( v6 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 48);
        if ( v8 )
          sub_140772044(a1, v8, 24);
      }
    }
  }
}
