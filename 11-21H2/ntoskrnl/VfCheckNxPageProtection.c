/*
 * XREFs of VfCheckNxPageProtection @ 0x1405FE060
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A82EB0 @ 0x140A82EB0 (sub_140A82EB0.c)
 */

__int64 __fastcall VfCheckNxPageProtection(int a1, int a2)
{
  __int64 result; // rax

  if ( dword_140C1B2A0 )
    return sub_140A82EB0(a1, a2);
  return result;
}
