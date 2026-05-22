/*
 * XREFs of ??_GCMessageConversationHost@DirectComposition@@EEAAPEAXI@Z @ 0x18001CA00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1CMessageConversationHost@DirectComposition@@EEAA@XZ @ 0x18001CCA0 (--1CMessageConversationHost@DirectComposition@@EEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

DirectComposition::CMessageConversationHost *__fastcall DirectComposition::CMessageConversationHost::`scalar deleting destructor'(
        DirectComposition::CMessageConversationHost *this,
        char a2)
{
  DirectComposition::CMessageConversationHost::~CMessageConversationHost(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x48uLL);
    else
      operator delete(this);
  }
  return this;
}
