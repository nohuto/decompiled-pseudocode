/*
 * XREFs of sub_140B23F80 @ 0x140B23F80
 * Callers:
 *     sub_140B23A48 @ 0x140B23A48 (sub_140B23A48.c)
 * Callees:
 *     ExInitializeRundownProtection @ 0x1402A0840 (ExInitializeRundownProtection.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140988ECC @ 0x140988ECC (sub_140988ECC.c)
 */

__int64 __fastcall sub_140B23F80(__int64 a1)
{
  int v2; // ecx
  unsigned int v3; // eax
  unsigned int v4; // edx
  int v5; // r8d
  __int64 result; // rax

  memset((void *)a1, 0, 0xA0uLL);
  v2 = -1;
  v3 = 8;
  v4 = 8;
  v5 = -1;
  do
  {
    ++v5;
    v4 >>= 1;
  }
  while ( v4 );
  *(_QWORD *)(a1 + 68) = 0LL;
  *(_DWORD *)(a1 + 64) = v5;
  *(_QWORD *)(a1 + 56) = 0LL;
  do
  {
    ++v2;
    v3 >>= 1;
  }
  while ( v3 );
  *(_DWORD *)(a1 + 104) = v2;
  *(_QWORD *)(a1 + 108) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 16) = a1 + 24;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)(a1 + 136));
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 136));
  result = (unsigned int)xmmword_140C54344;
  if ( (xmmword_140C54344 & 2) != 0 )
    return sub_140988ECC(a1);
  return result;
}
