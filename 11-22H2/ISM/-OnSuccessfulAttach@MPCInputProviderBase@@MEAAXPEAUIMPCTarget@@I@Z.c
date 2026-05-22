/*
 * XREFs of ?OnSuccessfulAttach@MPCInputProviderBase@@MEAAXPEAUIMPCTarget@@I@Z @ 0x1800D7170
 * Callers:
 *     <none>
 * Callees:
 *     ??$MPCInputProviderSourceDetectedLost@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@_NAEAI@ISMTracing@@SAXAEAPEAUIMPCTarget@@$$QEAPEAULegacyInputInfo@@$$QEA_NAEAI@Z @ 0x1800D4578 (--$MPCInputProviderSourceDetectedLost@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@_NAEAI@ISMTracing@.c)
 */

void __fastcall MPCInputProviderBase::OnSuccessfulAttach(
        MPCInputProviderBase *this,
        struct IMPCTarget *a2,
        unsigned int a3)
{
  char v4; // [rsp+30h] [rbp+8h] BYREF
  struct IMPCTarget *v5; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v6; // [rsp+40h] [rbp+18h] BYREF
  struct LegacyInputInfo *v7; // [rsp+48h] [rbp+20h] BYREF

  v6 = a3;
  v5 = a2;
  v4 = 1;
  v7 = (MPCInputProviderBase *)((char *)this + 560);
  ISMTracing::MPCInputProviderSourceDetectedLost<IMPCTarget * &,LegacyInputInfo *,bool,unsigned int &>(
    &v5,
    &v7,
    (bool *)&v4,
    &v6);
  *((_WORD *)this + 1784) = 257;
}
