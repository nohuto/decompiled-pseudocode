/*
 * XREFs of ?CleanupInputDestHwndRefsForDesktopThreadExit@CTouchProcessor@@QEAAXXZ @ 0x1C0088B80
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0088D40 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C0088D80 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     _lambda_eba40ec2e57c463160aa5102b24468e6_::operator() @ 0x1C01BD758 (_lambda_eba40ec2e57c463160aa5102b24468e6_--operator().c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CleanupInputDestHwndRefsForDesktopThreadExit(CTouchProcessor *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 *v5; // rdi
  CTouchProcessor *v6; // rbx
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 i; // r15
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  _BYTE v15[48]; // [rsp+20h] [rbp-58h] BYREF
  char v16; // [rsp+80h] [rbp+8h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v15,
    (CTouchProcessor *)((char *)this + 32),
    0LL);
  v16 = 0;
  v5 = (__int64 *)*((_QWORD *)this + 6);
  if ( v5 != (__int64 *)((char *)this + 48) )
  {
    do
    {
      v7 = v5[30];
      v8 = 0LL;
      for ( i = v5[29]; (unsigned int)v8 < *((_DWORD *)v5 + 10); v8 = (unsigned int)(v8 + 1) )
      {
        lambda_eba40ec2e57c463160aa5102b24468e6_::operator()(v3, v7 + 160 * v8 + 16, &v16);
        v10 = 480LL * (unsigned int)v8;
        lambda_eba40ec2e57c463160aa5102b24468e6_::operator()(v11, v10 + i + 24, &v16);
        lambda_eba40ec2e57c463160aa5102b24468e6_::operator()(v12, v10 + i + 352, &v16);
      }
      v5 = (__int64 *)*v5;
    }
    while ( v5 != (__int64 *)((char *)this + 48) );
    if ( v16 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  }
  v16 = 0;
  v6 = (CTouchProcessor *)*((_QWORD *)this + 8);
  if ( v6 != (CTouchProcessor *)((char *)this + 64) )
  {
    do
    {
      lambda_eba40ec2e57c463160aa5102b24468e6_::operator()(v3, (char *)v6 + 72, &v16);
      v6 = *(CTouchProcessor **)v6;
    }
    while ( v6 != (CTouchProcessor *)((char *)this + 64) );
    if ( v16 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v13, v14);
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v15);
}
