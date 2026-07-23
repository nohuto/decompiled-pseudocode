/*
 * XREFs of sub_140B1B910 @ 0x140B1B910
 * Callers:
 *     sub_140B1B688 @ 0x140B1B688 (sub_140B1B688.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall sub_140B1B910(_RTL_RB_TREE *a1, ULONG_PTR a2)
{
  _RTL_RB_TREE *v2; // rbp
  unsigned __int64 v3; // rdi
  __int64 v4; // r14
  PRTL_BALANCED_NODE Min; // rax
  _QWORD *Children; // rbx
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r8
  ULONG_PTR v13; // r8
  ULONG_PTR v14; // r9
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  __int64 v18; // r10

  v2 = a1 + 22;
  v3 = 0LL;
  v4 = qword_140D068D8 & 0x2000000000LL;
  Min = a1[22].Min;
  if ( ((unsigned __int8)Min & 1) == 0 )
  {
    Children = a1[22].Min->Children;
    goto LABEL_21;
  }
  if ( Min != (PRTL_BALANCED_NODE)1 )
  {
    Children = (_QWORD *)((unsigned __int64)Min ^ ((unsigned __int64)v2 | 1));
    while ( 1 )
    {
LABEL_21:
      if ( !Children )
        return v3;
      v15 = (_QWORD *)Children[1];
      v16 = Children;
      v8 = Children;
      if ( v15 )
      {
        v9 = (_QWORD *)*v15;
        Children = (_QWORD *)Children[1];
        if ( *v15 )
        {
          do
          {
            Children = v9;
            v9 = (_QWORD *)*v9;
          }
          while ( v9 );
        }
      }
      else
      {
        while ( 1 )
        {
          Children = (_QWORD *)(Children[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !Children || (_QWORD *)*Children == v8 )
            break;
          v8 = Children;
        }
      }
      v10 = *((unsigned int *)v16 + 6);
      if ( v4 )
        break;
      if ( (_DWORD)v10 == 38 )
      {
        v10 = 24LL;
      }
      else
      {
        if ( (_DWORD)v10 != 39 )
          break;
        v10 = 2LL;
      }
      *((_DWORD *)v16 + 6) = v10;
LABEL_13:
      if ( (unsigned int)v10 <= 0x22 && (v11 = 0x400800008LL, _bittest64(&v11, v10)) )
      {
LABEL_24:
        if ( (_DWORD)v10 == 3 )
        {
LABEL_17:
          v13 = v16[5];
          v14 = v16[4];
          if ( v14 + v13 > a2 )
          {
            if ( (unsigned int)v10 > 0x23 || (v18 = 0xA0100013CLL, !_bittest64(&v18, v10)) )
              KeBugCheckEx(0x1Au, 0x3030308uLL, a2, v14, v16[5]);
            if ( v14 < a2 )
            {
              v13 = a2 - v14;
              v16[5] = a2 - v14;
              goto LABEL_18;
            }
            RtlRbRemoveNode(v2, (PRTL_BALANCED_NODE)v16);
          }
          else
          {
LABEL_18:
            if ( v14 + v13 - 1 > v3 && (_DWORD)v10 != 3 )
              v3 = v14 + v13 - 1;
          }
        }
      }
      else
      {
        if ( (unsigned int)v10 > 0x2A )
          goto LABEL_17;
        v12 = 0x5C000400000LL;
        if ( !_bittest64(&v12, v10) )
          goto LABEL_17;
      }
    }
    if ( (_DWORD)v10 == 32 || (_DWORD)v10 == 6 || (_DWORD)v10 == 30 || (_DWORD)v10 == 31 )
      goto LABEL_24;
    goto LABEL_13;
  }
  return v3;
}
