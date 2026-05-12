/*
 * XREFs of sub_1C00206E4 @ 0x1C00206E4
 * Callers:
 *     sub_1C0020598 @ 0x1C0020598 (sub_1C0020598.c)
 *     sub_1C00A360C @ 0x1C00A360C (sub_1C00A360C.c)
 * Callees:
 *     sub_1C00A35C4 @ 0x1C00A35C4 (sub_1C00A35C4.c)
 */

__int64 __fastcall sub_1C00206E4(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rax

  if ( (*(_BYTE *)(a1 + 24) & 4) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 48);
    if ( v4 )
    {
      v2 = v4 + 25;
      goto LABEL_4;
    }
  }
  else if ( *(_QWORD *)a1 )
  {
    v2 = *(_QWORD *)a1 + 16LL;
LABEL_4:
    sub_1C00A35C4(a2, 17LL, v2);
    return 0LL;
  }
  return 3221225485LL;
}
