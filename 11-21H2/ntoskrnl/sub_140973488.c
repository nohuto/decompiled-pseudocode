/*
 * XREFs of sub_140973488 @ 0x140973488
 * Callers:
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140973488(__int64 a1)
{
  return ((unsigned __int64)*(unsigned int *)(***(_QWORD ***)(a1 + 72) + 8LL) << 12)
       + ((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12);
}
