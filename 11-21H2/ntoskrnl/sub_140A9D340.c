/*
 * XREFs of sub_140A9D340 @ 0x140A9D340
 * Callers:
 *     sub_140A9D3E0 @ 0x140A9D3E0 (sub_140A9D3E0.c)
 * Callees:
 *     sub_1405FDF9C @ 0x1405FDF9C (sub_1405FDF9C.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 *     sub_140A92C94 @ 0x140A92C94 (sub_140A92C94.c)
 */

__int64 __fastcall sub_140A9D340(__int64 a1)
{
  __int64 result; // rax
  ULONG_PTR v2; // r8
  unsigned int v3; // ecx
  const void *v4; // r8

  result = (unsigned int)dword_140D4E088;
  if ( dword_140D4E088 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v3 = 1000 * *(unsigned __int16 *)(a1 + 30);
    if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    {
      sub_140A92C94(196LL, 309LL, v2, v3, 0LL);
      sub_1405FDF9C("Cancelled IRP %p didn't complete in due time.\n", v4);
      __debugbreak();
    }
    result = (unsigned int)dword_140C29FC0;
    if ( (dword_140C29FC0 & 0x10) != 0 )
      return sub_140A8C924(0xC4u, 0x135uLL, v2, v3, 0LL);
  }
  return result;
}
