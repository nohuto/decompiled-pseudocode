/*
 * XREFs of ?Reference@DriverService@@QEAAJXZ @ 0x1C0141FE4
 * Callers:
 *     ?ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEAPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x1C0141A70 (-ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEAPEAUKLOADER_MODULE_REFER.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_d @ 0x1C00331FC (WPP_RECORDER_SF_d_ea_1C00331FC.c)
 *     ?LoadDriver@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C00D0310 (-LoadDriver@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B90 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BEC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?Close@DriverService@@QEAAXXZ @ 0x1C0141DD0 (-Close@DriverService@@QEAAXXZ.c)
 */

__int64 __fastcall DriverService::Reference(DriverService *this)
{
  unsigned int Driver; // edi
  __int64 v3; // rax
  int v4; // eax
  KLockHolder v6; // [rsp+40h] [rbp-28h] BYREF

  v6.m_State = Unlocked;
  v6.m_Lock = (KPushLockBase *)((char *)this + 8);
  v6.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v6);
  if ( *((_DWORD *)this + 4) )
    goto LABEL_13;
  if ( *((_QWORD *)this + 3) )
    NT_ASSERT("m_driverObject == nullptr");
  Driver = LoadDriver(*(struct _UNICODE_STRING **)this);
  v3 = *((_QWORD *)this + 3);
  if ( Driver )
  {
    if ( v3 )
      DriverService::Close((void **)this);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xAu,
        (struct _GUID *)&WPP_306c5f62fe7235e3b3f6b40a211ce2fc_Traceguids,
        Driver);
    goto LABEL_16;
  }
  if ( v3 )
  {
LABEL_13:
    v4 = *((_DWORD *)this + 4) + 1;
    *((_DWORD *)this + 4) = v4;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xCu,
        (struct _GUID *)&WPP_306c5f62fe7235e3b3f6b40a211ce2fc_Traceguids,
        (char)this,
        v4);
    Driver = 0;
  }
  else
  {
    DriverService::Close((void **)this);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xBu,
        (struct _GUID *)&WPP_306c5f62fe7235e3b3f6b40a211ce2fc_Traceguids);
    Driver = -1073741637;
  }
LABEL_16:
  KLockHolder::~KLockHolder(&v6);
  return Driver;
}
