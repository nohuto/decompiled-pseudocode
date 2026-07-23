/*
 * XREFs of sub_1402A1A20 @ 0x1402A1A20
 * Callers:
 *     sub_1402A2490 @ 0x1402A2490 (sub_1402A2490.c)
 *     sub_1403857EC @ 0x1403857EC (sub_1403857EC.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x140658160 (FsRtlCheckOplockForFsFilterCallback.c)
 *     sub_1406D2D00 @ 0x1406D2D00 (sub_1406D2D00.c)
 *     sub_1406DD184 @ 0x1406DD184 (sub_1406DD184.c)
 *     sub_140712BA0 @ 0x140712BA0 (sub_140712BA0.c)
 *     sub_140713230 @ 0x140713230 (sub_140713230.c)
 *     sub_140713440 @ 0x140713440 (sub_140713440.c)
 *     sub_14071A870 @ 0x14071A870 (sub_14071A870.c)
 *     sub_1407333B0 @ 0x1407333B0 (sub_1407333B0.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_1407650B0 @ 0x1407650B0 (sub_1407650B0.c)
 *     sub_14076520C @ 0x14076520C (sub_14076520C.c)
 *     sub_1407C1A00 @ 0x1407C1A00 (sub_1407C1A00.c)
 *     sub_1407C9930 @ 0x1407C9930 (sub_1407C9930.c)
 *     sub_1408178F8 @ 0x1408178F8 (sub_1408178F8.c)
 *     sub_14081BD3C @ 0x14081BD3C (sub_14081BD3C.c)
 *     sub_140845E14 @ 0x140845E14 (sub_140845E14.c)
 *     sub_1409255A4 @ 0x1409255A4 (sub_1409255A4.c)
 * Callees:
 *     sub_1402A1AEC @ 0x1402A1AEC (sub_1402A1AEC.c)
 *     sub_1402A1EEC @ 0x1402A1EEC (sub_1402A1EEC.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 */

NTSTATUS __fastcall sub_1402A1A20(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        unsigned __int8 a4,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONGLONG v7; // rax
  unsigned __int16 *v8; // rdx
  NTSTATUS result; // eax
  char v10; // al
  int v11; // r8d
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v7 = *(_QWORD *)(a2 + 3);
  v8 = (unsigned __int16 *)(a2 + 11);
  EventDescriptor.Keyword = v7;
  UserData->Ptr = *(_QWORD *)(a1 + 8);
  UserData->Size = **(unsigned __int16 **)(a1 + 8);
  UserData->Reserved = 2;
  UserData[1].Ptr = (ULONGLONG)v8;
  UserData[1].Size = *v8;
  UserData[1].Reserved = 1;
  result = -1073741811;
  if ( *(__int64 (__fastcall **)(int, int, int, int, __int64, __int64, __int64))(a1 + 40) == sub_14085D310 )
  {
    v10 = sub_1402A1EEC(sub_14085D310, UserData);
    if ( v10 )
    {
      LOBYTE(v11) = a4;
      return sub_1402A1AEC(a1, (unsigned int)&EventDescriptor, v11, (_DWORD)UserData, v10);
    }
    else
    {
      return EtwWriteEx(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0, 0LL, 0LL, a4, UserData);
    }
  }
  return result;
}
