/*
 * XREFs of ?PromoteToPrimary@MPCInputProviderBase@@UEAAXXZ @ 0x1800D7440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCInputProviderBase::PromoteToPrimary(MPCInputProviderBase *this)
{
  *((_BYTE *)this + 3549) = 0;
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 3) + 64LL))((char *)this - 24);
}
