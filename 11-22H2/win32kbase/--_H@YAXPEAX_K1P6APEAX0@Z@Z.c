/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C008357C
 * Callers:
 *     ??0CConnection@DirectComposition@@AEAA@XZ @ 0x1C0080FAC (--0CConnection@DirectComposition@@AEAA@XZ.c)
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x1C00818F0 (--0CMouseProcessor@@IEAA@XZ.c)
 *     ??0IOCPDispatcher@@IEAA@XZ @ 0x1C008333C (--0IOCPDispatcher@@IEAA@XZ.c)
 *     ??0CRIMBase@@IEAA@K@Z @ 0x1C00834E0 (--0CRIMBase@@IEAA@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  do
  {
    a4(a1);
    a1 += a2;
    --a3;
  }
  while ( a3 );
}
