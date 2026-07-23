/*
 * XREFs of sub_14056D598 @ 0x14056D598
 * Callers:
 *     sub_1405A89EC @ 0x1405A89EC (sub_1405A89EC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1404205F0 @ 0x1404205F0 (sub_1404205F0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14056D6C8 @ 0x14056D6C8 (sub_14056D6C8.c)
 */

__int64 __fastcall sub_14056D598(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v5; // [rsp+A0h] [rbp+0h] BYREF

  memset((void *)(((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFF80uLL) + 128), 0, 0x80uLL);
  if ( !_bittest64(&qword_140D068D8, 0x28u) )
    return 3221225659LL;
  *(_QWORD *)((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFF80uLL) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = ((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFF80uLL)
                                                                      + 128;
  *(_QWORD *)(((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFF80uLL) + 8) = a2;
  v3 = sub_1404205F0(0xBu);
  return sub_14056D6C8(v3);
}
