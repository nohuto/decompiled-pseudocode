/*
 * XREFs of sub_140651824 @ 0x140651824
 * Callers:
 *     sub_140650E68 @ 0x140650E68 (sub_140650E68.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140651D6C @ 0x140651D6C (sub_140651D6C.c)
 */

__int64 __fastcall sub_140651824(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  int v5; // eax
  __int64 v7; // [rsp+20h] [rbp-D8h] BYREF
  int v8; // [rsp+28h] [rbp-D0h]
  _BYTE v9[180]; // [rsp+2Ch] [rbp-CCh] BYREF

  memset(v9, 0, sizeof(v9));
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 264LL);
  memset((void *)(v4 + 446), 0, 0x40uLL);
  *(_DWORD *)(v4 + 440) = 0;
  *(_WORD *)(v4 + 510) = -21931;
  v5 = *(_DWORD *)(a2 + 4);
  v7 = 0LL;
  v8 = v5;
  return sub_140651D6C(a1, &v7);
}
