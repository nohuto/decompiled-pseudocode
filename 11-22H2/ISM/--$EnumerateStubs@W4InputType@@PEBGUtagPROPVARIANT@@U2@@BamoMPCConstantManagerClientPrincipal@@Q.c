/*
 * XREFs of ??$EnumerateStubs@W4InputType@@PEBGUtagPROPVARIANT@@U2@@BamoMPCConstantManagerClientPrincipal@@QEAAJP6AJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGUtagPROPVARIANT@@3@Z_N1233@Z @ 0x1800BCA88
 * Callers:
 *     ?OnConstantChanged@MPCConstantManager@@QEAAXW4InputType@@PEBGAEBUtagPROPVARIANT@@2@Z @ 0x1800BEABC (-OnConstantChanged@MPCConstantManager@@QEAAXW4InputType@@PEBGAEBUtagPROPVARIANT@@2@Z.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000B16C (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B2C0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CurrentThreadIsDispatcher@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1800B0FA4 (-CurrentThreadIsDispatcher@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ??$EnumerateStubs@P6AJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGUtagPROPVARIANT@@3@ZW42@PEBGU3@U3@@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@P6AJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGUtagPROPVARIANT@@4@Z2344@Z_N52344@Z @ 0x1800BC988 (--$EnumerateStubs@P6AJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGUtagPROPVARIANT@@3@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoMPCConstantManagerClientPrincipal::EnumerateStubs<enum InputType,unsigned short const *,tagPROPVARIANT,tagPROPVARIANT>(
        __int64 a1,
        Microsoft::BamoImpl::BamoImplObject *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v9; // r8
  const char *v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int128 v15; // [rsp+40h] [rbp-48h] BYREF
  __int64 v16; // [rsp+50h] [rbp-38h]
  __int128 v17; // [rsp+60h] [rbp-28h] BYREF
  __int64 v18; // [rsp+70h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  Microsoft::BamoImpl::BamoImplObject *v20; // [rsp+98h] [rbp+10h] BYREF

  v20 = a2;
  Microsoft::BamoImpl::InternalLock::InternalLock(&v20, *(struct Microsoft::BamoImpl::ConnectionIndirector **)(a1 + 32));
  if ( !Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadIsDispatcher(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(a1 + 32) + 32LL)) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x181A,
      (int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCManagerBamo.bamo.h",
      v10);
  v15 = *(_OWORD *)a7;
  v16 = *(_QWORD *)(a7 + 16);
  v17 = *(_OWORD *)a6;
  v18 = *(_QWORD *)(a6 + 16);
  v11 = Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<long (*)(BamoMPCConstantManagerClientStub *,enum InputType,unsigned short const *,tagPROPVARIANT,tagPROPVARIANT),enum InputType,unsigned short const *,tagPROPVARIANT,tagPROPVARIANT>(
          a1 + 16,
          (__int64 (__fastcall *)(__int64, __int64 (__fastcall *)(int, int, int, int, __int64), _QWORD, __int64, int *, __int128 *))_lambda_6936635e6f5f969671f4d9cb7d48ef70_::_lambda_invoker_cdecl_,
          v9,
          (__int64)v10,
          a4,
          a5,
          &v17,
          &v15);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v20, v12, v13);
  return v11;
}
