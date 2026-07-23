/*
 * XREFs of MiLimitLoaderBlockHighMemory @ 0x140B5F310
 * Callers:
 *     MiMemoryLicense @ 0x140B5F220 (MiMemoryLicense.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024BA00 (RtlRbRemoveNode.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiLimitLoaderBlockHighMemory(_RTL_RB_TREE *a1, ULONG_PTR a2)
{
  _RTL_RB_TREE *v2; // rbp
  unsigned __int64 v3; // rdi
  __int64 v4; // r14
  _RTL_BALANCED_NODE *Min; // rax
  _QWORD *Children; // rbx
  _QWORD *v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  ULONG_PTR v11; // r8
  ULONG_PTR v12; // r10
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  int v17; // eax

  v2 = a1 + 22;
  v3 = 0LL;
  v4 = KeFeatureBits & 0x2000000000LL;
  Min = a1[22].Min;
  if ( ((unsigned __int8)Min & 1) == 0 )
  {
    Children = a1[22].Min->Children;
    goto LABEL_22;
  }
  if ( Min != (_RTL_BALANCED_NODE *)1 )
  {
    Children = (_QWORD *)((unsigned __int64)Min ^ ((unsigned __int64)v2 | 1));
    while ( 1 )
    {
LABEL_22:
      if ( !Children )
        return v3;
      v13 = (_QWORD *)Children[1];
      v14 = Children;
      v15 = Children;
      if ( v13 )
      {
        v8 = (_QWORD *)*v13;
        Children = (_QWORD *)Children[1];
        if ( *v13 )
        {
          do
          {
            Children = v8;
            v8 = (_QWORD *)*v8;
          }
          while ( v8 );
        }
      }
      else
      {
        while ( 1 )
        {
          Children = (_QWORD *)(Children[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !Children || (_QWORD *)*Children == v15 )
            break;
          v15 = Children;
        }
      }
      v9 = *((_DWORD *)v14 + 6);
      if ( !v4 )
      {
        if ( v9 == 38 )
        {
          v9 = 24;
LABEL_34:
          *((_DWORD *)v14 + 6) = v9;
LABEL_10:
          v10 = v9;
          if ( v9 != 34 && v9 != 23 && v9 != 3 && v9 != 22 && v9 != 42 && v9 != 38 && v9 != 39 && v9 != 40 )
            goto LABEL_18;
          goto LABEL_27;
        }
        if ( v9 == 39 )
        {
          v9 = 2;
          goto LABEL_34;
        }
      }
      if ( v9 != 32 && v9 != 6 && v9 != 31 && v9 != 30 )
        goto LABEL_10;
LABEL_27:
      v10 = v9;
      if ( v9 == 3 )
      {
LABEL_18:
        v11 = v14[5];
        v12 = v14[4];
        if ( v12 + v11 > a2 )
        {
          if ( v10 > 0x18 || (v17 = 16777524, !_bittest(&v17, v10)) )
          {
            if ( v10 != 3 && v10 != 33 && v10 != 35 )
              KeBugCheckEx(0x1Au, 0x3030308uLL, a2, v12, v14[5]);
          }
          if ( v12 < a2 )
          {
            v11 = a2 - v12;
            v14[5] = a2 - v12;
            goto LABEL_19;
          }
          RtlRbRemoveNode(v2, (PRTL_BALANCED_NODE)v14);
        }
        else
        {
LABEL_19:
          if ( v12 + v11 - 1 > v3 && v10 != 3 )
            v3 = v12 + v11 - 1;
        }
      }
    }
  }
  return v3;
}
