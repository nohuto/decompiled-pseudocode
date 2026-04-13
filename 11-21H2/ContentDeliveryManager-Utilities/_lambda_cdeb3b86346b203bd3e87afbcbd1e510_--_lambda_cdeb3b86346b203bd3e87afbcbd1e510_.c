/*
 * XREFs of _lambda_cdeb3b86346b203bd3e87afbcbd1e510_::_lambda_cdeb3b86346b203bd3e87afbcbd1e510_ @ 0x180055028
 * Callers:
 *     ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x1800620C0 (-ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_cdeb3b86346b203bd3e87afbcbd1e510_::_lambda_cdeb3b86346b203bd3e87afbcbd1e510_(
        __int64 a1,
        signed __int64 a2,
        __int64 *a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9,
        __int64 *a10)
{
  __int64 v11; // r10
  bool v12; // zf
  signed __int64 v13; // rax
  signed __int32 v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx

  *(_QWORD *)a1 = a2;
  v11 = *a3;
  *(_QWORD *)(a1 + 8) = *a3;
  if ( v11 )
  {
    a2 = *(_QWORD *)(v11 + 112);
    while ( a2 >= 0 )
    {
      if ( (_DWORD)a2 != 0x7FFFFFFF )
      {
        v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 112), a2 + 1, a2);
        v12 = a2 == v13;
        a2 = v13;
        if ( !v12 )
          continue;
      }
      goto LABEL_9;
    }
    do
      v14 = *(_DWORD *)(2 * a2 + 0x10);
    while ( v14 != 0x7FFFFFFF
         && v14 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * a2 + 16), v14 + 1, v14) );
  }
LABEL_9:
  *(_DWORD *)(a1 + 16) = *a4;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)a5;
  *(_QWORD *)a5 = 0LL;
  *(_BYTE *)(a1 + 32) = 0;
  *(_BYTE *)(a5 + 8) = 1;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)a6;
  *(_QWORD *)a6 = 0LL;
  *(_BYTE *)(a1 + 48) = 0;
  *(_BYTE *)(a6 + 8) = 1;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)a7;
  *(_QWORD *)a7 = 0LL;
  *(_BYTE *)(a1 + 64) = 0;
  *(_BYTE *)(a7 + 8) = 1;
  *(_QWORD *)(a1 + 72) = *(_QWORD *)a8;
  *(_QWORD *)a8 = 0LL;
  *(_BYTE *)(a1 + 80) = 0;
  *(_BYTE *)(a8 + 8) = 1;
  v15 = *a9;
  *(_QWORD *)(a1 + 88) = *a9;
  if ( v15 )
    (*(void (__fastcall **)(__int64, signed __int64))(*(_QWORD *)v15 + 8LL))(v15, a2);
  v16 = *a10;
  *(_QWORD *)(a1 + 96) = *a10;
  if ( v16 )
    (*(void (__fastcall **)(__int64, signed __int64))(*(_QWORD *)v16 + 8LL))(v16, a2);
  return a1;
}
