/*
 * XREFs of ?ValidateDescriptorInSharedMemory@SpatialBlock@@QEAAJXZ @ 0x14003B8D8
 * Callers:
 *     ?ValidateBlockDescriptors@CSpatialCrossProcessBaseEndpoint@@AEAAJXZ @ 0x14003B876 (-ValidateBlockDescriptors@CSpatialCrossProcessBaseEndpoint@@AEAAJXZ.c)
 *     ?Initialize@SpatialBlock@@QEAAJPEAEI@Z @ 0x14009DDD8 (-Initialize@SpatialBlock@@QEAAJPEAEI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SpatialBlock::ValidateDescriptorInSharedMemory(SpatialBlock *this)
{
  _DWORD *v1; // rax
  __int64 v2; // rdx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (_DWORD *)*((_QWORD *)this + 4);
  if ( *v1 != 28 )
  {
    v2 = 122LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v2,
      (unsigned int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\SpatialBlock.h",
      (const char *)0x887C0045LL,
      v4);
    return 2289827909LL;
  }
  if ( !v1[2] )
  {
    v2 = 123LL;
    goto LABEL_3;
  }
  if ( v1[6] != 1396785732 )
  {
    v2 = 124LL;
    goto LABEL_3;
  }
  return 0LL;
}
