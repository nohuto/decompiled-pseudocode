/*
 * XREFs of ?Initialize@ExecutionContextLibrary@@QEAAJXZ @ 0x1C0134B84
 * Callers:
 *     ?ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z @ 0x1C0122A88 (-ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z.c)
 *     ?Initialize@NdisPoll@@QEAAJXZ @ 0x1C0134D14 (-Initialize@NdisPoll@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     KLoaderQueryDispatchTable @ 0x1C00CB168 (KLoaderQueryDispatchTable.c)
 *     KLoaderReferenceModule @ 0x1C00CB240 (KLoaderReferenceModule.c)
 */

__int64 __fastcall ExecutionContextLibrary::Initialize(struct KLOADER_MODULE_REFERENCE__ **this)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _OWORD *v5; // rax
  __int128 v6; // xmm0
  _OWORD *v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h]
  struct KLOADER_MODULE_REFERENCE__ **v10; // [rsp+40h] [rbp-18h]

  v8 = 32LL;
  v9 = EXECUTION_CONTEXT_MODULE_ID;
  v10 = this;
  result = KLoaderReferenceModule((struct _KLOADER_REFERENCE_MODULE_CONFIG *)&v8, this + 14);
  if ( !(_DWORD)result )
  {
    v4 = (__int64)this[14];
    v7 = 0LL;
    result = KLoaderQueryDispatchTable(v4, v3, (__int64)&v7);
    if ( !(_DWORD)result )
    {
      v5 = v7;
      if ( *(_QWORD *)v7 >= 0x70uLL )
      {
        *(_OWORD *)this = *v7;
        *((_OWORD *)this + 1) = v5[1];
        *((_OWORD *)this + 2) = v5[2];
        *((_OWORD *)this + 3) = v5[3];
        *((_OWORD *)this + 4) = v5[4];
        *((_OWORD *)this + 5) = v5[5];
        v6 = v5[6];
        result = 0LL;
        *((_OWORD *)this + 6) = v6;
      }
      else
      {
        return 3221225476LL;
      }
    }
  }
  return result;
}
