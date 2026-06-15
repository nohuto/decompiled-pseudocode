/*
 * XREFs of _lambda_2d0fc716a24758c5659c2630b6d3cdc8_::operator() @ 0x18015A2A4
 * Callers:
 *     wistd::__function::__func__lambda_2d0fc716a24758c5659c2630b6d3cdc8__void___cdecl(void)_::operator() @ 0x18015A6E0 (wistd--__function--__func__lambda_2d0fc716a24758c5659c2630b6d3cdc8__void___cdecl(void)_--operato.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001C004 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002D580 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ?ScheduleGracePeriodTimer@AtmosCheck@@AEAAXXZ @ 0x18015D5F0 (-ScheduleGracePeriodTimer@AtmosCheck@@AEAAXXZ.c)
 */

void __fastcall lambda_2d0fc716a24758c5659c2630b6d3cdc8_::operator()(_QWORD *a1)
{
  _BYTE *v2; // rcx
  __int64 v3; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-30h] BYREF

  if ( *a1 )
  {
    v3 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(a1, &v3) >= 0 && v3 )
    {
      if ( (unsigned int)dword_1801CD2B8 > 5 )
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_1801CD2B8,
          (unsigned __int8 *)dword_18019924D,
          0LL,
          0LL,
          2u,
          &v4);
      v2 = (_BYTE *)a1[1];
      v2[265] = 1;
      AtmosCheck::ScheduleGracePeriodTimer(v2);
    }
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v3);
  }
}
