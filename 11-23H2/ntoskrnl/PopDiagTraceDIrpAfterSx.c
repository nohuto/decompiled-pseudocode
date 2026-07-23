/*
 * XREFs of PopDiagTraceDIrpAfterSx @ 0x1405929E8
 * Callers:
 *     PoHandleIrp @ 0x14028DA0C (PoHandleIrp.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1402F6E74 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140368110 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     PopDiagGetDriverName @ 0x140591DB4 (PopDiagGetDriverName.c)
 */

char __fastcall PopDiagTraceDIrpAfterSx(__int64 a1)
{
  char result; // al
  const size_t *v2; // r9
  __int64 v3; // r11
  int v4; // eax
  ULONG v5; // r11d
  __int64 v6; // r8
  int v7; // [rsp+20h] [rbp-108h]
  int v8; // [rsp+28h] [rbp-100h]
  int v9; // [rsp+40h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+50h] [rbp-D8h] BYREF
  int *v11; // [rsp+70h] [rbp-B8h]
  int v12; // [rsp+78h] [rbp-B0h]
  int v13; // [rsp+7Ch] [rbp-ACh]
  _BYTE v14[16]; // [rsp+80h] [rbp-A8h] BYREF
  wchar_t v15[64]; // [rsp+90h] [rbp-98h] BYREF

  result = PopDiagGetDriverName(*(_QWORD *)(*(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200) + 232LL), v15);
  if ( (unsigned int)dword_140C03950 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140C03950, 0x400000000000LL);
    if ( result )
    {
      v4 = *(_DWORD *)(v3 + 192);
      v13 = 0;
      v9 = v4;
      v12 = 4;
      v11 = &v9;
      tlgCreate1Sz_wchar_t((__int64)v14, v2);
      return tlgWriteEx_EtwWriteEx(
               (__int64)&dword_140C03950,
               (unsigned __int8 *)&dword_14003066C,
               v6,
               v5 - 3,
               v7,
               v8,
               v5,
               &v10);
    }
  }
  return result;
}
