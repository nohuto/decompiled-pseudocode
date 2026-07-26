/*
 * XREFs of ?Initialize@ExecutionContextLibrary@@QEAAJXZ @ 0x1C0140908
 * Callers:
 *     ?ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z @ 0x1C012E590 (-ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z.c)
 *     ?Initialize@NdisPoll@@QEAAJXZ @ 0x1C0140AB0 (-Initialize@NdisPoll@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     KLoaderQueryDispatchTable @ 0x1C00CFE40 (KLoaderQueryDispatchTable.c)
 *     KLoaderReferenceModule @ 0x1C00CFF10 (KLoaderReferenceModule.c)
 */

__int64 __fastcall ExecutionContextLibrary::Initialize(struct KLOADER_MODULE_REFERENCE__ **this)
{
  __int64 result; // rax
  __int64 v3; // rcx
  _OWORD *v4; // rax
  struct KLOADER_MODULE_REFERENCE__ *v5; // xmm1_8
  _OWORD *v6; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+28h] [rbp-30h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h]
  struct KLOADER_MODULE_REFERENCE__ **v9; // [rsp+40h] [rbp-18h]

  v7 = 32LL;
  v8 = EXECUTION_CONTEXT_MODULE_ID;
  v9 = this;
  result = KLoaderReferenceModule((struct _KLOADER_REFERENCE_MODULE_CONFIG *)&v7, this + 15);
  if ( !(_DWORD)result )
  {
    v3 = (__int64)this[15];
    v6 = 0LL;
    result = KLoaderQueryDispatchTable(v3, (__int64)&EXECUTION_CONTEXT_DISPATCH_TABLE_ID, (__int64)&v6);
    if ( !(_DWORD)result )
    {
      v4 = v6;
      if ( *(_QWORD *)v6 >= 0x78uLL )
      {
        *(_OWORD *)this = *v6;
        *((_OWORD *)this + 1) = v4[1];
        *((_OWORD *)this + 2) = v4[2];
        *((_OWORD *)this + 3) = v4[3];
        *((_OWORD *)this + 4) = v4[4];
        *((_OWORD *)this + 5) = v4[5];
        *((_OWORD *)this + 6) = v4[6];
        v5 = (struct KLOADER_MODULE_REFERENCE__ *)*((_QWORD *)v4 + 14);
        result = 0LL;
        this[14] = v5;
      }
      else
      {
        return 3221225476LL;
      }
    }
  }
  return result;
}
