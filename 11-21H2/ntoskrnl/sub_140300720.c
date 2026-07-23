/*
 * XREFs of sub_140300720 @ 0x140300720
 * Callers:
 *     sub_1403005E0 @ 0x1403005E0 (sub_1403005E0.c)
 * Callees:
 *     sub_140234F78 @ 0x140234F78 (sub_140234F78.c)
 *     sub_1403008B0 @ 0x1403008B0 (sub_1403008B0.c)
 */

__int64 __fastcall sub_140300720(unsigned int *a1, __int64 a2, unsigned int a3, unsigned __int64 *a4)
{
  int v6; // r8d
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned int v11; // ebp
  __int64 v12; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  unsigned int *v16; // r14
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  v19 = 0LL;
  if ( !a2 )
  {
    v14 = 40LL * *a1;
    if ( is_mul_ok(0x28uLL, *a1) )
    {
      v10 = v14 + 16;
      if ( v14 < 0xFFFFFFFFFFFFFFF0uLL )
      {
        v15 = *((_QWORD *)a1 + 1);
        v16 = a1 + 2;
        if ( (unsigned int *)v15 == a1 + 2 )
          goto LABEL_15;
        while ( 1 )
        {
          v17 = (v10 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v17 < v10 || v17 + *(unsigned __int16 *)(v15 + 32) < v17 )
            break;
          v19 = v17 + *(unsigned __int16 *)(v15 + 32);
          v6 = sub_140234F78(v15, &v19);
          if ( v6 < 0 )
            return (unsigned int)v6;
          v15 = *(_QWORD *)v15;
          v10 = v19;
          if ( (unsigned int *)v15 == v16 )
            goto LABEL_15;
        }
      }
    }
    return (unsigned int)-1073741675;
  }
  v9 = 40LL * a3;
  if ( !is_mul_ok(0x28uLL, a3) )
    return (unsigned int)-1073741675;
  v10 = v9 + 16;
  if ( v9 >= 0xFFFFFFFFFFFFFFF0uLL )
    return (unsigned int)-1073741675;
  v11 = 0;
  if ( !a3 )
  {
LABEL_15:
    *a4 = v10;
    return (unsigned int)v6;
  }
  while ( 1 )
  {
    v12 = sub_1403008B0(a1, a2 + 16LL * v11);
    if ( !v12 )
      return (unsigned int)-1073741275;
    v18 = (v10 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v18 < v10 || v18 + *(unsigned __int16 *)(v12 + 32) < v18 )
      return (unsigned int)-1073741675;
    v19 = v18 + *(unsigned __int16 *)(v12 + 32);
    v6 = sub_140234F78(v12, &v19);
    if ( v6 < 0 )
      return (unsigned int)v6;
    v10 = v19;
    if ( ++v11 >= a3 )
      goto LABEL_15;
  }
}
