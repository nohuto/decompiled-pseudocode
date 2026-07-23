/*
 * XREFs of sub_140A94644 @ 0x140A94644
 * Callers:
 *     sub_140A9C958 @ 0x140A9C958 (sub_140A9C958.c)
 *     sub_140B27B30 @ 0x140B27B30 (sub_140B27B30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A94644(int a1)
{
  __int64 result; // rax

  if ( (unsigned int)(a1 - 1) > 3 )
    return 3221225485LL;
  dword_140C0B1F8 = a1;
  result = 0LL;
  dword_140C2A044 = a1;
  return result;
}
