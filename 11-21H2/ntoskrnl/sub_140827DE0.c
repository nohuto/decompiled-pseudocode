/*
 * XREFs of sub_140827DE0 @ 0x140827DE0
 * Callers:
 *     sub_140827BDC @ 0x140827BDC (sub_140827BDC.c)
 * Callees:
 *     sub_1402E0198 @ 0x1402E0198 (sub_1402E0198.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406D5A30 @ 0x1406D5A30 (sub_1406D5A30.c)
 *     sub_140772D80 @ 0x140772D80 (sub_140772D80.c)
 *     sub_14077FC64 @ 0x14077FC64 (sub_14077FC64.c)
 *     sub_14078003C @ 0x14078003C (sub_14078003C.c)
 */

__int64 __fastcall sub_140827DE0(__int64 a1, char *a2, __int64 a3, HANDLE *a4)
{
  char v7; // r15
  unsigned int v8; // ebx
  unsigned int v10; // eax
  _DWORD v11[4]; // [rsp+50h] [rbp-29h] BYREF
  int v12; // [rsp+60h] [rbp-19h] BYREF
  unsigned int KeyHandle[3]; // [rsp+64h] [rbp-15h] BYREF
  WCHAR v14[16]; // [rsp+70h] [rbp-9h] BYREF

  *a4 = 0LL;
  v11[0] = 0;
  *(_QWORD *)&KeyHandle[1] = 0LL;
  v12 = 0;
  v7 = 0;
  v8 = sub_14078003C(a2, L"CurrentControlSet", 0, 0x2000000u, a4, a3);
  if ( v8 == -1073741772 )
  {
    v8 = sub_14078003C(a2, L"Select", 0, 1u, (PHANDLE)&KeyHandle[1], a3);
    if ( v8 == -1073741772 )
      v8 = sub_140772D80(a2, L"Select", 0, 3u, 0LL, 0, (PHANDLE)&KeyHandle[1], 0LL, a3);
    if ( !v8 )
    {
      KeyHandle[0] = 4;
      v10 = sub_14077FC64(*(HANDLE *)&KeyHandle[1], L"Current", &v12, v11, KeyHandle);
      v8 = v10;
      if ( v10 == -1073741772 )
      {
        v11[0] = 1;
        v7 = 1;
        v8 = sub_1406D5A30(*(HANDLE *)&KeyHandle[1], L"Current", 4u, v11, 4u);
        if ( v8 )
          goto LABEL_2;
      }
      else
      {
        if ( v10 )
          goto LABEL_2;
        if ( v12 != 4 || KeyHandle[0] != 4 )
          goto LABEL_19;
      }
      if ( v11[0] <= 0x3E7u && (int)sub_1402E0198(v14, 14LL, L"ControlSet%03d") >= 0 )
      {
        v8 = sub_14078003C(a2, v14, 0, 0x2000000u, a4, a3);
        if ( v8 == -1073741772 && v7 )
          v8 = sub_140772D80(a2, v14, 0, 0x2000000u, 0LL, 0, a4, 0LL, a3);
        goto LABEL_2;
      }
LABEL_19:
      v8 = -1073741811;
    }
  }
LABEL_2:
  if ( *(_QWORD *)&KeyHandle[1] )
    ZwClose(*(HANDLE *)&KeyHandle[1]);
  return v8;
}
