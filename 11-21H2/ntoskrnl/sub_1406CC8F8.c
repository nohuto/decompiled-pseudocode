/*
 * XREFs of sub_1406CC8F8 @ 0x1406CC8F8
 * Callers:
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x14077E168 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 *     sub_1407806B0 @ 0x1407806B0 (sub_1407806B0.c)
 * Callees:
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     memset @ 0x140435E00 (memset.c)
 */

_QWORD *__fastcall sub_1406CC8F8(__int64 a1, __int64 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  _QWORD *result; // rax
  _QWORD *v5; // rbx

  result = Allocate(PagedPool, 0x50uLL, 0x50454D43u, a4);
  v5 = result;
  if ( result )
  {
    memset(result, 0, 0x50uLL);
    v5[5] = 32LL;
    v5[4] = sub_140211F50;
    result = v5 + 6;
    *((_OWORD *)v5 + 1) = xmmword_140010B20;
  }
  return result;
}
