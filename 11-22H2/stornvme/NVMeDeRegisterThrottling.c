/*
 * XREFs of NVMeDeRegisterThrottling @ 0x1C0015030
 * Callers:
 *     NVMeDisableThrottling @ 0x1C000ED24 (NVMeDisableThrottling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeDeRegisterThrottling(__int64 a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 result; // rax

  if ( a2 < 0 )
    return 3238002695LL;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 8LL * a2 + 4096);
  if ( !v4 )
    return 3238002695LL;
  result = StorPortExtendedFunction(1LL, a1, v4);
  *(_QWORD *)(a1 + 8 * v3 + 4096) = 0LL;
  return result;
}
