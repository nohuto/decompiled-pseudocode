/*
 * XREFs of sub_1403C08BC @ 0x1403C08BC
 * Callers:
 *     sub_140643344 @ 0x140643344 (sub_140643344.c)
 *     WheaAddErrorSource @ 0x14084E510 (WheaAddErrorSource.c)
 *     sub_140A6D30C @ 0x140A6D30C (sub_140A6D30C.c)
 *     sub_140AFF910 @ 0x140AFF910 (sub_140AFF910.c)
 * Callees:
 *     sub_1403C0934 @ 0x1403C0934 (sub_1403C0934.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403C08BC(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // r8

  if ( *(_DWORD *)(a1 + 40) == 16 )
  {
    v5 = sub_1403C0934(a1, 1LL, 0LL);
    result = 0LL;
    if ( v5 )
      result = sub_14042A5E0(*(_QWORD *)(a1 + 56), *(unsigned int *)(a1 + 124));
  }
  else if ( sub_1403C0934(a1, 1LL, 0LL) )
  {
    result = sub_14042A5E0(a2, a1 + 96);
  }
  else
  {
    result = 3221225474LL;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 92));
  return result;
}
