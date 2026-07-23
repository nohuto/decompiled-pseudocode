/*
 * XREFs of sub_1406CBD5C @ 0x1406CBD5C
 * Callers:
 *     sub_140726700 @ 0x140726700 (sub_140726700.c)
 *     sub_1407CE760 @ 0x1407CE760 (sub_1407CE760.c)
 * Callees:
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     sub_1402DE190 @ 0x1402DE190 (sub_1402DE190.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406CBD5C(__int64 a1, char a2, unsigned __int8 *a3, ACL **a4, _BYTE *a5)
{
  unsigned __int16 v7; // bx
  _BYTE *v9; // rax
  unsigned __int16 *v10; // rdi
  unsigned int v11; // r15d
  unsigned __int16 v12; // r9
  unsigned int v13; // ebp
  __int64 v14; // r10
  __int64 result; // rax
  unsigned __int16 v16; // cx
  __int16 v17; // dx
  __int16 v18; // ax
  __int64 v19; // r10
  __int64 v20; // r11
  ACL *PoolWithTag; // rax
  ACL *v22; // r15
  unsigned int v23; // ebp
  unsigned int v24; // eax
  char *v25; // rbx
  unsigned __int8 *v26; // r15
  char v27; // al
  __int64 v28; // rax
  char *v29; // r12
  unsigned __int8 *v30; // r14
  char *v31; // rbx
  char *v32; // rbx
  __int16 v33; // cx
  ACL *v34; // [rsp+60h] [rbp+8h] BYREF
  void *Src; // [rsp+70h] [rbp+18h]

  Src = a3;
  LOWORD(v34) = 8;
  v7 = 8;
  if ( !a1 )
  {
    v9 = a5;
    *a4 = 0LL;
    *v9 = 0;
    return 0LL;
  }
  v10 = (unsigned __int16 *)(a1 + 8);
  v11 = *(unsigned __int16 *)(a1 + 4);
  v12 = 4 * (a3[1] + 2);
  v13 = 0;
  v14 = a1 + 8;
  if ( *(_WORD *)(a1 + 4) )
  {
    while ( *(_BYTE *)v14 )
    {
      if ( a2 && *(_BYTE *)v14 == 4 )
      {
        v18 = 4 * *(unsigned __int8 *)(v14 + 13);
        if ( (unsigned __int16)(v18 + 8) <= v12 )
          v17 = v12 - v18 - 8;
        else
          v17 = v18 + 8 - v12;
        v16 = v7;
LABEL_13:
        result = sub_1402DE190(v16, v17, (__int16 *)&v34);
        if ( (int)result < 0 )
          return result;
        v7 = (unsigned __int16)v34;
      }
      result = sub_1402DE190(v7, *(_WORD *)(v14 + 2), (__int16 *)&v34);
      if ( (int)result < 0 )
        return result;
      v7 = (unsigned __int16)v34;
      ++v13;
      v14 = v20 + v19;
      if ( v13 >= v11 )
        goto LABEL_17;
    }
    result = sub_1402DE190(v7, v12, (__int16 *)&v34);
    if ( (int)result < 0 )
      return result;
    v16 = (unsigned __int16)v34;
    v17 = 4;
    goto LABEL_13;
  }
LABEL_17:
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v7, 0x63416553u);
  *a4 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *a5 = 1;
  RtlCreateAcl(PoolWithTag, v7, 3u);
  v22 = *a4;
  v23 = 0;
  LOWORD(v24) = *(_WORD *)(a1 + 4);
  v34 = v22;
  v25 = (char *)&v22[1];
  if ( (_WORD)v24 )
  {
    v26 = (unsigned __int8 *)Src;
    do
    {
      v27 = *(_BYTE *)v10;
      if ( !*(_BYTE *)v10 || a2 && v27 == 4 )
      {
        v29 = v25;
        if ( v27 )
          v30 = (unsigned __int8 *)v10 + RtlLengthSid(v10 + 6) + 12;
        else
          v30 = (unsigned __int8 *)(v10 + 4);
        *(_QWORD *)v25 = *(_QWORD *)v10;
        v31 = v25 + 12;
        memmove(v31, v26, 4LL * v26[1] + 8);
        v32 = &v31[(unsigned __int8)(4 * (v26[1] + 2))];
        memmove(v32, v30, 4LL * v30[1] + 8);
        v28 = v30[1];
        v33 = v26[1];
        *v29 = 4;
        *((_WORD *)v29 + 1) = 4 * (v28 + v33 + 7);
        *((_WORD *)v29 + 4) = 1;
        v25 = &v32[4 * v28 + 8];
        LOWORD(v28) = v10[1];
      }
      else
      {
        memmove(v25, v10, v10[1]);
        v28 = v10[1];
        v25 += v28;
      }
      ++v23;
      v10 = (unsigned __int16 *)((char *)v10 + (unsigned __int16)v28);
      v24 = *(unsigned __int16 *)(a1 + 4);
    }
    while ( v23 < v24 );
    v22 = v34;
  }
  v22->AceCount = v24;
  return 0LL;
}
