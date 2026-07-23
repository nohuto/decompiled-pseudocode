/*
 * XREFs of sub_1407C82B0 @ 0x1407C82B0
 * Callers:
 *     sub_14065BB1C @ 0x14065BB1C (sub_14065BB1C.c)
 *     sub_14065BDD8 @ 0x14065BDD8 (sub_14065BDD8.c)
 *     sub_14065CBDC @ 0x14065CBDC (sub_14065CBDC.c)
 *     sub_1406BF278 @ 0x1406BF278 (sub_1406BF278.c)
 *     sub_1407C3070 @ 0x1407C3070 (sub_1407C3070.c)
 *     sub_1407C5CB0 @ 0x1407C5CB0 (sub_1407C5CB0.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_1407C82B0(ULONG_PTR BugCheckParameter3, __int16 *a2, unsigned int a3)
{
  __int16 v4; // ax
  __int64 v8; // rbx
  __int64 v9; // rax
  _WORD *v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = 0xFFFFFFFFLL;
  v4 = *a2;
  if ( *a2 != 26994 )
  {
LABEL_2:
    if ( ((v4 - 26220) & 0xFDFF) == 0 )
      return *(unsigned int *)&a2[4 * a3 + 2];
    return *(unsigned int *)&a2[2 * a3 + 2];
  }
  v8 = 0LL;
  if ( !a2[1] )
    return *(unsigned int *)&a2[2 * a3 + 2];
  while ( 1 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v9 = sub_1406BF400(BugCheckParameter3, *(unsigned int *)&a2[2 * v8 + 2], &v13);
    else
      v9 = sub_1407C9820(BugCheckParameter3);
    v10 = (_WORD *)v9;
    if ( !v9 )
      return 0xFFFFFFFFLL;
    v11 = *(unsigned __int16 *)(v9 + 2);
    if ( a3 < v11 )
      break;
    a3 -= v11;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v13);
    else
      sub_1407C97C0(BugCheckParameter3, &v13);
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= (unsigned __int16)a2[1] )
    {
      v4 = *a2;
      goto LABEL_2;
    }
  }
  if ( ((*v10 - 26220) & 0xFDFF) != 0 )
    v12 = *(_DWORD *)&v10[2 * a3 + 2];
  else
    v12 = *(_DWORD *)&v10[4 * a3 + 2];
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v13);
  else
    sub_1407C97C0(BugCheckParameter3, &v13);
  return v12;
}
