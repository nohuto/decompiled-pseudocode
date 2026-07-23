/*
 * XREFs of PopPlRegisterPowerPlane @ 0x1405A1D84
 * Callers:
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x140368110 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     PopPepIterateDeviceList @ 0x14059FD88 (PopPepIterateDeviceList.c)
 *     PopPlTraceLogPowerPlane @ 0x1405A1F30 (PopPlTraceLogPowerPlane.c)
 *     PopPlInitPowerPlane @ 0x1409A09BC (PopPlInitPowerPlane.c)
 */

__int64 __fastcall PopPlRegisterPowerPlane(__int64 a1, __int64 a2, __int64 a3)
{
  int inited; // edi
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // r9
  __int64 v8; // r9
  int v10; // [rsp+20h] [rbp-49h]
  int v11; // [rsp+28h] [rbp-41h]
  __int16 v12; // [rsp+40h] [rbp-29h] BYREF
  __int64 v13; // [rsp+48h] [rbp-21h] BYREF
  __int64 v14; // [rsp+50h] [rbp-19h] BYREF
  __int64 v15; // [rsp+58h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+60h] [rbp-9h] BYREF
  __int16 *v17; // [rsp+80h] [rbp+17h]
  int v18; // [rsp+88h] [rbp+1Fh]
  int v19; // [rsp+8Ch] [rbp+23h]
  __int64 *v20; // [rsp+90h] [rbp+27h]
  int v21; // [rsp+98h] [rbp+2Fh]
  int v22; // [rsp+9Ch] [rbp+33h]

  v13 = 0LL;
  v14 = 0LL;
  LODWORD(v15) = 0;
  if ( PopPowerPlane )
  {
    inited = -1073741768;
  }
  else if ( *(_DWORD *)(a1 + 4) )
  {
    inited = -1073741735;
  }
  else if ( *(_QWORD *)(a1 + 16) )
  {
    inited = PopPlInitPowerPlane(a1 + 24, a1, a2 + a1, &v13);
    if ( inited >= 0 )
    {
      v6 = v13;
      *(_QWORD *)(v13 + 32) = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v6 + 40) = *(_QWORD *)(a1 + 16);
      v15 = v6;
      PopPepIterateDeviceList(
        0LL,
        (unsigned __int8 (__fastcall *)(__int64 *, __int64))PopPlActivateDeviceIterator,
        0LL,
        v5,
        1,
        0,
        (__int64)&v14);
      PopPepIterateDeviceList(
        (void (__fastcall *)(__int64))PopPlCommitPowerPlaneRegistration,
        (unsigned __int8 (__fastcall *)(__int64 *, __int64))PopPlRegisterDeviceIterator,
        (void (__fastcall *)(void (__fastcall *)(__int64), __int64))PopPlPublishInitialPowerDraw,
        v7,
        0,
        0,
        (__int64)&v14);
      PopPlTraceLogPowerPlane(v6);
      PopPepIterateDeviceList(
        0LL,
        (unsigned __int8 (__fastcall *)(__int64 *, __int64))PopPlIdleDeviceIterator,
        0LL,
        v8,
        0,
        1,
        (__int64)&v14);
    }
  }
  else
  {
    inited = -1073741811;
  }
  if ( (unsigned int)dword_140C03950 > 5 )
  {
    v19 = 0;
    v22 = 0;
    v17 = &v12;
    v21 = 4;
    v20 = &v13;
    v12 = 1;
    v18 = 2;
    LODWORD(v13) = inited;
    tlgWriteEx_EtwWriteEx((__int64)&dword_140C03950, (unsigned __int8 *)&word_1400326A6, a3, 1u, v10, v11, 4u, &v16);
  }
  return (unsigned int)inited;
}
