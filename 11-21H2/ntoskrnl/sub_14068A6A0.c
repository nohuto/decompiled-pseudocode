/*
 * XREFs of sub_14068A6A0 @ 0x14068A6A0
 * Callers:
 *     sub_14020B000 @ 0x14020B000 (sub_14020B000.c)
 *     sub_1406D520C @ 0x1406D520C (sub_1406D520C.c)
 *     PsStartSiloMonitor @ 0x140852D60 (PsStartSiloMonitor.c)
 *     PsFreeSiloContextSlot @ 0x1409AB6D0 (PsFreeSiloContextSlot.c)
 *     sub_1409AB8A0 @ 0x1409AB8A0 (sub_1409AB8A0.c)
 *     sub_1409B1074 @ 0x1409B1074 (sub_1409B1074.c)
 *     PsUnregisterSiloMonitor @ 0x1409B1B50 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     sub_14020A400 @ 0x14020A400 (sub_14020A400.c)
 *     sub_14068A6EC @ 0x14068A6EC (sub_14068A6EC.c)
 */

void *__fastcall sub_14068A6A0(void *a1, char a2)
{
  __int64 v3; // rax
  void *v4; // r8

  while ( 1 )
  {
    v3 = sub_14068A6EC(a1);
    v4 = (void *)v3;
    if ( !v3 )
      return 0LL;
    if ( (*(_DWORD *)(v3 + 1512) & 0x40000000) != 0 && (!a2 || sub_14020A400(v3)) )
      break;
    a1 = v4;
  }
  return v4;
}
