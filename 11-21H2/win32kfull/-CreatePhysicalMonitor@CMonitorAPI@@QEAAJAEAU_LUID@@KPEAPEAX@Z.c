/*
 * XREFs of ?CreatePhysicalMonitor@CMonitorAPI@@QEAAJAEAU_LUID@@KPEAPEAX@Z @ 0x1C026E864
 * Callers:
 *     CreatePhysicalMonitorWrap @ 0x1C026FD10 (CreatePhysicalMonitorWrap.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ??0CPhysicalMonitorHandle@@QEAA@AEAU_LUID@@KPEAJ@Z @ 0x1C026E56C (--0CPhysicalMonitorHandle@@QEAA@AEAU_LUID@@KPEAJ@Z.c)
 *     ?AddHandleToTable@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAVCPhysicalMonitorHandle@@PEAPEAX@Z @ 0x1C026E764 (-AddHandleToTable@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAVCPhysicalMon.c)
 */

__int64 __fastcall CMonitorAPI::CreatePhysicalMonitor(CMonitorAPI *this, struct _LUID *a2, unsigned int a3, void **a4)
{
  PVOID v4; // rbx
  CPhysicalMonitorHandle *Pool2; // rax
  CPhysicalMonitorHandle *v9; // rax
  CPhysicalMonitorHandle *v10; // rdi
  unsigned int v11; // ebx
  void *v13; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v14[16]; // [rsp+28h] [rbp-10h] BYREF
  CMonitorAPI *v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = this;
  v4 = P;
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v14, (struct OPM::CMutex *)P);
  v13 = 0LL;
  LODWORD(v15) = 0;
  Pool2 = (CPhysicalMonitorHandle *)ExAllocatePool2(258LL, 96LL, 1664248135LL);
  if ( Pool2 && (v9 = CPhysicalMonitorHandle::CPhysicalMonitorHandle(Pool2, a2, a3, (int *)&v15), (v10 = v9) != 0LL) )
  {
    if ( (int)v15 < 0
      || (LODWORD(v15) = OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::AddHandleToTable(
                           (__int64)v4 + 8,
                           (__int64)v9,
                           &v13),
          v11 = (unsigned int)v15,
          (int)v15 < 0) )
    {
      (**(void (__fastcall ***)(CPhysicalMonitorHandle *, __int64))v10)(v10, 1LL);
      v11 = (unsigned int)v15;
    }
    else
    {
      *a4 = v13;
    }
  }
  else
  {
    v11 = -1073741801;
    LODWORD(v15) = -1073741801;
  }
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v14);
  return v11;
}
