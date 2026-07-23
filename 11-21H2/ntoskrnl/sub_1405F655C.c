/*
 * XREFs of sub_1405F655C @ 0x1405F655C
 * Callers:
 *     sub_1405F655C @ 0x1405F655C (sub_1405F655C.c)
 *     sub_1405FA590 @ 0x1405FA590 (sub_1405FA590.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405F655C @ 0x1405F655C (sub_1405F655C.c)
 */

__int64 __fastcall sub_1405F655C(__int64 a1, const void *a2, _QWORD **a3, int a4, __int64 a5)
{
  _QWORD *v5; // rsi
  _QWORD *v9; // rcx
  _QWORD *v10; // rdi
  int v11; // ecx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rdx

  v5 = *a3;
  if ( *a3 )
  {
    v9 = *a3;
    *a3 = (_QWORD *)*v5;
    v10 = v5;
    memmove(v9, a2, 0x1000uLL);
  }
  else
  {
    v10 = a2;
  }
  if ( *((_BYTE *)v10 + 3) )
  {
    v11 = sub_14042A5E0(v10, a5);
    goto LABEL_20;
  }
  v12 = (unsigned __int64)&v10[2 * (unsigned __int16)*(_DWORD *)v10 + 2];
  v13 = (unsigned __int64)(v10 + 2);
  if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) != -1 && *((_BYTE *)v10 + 2) == 2 )
  {
    for ( ; v13 <= v12; v13 += 16LL )
    {
      v11 = sub_14042A5E0(0LL, a5);
      if ( v11 < 0 )
        goto LABEL_20;
    }
LABEL_18:
    v11 = sub_14042A5E0(v10, a5);
    if ( v11 >= 0 )
      v11 = 0;
    goto LABEL_20;
  }
  if ( v13 > v12 )
    goto LABEL_18;
  v14 = v10 + 1;
  while ( 1 )
  {
    v15 = (_QWORD *)(v13 - 8);
    if ( v13 <= (unsigned __int64)(v10 + 2) )
      v15 = v14;
    v11 = sub_1405F655C(a1, *v15, (_DWORD)a3, a4, a5, (__int64)v15);
    if ( v11 < 0 )
      break;
    v13 += 16LL;
    v14 = v10 + 1;
    if ( v13 > v12 )
      goto LABEL_18;
  }
LABEL_20:
  if ( v5 )
  {
    *v5 = *a3;
    *a3 = v5;
  }
  return (unsigned int)v11;
}
