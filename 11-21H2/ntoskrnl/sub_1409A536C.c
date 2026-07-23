/*
 * XREFs of sub_1409A536C @ 0x1409A536C
 * Callers:
 *     sub_1409A40F8 @ 0x1409A40F8 (sub_1409A40F8.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409A536C(__int64 a1)
{
  _QWORD **v1; // rdi
  unsigned __int64 v3; // rbx
  unsigned __int64 *v4; // rcx
  void *v5; // rcx
  _QWORD **v6; // r14
  _QWORD *i; // rcx
  _QWORD **v8; // rsi
  _QWORD *v9; // rcx
  _QWORD *v10; // rax

  v1 = *(_QWORD ***)(a1 + 280);
  v3 = (unsigned __int64)v1;
  while ( 1 )
  {
    v4 = (unsigned __int64 *)v3;
    if ( !v3 )
      break;
    v3 = *(_QWORD *)v3;
    if ( (v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v3 = *v4;
    if ( (v3 & 1) != 0 )
      break;
LABEL_13:
    if ( !v3 )
      goto LABEL_10;
    v6 = (_QWORD **)v3;
    for ( i = v1; (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( *i == v3 )
      {
        *i = *(_QWORD *)v3;
        --*(_DWORD *)(a1 + 272);
        *(_QWORD *)v3 |= 0x8000000000000002uLL;
        v3 = (unsigned __int64)i;
        goto LABEL_20;
      }
    }
    v6 = 0LL;
LABEL_20:
    v8 = v6 + 6;
    while ( 1 )
    {
      v9 = *v8;
      if ( *v8 == v8 )
        break;
      if ( (_QWORD **)v9[1] != v8 || (v10 = (_QWORD *)*v9, *(_QWORD **)(*v9 + 8LL) != v9) )
        __fastfail(3u);
      *v8 = v10;
      v10[1] = v8;
      ExFreePoolWithTag(v9 - 1, 0x52507454u);
    }
    ExFreePoolWithTag(v6, 0x52507454u);
  }
  for ( ++v1; (unsigned __int64)v1 < *(_QWORD *)(a1 + 280) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 276) >> 5); ++v1 )
  {
    v3 = (unsigned __int64)*v1;
    if ( ((unsigned __int8)*v1 & 1) == 0 )
      goto LABEL_13;
  }
LABEL_10:
  v5 = *(void **)(a1 + 280);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x52507454u);
}
