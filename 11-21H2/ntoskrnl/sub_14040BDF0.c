/*
 * XREFs of sub_14040BDF0 @ 0x14040BDF0
 * Callers:
 *     sub_14040C1C0 @ 0x14040C1C0 (sub_14040C1C0.c)
 *     sub_14040C270 @ 0x14040C270 (sub_14040C270.c)
 *     sub_1404110E0 @ 0x1404110E0 (sub_1404110E0.c)
 * Callees:
 *     sub_140400B8C @ 0x140400B8C (sub_140400B8C.c)
 *     sub_140400BBC @ 0x140400BBC (sub_140400BBC.c)
 *     sub_140400C00 @ 0x140400C00 (sub_140400C00.c)
 *     sub_140400C30 @ 0x140400C30 (sub_140400C30.c)
 *     sub_140400C78 @ 0x140400C78 (sub_140400C78.c)
 *     sub_140400C90 @ 0x140400C90 (sub_140400C90.c)
 *     sub_140400CF8 @ 0x140400CF8 (sub_140400CF8.c)
 *     sub_140400D88 @ 0x140400D88 (sub_140400D88.c)
 *     sub_140400EF0 @ 0x140400EF0 (sub_140400EF0.c)
 *     sub_140400F34 @ 0x140400F34 (sub_140400F34.c)
 *     sub_140400F4C @ 0x140400F4C (sub_140400F4C.c)
 *     sub_140401350 @ 0x140401350 (sub_140401350.c)
 *     sub_140401368 @ 0x140401368 (sub_140401368.c)
 *     sub_14040BCF0 @ 0x14040BCF0 (sub_14040BCF0.c)
 *     sub_14040BD74 @ 0x14040BD74 (sub_14040BD74.c)
 *     sub_14040C320 @ 0x14040C320 (sub_14040C320.c)
 *     sub_14040C7CC @ 0x14040C7CC (sub_14040C7CC.c)
 *     sub_14040CB70 @ 0x14040CB70 (sub_14040CB70.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14056AF38 @ 0x14056AF38 (sub_14056AF38.c)
 */

__int64 __fastcall sub_14040BDF0(__int64 a1, const void *a2, unsigned int *a3, char a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r14d
  __int64 v8; // rdi
  unsigned int *v9; // r15
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // rsi
  unsigned __int8 v16; // di
  BOOL v17; // edi
  int v18; // ebx
  __int64 v19; // rbx
  unsigned int *v20; // rdi
  __int64 v21; // rax
  unsigned int *v22; // rax
  void *v24; // [rsp+30h] [rbp-68h]
  __int64 v25; // [rsp+38h] [rbp-60h]
  unsigned int *v26; // [rsp+40h] [rbp-58h]
  int v30; // [rsp+B8h] [rbp+20h]
  __int64 v31; // [rsp+C0h] [rbp+28h]
  int v32; // [rsp+C0h] [rbp+28h]

  v6 = 0;
  if ( (*(_BYTE *)(a1 + 12) & 9) != 9 )
    sub_14056AF38(1970172784LL);
  v8 = (unsigned int)sub_140401368(a1);
  v25 = sub_140400F4C();
  v24 = (void *)sub_140400F4C();
  v9 = (unsigned int *)sub_140400F4C();
  v10 = a6 - (unsigned int)(4 * v8);
  v26 = (unsigned int *)sub_140400F4C();
  v11 = v8 + v8 + v8 + v8 + a5;
  v12 = (unsigned int)sub_140401350();
  v13 = sub_140400BBC();
  v31 = sub_140400BBC();
  sub_140400BBC();
  v14 = v10 - (unsigned int)(3 * v12);
  v15 = v12 + v12 + v12 + v11;
  v30 = a4 & 1;
  if ( !v30 )
    sub_14040C7CC(a1, v25, 6, v15, v14);
  if ( a2 != v24 )
    memmove(v24, a2, *(unsigned int *)(a1 + 16));
  sub_14040BD74(a1, v24, v13);
  sub_140400C30();
  sub_140400B8C();
  v16 = sub_140400C78(v31);
  v17 = (((unsigned __int8)sub_140400C78(v13) | v16) & 1) == 0;
  v18 = v17 | sub_140400C90();
  if ( v18 | (unsigned int)sub_140400C90() )
  {
    return 209715726;
  }
  else
  {
    v19 = v31;
    if ( (unsigned int)sub_140400C90() )
    {
      sub_140400F34();
    }
    else
    {
      sub_14040BCF0(1u, (_DWORD *)a1, v9);
      v20 = v26;
      sub_14040BCF0(0, (_DWORD *)a1, v26);
      while ( 1 )
      {
        while ( (sub_140400C78(v13) & 1) == 0 )
        {
          sub_140400C00();
          sub_140400EF0(a1, (__int64)v9);
        }
        if ( (unsigned int)sub_140400C90() )
          break;
        v32 = sub_140400D88();
        if ( (unsigned int)sub_140400C90() )
          return 209715726;
        if ( v32 )
        {
          sub_140400CF8();
          LODWORD(v22) = (_DWORD)v9;
        }
        else
        {
          sub_140400B8C();
          v21 = v19;
          v19 = v13;
          v13 = v21;
          v22 = v20;
          v20 = v9;
          v9 = v22;
        }
        sub_14040CB70(a1, (_DWORD)v22, (_DWORD)v20, (_DWORD)v22, v15, v14);
      }
      sub_14040C320(a1, v9, v24, v20, v15, v14);
      if ( v30 )
      {
        if ( v9 != a3 )
          memmove(a3, v9, *(unsigned int *)(a1 + 16));
      }
      else
      {
        sub_14040C320(a1, v9, v25, a3, v15, v14);
      }
    }
  }
  return v6;
}
