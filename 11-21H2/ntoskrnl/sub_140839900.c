/*
 * XREFs of sub_140839900 @ 0x140839900
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     RtlFreeRangeList @ 0x1408397E0 (RtlFreeRangeList.c)
 *     sub_140839A64 @ 0x140839A64 (sub_140839A64.c)
 *     RtlCopyRangeList @ 0x14083A400 (RtlCopyRangeList.c)
 */

__int64 __fastcall sub_140839900(_QWORD *a1, __int64 ****a2)
{
  int v4; // eax
  __int64 *v5; // rdx
  int v6; // ebx
  __int64 ***v7; // r8
  unsigned int v8; // ebp
  __int64 *v9; // r15
  __int64 **v10; // rsi
  unsigned __int64 v11; // rbx
  unsigned __int64 i; // rax
  int v13; // eax
  __int64 **v14; // rdx
  char v15; // cl
  __int64 ***v16; // r9
  __int64 result; // rax
  __int64 **v18; // rcx
  __int64 *v19; // rax

  if ( a2[2] )
    v4 = sub_14042A5E0(a1, *((unsigned int *)a2 + 2));
  else
    v4 = RtlCopyRangeList(a1[6], a1[5]);
  v6 = v4;
  if ( v4 < 0 )
    goto LABEL_24;
  v7 = *a2;
  v8 = 0;
  v9 = 0LL;
  v10 = **a2;
  while ( v7 != (__int64 ***)v10 )
  {
    ++v8;
    if ( !a2[2] )
    {
      v5 = v10[4];
      if ( v9 != v5 )
      {
        v9 = v10[4];
        v6 = sub_14042A5E0(a1, v5);
        if ( v6 < 0 )
          goto LABEL_24;
      }
    }
    v10[6] = 0LL;
    if ( a1[18] )
    {
      v11 = (unsigned __int64)v10[3];
      for ( i = v11 + 32LL * *((unsigned int *)v10 + 4);
            v11 < i;
            i = (unsigned __int64)&v10[3][4 * *((unsigned int *)v10 + 4)] )
      {
        v13 = sub_14042A5E0(v11, v5);
        if ( v13 < 0 )
        {
          v6 = -1073741438;
          goto LABEL_24;
        }
        v11 += 32LL;
        v10[6] = (__int64 *)((char *)v10[6] + v13);
      }
    }
    v10 = (__int64 **)*v10;
    v7 = *a2;
  }
  do
  {
    v14 = *v7;
    v15 = 1;
    if ( *v7 == (__int64 **)v7 )
      break;
    do
    {
      v16 = (__int64 ***)*v14;
      if ( *v14 == (__int64 *)v7 )
        break;
      if ( (__int64)v14[6] > (__int64)v16[6] )
      {
        v18 = (__int64 **)v14[1];
        v19 = (__int64 *)*v16;
        *v18 = (__int64 *)v16;
        v19[1] = (__int64)v14;
        *v14 = v19;
        v14[1] = (__int64 *)v16;
        v16[1] = v18;
        v15 = 0;
        *v16 = v14;
        v16 = (__int64 ***)*v14;
      }
      v14 = (__int64 **)v16;
    }
    while ( v16 != v7 );
  }
  while ( !v15 );
  v6 = sub_140839A64(a1, *a2, v8);
  if ( v6 < 0 || (result = sub_14042A5E0(a1, a1[14]), v6 = result, (int)result < 0) )
  {
LABEL_24:
    RtlFreeRangeList(a1[6]);
    return (unsigned int)v6;
  }
  return result;
}
