/*
 * XREFs of PopPlPublishSystemPowerChange @ 0x1405A1AD8
 * Callers:
 *     PopPlNotifyDeviceDState @ 0x14028DEDC (PopPlNotifyDeviceDState.c)
 *     PopPlNotifyDeviceFState @ 0x14035C7D0 (PopPlNotifyDeviceFState.c)
 *     PopPlPublishInitialPowerDraw @ 0x1405A1900 (PopPlPublishInitialPowerDraw.c)
 *     PopPlUnregisterDevice @ 0x1405A2320 (PopPlUnregisterDevice.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x140368110 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopPlPublishSystemPowerChange(unsigned __int16 *a1, int a2, __int64 a3)
{
  int v5; // eax
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-59h]
  int v8; // [rsp+28h] [rbp-51h]
  __int16 v9; // [rsp+40h] [rbp-39h] BYREF
  int v10; // [rsp+44h] [rbp-35h] BYREF
  int v11; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+50h] [rbp-29h] BYREF
  __int16 *v13; // [rsp+70h] [rbp-9h]
  __int64 v14; // [rsp+78h] [rbp-1h]
  _DWORD *v15; // [rsp+80h] [rbp+7h]
  __int64 v16; // [rsp+88h] [rbp+Fh]
  __int64 v17; // [rsp+90h] [rbp+17h]
  _DWORD v18[2]; // [rsp+98h] [rbp+1Fh] BYREF
  int *v19; // [rsp+A0h] [rbp+27h]
  __int64 v20; // [rsp+A8h] [rbp+2Fh]
  int *v21; // [rsp+B0h] [rbp+37h]
  __int64 v22; // [rsp+B8h] [rbp+3Fh]

  if ( a2 )
  {
    if ( (unsigned int)dword_140C03950 > 5 )
    {
      v18[1] = 0;
      v9 = 1;
      v13 = &v9;
      v14 = 2LL;
      v15 = v18;
      v17 = *((_QWORD *)a1 + 1);
      v18[0] = *a1;
      v19 = &v10;
      v5 = *((_DWORD *)a1 + 7);
      v16 = 2LL;
      v11 = a2 + v5;
      v21 = &v11;
      v10 = a2;
      v20 = 4LL;
      v22 = 4LL;
      tlgWriteEx_EtwWriteEx((__int64)&dword_140C03950, (unsigned __int8 *)&byte_14003236B, a3, 1u, v7, v8, 7u, &v12);
    }
    *((_DWORD *)a1 + 7) += a2;
    return (*((__int64 (__fastcall **)(_QWORD, _QWORD))a1 + 5))(*((_QWORD *)a1 + 4), *((unsigned int *)a1 + 7));
  }
  return result;
}
