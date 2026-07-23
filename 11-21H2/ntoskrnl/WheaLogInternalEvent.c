/*
 * XREFs of WheaLogInternalEvent @ 0x1403D2A90
 * Callers:
 *     sub_14050634C @ 0x14050634C (sub_14050634C.c)
 *     sub_140509620 @ 0x140509620 (sub_140509620.c)
 *     sub_140552B40 @ 0x140552B40 (sub_140552B40.c)
 *     sub_140552C20 @ 0x140552C20 (sub_140552C20.c)
 *     ?Process@CPullPin@@AEAAXXZ @ 0x14057C3C0 (-Process@CPullPin@@AEAAXXZ.c)
 *     WheaReportHwError @ 0x140643630 (WheaReportHwError.c)
 *     sub_140644930 @ 0x140644930 (sub_140644930.c)
 *     sub_140644EEC @ 0x140644EEC (sub_140644EEC.c)
 *     sub_140645708 @ 0x140645708 (sub_140645708.c)
 *     sub_140645F80 @ 0x140645F80 (sub_140645F80.c)
 *     sub_140646C90 @ 0x140646C90 (sub_140646C90.c)
 *     WheaAddErrorSource @ 0x14084E510 (WheaAddErrorSource.c)
 *     sub_14084E760 @ 0x14084E760 (sub_14084E760.c)
 *     sub_140860F60 @ 0x140860F60 (sub_140860F60.c)
 *     sub_140908680 @ 0x140908680 (sub_140908680.c)
 *     WheaRemoveErrorSource @ 0x140A08880 (WheaRemoveErrorSource.c)
 *     WheaRemoveErrorSourceDeviceDriver @ 0x140A08A50 (WheaRemoveErrorSourceDeviceDriver.c)
 *     sub_140A08FFC @ 0x140A08FFC (sub_140A08FFC.c)
 *     sub_140A092FC @ 0x140A092FC (sub_140A092FC.c)
 *     sub_140A09A80 @ 0x140A09A80 (sub_140A09A80.c)
 *     sub_140A09F1C @ 0x140A09F1C (sub_140A09F1C.c)
 *     sub_140A0A490 @ 0x140A0A490 (sub_140A0A490.c)
 *     sub_140A5AEB0 @ 0x140A5AEB0 (sub_140A5AEB0.c)
 *     sub_140A61D50 @ 0x140A61D50 (sub_140A61D50.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     WheaIsCriticalState @ 0x1403D2BA0 (WheaIsCriticalState.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140643064 @ 0x140643064 (sub_140643064.c)
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 */

LONG __fastcall WheaLogInternalEvent(_DWORD *Src)
{
  LONG *v2; // rdi
  LONG result; // eax
  __int64 v4; // rax
  unsigned int v5; // esi
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rax
  _QWORD v9[4]; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  char *v11; // [rsp+70h] [rbp-19h]
  __int64 v12; // [rsp+78h] [rbp-11h]
  char *v13; // [rsp+80h] [rbp-9h]
  __int64 v14; // [rsp+88h] [rbp-1h]
  LONG *v15; // [rsp+90h] [rbp+7h]
  __int64 v16; // [rsp+98h] [rbp+Fh]
  char *v17; // [rsp+A0h] [rbp+17h]
  __int64 v18; // [rsp+A8h] [rbp+1Fh]
  _DWORD *v19; // [rsp+B0h] [rbp+27h]
  int v20; // [rsp+B8h] [rbp+2Fh]
  int v21; // [rsp+BCh] [rbp+33h]

  if ( dword_140C10AF8 )
  {
    v2 = Src + 6;
    if ( (Src[6] & 2) != 0 && !(unsigned __int8)WheaIsCriticalState() )
    {
      UserData.Ptr = (ULONGLONG)(Src + 3);
      *(_QWORD *)&UserData.Size = 4LL;
      v11 = (char *)(Src + 4);
      v12 = 4LL;
      v13 = (char *)(Src + 5);
      v14 = 4LL;
      v17 = (char *)(Src + 2);
      v20 = Src[2];
      v15 = v2;
      v16 = 4LL;
      v18 = 4LL;
      v19 = Src;
      v21 = 0;
      EtwWriteEx((REGHANDLE)stru_140C0E9A8.Queue.Wcb.DeviceRoutine, &stru_140012C30, 0LL, 0, 0LL, 0LL, 6u, &UserData);
    }
    result = *v2;
    if ( (*v2 & 4) != 0 )
    {
      v8 = (unsigned int)Src[2];
      v9[2] = 0LL;
      v9[3] = 15LL;
      v9[0] = Src;
      v9[1] = v8;
      sub_14074F950(94, (unsigned int)v9, 32, 0, 0);
      result = Src[6];
    }
    if ( (result & 8) != 0 )
      return sub_140643064(Src);
  }
  else
  {
    result = KeGetCurrentIrql();
    if ( (unsigned __int8)result < 2u )
    {
      KeWaitForSingleObject(&stru_140C10AE0, Executive, 0, 0, 0LL);
      v4 = (unsigned int)Src[7];
      v5 = v4 + dword_140D04C90 + 48;
      if ( v5 < 0x1000 )
      {
        v6 = (_QWORD *)((char *)&unk_140C0FAE0 + (unsigned int)dword_140D04C90);
        memmove(v6 + 2, Src, v4 + 32);
        v7 = (_QWORD *)qword_140C0FA48;
        dword_140D04C90 = v5;
        if ( *(__int64 **)qword_140C0FA48 != &qword_140C0FA40 )
          __fastfail(3u);
        *v6 = &qword_140C0FA40;
        v6[1] = v7;
        *v7 = v6;
        qword_140C0FA48 = (__int64)v6;
      }
      return KeSetEvent(&stru_140C10AE0, 0, 0);
    }
  }
  return result;
}
