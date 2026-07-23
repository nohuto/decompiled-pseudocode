/*
 * XREFs of sub_14079781C @ 0x14079781C
 * Callers:
 *     sub_1406DEC48 @ 0x1406DEC48 (sub_1406DEC48.c)
 *     sub_140797650 @ 0x140797650 (sub_140797650.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     strnlen @ 0x1403E2F80 (strnlen.c)
 *     sub_1406B4704 @ 0x1406B4704 (sub_1406B4704.c)
 *     sub_1406EA568 @ 0x1406EA568 (sub_1406EA568.c)
 *     sub_140794F30 @ 0x140794F30 (sub_140794F30.c)
 *     sub_1407973D0 @ 0x1407973D0 (sub_1407973D0.c)
 *     sub_140797A74 @ 0x140797A74 (sub_140797A74.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14079781C(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        __int64 a4,
        PRTL_BALANCED_NODE Node,
        unsigned int a6,
        struct _FAST_MUTEX *a7,
        PRTL_RB_TREE Tree)
{
  PRTL_BALANCED_NODE v8; // rdi
  PRTL_BALANCED_NODE v10; // r13
  __int16 v11; // r12
  __int64 v12; // rcx
  bool v13; // zf
  unsigned int v14; // edx
  struct _FAST_MUTEX *v15; // rcx
  PRTL_BALANCED_NODE v16; // r14
  char v17; // bp
  unsigned __int64 v18; // rax
  __int64 Root; // rbx
  BOOLEAN v20; // r8
  int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // ebx
  _OWORD *v24; // rax
  PFAST_MUTEX FastMutex[2]; // [rsp+48h] [rbp-60h] BYREF

  v8 = Node;
  v10 = Node;
  v11 = 0;
  FastMutex[0] = a7;
  if ( a6 < 3 )
    goto LABEL_40;
  if ( WORD2(Node[1].Left) != a6 )
    goto LABEL_40;
  v12 = (unsigned int)strnlen((const char *)&Node[1].Left + 6, a6 - 2) + 3;
  v13 = (_DWORD)v12 == a6;
  if ( (unsigned int)v12 > a6 )
    goto LABEL_40;
  if ( (unsigned int)v12 < a6 )
  {
    while ( (int)v12 + 2 <= a6 )
    {
      v14 = *(unsigned __int16 *)((char *)&Node[1].Left + v12 + 4);
      if ( v14 < 3 )
        break;
      v12 = v14 + (unsigned int)v12;
      v13 = (_DWORD)v12 == a6;
      if ( (unsigned int)v12 >= a6 )
        goto LABEL_8;
    }
LABEL_40:
    v23 = -1073741566;
    goto LABEL_30;
  }
LABEL_8:
  if ( !v13 )
    goto LABEL_40;
  v15 = FastMutex[0];
  v16 = Node + 1;
  Node->0 = 0LL;
  Node->ParentValue = 0LL;
  v17 = 1;
  LODWORD(Node[1].Children[0]) = 1;
  ExAcquireFastMutex(v15);
  if ( ((__int64)Tree->Min & 1) != 0 )
  {
    Root = (__int64)Tree->Root;
    if ( !Tree->Root )
    {
LABEL_19:
      Root = 0LL;
LABEL_20:
      v20 = 0;
      goto LABEL_21;
    }
    v18 = (unsigned __int64)Tree ^ Root;
  }
  else
  {
    v18 = (unsigned __int64)Tree->Root;
    Root = (__int64)Tree->Root;
  }
  if ( !v18 )
    goto LABEL_19;
  v20 = 0;
  if ( !Root )
  {
LABEL_21:
    RtlRbInsertNodeEx(Tree, (PRTL_BALANCED_NODE)Root, v20, Node);
    v10 = 0LL;
    v17 = 0;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v21 = sub_1406B4704((__int64)Node, Root);
    if ( v21 <= 0 )
      break;
    v22 = *(_QWORD *)(Root + 8);
    if ( !v22 )
    {
      v20 = 1;
      goto LABEL_21;
    }
LABEL_15:
    Root = v22;
  }
  if ( v21 < 0 )
  {
    v22 = *(_QWORD *)Root;
    if ( !*(_QWORD *)Root )
      goto LABEL_20;
    goto LABEL_15;
  }
  v16 = (PRTL_BALANCED_NODE)(Root + 24);
  v8 = (PRTL_BALANCED_NODE)Root;
  ++*(_DWORD *)(Root + 24);
LABEL_22:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 104), (signed __int64)v8, 0LL) )
  {
    if ( v17 )
    {
      --LODWORD(v16->Children[0]);
    }
    else
    {
      RtlRbRemoveNode(Tree, v8);
      v10 = v8;
    }
    v23 = -1073741823;
  }
  else
  {
    v23 = 0;
  }
  KeReleaseGuardedMutex(FastMutex[0]);
  if ( !v23 )
  {
    if ( WORD2(v8[1].Left) == 22 && *(_DWORD *)((char *)&v8[1].Left + 6) == 33559296 )
    {
      if ( sub_1406EA568(a4) )
        v11 = 1024;
LABEL_29:
      _InterlockedOr16((volatile signed __int16 *)(a4 + 98), v11 | 0x200);
    }
    else
    {
      if ( *(_QWORD *)(a4 + 40) )
        goto LABEL_29;
      v24 = (_OWORD *)sub_140797A74();
      if ( !v24 )
        goto LABEL_29;
      *(_OWORD *)FastMutex = *v24;
      v23 = sub_140794F30(a4, (int)FastMutex, a1, a2, a3);
      if ( !v23 )
        goto LABEL_29;
      sub_1407973D0(a4);
    }
  }
LABEL_30:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return v23;
}
