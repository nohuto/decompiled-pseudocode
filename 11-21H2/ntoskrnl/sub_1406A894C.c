/*
 * XREFs of sub_1406A894C @ 0x1406A894C
 * Callers:
 *     sub_1406A7BF4 @ 0x1406A7BF4 (sub_1406A7BF4.c)
 *     sub_14099A23C @ 0x14099A23C (sub_14099A23C.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140674F0C @ 0x140674F0C (sub_140674F0C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall sub_1406A894C(__int64 a1)
{
  _QWORD **v1; // rdi
  unsigned __int64 v3; // rbx
  unsigned __int64 *v4; // rcx
  unsigned __int64 result; // rax
  _QWORD *v6; // rbp
  _QWORD *i; // rcx

  v1 = *(_QWORD ***)(a1 + 56);
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
LABEL_9:
    result = v3;
    if ( !v3 )
      return result;
    v6 = (_QWORD *)v3;
    for ( i = v1; (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( *i == v3 )
      {
        *i = *(_QWORD *)v3;
        --*(_DWORD *)(a1 + 48);
        *(_QWORD *)v3 |= 0x8000000000000002uLL;
        v3 = (unsigned __int64)i;
        goto LABEL_14;
      }
    }
    v6 = 0LL;
LABEL_14:
    if ( v6 == (_QWORD *)(a1 + 80) )
    {
      *(_DWORD *)(a1 + 636) &= ~4u;
      memset((void *)(a1 + 128), 0, 0x1C8uLL);
    }
    else
    {
      sub_140674F0C(v6 + 2);
      ExFreePoolWithTag(v6, 0x54456F50u);
    }
  }
  ++v1;
  result = *(_QWORD *)(a1 + 56);
  while ( (unsigned __int64)v1 < result + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 52) >> 5) )
  {
    v3 = (unsigned __int64)*v1;
    if ( ((unsigned __int8)*v1 & 1) == 0 )
      goto LABEL_9;
    ++v1;
  }
  return result;
}
