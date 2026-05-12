/*
 * XREFs of GetNextFreeToken @ 0x1C007F3D4
 * Callers:
 *     ParseToken @ 0x1C007FEE0 (ParseToken.c)
 * Callees:
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 */

__int64 __fastcall GetNextFreeToken(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rbx

  v1 = *(unsigned int *)(a1 + 36);
  v2 = 0LL;
  if ( (unsigned int)v1 >= 0x100 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x26u,
        (__int64)&WPP_d27db7d0d3983550ea60457830c64ea4_Traceguids);
  }
  else
  {
    *(_DWORD *)(a1 + 36) = v1 + 1;
    return a1 + 8 * (v1 + 2 * v1 + 5);
  }
  return v2;
}
