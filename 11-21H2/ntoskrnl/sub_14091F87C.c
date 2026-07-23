/*
 * XREFs of sub_14091F87C @ 0x14091F87C
 * Callers:
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 *     sub_1409207EC @ 0x1409207EC (sub_1409207EC.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14079B22C @ 0x14079B22C (sub_14079B22C.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14091FA94 @ 0x14091FA94 (sub_14091FA94.c)
 */

__int64 __fastcall sub_14091F87C(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  ULONG_PTR v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r14
  unsigned int i; // esi
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0xFFFFFFFFLL;
  result = sub_14091FA94(BugCheckParameter2);
  if ( (int)result >= 0 )
  {
    if ( (*(_BYTE *)(a3 + 2) & 2) == 0 )
    {
      if ( *(_DWORD *)(a3 + 36) )
      {
        v6 = *(unsigned int *)(a3 + 40);
        if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
          v7 = sub_1406BF400(BugCheckParameter2, v6, &v10);
        else
          v7 = sub_1407C9820(BugCheckParameter2, v6, (unsigned int *)&v10);
        v8 = v7;
        for ( i = 0; i < *(_DWORD *)(a3 + 36); ++i )
          sub_14079B22C(BugCheckParameter2, *(unsigned int *)(v8 + 4LL * i));
        if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
          sub_1406BF450(BugCheckParameter2, &v10);
        else
          sub_1407C97C0(BugCheckParameter2, (unsigned int *)&v10);
        sub_14079BD98(BugCheckParameter2, *(unsigned int *)(a3 + 40));
      }
      *(_DWORD *)(a3 + 40) = -1;
      *(_DWORD *)(a3 + 36) = 0;
      if ( *(_WORD *)(a3 + 74) )
      {
        sub_14079BD98(BugCheckParameter2, *(unsigned int *)(a3 + 48));
        *(_DWORD *)(a3 + 48) = -1;
        *(_WORD *)(a3 + 74) = 0;
      }
    }
    return 0LL;
  }
  return result;
}
