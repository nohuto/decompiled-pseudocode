/*
 * XREFs of sub_140A999D0 @ 0x140A999D0
 * Callers:
 *     sub_140A98170 @ 0x140A98170 (sub_140A98170.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 */

__int64 __fastcall sub_140A999D0(__int64 a1, __int16 a2)
{
  _SLIST_ENTRY *v4; // rdi
  __int64 result; // rax
  __int64 v6; // r8
  _SLIST_ENTRY *Next; // rbx

  v4 = 0LL;
  do
  {
    result = (__int64)sub_140202234(a1);
    if ( !result )
      break;
    *(_QWORD *)result = v4;
    v4 = (_SLIST_ENTRY *)result;
    result = 0xFFFFLL;
    --a2;
  }
  while ( a2 );
  if ( v4 )
  {
    do
    {
      Next = v4->Next;
      result = (__int64)sub_140203D88(a1, v4, v6);
      v4 = Next;
    }
    while ( Next );
  }
  return result;
}
