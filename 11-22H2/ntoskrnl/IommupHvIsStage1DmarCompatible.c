/*
 * XREFs of IommupHvIsStage1DmarCompatible @ 0x140525114
 * Callers:
 *     IommupDeviceEnablePasidTaggedDma @ 0x14082AEB4 (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

bool __fastcall IommupHvIsStage1DmarCompatible(_DWORD *a1, char a2)
{
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  if ( HalpHvParaVirtIommuDomain
    && (!a2 || IommupHvPasidEnabled)
    && *a1 == 1
    && (int)((__int64 (__fastcall *)(_DWORD *, __int128 *))qword_140C62660)(a1, &v4) >= 0
    && (v4 & 0x20) != 0 )
  {
    if ( !a2 )
      return 1;
    if ( (v4 & 0x200) != 0 )
      return DWORD1(v4) >= IommupHvMaximumAsids;
  }
  return 0;
}
