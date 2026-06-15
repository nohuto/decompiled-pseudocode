/*
 * XREFs of ?DecrementObjectCount@SvcHostModule@Internal@Windows@@UEAAKXZ @ 0x1800418D0
 * Callers:
 *     ?DecrementObjectCount@SvcHostModule@Internal@Windows@@WCI@EAAKXZ @ 0x1800766B0 (-DecrementObjectCount@SvcHostModule@Internal@Windows@@WCI@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SvcHostModule::DecrementObjectCount(Windows::Internal::SvcHostModule *this)
{
  unsigned int v2; // ebx

  v2 = CoReleaseSharedService(*((unsigned int *)this + 14));
  if ( !v2 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 8LL))(*((_QWORD *)this + 6));
  return v2;
}
