/*
 * XREFs of sub_1406498D0 @ 0x1406498D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402E0200 @ 0x1402E0200 (sub_1402E0200.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140A13EC0 @ 0x140A13EC0 (sub_140A13EC0.c)
 *     sub_140A142D0 @ 0x140A142D0 (sub_140A142D0.c)
 *     sub_140A15B1C @ 0x140A15B1C (sub_140A15B1C.c)
 */

__int64 __fastcall sub_1406498D0(__int64 a1, unsigned __int64 a2, const WCHAR *a3, __int64 a4)
{
  int v9; // eax
  unsigned int v10; // ebx
  const char *v11; // r9
  int v12; // r8d
  __int16 v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v14; // [rsp+34h] [rbp-CCh] BYREF
  __int128 v15; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+48h] [rbp-B8h]
  __int16 v17; // [rsp+4Ch] [rbp-B4h]
  _WORD v18[264]; // [rsp+50h] [rbp-B0h] BYREF

  v16 = 3407926;
  v17 = 0;
  v15 = xmmword_1400444A0;
  if ( a2 < 0xB )
    return 3221225507LL;
  v14 = -1;
  v18[0] = 0;
  v13[0] = -1;
  v9 = sub_140A142D0(&v14, v13, a4);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( v13[0] == 9 || v13[0] == 12 )
    {
      if ( !a3 )
        a3 = &word_140011C40;
      v9 = sub_140A15B1C(&v15, a3, v18, 260LL);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = "AslPathCombine failed [%x]";
        v12 = 1004;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !a3 )
        a3 = &word_140011C40;
      v9 = sub_1402E0200(v18, 260LL, (__int64)a3);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = "RtlStringCchCopyW failed to copy FileName [%x]";
        v12 = 1010;
        goto LABEL_5;
      }
    }
    return (unsigned int)sub_140A13EC0(a1, a2, v18, a4);
  }
  v11 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
  v12 = 992;
LABEL_5:
  sub_1406E0C3C(1, (unsigned int)"SdbpGetPathAppPatchPreRS3", v12, (_DWORD)v11, v9);
  return v10;
}
