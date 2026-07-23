/*
 * XREFs of PiUEventBroadcastPortsChangedEvent @ 0x140959BEC
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x1407AA660 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x1402C1E00 (MmGetSessionById.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 *     _CmOpenDeviceRegKey @ 0x1406CE174 (_CmOpenDeviceRegKey.c)
 *     _RegRtlQueryValue @ 0x1406CE918 (_RegRtlQueryValue.c)
 */

int __fastcall PiUEventBroadcastPortsChangedEvent(unsigned int a1, __int128 *a2, __int64 a3)
{
  __int64 SessionById; // rax
  void *v5; // rbx
  unsigned int ExplicitScope; // [rsp+48h] [rbp+7h] BYREF
  unsigned int v8; // [rsp+50h] [rbp+Fh] BYREF
  int v9; // [rsp+54h] [rbp+13h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+17h] BYREF
  __int128 Buffer; // [rsp+60h] [rbp+1Fh] BYREF
  _OWORD v12[2]; // [rsp+70h] [rbp+2Fh] BYREF

  Handle = 0LL;
  v9 = 0;
  ExplicitScope = a1;
  Buffer = 0LL;
  memset(v12, 0, sizeof(v12));
  LODWORD(SessionById) = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, a3, 17, 0, 131097, 0, (__int64)&Handle, 0LL);
  if ( (int)SessionById >= 0 )
  {
    v8 = 32;
    LODWORD(SessionById) = RegRtlQueryValue(Handle, L"PortName", &v9, v12, &v8);
    if ( (int)SessionById >= 0 )
    {
      Buffer = *a2;
      if ( ExplicitScope == -1 )
      {
        LODWORD(SessionById) = ZwUpdateWnfStateData(&WNF_PNPA_PORTS_CHANGED, &Buffer, 0x30u, 0LL, 0LL, 0, 0);
      }
      else
      {
        SessionById = MmGetSessionById(ExplicitScope);
        v5 = (void *)SessionById;
        if ( SessionById )
        {
          ZwUpdateWnfStateData(&WNF_PNPA_PORTS_CHANGED_SESSION, &Buffer, 0x30u, 0LL, &ExplicitScope, 0, 0);
          LODWORD(SessionById) = ObfDereferenceObject(v5);
        }
      }
    }
  }
  if ( Handle )
    LODWORD(SessionById) = ZwClose(Handle);
  return SessionById;
}
