/*
 * XREFs of sub_14022F2FC @ 0x14022F2FC
 * Callers:
 *     sub_14022F150 @ 0x14022F150 (sub_14022F150.c)
 *     sub_14045B5B2 @ 0x14045B5B2 (sub_14045B5B2.c)
 * Callees:
 *     sub_14022F440 @ 0x14022F440 (sub_14022F440.c)
 *     sub_14022F4BC @ 0x14022F4BC (sub_14022F4BC.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     sub_14056CFD8 @ 0x14056CFD8 (sub_14056CFD8.c)
 *     sub_14056D050 @ 0x14056D050 (sub_14056D050.c)
 */

__int64 __fastcall sub_14022F2FC(unsigned int a1, char a2, __int64 a3)
{
  unsigned __int64 Root; // rdx
  BOOLEAN v7; // r8
  unsigned __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v14; // rcx

  if ( *(_BYTE *)(a3 + 24) )
    RtlRbRemoveNode(&Tree, (PRTL_BALANCED_NODE)a3);
  *(_DWORD *)(a3 + 28) = a1;
  Root = (unsigned __int64)Tree.Root;
  if ( ((__int64)Tree.Min & 1) != 0 && Tree.Root )
    Root = (unsigned __int64)&Tree ^ (unsigned __int64)Tree.Root;
  v7 = 0;
  if ( Root )
  {
    while ( 1 )
    {
      if ( a1 >= *(_DWORD *)(Root + 28) )
      {
        v8 = *(_QWORD *)(Root + 8);
        if ( ((__int64)Tree.Min & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_17;
          v8 ^= Root;
        }
        if ( !v8 )
        {
LABEL_17:
          v7 = 1;
          break;
        }
      }
      else
      {
        v8 = *(_QWORD *)Root;
        if ( ((__int64)Tree.Min & 1) != 0 )
        {
          if ( !v8 )
            break;
          v8 ^= Root;
        }
        if ( !v8 )
          break;
      }
      Root = v8;
    }
  }
  RtlRbInsertNodeEx(&Tree, (PRTL_BALANCED_NODE)Root, v7, (PRTL_BALANCED_NODE)a3);
  *(_BYTE *)(a3 + 24) = 1;
  if ( a2 )
    dword_140D06984 = a1;
  if ( byte_140D06889 )
  {
    sub_14056CFD8(KeGetCurrentPrcb(), 0LL);
    LOBYTE(v14) = 1;
    v9 = sub_14056D050(v14);
  }
  else
  {
    v9 = sub_14022F4BC();
  }
  v11 = *(unsigned int *)(a3 + 32);
  v12 = v9;
  if ( (_DWORD)v11 )
  {
    LOBYTE(v10) = 1;
    sub_14022F440(a1, v11, v10);
  }
  return v12;
}
