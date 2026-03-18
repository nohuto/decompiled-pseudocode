/*
 * XREFs of ?NotifyDxgProcessDestroyed@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0368B70
 * Callers:
 *     ?DestroyProcessCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0343840 (-DestroyProcessCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0008770 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ?NotifyVmmsProcessDestroyed@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0368C0C (-NotifyVmmsProcessDestroyed@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::NotifyDxgProcessDestroyed(struct DXGADAPTER *const *this, struct DXGPROCESS *a2)
{
  DXGVIRTUALGPUMANAGER *v4; // rcx
  _BYTE v5[144]; // [rsp+20h] [rbp-A8h] BYREF

  if ( (*((_DWORD *)a2 + 106) & 0x40) != 0 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v5, this[2], 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v5, 0LL) >= 0 )
    {
      v4 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 234);
      if ( v4 )
        DXGVIRTUALGPUMANAGER::NotifyVmmsProcessDestroyed(v4, a2);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v5);
  }
}
