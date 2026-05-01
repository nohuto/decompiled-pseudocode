/*
 * XREFs of CrmRpcSrvRegister @ 0x180004E50
 * Callers:
 *     <none>
 * Callees:
 *     CrmSrvRegister @ 0x180004F60 (CrmSrvRegister.c)
 *     CempRpcQueryClientInformation @ 0x18000520C (CempRpcQueryClientInformation.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?CrmpClientRequiresRpc@@YAKK@Z @ 0x18005332C (-CrmpClientRequiresRpc@@YAKK@Z.c)
 */

__int64 __fastcall CrmRpcSrvRegister(void *a1, _QWORD *a2, _QWORD *a3, unsigned int a4, __int64 a5)
{
  signed int ClientInformation; // eax
  int v9; // ebx
  unsigned int v11; // [rsp+30h] [rbp-91h] BYREF
  _BYTE DestinationSid[80]; // [rsp+40h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+90h] [rbp-31h] BYREF
  UUID *v14; // [rsp+B0h] [rbp-11h]
  int v15; // [rsp+B8h] [rbp-9h]
  int v16; // [rsp+BCh] [rbp-5h]
  unsigned int *v17; // [rsp+C0h] [rbp-1h]
  int v18; // [rsp+C8h] [rbp+7h]
  int v19; // [rsp+CCh] [rbp+Bh]

  *a3 = 0LL;
  ClientInformation = CempRpcQueryClientInformation(a1, DestinationSid, 0LL, 0LL, 0LL);
  v9 = ClientInformation;
  if ( ClientInformation >= 0 )
  {
    v9 = CrmSrvRegister(a2, a4, a5, DestinationSid);
    if ( v9 >= 0 )
    {
      if ( !CrmpClientRequiresRpc(v11) )
        *a3 = *a2;
      return 0;
    }
  }
  else if ( (unsigned int)dword_1800DB250 > 5 )
  {
    v19 = 0;
    v16 = 0;
    v11 = ClientInformation;
    v18 = 4;
    v17 = &v11;
    v15 = 16;
    v14 = &Uuid;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB250, (int)&dword_1800C7032, 0, 0, 4u, &v13);
  }
  return (unsigned int)v9;
}
