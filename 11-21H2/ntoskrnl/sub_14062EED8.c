/*
 * XREFs of sub_14062EED8 @ 0x14062EED8
 * Callers:
 *     sub_14062F040 @ 0x14062F040 (sub_14062F040.c)
 *     sub_1409EA348 @ 0x1409EA348 (sub_1409EA348.c)
 * Callees:
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     sub_140360AC0 @ 0x140360AC0 (sub_140360AC0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_14062EED8(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  char v5; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v6[47]; // [rsp+44h] [rbp-BCh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+0h] BYREF
  _DWORD *v8; // [rsp+110h] [rbp+10h] BYREF
  int v9; // [rsp+118h] [rbp+18h]
  int v10; // [rsp+11Ch] [rbp+1Ch]
  __int64 v11; // [rsp+120h] [rbp+20h]
  int v12; // [rsp+128h] [rbp+28h]
  int v13; // [rsp+12Ch] [rbp+2Ch]

  v6[0] = 0;
  memset(&v6[3], 0, 0xB0uLL);
  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)&v5;
  v5 = 8;
  UserData.Size = 1;
  sub_140360AC0(0LL, &v6[3], 0xB0u, v4, v6);
  v10 = 0;
  v13 = 0;
  v8 = &v6[3];
  v9 = 176;
  v11 = a2;
  v12 = 32;
  if ( a1 )
  {
    sub_1402AB170((__int64)&v8, *(_QWORD *)(a1 + 1096), *(_DWORD *)a1, 2u, 0x270u, 0x401803u);
  }
  else
  {
    if ( qword_140D05008 != -4540 && (*(_DWORD *)(qword_140D05008 + 4544) & 0x80000) != 0 )
      EtwWriteEx(qword_140C15FB0, &stru_1400380A0, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    sub_14035EDE4((__int64)&v8, 2u, 0x20080000u, 0x270u, 0x401803u);
  }
}
