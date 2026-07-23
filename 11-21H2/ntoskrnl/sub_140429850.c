/*
 * XREFs of sub_140429850 @ 0x140429850
 * Callers:
 *     DbgLoadImageSymbols @ 0x1402D9D60 (DbgLoadImageSymbols.c)
 *     sub_1402DC0E8 @ 0x1402DC0E8 (sub_1402DC0E8.c)
 *     sub_1405675F4 @ 0x1405675F4 (sub_1405675F4.c)
 *     DbgCommandString @ 0x1405E4080 (DbgCommandString.c)
 *     sub_1405E40E4 @ 0x1405E40E4 (sub_1405E40E4.c)
 *     sub_1405E4210 @ 0x1405E4210 (sub_1405E4210.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140429850(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = a3;
  __asm { int     2Dh; Windows NT - debugging services: eax = type }
  __debugbreak();
  return result;
}
