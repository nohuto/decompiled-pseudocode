/*
 * XREFs of ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x1800C7F44
 * Callers:
 *     ?SendInputToTargetApp@MPCHandProcessor@@AEAAXPEAUIMPCTarget@@0PEAULegacyInputInfo@@@Z @ 0x1800C0234 (-SendInputToTargetApp@MPCHandProcessor@@AEAAXPEAUIMPCTarget@@0PEAULegacyInputInfo@@@Z.c)
 *     ?ClearInputTargets@MPCInputProviderBase@@IEAAXXZ @ 0x1800C5610 (-ClearInputTargets@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?DeliverInputToTarget@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@1@Z @ 0x1801DDC18 (-DeliverInputToTarget@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@1@Z.c)
 *     ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801EA760 (-Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MPCInputProviderBase_SendSourceDetectedFailed@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@AEAIAEAJ@ISMTracing@@SAXAEAPEAUIMPCTarget@@$$QEAPEAULegacyInputInfo@@AEAIAEAJ@Z @ 0x1800C45A8 (--$MPCInputProviderBase_SendSourceDetectedFailed@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@AEAIAEA.c)
 */

void __fastcall MPCInputProviderBase::ProcessSourceDetectedAndLost(
        MPCInputProviderBase *this,
        struct IMPCTarget *a2,
        struct IMPCTarget *a3,
        bool *a4,
        signed int a5)
{
  struct IMPCTarget *v7; // r15
  char v9; // bp
  char *v10; // rbx
  unsigned int v11[14]; // [rsp+30h] [rbp-38h] BYREF
  struct LegacyInputInfo *v12; // [rsp+78h] [rbp+10h] BYREF
  struct IMPCTarget *v13; // [rsp+80h] [rbp+18h] BYREF

  v13 = a3;
  v11[0] = 0;
  v7 = a2;
  if ( a4 )
    *a4 = 0;
  if ( a2 != a3 || !*((_BYTE *)this + 3568) )
  {
    v9 = *((_BYTE *)this + 3568);
    if ( a2 && a2 != a3 && v9 )
    {
      v10 = (char *)this + 560;
      LOBYTE(a2) = 1;
      (*(void (__fastcall **)(MPCInputProviderBase *, struct IMPCTarget *, _QWORD, char *))(*(_QWORD *)this + 80LL))(
        this,
        a2,
        0LL,
        (char *)this + 560);
      *((_BYTE *)this + 3562) = 1;
      (*(void (__fastcall **)(struct IMPCTarget *, char *))(*(_QWORD *)v7 + 24LL))(v7, v10);
      (*(void (__fastcall **)(MPCInputProviderBase *, struct IMPCTarget *, _QWORD))(*(_QWORD *)this + 96LL))(
        this,
        v7,
        0LL);
    }
    *((_BYTE *)this + 3568) = 0;
    if ( a3 )
    {
      (*(void (__fastcall **)(MPCInputProviderBase *, _QWORD, _QWORD, char *))(*(_QWORD *)this + 80LL))(
        this,
        0LL,
        0LL,
        (char *)this + 560);
      *((_BYTE *)this + 3562) = 1;
      a5 = (*(__int64 (__fastcall **)(struct IMPCTarget *, char *))(*(_QWORD *)a3 + 24LL))(a3, (char *)this + 560);
      if ( a5 >= 0 )
      {
        (*(void (__fastcall **)(MPCInputProviderBase *, struct IMPCTarget *, _QWORD))(*(_QWORD *)this + 104LL))(
          this,
          a3,
          0LL);
      }
      else
      {
        if ( a4 )
          *a4 = (*(__int64 (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)a3 + 32LL))(a3);
        if ( v9 )
        {
          v12 = (MPCInputProviderBase *)((char *)this + 560);
          ISMTracing::MPCInputProviderBase_SendSourceDetectedFailed<IMPCTarget * &,LegacyInputInfo *,unsigned int &,long &>(
            &v13,
            &v12,
            v11,
            &a5);
        }
      }
    }
  }
}
