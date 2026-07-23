/*
 * XREFs of sub_140210224 @ 0x140210224
 * Callers:
 *     sub_140290B9C @ 0x140290B9C (sub_140290B9C.c)
 *     sub_1402A9790 @ 0x1402A9790 (sub_1402A9790.c)
 *     sub_1402B7AE0 @ 0x1402B7AE0 (sub_1402B7AE0.c)
 * Callees:
 *     sub_1402103E0 @ 0x1402103E0 (sub_1402103E0.c)
 *     sub_14021087C @ 0x14021087C (sub_14021087C.c)
 *     sub_1402B4AE0 @ 0x1402B4AE0 (sub_1402B4AE0.c)
 *     sub_14057A898 @ 0x14057A898 (sub_14057A898.c)
 */

__int64 __fastcall sub_140210224(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  unsigned int v4; // r12d
  __int64 result; // rax
  _QWORD *v8; // r14
  char v9; // r9
  unsigned int v10; // r15d
  __int64 v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rdi
  char v14; // cl
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  unsigned __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdi
  char v22; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 104);
  v4 = a3;
  if ( !v3 )
    return 0LL;
  v8 = (_QWORD *)(*(unsigned int *)(a1 + 216) + v3);
  if ( !v8 )
    return 0LL;
  if ( (struct _KPRCB *)a1 == KeGetCurrentPrcb() || (v9 = 0, a2 != *(_QWORD *)(a1 + 8)) )
    v9 = 1;
  if ( !(unsigned int)sub_1402103E0(a2, (_DWORD)v8, a3, v9, 0LL) )
    return 0LL;
  result = sub_1402B4AE0(1LL, a1);
  if ( result )
    return result;
  v10 = *(_DWORD *)(v8[52] + 116LL);
  v11 = *(_QWORD *)(a1 + 32568);
  if ( (v11 & 1) != 0 )
  {
    if ( v11 == 1 )
      return 0LL;
    v12 = (_QWORD *)(v11 ^ ((a1 + 32560) | 1));
  }
  else
  {
    v12 = *(_QWORD **)(a1 + 32568);
  }
  if ( !v12 )
    return 0LL;
  v13 = v12 - 11;
  if ( *((_DWORD *)v12 + 7) >= v10 )
  {
    if ( *((_DWORD *)v12 + 7) == v10 )
    {
      if ( (int)v4 < *(char *)(a2 + 195) )
        v4 = *(char *)(a2 + 195);
      while ( 1 )
      {
        result = sub_14021087C(a1, v13, v4);
        if ( v13 == v8 )
          break;
        v22 = 0;
        if ( result )
          return result;
        v15 = (unsigned __int64)(v13 + 49);
        v16 = v13[49];
        if ( (v13[50] & 1) != 0 )
        {
          if ( !v16 )
            goto LABEL_26;
          v16 ^= v15;
        }
        if ( v16 )
        {
          result = sub_14057A898(v15, a1, v4, (_DWORD)v8, (__int64)&v22);
          v14 = v22;
LABEL_18:
          if ( result )
            return result;
          if ( v14 )
            return 0LL;
        }
LABEL_26:
        v17 = (_QWORD *)v12[1];
        v18 = v12;
        if ( v17 )
        {
          do
          {
            v12 = v17;
            v17 = (_QWORD *)*v17;
          }
          while ( v17 );
        }
        else
        {
          while ( 1 )
          {
            v12 = (_QWORD *)(v12[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v12 || (_QWORD *)*v12 == v18 )
              break;
            v18 = v12;
          }
        }
        if ( v12 )
        {
          v13 = v12 - 11;
          if ( *((_DWORD *)v12 + 7) == v10 )
            continue;
        }
        return 0LL;
      }
      v14 = 1;
      goto LABEL_18;
    }
    return 0LL;
  }
  while ( !*((_WORD *)v13 + 57) )
  {
    v19 = (unsigned __int64)(v13 + 49);
    v20 = *(_QWORD *)(v19 + 8);
    if ( (v20 & 1) != 0 )
    {
      if ( v20 == 1 )
        v21 = 0LL;
      else
        v21 = v20 ^ (v19 | 1);
    }
    else
    {
      v21 = *(_QWORD *)(v19 + 8);
    }
    v13 = (_QWORD *)(v21 - 88);
  }
  return sub_14021087C(a1, v13, 0LL);
}
