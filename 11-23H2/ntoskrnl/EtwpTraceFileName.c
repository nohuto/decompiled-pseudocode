/*
 * XREFs of EtwpTraceFileName @ 0x140213550
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x140214950 (EtwTraceSiloKernelEvent.c)
 *     EtwpLogKernelEvent @ 0x140233D70 (EtwpLogKernelEvent.c)
 *     EtwWriteEx @ 0x1402582A0 (EtwWriteEx.c)
 *     PsGetCurrentServerSilo @ 0x14028A220 (PsGetCurrentServerSilo.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpTraceFileName(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 a4, int a5, __int16 a6)
{
  __int64 CurrentServerSilo; // r14
  unsigned int v10; // ecx
  __int64 result; // rax
  __int64 v12; // rdx
  const EVENT_DESCRIPTOR *v13; // rdx
  __int16 v14; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v15[2]; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-11h] BYREF
  __int64 v17; // [rsp+68h] [rbp-1h]
  unsigned int v18; // [rsp+70h] [rbp+7h]
  int v19; // [rsp+74h] [rbp+Bh]
  __int16 *v20; // [rsp+78h] [rbp+Fh]
  __int64 v21; // [rsp+80h] [rbp+17h]

  v15[1] = 0LL;
  v14 = 0;
  if ( a1 )
    CurrentServerSilo = *(_QWORD *)(a1 + 2160);
  else
    CurrentServerSilo = PsGetCurrentServerSilo();
  v10 = *a3;
  v15[0] = a2;
  if ( v10 > 0x2000 )
    v10 = 0x2000;
  *(_QWORD *)&UserData.Size = 8LL;
  v18 = v10;
  UserData.Ptr = (ULONGLONG)v15;
  v17 = *((_QWORD *)a3 + 1);
  v20 = &v14;
  v19 = 0;
  v21 = 2LL;
  result = EtwpHostSiloState + 4540;
  if ( EtwpHostSiloState != -4540 && (*(_DWORD *)result & 0x200) != 0 )
  {
    if ( a6 == 1056 )
    {
      v13 = (const EVENT_DESCRIPTOR *)KFileEvt_NameCreate;
    }
    else
    {
      result = 1059LL;
      if ( a6 != 1059 )
        goto LABEL_7;
      v13 = &KFileEvt_NameDelete;
    }
    EtwWriteEx(EtwpFileProvRegHandle, v13, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    return EtwTraceSiloKernelEvent(CurrentServerSilo, (unsigned int)&UserData, 3, 512, a6, 4200450);
  }
LABEL_7:
  if ( a6 != 1060 )
    return EtwTraceSiloKernelEvent(CurrentServerSilo, (unsigned int)&UserData, 3, 512, a6, 4200450);
  if ( a4 )
  {
    if ( a4 != CurrentServerSilo )
      return result;
    result = *(_QWORD *)(a4 + 1488);
  }
  else
  {
    result = (__int64)&PspHostSiloGlobals;
  }
  v12 = *(_QWORD *)(result + 864);
  if ( v12 )
    return EtwpLogKernelEvent((unsigned int)&UserData, v12, a5, 3, 1060, 4200450);
  return result;
}
