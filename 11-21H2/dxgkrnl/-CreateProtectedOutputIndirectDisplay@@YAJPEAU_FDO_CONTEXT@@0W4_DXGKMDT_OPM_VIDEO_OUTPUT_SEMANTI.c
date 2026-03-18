/*
 * XREFs of ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C0064B48
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C0020F80 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C01B40A0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C01B445C (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkOpmCreateHandle @ 0x1C01ED5A8 (DxgkOpmCreateHandle.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C01EDA3C (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C01EDAF4 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C01EF8F4 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C01EF978 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkOpmGetRedirectionInfo @ 0x1C02C4FFC (DxgkOpmGetRedirectionInfo.c)
 */

__int64 __fastcall CreateProtectedOutputIndirectDisplay(
        struct _FDO_CONTEXT *a1,
        struct _FDO_CONTEXT *a2,
        unsigned int a3,
        unsigned int a4,
        void **a5,
        void **a6)
{
  __int64 v9; // r14
  int v10; // eax
  __int64 RedirectionInfo; // rbx
  void *v12; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  void *v17; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-41h] BYREF
  _OWORD v19[2]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v20; // [rsp+70h] [rbp-19h]
  int v21; // [rsp+78h] [rbp-11h]

  v17 = 0LL;
  v18 = 0LL;
  v9 = a4;
  if ( *((_DWORD *)a1 + 754) >= 2u )
  {
    v10 = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)a2 + 3), 0LL);
    RedirectionInfo = v10;
    if ( v10 < 0 )
      goto LABEL_3;
    v12 = (void *)*((_QWORD *)a2 + 487);
    memset(v19, 0, sizeof(v19));
    v20 = 0LL;
    v21 = 0;
    RedirectionInfo = (int)DxgkOpmGetRedirectionInfo(v12, v9, &v18);
    DpiReleaseCoreSyncAccessSafe(*((_QWORD *)a2 + 3), 0LL);
    if ( (int)RedirectionInfo < 0 )
      goto LABEL_3;
    if ( v18 )
    {
      v13 = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)a1 + 3), 0LL);
      RedirectionInfo = v13;
      if ( v13 < 0 )
        goto LABEL_3;
      DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)a1 + 487));
      DxgkAcquireAdapterDdiSync(*((_QWORD *)a1 + 487), 1LL);
      v14 = *((_DWORD *)a1 + 754);
      if ( v14 == 2 )
      {
        v15 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _OWORD *, _DWORD, void **))a1 + 392))(
                *((_QWORD *)a1 + 6),
                a3,
                v18,
                v19,
                v9,
                &v17);
      }
      else
      {
        if ( v14 != 3 )
        {
          LODWORD(RedirectionInfo) = -1073741637;
LABEL_17:
          DxgkReleaseAdapterDdiSync(*((_QWORD *)a1 + 487));
          DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)a1 + 487));
          DpiReleaseCoreSyncAccessSafe(*((_QWORD *)a1 + 3), 0LL);
          return (unsigned int)RedirectionInfo;
        }
        v15 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _OWORD *, __int64, int, void **))a1 + 391))(
                *((_QWORD *)a1 + 6),
                a3,
                v18,
                v19,
                v9,
                15,
                &v17);
      }
      LODWORD(RedirectionInfo) = v15;
      if ( v15 >= 0 )
      {
        LODWORD(RedirectionInfo) = DxgkOpmCreateHandle(*((DXGADAPTER **)a1 + 487), v17, a5);
        if ( (int)RedirectionInfo < 0 )
          (*((void (__fastcall **)(_QWORD, void *))a1 + 390))(*((_QWORD *)a1 + 6), v17);
        else
          *a6 = v17;
      }
      goto LABEL_17;
    }
  }
  RedirectionInfo = -1073741637LL;
LABEL_3:
  WdLogSingleEntry1(3LL, RedirectionInfo);
  return (unsigned int)RedirectionInfo;
}
