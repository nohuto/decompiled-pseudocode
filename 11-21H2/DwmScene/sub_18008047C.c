/*
 * XREFs of sub_18008047C @ 0x18008047C
 * Callers:
 *     sub_1800A3610 @ 0x1800A3610 (sub_1800A3610.c)
 * Callees:
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 *     sub_18003070C @ 0x18003070C (sub_18003070C.c)
 *     sub_180030718 @ 0x180030718 (sub_180030718.c)
 *     sub_180030724 @ 0x180030724 (sub_180030724.c)
 */

__int64 __fastcall sub_18008047C(__int64 a1, __int64 a2)
{
  __int64 v3; // r10
  volatile __int32 *v4; // rax
  __int64 v5; // r8
  __int128 *v6; // r10
  __int32 v7; // r11d
  __int128 v8; // xmm0
  __int64 result; // rax
  _DWORD *v10; // rdx
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 1;
  sub_180030724(&v11);
  v4 = (volatile __int32 *)sub_18001DE70(v3 + 48);
  while ( _InterlockedExchange(v4, v7) )
    ;
  v8 = *v6;
  v11 = 0;
  *(_OWORD *)a2 = v8;
  *(_DWORD *)(a2 + 16) = *((_DWORD *)v6 + 4);
  *(_OWORD *)v5 = *(__int128 *)((char *)v6 + 20);
  *(_DWORD *)(v5 + 16) = *((_DWORD *)v6 + 9);
  sub_18003070C((__int64)(v6 + 3));
  result = sub_180030718(&v11);
  *v10 = result;
  return result;
}
