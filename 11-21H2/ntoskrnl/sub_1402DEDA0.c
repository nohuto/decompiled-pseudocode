/*
 * XREFs of sub_1402DEDA0 @ 0x1402DEDA0
 * Callers:
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x140389560 (RtlDeleteElementGenericTableAvlEx.c)
 * Callees:
 *     sub_1402DF0F8 @ 0x1402DF0F8 (sub_1402DF0F8.c)
 */

__int64 __fastcall sub_1402DEDA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 **v5; // rbx
  unsigned __int8 *v6; // rcx
  char v7; // dl
  unsigned __int8 *v8; // rax
  unsigned __int8 *v9; // rcx
  unsigned __int8 *v10; // rcx
  unsigned __int8 *v11; // rdi
  __int64 result; // rax
  bool v13; // zf
  unsigned __int8 **j; // rax
  unsigned __int8 *v15; // rcx
  unsigned __int8 ***v16; // rax
  unsigned __int8 **i; // rax

  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 && (v5 = *(unsigned __int8 ***)(a2 + 16)) != 0LL )
  {
    if ( *(char *)(a2 + 24) < 0 )
    {
      v5 = *(unsigned __int8 ***)(a2 + 8);
      for ( i = *(unsigned __int8 ***)(v2 + 16); i; i = (unsigned __int8 **)i[2] )
        v5 = i;
    }
    else
    {
      for ( j = (unsigned __int8 **)v5[1]; j; j = (unsigned __int8 **)j[1] )
        v5 = j;
    }
  }
  else
  {
    v5 = (unsigned __int8 **)a2;
  }
  v6 = v5[1];
  v7 = -1;
  v8 = *v5;
  if ( v6 )
  {
    if ( *((unsigned __int8 ***)v8 + 1) == v5 )
    {
      *((_QWORD *)v8 + 1) = v6;
    }
    else
    {
      *((_QWORD *)v8 + 2) = v6;
      v7 = 1;
    }
    v10 = v5[1];
  }
  else
  {
    v9 = v5[2];
    if ( *((unsigned __int8 ***)v8 + 1) == v5 )
    {
      *((_QWORD *)v8 + 1) = v9;
    }
    else
    {
      *((_QWORD *)v8 + 2) = v9;
      v7 = 1;
    }
    v10 = v5[2];
    if ( !v10 )
      goto LABEL_7;
  }
  *(_QWORD *)v10 = *v5;
LABEL_7:
  *(_BYTE *)(a1 + 24) = 0;
  v11 = *v5;
  while ( 1 )
  {
    result = v11[24];
    if ( (_BYTE)result == v7 )
    {
      v11[24] = 0;
      goto LABEL_15;
    }
    if ( !(_BYTE)result )
      break;
    result = sub_1402DF0F8(v11);
    if ( (_DWORD)result )
      goto LABEL_12;
    v11 = *(unsigned __int8 **)v11;
LABEL_15:
    v7 = 1;
    v13 = *(_QWORD *)(*(_QWORD *)v11 + 16LL) == (_QWORD)v11;
    v11 = *(unsigned __int8 **)v11;
    if ( !v13 )
      v7 = -1;
  }
  v11[24] = -v7;
  if ( *(_BYTE *)(a1 + 24) )
    --*(_DWORD *)(a1 + 48);
LABEL_12:
  if ( (unsigned __int8 **)a2 != v5 )
  {
    *(_OWORD *)v5 = *(_OWORD *)a2;
    *((_OWORD *)v5 + 1) = *(_OWORD *)(a2 + 16);
    v15 = *v5;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) == a2 )
      *((_QWORD *)v15 + 1) = v5;
    else
      *((_QWORD *)v15 + 2) = v5;
    v16 = (unsigned __int8 ***)v5[1];
    if ( v16 )
      *v16 = v5;
    result = (__int64)v5[2];
    if ( result )
      *(_QWORD *)result = v5;
  }
  return result;
}
