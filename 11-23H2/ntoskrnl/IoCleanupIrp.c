/*
 * XREFs of IoCleanupIrp @ 0x1403D1000
 * Callers:
 *     <none>
 * Callees:
 *     IopFreeIrpExtension @ 0x14028FE18 (IopFreeIrpExtension.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

char (__fastcall *__fastcall IoCleanupIrp(ULONG_PTR BugCheckParameter1))(__int64 *a1, __int64 a2, unsigned int a3)
{
  char (__fastcall *result)(__int64 *, __int64, unsigned int); // rax
  bool v2; // zf

  result = 0LL;
  if ( *(_WORD *)BugCheckParameter1 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter1, 0x2758uLL, 0LL, 0LL);
  v2 = (*(_BYTE *)(BugCheckParameter1 + 71) & 0x40) == 0;
  *(_WORD *)BugCheckParameter1 = 0;
  if ( !v2 )
    return IopFreeIrpExtension(BugCheckParameter1, -1, 1);
  return result;
}
