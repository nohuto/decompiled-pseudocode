/*
 * XREFs of sub_140784B14 @ 0x140784B14
 * Callers:
 *     sub_1406CC2C8 @ 0x1406CC2C8 (sub_1406CC2C8.c)
 *     sub_1406CEA04 @ 0x1406CEA04 (sub_1406CEA04.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406DB590 (IoGetDeviceInterfaceAlias.c)
 *     sub_14076A7E8 @ 0x14076A7E8 (sub_14076A7E8.c)
 *     sub_140781A70 @ 0x140781A70 (sub_140781A70.c)
 *     sub_140785470 @ 0x140785470 (sub_140785470.c)
 *     sub_1407879A8 @ 0x1407879A8 (sub_1407879A8.c)
 *     sub_140806A24 @ 0x140806A24 (sub_140806A24.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1408549A0 (IoOpenDeviceInterfaceRegistryKey.c)
 *     sub_14094B580 @ 0x14094B580 (sub_14094B580.c)
 *     sub_140A23A34 @ 0x140A23A34 (sub_140A23A34.c)
 *     sub_140A29EAC @ 0x140A29EAC (sub_140A29EAC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140781A70 @ 0x140781A70 (sub_140781A70.c)
 */

__int64 __fastcall sub_140784B14(
        __int64 a1,
        const WCHAR *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 v11; // rsi
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v16; // eax
  _QWORD v17[12]; // [rsp+40h] [rbp-69h] BYREF

  memset(v17, 0, 0x58uLL);
  v11 = *(_QWORD *)(a1 + 504);
  LODWORD(v17[3]) = a5;
  v17[2] = a3;
  BYTE4(v17[3]) = a6;
  v17[4] = a7;
  if ( v11 )
  {
    v12 = sub_14042A5E0(a1, a2);
    if ( v12 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
      {
LABEL_12:
        v14 = v17[0];
        goto LABEL_5;
      }
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  v13 = sub_140781A70(a1, a2, v17[2], SHIDWORD(v17[2]), v17[3], SBYTE4(v17[3]), (_QWORD *)v17[4], &v17[5]);
  v14 = v13;
  if ( v11 )
  {
    LODWORD(v17[0]) = v13;
    v16 = sub_14042A5E0(a1, a2);
    if ( v16 != -1073741822 )
    {
      if ( v16 != -1073741536 )
      {
        if ( !v16 )
          goto LABEL_5;
        return (unsigned int)-1073741595;
      }
      goto LABEL_12;
    }
  }
LABEL_5:
  if ( v14 >= 0 && a8 )
    *a8 = v17[5];
  return (unsigned int)v14;
}
