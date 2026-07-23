/*
 * XREFs of sub_14052CED4 @ 0x14052CED4
 * Callers:
 *     sub_14052CFE0 @ 0x14052CFE0 (sub_14052CFE0.c)
 *     sub_14052D1D0 @ 0x14052D1D0 (sub_14052D1D0.c)
 *     sub_14052D3A0 @ 0x14052D3A0 (sub_14052D3A0.c)
 *     sub_14052D550 @ 0x14052D550 (sub_14052D550.c)
 *     sub_14052D720 @ 0x14052D720 (sub_14052D720.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14052D8D0 @ 0x14052D8D0 (sub_14052D8D0.c)
 */

__int64 __fastcall sub_14052CED4(ULONG_PTR BugCheckParameter2, unsigned int a2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v3; // rdi
  ULONG_PTR v5; // rsi
  __int64 v6; // rbp
  __int64 result; // rax

  v3 = a2;
  v5 = (unsigned int)BugCheckParameter2;
  v6 = MEMORY[0xFFFFF78000000008];
  while ( 1 )
  {
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter4 + 8), 0, 0);
    if ( !(_DWORD)result )
      break;
    sub_14052D8D0((unsigned int)v3);
    if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v6) >= 0x989680 )
      KeBugCheckEx(0x1DAu, 6uLL, v5, v3, BugCheckParameter4);
  }
  return result;
}
