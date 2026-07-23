/*
 * XREFs of sub_14091FA94 @ 0x14091FA94
 * Callers:
 *     sub_14091F87C @ 0x14091F87C (sub_14091F87C.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_140716D50 @ 0x140716D50 (sub_140716D50.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14091FA94(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, __int64 a3)
{
  __int64 v3; // r14
  bool v4; // zf
  int v7; // edi
  ULONG_PTR v8; // rdx
  ULONG_PTR v9; // rdx
  ULONG_PTR v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r15
  ULONG_PTR v13; // rdx
  __int64 v14; // rax
  __int64 *v15; // rdx
  __int64 v16; // r15
  ULONG_PTR v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r13
  unsigned int v21[4]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v22; // [rsp+80h] [rbp+50h] BYREF
  __int64 v23; // [rsp+88h] [rbp+58h] BYREF

  v3 = 0LL;
  v21[0] = -1;
  v4 = (*(_BYTE *)(a3 + 2) & 2) == 0;
  v21[1] = 0;
  v22 = 0xFFFFFFFFLL;
  v23 = 0xFFFFFFFFLL;
  if ( !v4 )
    return 0;
  v7 = sub_14071F300(BugCheckParameter3, a2, 0);
  if ( v7 >= 0 )
  {
    v8 = *(unsigned int *)(a3 + 48);
    if ( (_DWORD)v8 == -1 || (v7 = sub_14071F300(BugCheckParameter3, v8, 0), v7 >= 0) )
    {
      v9 = *(unsigned int *)(a3 + 44);
      if ( (_DWORD)v9 != -1 )
      {
        v7 = sub_14071F300(BugCheckParameter3, v9, 0);
        if ( v7 < 0 )
          return (unsigned int)v7;
        v10 = *(unsigned int *)(a3 + 44);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          v11 = sub_1406BF400(BugCheckParameter3, v10, &v22);
        else
          v11 = sub_1407C9820(BugCheckParameter3, v10, (unsigned int *)&v22);
        v12 = v11;
        v7 = sub_14071F300(BugCheckParameter3, *(unsigned int *)(v11 + 4), 0);
        if ( v7 < 0 || (v7 = sub_14071F300(BugCheckParameter3, *(unsigned int *)(v12 + 8), 0), v7 < 0) )
        {
          if ( !v12 )
            return (unsigned int)v7;
          v15 = &v22;
LABEL_36:
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            sub_1406BF450(BugCheckParameter3, v15);
          else
            sub_1407C97C0(BugCheckParameter3, (unsigned int *)v15);
          return (unsigned int)v7;
        }
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          sub_1406BF450(BugCheckParameter3, &v22);
        else
          sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v22);
      }
      if ( !*(_DWORD *)(a3 + 36) )
        goto LABEL_33;
      v7 = sub_14071F300(BugCheckParameter3, *(unsigned int *)(a3 + 40), 0);
      if ( v7 < 0 )
        return (unsigned int)v7;
      v13 = *(unsigned int *)(a3 + 40);
      v14 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
          ? sub_1406BF400(BugCheckParameter3, v13, v21)
          : sub_1407C9820(BugCheckParameter3, v13, v21);
      v16 = 0LL;
      v3 = v14;
      if ( *(_DWORD *)(a3 + 36) )
      {
        while ( 1 )
        {
          v7 = sub_14071F300(BugCheckParameter3, *(unsigned int *)(v3 + 4 * v16), 0);
          if ( v7 < 0 )
            break;
          v17 = *(unsigned int *)(v3 + 4 * v16);
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            v18 = sub_1406BF400(BugCheckParameter3, v17, &v23);
          else
            v18 = sub_1407C9820(BugCheckParameter3, v17, (unsigned int *)&v23);
          v19 = v18;
          v7 = sub_140716D50(BugCheckParameter3, v18);
          if ( v7 < 0 )
          {
            if ( v19 )
            {
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                sub_1406BF450(BugCheckParameter3, &v23);
              else
                sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v23);
            }
            break;
          }
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            sub_1406BF450(BugCheckParameter3, &v23);
          else
            sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v23);
          v16 = (unsigned int)(v16 + 1);
          if ( (unsigned int)v16 >= *(_DWORD *)(a3 + 36) )
            goto LABEL_33;
        }
      }
      else
      {
LABEL_33:
        v7 = 0;
      }
      if ( !v3 )
        return (unsigned int)v7;
      v15 = (__int64 *)v21;
      goto LABEL_36;
    }
  }
  return (unsigned int)v7;
}
