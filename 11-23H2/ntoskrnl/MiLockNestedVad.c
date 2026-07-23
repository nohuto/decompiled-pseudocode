/*
 * XREFs of MiLockNestedVad @ 0x140A47E58
 * Callers:
 *     MiFreeVadRange @ 0x140309E30 (MiFreeVadRange.c)
 *     MiPerformVadSplitting @ 0x14030B884 (MiPerformVadSplitting.c)
 *     MiUpControlAreaRefs @ 0x14062644C (MiUpControlAreaRefs.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall MiLockNestedVad(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  __int64 result; // rax
  __int64 v3; // rbx

  v1 = (unsigned __int64 *)(a1 + 40);
  result = KeAbPreAcquire(a1 + 40, 0LL);
  v3 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v1, result, (__int64)v1);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  return result;
}
