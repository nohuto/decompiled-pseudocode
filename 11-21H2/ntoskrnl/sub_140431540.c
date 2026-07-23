/*
 * XREFs of sub_140431540 @ 0x140431540
 * Callers:
 *     sub_140430F00 @ 0x140430F00 (sub_140430F00.c)
 * Callees:
 *     sub_1405696B0 @ 0x1405696B0 (sub_1405696B0.c)
 */

__int64 __fastcall sub_140431540(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rbp
  __int64 v5; // [rsp+0h] [rbp-138h] BYREF

  *a3 = 0;
  if ( (*(_BYTE *)(v3 + 240) & 1) == 0 )
    *a3 = 16;
  return sub_1405696B0(a1, &v5);
}
