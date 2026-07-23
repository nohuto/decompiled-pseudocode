/*
 * XREFs of VfFailSystemBIOS @ 0x1405FE0D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

__int64 __fastcall VfFailSystemBIOS(ULONG a1, unsigned int a2)
{
  __int64 result; // rax

  if ( dword_140C1ADA8 )
  {
    if ( (dword_140C29FC0 & 0x40000000) != 0 )
      return sub_140A8C924(a1, a2, 0LL, 0LL, 0LL);
  }
  return result;
}
