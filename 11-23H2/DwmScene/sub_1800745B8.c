/*
 * XREFs of sub_1800745B8 @ 0x1800745B8
 * Callers:
 *     sub_180093580 @ 0x180093580 (sub_180093580.c)
 * Callees:
 *     sub_18001C7FC @ 0x18001C7FC (sub_18001C7FC.c)
 *     sub_18002E108 @ 0x18002E108 (sub_18002E108.c)
 *     sub_18002E114 @ 0x18002E114 (sub_18002E114.c)
 *     sub_18002E120 @ 0x18002E120 (sub_18002E120.c)
 */

_DWORD *__fastcall sub_1800745B8(__int64 a1, __int64 a2)
{
  __int64 v3; // r10
  volatile __int32 *v4; // rax
  __int64 v5; // r8
  __int128 *v6; // r10
  __int32 v7; // r11d
  __int128 v8; // xmm0
  __int64 v9; // r10
  _DWORD *result; // rax
  int v11; // edx
  unsigned int v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 1;
  sub_18002E120(&v12);
  v4 = (volatile __int32 *)sub_18001C7FC(v3 + 48);
  while ( _InterlockedExchange(v4, v7) )
    ;
  v8 = *v6;
  v12 = 0;
  *(_OWORD *)a2 = v8;
  *(_DWORD *)(a2 + 16) = *((_DWORD *)v6 + 4);
  *(_OWORD *)v5 = *(__int128 *)((char *)v6 + 20);
  *(_DWORD *)(v5 + 16) = *((_DWORD *)v6 + 9);
  sub_18002E114(&v12);
  result = (_DWORD *)sub_18002E108(v9 + 48);
  *result = v11;
  return result;
}
