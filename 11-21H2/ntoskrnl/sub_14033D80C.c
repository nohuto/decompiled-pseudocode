/*
 * XREFs of sub_14033D80C @ 0x14033D80C
 * Callers:
 *     sub_14033C5F0 @ 0x14033C5F0 (sub_14033C5F0.c)
 *     sub_14033E970 @ 0x14033E970 (sub_14033E970.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 * Callees:
 *     sub_140234F14 @ 0x140234F14 (sub_140234F14.c)
 *     sub_1402802DC @ 0x1402802DC (sub_1402802DC.c)
 *     sub_1402806A0 @ 0x1402806A0 (sub_1402806A0.c)
 *     sub_1402806E0 @ 0x1402806E0 (sub_1402806E0.c)
 *     sub_1402DBF3C @ 0x1402DBF3C (sub_1402DBF3C.c)
 *     sub_1402ED128 @ 0x1402ED128 (sub_1402ED128.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

ULONG_PTR *__fastcall sub_14033D80C(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 **v12; // rdi
  __int64 *v13; // rax
  char v14; // al
  _QWORD *v15; // rdx
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  _QWORD *v18; // rax

  if ( !byte_140C52954 )
    return &StartContext;
  v7 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174));
  v8 = sub_140317A10(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = v8;
  if ( (v8 & 0x400) != 0 && sub_1402802DC(v8) )
    return **(ULONG_PTR ***)(((a3 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( a2 < 0xFFFF800000000000uLL )
  {
    if ( !sub_1402806A0(v9) )
    {
      v10 = *((_QWORD *)KeGetCurrentThread() + 23);
      if ( *(_QWORD *)(v10 + 1264) && (v11 = sub_140234F14(v10, a3)) != 0LL )
      {
        v7 = *(_QWORD *)(v11[7] + 24LL);
        if ( v7 )
          return (ULONG_PTR *)v7;
      }
      else
      {
        v7 = 0LL;
      }
    }
    sub_1402ED128(1);
    v12 = sub_1403126F0(a2);
    sub_1402806E0(1, 0x11u);
    if ( !v12 )
      return (ULONG_PTR *)v7;
    if ( ((_DWORD)v12[6] & 0x200000) != 0 )
      return (ULONG_PTR *)v7;
    v13 = v12[9];
    if ( !v13 )
      return (ULONG_PTR *)v7;
LABEL_31:
    if ( *v13 )
      return *(ULONG_PTR **)(qword_140C51F48 + 8LL * (*(_WORD *)(*v13 + 60) & 0x3FF));
    return (ULONG_PTR *)v7;
  }
  v14 = *(_BYTE *)(a1 + 184) & 7;
  if ( v14 == 4 )
  {
    v15 = qword_140C4F5F0;
    while ( v15 )
    {
      v16 = v15[11] & 0xFFFFFFFFFFFFF000uLL;
      if ( a2 < v16 + v15[4] )
      {
        if ( a2 >= v16 )
        {
          v13 = (__int64 *)v15[6];
          goto LABEL_31;
        }
        v15 = (_QWORD *)*v15;
      }
      else
      {
        v15 = (_QWORD *)v15[1];
      }
    }
    return (ULONG_PTR *)v7;
  }
  if ( v14 == 1 )
  {
    v17 = *((_QWORD *)KeGetCurrentThread() + 23);
    if ( *(_QWORD *)(v17 + 1368) )
    {
      if ( (*(_DWORD *)(v17 + 2172) & 0x1000) == 0 )
      {
        v18 = sub_1402DBF3C(a2);
        if ( v18 )
        {
          v13 = v18 + 10;
          goto LABEL_31;
        }
      }
    }
  }
  return (ULONG_PTR *)v7;
}
