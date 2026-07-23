/*
 * XREFs of TppWorkInitialize @ 0x18001C310
 * Callers:
 *     TpSimpleTryPost @ 0x18001CC80 (TpSimpleTryPost.c)
 *     TppInitializeTimer @ 0x18001EDC4 (TppInitializeTimer.c)
 *     TpAllocWork @ 0x18001F6F0 (TpAllocWork.c)
 * Callees:
 *     TppCleanupGroupMemberInitialize @ 0x18001B960 (TppCleanupGroupMemberInitialize.c)
 *     TppGetCurrentThreadNumaNode @ 0x18001C39C (TppGetCurrentThreadNumaNode.c)
 *     TppCleanupGroupMemberDestroy @ 0x18001C480 (TppCleanupGroupMemberDestroy.c)
 */

__int64 __fastcall TppWorkInitialize(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  int v7; // ebx
  __int64 v8; // rcx

  v7 = TppCleanupGroupMemberInitialize(a1, a2, a3, a4, a5);
  if ( v7 >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 144);
    if ( v8 )
    {
      *(_QWORD *)(a1 + 200) = a6;
      *(_DWORD *)(a1 + 208) = 0;
      TppGetCurrentThreadNumaNode(v8, a1 + 208, a1 + 212);
      *(_DWORD *)(a1 + 232) = 1;
      v7 = 0;
    }
    else
    {
      v7 = -1073741811;
    }
    if ( v7 < 0 )
      TppCleanupGroupMemberDestroy(a1);
  }
  return (unsigned int)v7;
}
