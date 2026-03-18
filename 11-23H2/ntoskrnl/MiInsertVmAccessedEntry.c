/*
 * XREFs of MiInsertVmAccessedEntry @ 0x14046BCC8
 * Callers:
 *     MiResetAccessBitPte @ 0x14027BA20 (MiResetAccessBitPte.c)
 *     MiAgePte @ 0x14027BD60 (MiAgePte.c)
 *     MiTrimPte @ 0x1402E3630 (MiTrimPte.c)
 *     MiUpdateOldPte @ 0x14046C280 (MiUpdateOldPte.c)
 *     MiSimpleAgePte @ 0x140635090 (MiSimpleAgePte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInsertVmAccessedEntry(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = *a1;
  if ( (_DWORD)v2 == a1[1] )
    return 1LL;
  *(_QWORD *)&a1[2 * v2 + 2] = a2 & 0xFFFFFFFFFFFFF000uLL;
  result = 0LL;
  ++*a1;
  return result;
}
