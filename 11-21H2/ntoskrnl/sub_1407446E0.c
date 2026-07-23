/*
 * XREFs of sub_1407446E0 @ 0x1407446E0
 * Callers:
 *     sub_1407894A8 @ 0x1407894A8 (sub_1407894A8.c)
 * Callees:
 *     RtlTimeToTimeFields @ 0x1402D1A30 (RtlTimeToTimeFields.c)
 *     sub_1402DF9D0 @ 0x1402DF9D0 (sub_1402DF9D0.c)
 *     sub_1402E0198 @ 0x1402E0198 (sub_1402E0198.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406D5A30 @ 0x1406D5A30 (sub_1406D5A30.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 */

__int64 __fastcall sub_1407446E0(int a1, int a2, __int64 a3, unsigned int a4, PLARGE_INTEGER Time, ULONG a6)
{
  int v8; // r11d
  __int64 **v9; // rdx
  unsigned int i; // r9d
  __int64 *v13; // r8
  __int64 **v14; // rsi
  __int64 v15; // rcx
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  __int64 v20; // rax
  __int64 v21; // [rsp+20h] [rbp-60h]
  __int64 v22; // [rsp+28h] [rbp-58h]
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  __int64 v24; // [rsp+48h] [rbp-38h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+50h] [rbp-30h] BYREF
  wchar_t v26[12]; // [rsp+60h] [rbp-20h] BYREF

  Handle = 0LL;
  v24 = 0LL;
  v8 = *(_DWORD *)(a3 + 16);
  v9 = &off_140A3B370;
  TimeFields = 0LL;
  for ( i = 0; i < 0xD; ++i )
  {
    v13 = *v9;
    v14 = v9;
    if ( v8 == *((_DWORD *)*v9 + 4) )
    {
      v15 = *(_QWORD *)a3 - *v13;
      if ( *(_QWORD *)a3 == *v13 )
        v15 = *(_QWORD *)(a3 + 8) - v13[1];
      if ( !v15 )
        break;
    }
    v14 = 0LL;
    v9 += 4;
  }
  if ( !v14 )
    return (unsigned int)-1073741802;
  v16 = *((_DWORD *)v14 + 2);
  if ( a4 != v16 )
  {
    if ( a4 == 25 )
    {
      if ( v16 == 18 )
        goto LABEL_10;
    }
    else if ( a4 < 2 )
    {
      goto LABEL_10;
    }
    return (unsigned int)-1073741811;
  }
LABEL_10:
  v17 = sub_14077F2EC(a1, a2, 18, 0, 2, 1, (__int64)&Handle, 0LL);
  if ( v17 >= 0 )
  {
    v18 = sub_1406D5A30(Handle, (const WCHAR *)v14[2], *((_DWORD *)v14 + 6), Time, a6);
    if ( v18 == -1073741444 )
    {
      v17 = -1073741772;
    }
    else if ( v18 < 0 )
    {
      v17 = v18;
    }
    else if ( *(_DWORD *)(a3 + 16) == 2 )
    {
      v20 = *(_QWORD *)a3 - 0x40942E3DA8B865DDLL;
      if ( *(_QWORD *)a3 == 0x40942E3DA8B865DDLL )
        v20 = *(_QWORD *)(a3 + 8) + 0x298AF3586C1A6853LL;
      if ( !v20 )
      {
        RtlTimeToTimeFields(Time, &TimeFields);
        LODWORD(v22) = TimeFields.Year;
        LODWORD(v21) = TimeFields.Day;
        if ( (int)sub_1402E0198(v26, 11LL, L"%d-%d-%d", (unsigned int)TimeFields.Month, v21, v22) >= 0
          && (int)sub_1402DF9D0(v26, 11LL, &v24) >= 0 )
        {
          sub_1406D5A30(Handle, L"DriverDate", 1u, v26, 2 * (v24 + 1));
        }
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v17;
}
