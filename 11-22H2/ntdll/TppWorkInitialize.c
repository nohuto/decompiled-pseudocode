/*
 * XREFs of TppWorkInitialize @ 0x180033354
 * Callers:
 *     TppInitializeTimer @ 0x180030018 (TppInitializeTimer.c)
 *     TpSimpleTryPost @ 0x180033060 (TpSimpleTryPost.c)
 *     TpAllocWork @ 0x18005B790 (TpAllocWork.c)
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x180033198 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x1800333E4 (TppCleanupGroupMemberInitialize.c)
 *     TppGetCurrentThreadNumaNode @ 0x180033DE4 (TppGetCurrentThreadNumaNode.c)
 */

__int64 __fastcall TppWorkInitialize(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  int v8; // ebx
  volatile signed __int32 *v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx

  v8 = TppCleanupGroupMemberInitialize(a1, a2, a3, a4, a5);
  if ( v8 >= 0 )
  {
    v11 = *(_QWORD *)(a1 + 144);
    if ( v11 )
    {
      *(_QWORD *)(a1 + 200) = a6;
      *(_DWORD *)(a1 + 208) = 0;
      TppGetCurrentThreadNumaNode(v11, a1 + 208, a1 + 212, 0LL);
      *(_DWORD *)(a1 + 232) = 1;
      v8 = 0;
    }
    else
    {
      v8 = -1073741811;
    }
    if ( v8 < 0 )
      TppCleanupGroupMemberDestroy((_QWORD *)a1, v7, v9, v10);
  }
  return (unsigned int)v8;
}
