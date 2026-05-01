/*
 * XREFs of ?FindAllApplicationsByAppID@CallerIdentity@@YAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1805E71E4
 * Callers:
 *     CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_66c33cbe5bd20407278e6b687b296685___ @ 0x1805E78C0 (CallerIdentity--ApiPolicyChecker--_ForEachApplicationByAppID__lambda_66c33cbe5bd20407278e6b687b2.c)
 *     CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_cd3a7c934a8972da93916929ed6f73f0___ @ 0x1805E7A14 (CallerIdentity--ApiPolicyChecker--_ForEachApplicationByAppID__lambda_cd3a7c934a8972da93916929ed6.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     CoCreateInstance_0 @ 0x180189A77 (CoCreateInstance_0.c)
 *     ?FindAllApplicationsByAppID@CallerIdentity@@YAJPEAUIUnknown@@PEBGPEAPEAUIObjectArray@@@Z @ 0x1805E70D4 (-FindAllApplicationsByAppID@CallerIdentity@@YAJPEAUIUnknown@@PEBGPEAPEAUIObjectArray@@@Z.c)
 */

__int64 __fastcall CallerIdentity::FindAllApplicationsByAppID(
        struct IUnknown *this,
        const unsigned __int16 *a2,
        struct IObjectArray **a3)
{
  __int64 *ppv; // rbx
  int Instance_0; // ebx
  struct IObjectArray **v7; // r9
  CallerIdentity *v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)a2 = 0LL;
  v9 = 0LL;
  ppv = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v9, &v10);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(ppv);
  Instance_0 = CoCreateInstance_0(
                 &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
                 0LL,
                 0x404u,
                 &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
                 (LPVOID *)ppv);
  if ( Instance_0 >= 0 )
    Instance_0 = CallerIdentity::FindAllApplicationsByAppID(
                   (__int64 (__fastcall ***)(CallerIdentity *, GUID *, __int64 *))v9,
                   this,
                   a2,
                   v7);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  return (unsigned int)Instance_0;
}
