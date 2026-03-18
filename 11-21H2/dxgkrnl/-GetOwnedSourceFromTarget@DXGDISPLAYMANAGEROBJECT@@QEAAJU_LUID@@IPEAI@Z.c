/*
 * XREFs of ?GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z @ 0x1C02F4064
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x1C02F4CF0 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C000F25C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C01A7544 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?ContainsTarget@DXGDISPLAYMANAGEROBJECT@@QEAA_NU_LUID@@I@Z @ 0x1C02F3B60 (-ContainsTarget@DXGDISPLAYMANAGEROBJECT@@QEAA_NU_LUID@@I@Z.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::GetOwnedSourceFromTarget(
        DXGDISPLAYMANAGEROBJECT *this,
        struct _LUID a2,
        unsigned int a3,
        unsigned int *a4)
{
  DWORD LowPart; // ebx
  struct DXGADAPTER *v8; // rdi
  unsigned int SourceConnectedToTargetInClientVidPn; // ebx
  struct _LUID v10; // [rsp+20h] [rbp-89h] BYREF
  struct DXGADAPTER *v11[3]; // [rsp+28h] [rbp-81h] BYREF
  _BYTE v12[144]; // [rsp+40h] [rbp-69h] BYREF

  v10 = a2;
  LowPart = a2.LowPart;
  if ( !DXGDISPLAYMANAGEROBJECT::ContainsTarget(this, a2, a3) )
    return 3221226021LL;
  v11[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v11, &v10);
  v8 = v11[0];
  if ( v11[0] )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v12, v11[0], 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v12, 0LL) >= 0 && *((_QWORD *)v8 + 349) )
    {
      SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v8, a3, a4);
    }
    else
    {
      WdLogSingleEntry2(3LL, v10.HighPart, LowPart);
      SourceConnectedToTargetInClientVidPn = -1073741275;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v12);
  }
  else
  {
    WdLogSingleEntry2(3LL, v10.HighPart, LowPart);
    SourceConnectedToTargetInClientVidPn = -1073741275;
  }
  DXGADAPTER_REFERENCE::Assign(v11, 0LL);
  return SourceConnectedToTargetInClientVidPn;
}
