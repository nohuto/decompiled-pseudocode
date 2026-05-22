/*
 * XREFs of _lambda_c4b5ac531e4df77abc1357e1027acfb6_::operator() @ 0x1800E58EC
 * Callers:
 *     ?ReadFeatureReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJEPEAEK@Z @ 0x1800E5B30 (-ReadFeatureReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJEPEAEK@Z.c)
 * Callees:
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180093924 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall lambda_c4b5ac531e4df77abc1357e1027acfb6_::operator()(__int64 a1)
{
  _BYTE **v1; // rax
  _BYTE *v2; // r9
  _DWORD *v3; // rax
  int v4; // eax
  int v6; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_BYTE ***)a1;
  v6 = 0;
  v2 = *v1;
  v3 = *(_DWORD **)(a1 + 24);
  *v2 = **(_BYTE **)(a1 + 8);
  v4 = NtRIMDeviceIoControl(
         *(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL),
         *(_QWORD *)(*(_QWORD *)(a1 + 16) + 168LL),
         721298LL,
         0LL,
         0,
         v2,
         *v3,
         &v6,
         0);
  if ( v4 >= 0 )
    return 0LL;
  else
    return wil::details::NtStatusToHr((wil::details *)(unsigned int)v4);
}
