/*
 * XREFs of SymCryptCallbackAlloc @ 0x14067DF30
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403F7CEC (SymCryptRsakeySetValue.c)
 *     SymCryptEcurveAllocate @ 0x1403F828C (SymCryptEcurveAllocate.c)
 *     SymCryptEckeyAllocate @ 0x1403F8A54 (SymCryptEckeyAllocate.c)
 *     SymCryptEckeySetValue @ 0x1403F8C78 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x1403F9D70 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaPkcs1Verify @ 0x1403FA590 (SymCryptRsaPkcs1Verify.c)
 * Callees:
 *     MincryptAlloc @ 0x140A71FBC (MincryptAlloc.c)
 */

unsigned __int64 __fastcall SymCryptCallbackAlloc(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax

  v1 = 0LL;
  v2 = MincryptAlloc(a1 + 36);
  if ( v2 )
  {
    v1 = (v2 + 35) & 0xFFFFFFFFFFFFFFE0uLL;
    *(_DWORD *)(v1 - 4) = ((v2 + 35) & 0xFFFFFFE0) - v2;
  }
  return v1;
}
