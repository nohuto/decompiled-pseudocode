/*
 * XREFs of _lambda_8f6469647279b04fec56e75d6ce621cf_::operator() @ 0x1801531D4
 * Callers:
 *     wistd::__function::__func__lambda_8f6469647279b04fec56e75d6ce621cf__void___cdecl(void)_::operator() @ 0x180153590 (wistd--__function--__func__lambda_8f6469647279b04fec56e75d6ce621cf__void___cdecl(void)_--operato.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800029FC (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EFC8 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18003FB14 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?ScheduleGracePeriodTimer@AtmosCheck@@AEAAXXZ @ 0x180156600 (-ScheduleGracePeriodTimer@AtmosCheck@@AEAAXXZ.c)
 */

void __fastcall lambda_8f6469647279b04fec56e75d6ce621cf_::operator()(_QWORD *a1)
{
  _BYTE *v2; // rcx
  __int64 v3; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-30h] BYREF

  if ( *a1 )
  {
    v3 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(a1, &v3) >= 0 && v3 )
    {
      if ( (unsigned int)dword_1801C02B0 > 5 )
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_1801C02B0,
          (unsigned __int8 *)dword_18018F67D,
          0LL,
          0LL,
          2u,
          &v4);
      v2 = (_BYTE *)a1[1];
      v2[265] = 1;
      AtmosCheck::ScheduleGracePeriodTimer(v2);
    }
    Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v3);
  }
}
