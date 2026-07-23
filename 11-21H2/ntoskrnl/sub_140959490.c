/*
 * XREFs of sub_140959490 @ 0x140959490
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402DE7E4 @ 0x1402DE7E4 (sub_1402DE7E4.c)
 *     sub_1402DF554 @ 0x1402DF554 (sub_1402DF554.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 *     sub_140779C10 @ 0x140779C10 (sub_140779C10.c)
 *     sub_14077C610 @ 0x14077C610 (sub_14077C610.c)
 *     sub_14095F204 @ 0x14095F204 (sub_14095F204.c)
 */

__int64 __fastcall sub_140959490(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  __int64 *v4; // r12
  bool v5; // zf
  _DWORD *v8; // rdx
  unsigned int v9; // r8d
  void *v10; // r15
  void *v11; // r14
  int v12; // edi
  _QWORD *v13; // rax
  int v14; // r8d
  _DWORD *v15; // rax
  int v16; // eax
  void *v18; // [rsp+30h] [rbp-20h] BYREF
  __int128 v19; // [rsp+38h] [rbp-18h] BYREF
  void *v20; // [rsp+88h] [rbp+38h] BYREF

  v4 = (__int64 *)(a2 + 16);
  v5 = *((_QWORD *)a2 + 4) == 0LL;
  v19 = 0LL;
  if ( v5 || *((_DWORD *)a2 + 10) < 0x20u )
    return 3221225507LL;
  v8 = (_DWORD *)*((_QWORD *)a2 + 2);
  if ( !v8 )
    return 3221225485LL;
  v9 = *((_DWORD *)a2 + 6);
  if ( v9 < 0x28 )
    return 3221225485LL;
  if ( *v8 != 1 )
    return 3221225485LL;
  if ( v8[4] != 1 )
    return 3221225485LL;
  WORD1(v19) = *a2;
  LOWORD(v19) = WORD1(v19);
  if ( (unsigned __int16)(WORD1(v19) - 1) > 0x18Fu || (BYTE2(v19) & 1) != 0 )
    return 3221225485LL;
  v18 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v20 = 0LL;
  *((_QWORD *)&v19 + 1) = 0LL;
  v12 = sub_14077C610(&v18, v8, v9, 1u, a4, 1);
  if ( v12 >= 0 )
  {
    v12 = sub_1402DE7E4((__int64 *)&v20, *((_DWORD *)a2 + 10), a4, *v4);
    if ( v12 < 0 || (v12 = sub_14077C610((void **)&v19 + 1, *((void **)a2 + 1), *a2, 2u, a4, 1), v12 < 0) )
    {
      v10 = v20;
    }
    else
    {
      v12 = -1073741810;
      sub_14077572C(1);
      v13 = sub_140779C10((__int64)&v19, 0x43706E50u);
      v10 = v20;
      v11 = v13;
      if ( v13 )
      {
        v15 = *(_DWORD **)(v13[39] + 40LL);
        if ( v15 )
        {
          if ( v15 != qword_140C46278 && (unsigned int)(v15[75] - 789) > 1 )
          {
            v12 = sub_14095F204((_DWORD)v11, (_DWORD)v18, v14, (_DWORD)v20, *((_DWORD *)a2 + 10));
            v16 = sub_14077C610((void **)v4, v10, *((_DWORD *)a2 + 10), 1u, a4, 0);
            if ( v16 < 0 )
              v12 = v16;
          }
        }
      }
      sub_140775698(1);
    }
  }
  sub_1402DF554(a4, v18);
  sub_1402DF554(a4, v10);
  sub_1402DF554(a4, *((void **)&v19 + 1));
  if ( v11 )
    ObfDereferenceObjectWithTag(v11, 0x43706E50u);
  *((_DWORD *)a2 + 12) = v12;
  return (unsigned int)v12;
}
