/*
 * XREFs of sub_1406AD6A0 @ 0x1406AD6A0
 * Callers:
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_140973534 @ 0x140973534 (sub_140973534.c)
 *     sub_1409736EC @ 0x1409736EC (sub_1409736EC.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_1406AD6A0(__int64 a1)
{
  return dword_140C533A0
      && (*(_DWORD *)(a1 + 64) & 0x1000000) == 0
      && (*(_DWORD *)(a1 + 48) & 0xF80) == 0x380
      && (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
       - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
       + 1 > *(unsigned int *)(***(_QWORD ***)(a1 + 72) + 8LL);
}
