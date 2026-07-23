/*
 * XREFs of sub_140881A9A @ 0x140881A9A
 * Callers:
 *     sub_1405400A4 @ 0x1405400A4 (sub_1405400A4.c)
 *     sub_140758DB8 @ 0x140758DB8 (sub_140758DB8.c)
 * Callees:
 *     sub_140281750 @ 0x140281750 (sub_140281750.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_14030EA70 @ 0x14030EA70 (sub_14030EA70.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1407103B0 @ 0x1407103B0 (sub_1407103B0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140881A9A(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rax
  char *v4; // rbx
  __int64 v6; // rcx
  char *v7; // rbp
  unsigned int i; // edi
  const void **v9; // rax
  const void **v10; // rbx
  int v11; // esi
  unsigned int v12; // eax
  unsigned int v13; // [rsp+60h] [rbp+18h] BYREF
  int v14; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0;
  v3 = sub_14030E7C0(a1, 2, &v14);
  v4 = (char *)v3;
  if ( !v3 )
    return 3221225793LL;
  if ( (*(_DWORD *)(v3 + 48) & 0x200000) != 0 || (v6 = **(_QWORD **)(v3 + 72), (*(_DWORD *)(v6 + 56) & 0x20) == 0) )
  {
    sub_14030EA70((char *)v3);
    return 3221225545LL;
  }
  else
  {
    v7 = (char *)sub_140281750(v6);
    sub_14030EA70(v4);
    for ( i = 1040; ; i = v13 )
    {
      v9 = (const void **)sub_1402828F0(256, i, 0x20206D4Du);
      v10 = v9;
      if ( !v9 )
        break;
      v13 = 0;
      v11 = sub_1407103B0(v7, (__int64)v9, i, &v13);
      if ( v11 >= 0 )
      {
        v12 = *(unsigned __int16 *)v10;
        *(_WORD *)(a2 + 2) = v12;
        *(_WORD *)a2 = v12;
        *(_QWORD *)(a2 + 8) = v10;
        memmove(v10, v10[1], v12);
        goto LABEL_12;
      }
      ExFreePoolWithTag(v10, 0);
      if ( v13 <= i )
        goto LABEL_12;
    }
    v11 = -1073741801;
LABEL_12:
    ObfDereferenceObjectWithTag(v7, 0x63536D4Du);
    return (unsigned int)v11;
  }
}
