/*
 * XREFs of EtwpSetProviderTraitsCommon @ 0x1406BE574
 * Callers:
 *     EtwpSetProviderTraitsUm @ 0x1406BE3D0 (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsKm @ 0x1407D7448 (EtwpSetProviderTraitsKm.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402285D0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     RtlRbRemoveNode @ 0x14024BA00 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14024CD90 (RtlRbInsertNodeEx.c)
 *     RtlUIntAdd @ 0x1402505AC (RtlUIntAdd.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     strnlen @ 0x1403DB7A0 (strnlen.c)
 *     EtwpGetProviderGroupFromTraits @ 0x1406BE7DC (EtwpGetProviderGroupFromTraits.c)
 *     EtwpAddRegEntryToGroup @ 0x1406BE840 (EtwpAddRegEntryToGroup.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1406C01F0 (EtwpReleaseProviderTraitsReference.c)
 *     TraitsCompare @ 0x1407BCE2C (TraitsCompare.c)
 *     AddDecodeGuidToSessions @ 0x1407E9CF0 (AddDecodeGuidToSessions.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpSetProviderTraitsCommon(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        PRTL_BALANCED_NODE Node,
        unsigned int a6,
        PFAST_MUTEX FastMutex,
        PRTL_RB_TREE Tree)
{
  PRTL_BALANCED_NODE v8; // rsi
  char v9; // r14
  PRTL_BALANCED_NODE v11; // r13
  __int16 v12; // r12
  NTSTATUS v13; // ebx
  __int64 v14; // rcx
  bool v15; // zf
  unsigned int v16; // edx
  BOOLEAN v17; // bl
  _RTL_BALANCED_NODE *Root; // rdi
  unsigned __int64 v19; // rax
  int v20; // eax
  _RTL_BALANCED_NODE *v21; // rax
  _OWORD *ProviderGroupFromTraits; // rax
  UINT puResult; // [rsp+30h] [rbp-78h] BYREF
  int v25; // [rsp+34h] [rbp-74h]
  __int64 v26; // [rsp+38h] [rbp-70h]
  __int64 v27; // [rsp+40h] [rbp-68h]
  PKGUARDED_MUTEX Mutex[2]; // [rsp+48h] [rbp-60h] BYREF

  v8 = Node;
  v9 = 0;
  v11 = Node;
  v12 = 0;
  v26 = a3;
  v25 = a2;
  v27 = a1;
  Mutex[0] = FastMutex;
  puResult = 0;
  if ( a6 < 3 )
    goto LABEL_2;
  if ( WORD2(Node[1].Left) != a6 )
    goto LABEL_2;
  v14 = (unsigned int)strnlen((const char *)&Node[1].Left + 6, a6 - 2) + 3;
  v15 = (_DWORD)v14 == a6;
  if ( (unsigned int)v14 > a6 )
    goto LABEL_2;
  if ( (unsigned int)v14 < a6 )
  {
    while ( (int)v14 + 2 <= a6 )
    {
      v16 = *(unsigned __int16 *)((char *)&Node[1].Left + v14 + 4);
      if ( v16 < 3 )
        break;
      v14 = v16 + (unsigned int)v14;
      v15 = (_DWORD)v14 == a6;
      if ( (unsigned int)v14 >= a6 )
        goto LABEL_9;
    }
LABEL_2:
    v13 = -1073741566;
    goto LABEL_40;
  }
LABEL_9:
  if ( !v15 )
    goto LABEL_2;
  Node->0 = 0LL;
  Node->ParentValue = 0LL;
  v17 = 1;
  LODWORD(Node[1].Children[0]) = 1;
  ExAcquireFastMutex(FastMutex);
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    Root = Tree->Root;
    if ( !Tree->Root )
    {
LABEL_15:
      Root = 0LL;
      v17 = 0;
      goto LABEL_27;
    }
    v19 = (unsigned __int64)Tree ^ (unsigned __int64)Root;
  }
  else
  {
    v19 = (unsigned __int64)Tree->Root;
    Root = Tree->Root;
  }
  if ( !v19 )
    goto LABEL_15;
  if ( Root )
  {
    while ( 1 )
    {
      v20 = TraitsCompare(Node, Root);
      if ( v20 <= 0 )
      {
        if ( v20 >= 0 )
        {
          v9 = 1;
          v8 = Root;
          v13 = RtlUIntAdd((UINT)Root[1].Children[0], 1u, &puResult);
          if ( v13 >= 0 )
          {
            LODWORD(Root[1].Children[0]) = puResult;
            goto LABEL_28;
          }
          KeReleaseGuardedMutex(Mutex[0]);
          goto LABEL_40;
        }
        v21 = Root->Children[0];
        if ( !Root->Children[0] )
          break;
      }
      else
      {
        v21 = Root->Children[1];
        if ( !v21 )
          goto LABEL_27;
      }
      Root = v21;
    }
  }
  v17 = 0;
LABEL_27:
  RtlRbInsertNodeEx(Tree, Root, v17, Node);
  v11 = 0LL;
LABEL_28:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 104), (signed __int64)v8, 0LL) )
  {
    if ( v9 )
    {
      --LODWORD(v8[1].Children[0]);
    }
    else
    {
      RtlRbRemoveNode(Tree, v8);
      v11 = v8;
    }
    v13 = -1073741823;
  }
  else
  {
    v13 = 0;
  }
  KeReleaseGuardedMutex(Mutex[0]);
  if ( !v13 )
  {
    if ( WORD2(v8[1].Left) == 22 && *(_DWORD *)((char *)&v8[1].Left + 6) == 33559296 )
    {
      if ( (unsigned __int8)AddDecodeGuidToSessions(a4) )
        v12 = 1024;
    }
    else if ( !*(_QWORD *)(a4 + 40) )
    {
      *(_OWORD *)Mutex = 0LL;
      ProviderGroupFromTraits = (_OWORD *)EtwpGetProviderGroupFromTraits();
      if ( ProviderGroupFromTraits )
      {
        *(_OWORD *)Mutex = *ProviderGroupFromTraits;
        v13 = EtwpAddRegEntryToGroup(a4, (unsigned int)Mutex, v27, v25, v26);
        if ( v13 )
        {
          EtwpReleaseProviderTraitsReference(a4);
          goto LABEL_40;
        }
      }
    }
    _InterlockedOr16((volatile signed __int16 *)(a4 + 98), v12 | 0x200);
  }
LABEL_40:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v13;
}
