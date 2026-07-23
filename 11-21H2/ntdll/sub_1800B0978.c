/*
 * XREFs of sub_1800B0978 @ 0x1800B0978
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800B0978(int a1, int a2, int a3, int a4, ULONG_PTR *a5)
{
  char v5; // of

  if ( !v5 )
    JUMPOUT(0x1800B09D2LL);
  __asm { xlat }
  return RtlpQueryReadVirtualMemory(a1, a2, a3, a4, a5);
}
