/*
 * XREFs of sub_140764BE0 @ 0x140764BE0
 * Callers:
 *     sub_1402DD320 @ 0x1402DD320 (sub_1402DD320.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140764C94 @ 0x140764C94 (sub_140764C94.c)
 *     sub_14076FBEC @ 0x14076FBEC (sub_14076FBEC.c)
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 */

__int64 __fastcall sub_140764BE0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rdi
  int v5; // esi
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0LL;
  v3 = *(_QWORD **)(a1 + 16);
  v4 = *(_QWORD *)(v3[39] + 40LL);
  if ( (unsigned int)(*(_DWORD *)(v4 + 300) - 789) <= 1 )
  {
    ObfDereferenceObject(v3);
    return 3221225558LL;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 24) == 8 )
    {
      if ( *(_BYTE *)(a1 + 32) )
        sub_14076FBEC(*(_QWORD *)(v3[39] + 40LL), 0x80000000LL);
      v5 = 1;
    }
    else
    {
      v5 = 2;
    }
    LOBYTE(a2) = v5 != 1;
    sub_140764C94(v4, a2);
    BYTE4(v7) = byte_140C4629A;
    LODWORD(v7) = 3;
    sub_140777578(v4, a1, (unsigned int)&v7, v5, 0, 0, 0);
    return 0LL;
  }
}
