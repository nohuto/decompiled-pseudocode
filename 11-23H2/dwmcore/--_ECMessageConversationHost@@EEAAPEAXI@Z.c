/*
 * XREFs of ??_ECMessageConversationHost@@EEAAPEAXI@Z @ 0x1801B7100
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ?Disconnect@CMessageConversationHost@@QEAAXXZ @ 0x1801B7154 (-Disconnect@CMessageConversationHost@@QEAAXXZ.c)
 */

CMessageConversationHost *__fastcall CMessageConversationHost::`vector deleting destructor'(
        CMessageConversationHost *this,
        char a2)
{
  *(_QWORD *)this = &CMessageConversationHost::`vftable';
  CMessageConversationHost::Disconnect(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
