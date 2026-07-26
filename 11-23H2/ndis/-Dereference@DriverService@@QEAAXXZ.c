/*
 * XREFs of ?Dereference@DriverService@@QEAAXXZ @ 0x1C0141DE0
 * Callers:
 *     wil::details::lambda_call__lambda_16f7d953e3aee9e3fcfcb9da7fdb0623___::_lambda_call__lambda_16f7d953e3aee9e3fcfcb9da7fdb0623___ @ 0x1C00D0120 (wil--details--lambda_call__lambda_16f7d953e3aee9e3fcfcb9da7fdb0623___--_lambda_call__lambda_16f7.c)
 *     ?DereferenceModule@KLoader@@QEAAXPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x1C0141390 (-DereferenceModule@KLoader@@QEAAXPEAUKLOADER_MODULE_REFERENCE__@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C00084A8 (WPP_RECORDER_SF_qD.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B50 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BAC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?Close@DriverService@@QEAAXXZ @ 0x1C0141DB0 (-Close@DriverService@@QEAAXXZ.c)
 */

void __fastcall DriverService::Dereference(DriverService *this)
{
  int v2; // eax
  int v3; // eax
  KLockHolder v4; // [rsp+40h] [rbp-28h] BYREF

  v4.m_State = Unlocked;
  v4.m_Lock = (KPushLockBase *)((char *)this + 8);
  v4.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v4);
  v2 = *((_DWORD *)this + 4);
  if ( !v2 )
    NT_ASSERT("m_referenceCount > 0");
  v3 = v2 - 1;
  *((_DWORD *)this + 4) = v3;
  if ( !v3 )
    DriverService::Close((void **)this);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xDu,
      (struct _GUID *)&WPP_306c5f62fe7235e3b3f6b40a211ce2fc_Traceguids,
      (char)this,
      *((_DWORD *)this + 4));
  KLockHolder::~KLockHolder(&v4);
}
