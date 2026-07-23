/*
 * XREFs of sub_14045AAC0 @ 0x14045AAC0
 * Callers:
 *     sub_140307660 @ 0x140307660 (sub_140307660.c)
 *     sub_14030F970 @ 0x14030F970 (sub_14030F970.c)
 *     sub_140428D90 @ 0x140428D90 (sub_140428D90.c)
 *     sub_140576AA4 @ 0x140576AA4 (sub_140576AA4.c)
 * Callees:
 *     sub_14045ABA8 @ 0x14045ABA8 (sub_14045ABA8.c)
 *     sub_14045E06E @ 0x14045E06E (sub_14045E06E.c)
 */

__int64 __fastcall sub_14045AAC0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // ebx
  int v5; // ebp
  unsigned int v6; // ebx
  __int16 v7; // [rsp+20h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( dword_140D06A24 )
  {
    _disable();
    v4 = (unsigned __int8)*(_DWORD *)(a2 + 512);
    result = (unsigned __int8)*(_DWORD *)(a1 + 236);
    if ( v4 != (_DWORD)result )
    {
      v5 = *(_DWORD *)(a1 + 236) & 0x300;
      if ( (unsigned __int8)sub_14045E06E(a1, (unsigned __int8)*(_DWORD *)(a2 + 512)) )
        v6 = *(_DWORD *)(a1 + 236) & 0xFFFFFCFF;
      else
        v6 = *(_DWORD *)(a1 + 236) & 0xFFFFFCFF | ((v4 & 3) << 8);
      *(_DWORD *)(a1 + 236) = v6;
      result = v5 != 0;
      if ( (_DWORD)result != ((v6 & 0x300) != 0) )
        result = sub_14045ABA8(a1);
    }
    if ( (v7 & 0x200) != 0 )
      _enable();
  }
  return result;
}
