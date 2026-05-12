/*
 * XREFs of sub_1C0013370 @ 0x1C0013370
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0008570 @ 0x1C0008570 (sub_1C0008570.c)
 *     sub_1C0013434 @ 0x1C0013434 (sub_1C0013434.c)
 */

__int64 __fastcall sub_1C0013370(_QWORD *a1, __int64 a2, __int64 a3, _BYTE *a4, _DWORD *a5)
{
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdi

  *a4 = 0;
  if ( (*(_BYTE *)(a2 + 3) & 0x3F) != 1 )
    return sub_1C0008570(*(_BYTE *)(a2 + 3));
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v7 = *(_DWORD *)(a2 + 60);
  else
    v7 = *(_DWORD *)(a2 + 16);
  if ( v7 < 0x23C )
  {
    *a4 = 1;
    *a5 = 572;
    return 3221225507LL;
  }
  else
  {
    v8 = sub_1C0007CF4(64LL, 50LL, 842096978LL, *(_QWORD *)(*a1 + 8LL));
    *(_QWORD *)(a3 + 72) = v8;
    if ( v8 )
    {
      v9 = a1[5];
      sub_1C0013434(v8, v9 + 114, 40LL);
      sub_1C0013434(*(_QWORD *)(a3 + 72) + 41LL, v9 + 106, 8LL);
      if ( !byte_1C0093AE4 && *(char *)(v9 + 198) < 0 )
        *(_WORD *)(a3 + 56) |= 1u;
      return 0LL;
    }
    else
    {
      return 3221225495LL;
    }
  }
}
