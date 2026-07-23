/*
 * XREFs of EtwpSetProviderTraitsCommon @ 0x1406BE544
 * Callers:
 *     EtwpSetProviderTraitsUm @ 0x1406BE3A0 (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsKm @ 0x1407D76F8 (EtwpSetProviderTraitsKm.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402284E0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     RtlRbRemoveNode @ 0x14024B910 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14024CCA0 (RtlRbInsertNodeEx.c)
 *     RtlUIntAdd @ 0x1402504BC (RtlUIntAdd.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     strnlen @ 0x1403DAF60 (strnlen.c)
 *     Feature_1109720378__private_IsEnabledDeviceUsage @ 0x1404118C4 (Feature_1109720378__private_IsEnabledDeviceUsage.c)
 *     EtwpGetProviderGroupFromTraits @ 0x1406BE800 (EtwpGetProviderGroupFromTraits.c)
 *     EtwpAddRegEntryToGroup @ 0x1406BE860 (EtwpAddRegEntryToGroup.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1406C0210 (EtwpReleaseProviderTraitsReference.c)
 *     TraitsCompare @ 0x1407BD0EC (TraitsCompare.c)
 *     AddDecodeGuidToSessions @ 0x1407E9FA0 (AddDecodeGuidToSessions.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
  struct _FAST_MUTEX *v10; // rdi
  bool v12; // r12
  PRTL_BALANCED_NODE v13; // r13
  NTSTATUS v14; // ebx
  __int64 v15; // rcx
  bool v16; // zf
  unsigned int v17; // edx
  BOOLEAN v18; // bl
  _RTL_BALANCED_NODE *Root; // rdi
  unsigned __int64 v20; // rax
  int v21; // eax
  _RTL_BALANCED_NODE *v22; // rax
  UINT v23; // eax
  UINT v24; // eax
  int IsEnabledDeviceUsage; // eax
  __int16 v26; // ax
  _OWORD *ProviderGroupFromTraits; // rax
  bool v29; // [rsp+30h] [rbp-88h]
  UINT puResult; // [rsp+38h] [rbp-80h] BYREF
  int v31; // [rsp+3Ch] [rbp-7Ch]
  __int64 v32; // [rsp+40h] [rbp-78h]
  __int64 v33; // [rsp+48h] [rbp-70h]
  PKGUARDED_MUTEX Mutex[2]; // [rsp+50h] [rbp-68h] BYREF

  v8 = Node;
  v9 = 0;
  v10 = FastMutex;
  v12 = 0;
  v13 = Node;
  v32 = a3;
  v31 = a2;
  v33 = a1;
  Mutex[0] = FastMutex;
  puResult = 0;
  if ( a6 < 3 )
    goto LABEL_2;
  if ( WORD2(Node[1].Left) != a6 )
    goto LABEL_2;
  v15 = (unsigned int)strnlen((const char *)&Node[1].Left + 6, a6 - 2) + 3;
  v16 = (_DWORD)v15 == a6;
  if ( (unsigned int)v15 > a6 )
    goto LABEL_2;
  if ( (unsigned int)v15 < a6 )
  {
    while ( (int)v15 + 2 <= a6 )
    {
      v17 = *(unsigned __int16 *)((char *)&Node[1].Left + v15 + 4);
      if ( v17 < 3 )
        break;
      v15 = v17 + (unsigned int)v15;
      v16 = (_DWORD)v15 == a6;
      if ( (unsigned int)v15 >= a6 )
        goto LABEL_9;
    }
LABEL_2:
    v14 = -1073741566;
    goto LABEL_50;
  }
LABEL_9:
  if ( !v16 )
    goto LABEL_2;
  Node->0 = 0LL;
  Node->ParentValue = 0LL;
  v18 = 1;
  LODWORD(Node[1].Children[0]) = 1;
  ExAcquireFastMutex(FastMutex);
  v12 = (unsigned int)Feature_1109720378__private_IsEnabledDeviceUsage() != 0;
  v29 = v12;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    Root = Tree->Root;
    if ( !Tree->Root )
    {
LABEL_15:
      Root = 0LL;
      v18 = 0;
LABEL_29:
      RtlRbInsertNodeEx(Tree, Root, v18, Node);
      v13 = 0LL;
      goto LABEL_30;
    }
    v20 = (unsigned __int64)Tree ^ (unsigned __int64)Root;
  }
  else
  {
    v20 = (unsigned __int64)Tree->Root;
    Root = Tree->Root;
  }
  if ( !v20 )
    goto LABEL_15;
  if ( !Root )
  {
LABEL_28:
    v18 = 0;
    goto LABEL_29;
  }
  while ( 1 )
  {
    v21 = TraitsCompare(Node, Root);
    if ( v21 > 0 )
    {
      v22 = Root->Children[1];
      if ( !v22 )
        goto LABEL_29;
      goto LABEL_22;
    }
    if ( v21 >= 0 )
      break;
    v22 = Root->Children[0];
    if ( !Root->Children[0] )
      goto LABEL_28;
LABEL_22:
    Root = v22;
  }
  v9 = 1;
  v8 = Root;
  v16 = (unsigned int)Feature_1109720378__private_IsEnabledDeviceUsage() == 0;
  v23 = (UINT)Root[1].Children[0];
  if ( v16 )
  {
    v24 = v23 + 1;
LABEL_27:
    LODWORD(Root[1].Children[0]) = v24;
LABEL_30:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 104), (signed __int64)v8, 0LL) )
    {
      if ( v9 )
      {
        --LODWORD(v8[1].Children[0]);
      }
      else
      {
        RtlRbRemoveNode(Tree, v8);
        v13 = v8;
      }
      v14 = -1073741823;
    }
    else
    {
      v14 = 0;
    }
    IsEnabledDeviceUsage = Feature_1109720378__private_IsEnabledDeviceUsage();
    v10 = Mutex[0];
    v12 = 0;
    if ( !IsEnabledDeviceUsage )
      v12 = v29;
    KeReleaseGuardedMutex(Mutex[0]);
    if ( v14 )
      goto LABEL_50;
    if ( WORD2(v8[1].Left) == 22 && *(_DWORD *)((char *)&v8[1].Left + 6) == 33559296 )
    {
      if ( (unsigned __int8)AddDecodeGuidToSessions(a4) )
      {
        v26 = 1024;
LABEL_48:
        _InterlockedOr16((volatile signed __int16 *)(a4 + 98), v26 | 0x200);
        goto LABEL_50;
      }
    }
    else if ( !*(_QWORD *)(a4 + 40) )
    {
      *(_OWORD *)Mutex = 0LL;
      ProviderGroupFromTraits = (_OWORD *)EtwpGetProviderGroupFromTraits();
      if ( ProviderGroupFromTraits )
      {
        *(_OWORD *)Mutex = *ProviderGroupFromTraits;
        v14 = EtwpAddRegEntryToGroup(a4, (unsigned int)Mutex, v33, v31, v32);
        if ( v14 )
        {
          EtwpReleaseProviderTraitsReference(a4);
          goto LABEL_50;
        }
      }
    }
    v26 = 0;
    goto LABEL_48;
  }
  v14 = RtlUIntAdd(v23, 1u, &puResult);
  if ( v14 >= 0 )
  {
    v24 = puResult;
    goto LABEL_27;
  }
  v10 = Mutex[0];
LABEL_50:
  if ( (unsigned int)Feature_1109720378__private_IsEnabledDeviceUsage() && v12 )
    KeReleaseGuardedMutex(v10);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  return (unsigned int)v14;
}
