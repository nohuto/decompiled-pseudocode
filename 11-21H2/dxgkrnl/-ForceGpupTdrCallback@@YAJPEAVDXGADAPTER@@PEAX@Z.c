/*
 * XREFs of ?ForceGpupTdrCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C03017A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ForceGpupTdrCallback(struct DXGADAPTER *a1, void *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  _OWORD v6[3]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v7[144]; // [rsp+50h] [rbp-A8h] BYREF

  v2 = *((_QWORD *)a1 + 350);
  if ( v2 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 27) + 64LL) + 5000LL) )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v7, a1, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v7, 0LL) >= 0 )
    {
      v3 = *(_QWORD *)(v2 + 624);
      v4 = *(_QWORD *)(v2 + 632);
      memset(v6, 0, sizeof(v6));
      LODWORD(v6[0]) = 6;
      (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)(v3 + 8) + 64LL))(v4, v6);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v7);
  }
  return 0LL;
}
