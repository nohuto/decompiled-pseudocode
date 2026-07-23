/*
 * XREFs of sub_140456C50 @ 0x140456C50
 * Callers:
 *     sub_140456B94 @ 0x140456B94 (sub_140456B94.c)
 *     sub_140508990 @ 0x140508990 (sub_140508990.c)
 *     sub_14050FD3C @ 0x14050FD3C (sub_14050FD3C.c)
 *     sub_14050FF6C @ 0x14050FF6C (sub_14050FF6C.c)
 *     sub_14050FFFC @ 0x14050FFFC (sub_14050FFFC.c)
 *     sub_140510080 @ 0x140510080 (sub_140510080.c)
 *     sub_14051011C @ 0x14051011C (sub_14051011C.c)
 *     sub_1405101D0 @ 0x1405101D0 (sub_1405101D0.c)
 *     sub_14051040C @ 0x14051040C (sub_14051040C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140456C50(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement(&dword_140C4C190);
  if ( a1 )
    return (unsigned int)_InterlockedIncrement(a1);
  return result;
}
