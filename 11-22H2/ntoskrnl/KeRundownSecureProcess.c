/*
 * XREFs of KeRundownSecureProcess @ 0x14056F7BC
 * Callers:
 *     PspRundownSingleProcess @ 0x14068AD74 (PspRundownSingleProcess.c)
 * Callees:
 *     VslRundownSecureProcess @ 0x140942FC0 (VslRundownSecureProcess.c)
 */

__int64 __fastcall KeRundownSecureProcess(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 992) )
    return VslRundownSecureProcess();
  return result;
}
