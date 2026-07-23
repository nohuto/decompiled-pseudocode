/*
 * XREFs of sub_140A9F900 @ 0x140A9F900
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A8B450 @ 0x140A8B450 (sub_140A8B450.c)
 *     sub_140A96B0C @ 0x140A96B0C (sub_140A96B0C.c)
 *     sub_140A9A1DC @ 0x140A9A1DC (sub_140A9A1DC.c)
 */

_SLIST_ENTRY *__fastcall sub_140A9F900(size_t a1)
{
  __int64 v2; // rdx
  _SLIST_ENTRY *v4; // rax
  _SLIST_ENTRY *v5; // rbx
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)sub_140A96B0C(0) )
    return 0LL;
  v4 = (_SLIST_ENTRY *)sub_14042A5E0(a1, v2);
  v5 = v4;
  if ( v4 )
  {
    sub_140A9A1DC(v4, a1);
    if ( (dword_140C29FC0 & 8) != 0 )
      sub_140A8B450(retaddr, v5, a1);
  }
  return v5;
}
