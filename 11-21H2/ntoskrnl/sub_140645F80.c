/*
 * XREFs of sub_140645F80 @ 0x140645F80
 * Callers:
 *     WheaReportHwError @ 0x140643630 (WheaReportHwError.c)
 *     sub_140644030 @ 0x140644030 (sub_140644030.c)
 *     sub_140860F60 @ 0x140860F60 (sub_140860F60.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     WheaIsCriticalState @ 0x1403D2BA0 (WheaIsCriticalState.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140643DCC @ 0x140643DCC (sub_140643DCC.c)
 */

char __fastcall sub_140645F80(__int64 a1)
{
  char result; // al
  unsigned int v3; // edi
  __int128 Src; // [rsp+48h] [rbp+7h] BYREF
  __int128 v5; // [rsp+58h] [rbp+17h]
  __int64 v6; // [rsp+68h] [rbp+27h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp+2Fh] BYREF
  __int64 v8; // [rsp+80h] [rbp+3Fh]
  unsigned int v9; // [rsp+88h] [rbp+47h]
  int v10; // [rsp+8Ch] [rbp+4Bh]

  Src = 0LL;
  v6 = 0LL;
  v5 = 0LL;
  result = WheaIsCriticalState();
  if ( !result && (*(_DWORD *)(a1 + 104) & 0x100) == 0 )
  {
    sub_140643DCC(3, a1);
    v3 = *(_DWORD *)(a1 + 20);
    if ( v3 > 0xFBFB )
    {
      v3 = 64507;
      *(_QWORD *)&Src = 0x1674C6857LL;
      v6 = *(_QWORD *)(a1 + 96);
      *((_QWORD *)&Src + 1) = 40LL;
      *(_QWORD *)&v5 = 0x8000001D4C4E524BuLL;
      *((_QWORD *)&v5 + 1) = 0x800000002LL;
      WheaLogInternalEvent(&Src);
    }
    UserData.Reserved = 0;
    v10 = 0;
    UserData.Ptr = a1 + 20;
    UserData.Size = 4;
    v8 = a1;
    v9 = v3;
    return EtwWriteEx(
             (REGHANDLE)stru_140C0E9A8.Queue.Wcb.DeviceRoutine,
             &stru_140042100,
             0LL,
             0,
             0LL,
             0LL,
             2u,
             &UserData);
  }
  return result;
}
