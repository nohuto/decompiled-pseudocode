/*
 * XREFs of sub_1800C6920 @ 0x1800C6920
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001C3BC @ 0x18001C3BC (sub_18001C3BC.c)
 *     sub_1800C5934 @ 0x1800C5934 (sub_1800C5934.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall sub_1800C6920(__int64 a1)
{
  int v1; // eax
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  bool v9; // sf
  bool v10; // of
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  _QWORD v17[4]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+40h] [rbp-48h] BYREF

  v1 = sub_1800C5934(a1);
  if ( v2 <= 8 )
  {
    if ( v2 == 8 )
    {
      v10 = __OFSUB__(v1, 41216);
      v9 = v1 - 41216 < 0;
      return v9 == v10;
    }
    if ( !v2 )
      goto LABEL_23;
    v3 = v2 - 1;
    if ( !v3 )
      goto LABEL_23;
    v4 = v3 - 1;
    if ( !v4 )
    {
      v10 = __OFSUB__(v1, 37376);
      v9 = v1 - 37376 < 0;
      return v9 == v10;
    }
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            if ( v8 == 1 )
            {
              v10 = __OFSUB__(v1, 37632);
              v9 = v1 - 37632 < 0;
              return v9 == v10;
            }
LABEL_21:
            sub_180010DD0(v17, (__int64)"unknown device feature queried");
            sub_18001C3BC((__int64)pExceptionObject, (const char *)v17, 0);
            throw (Spectre::Utils::SpectreException *)pExceptionObject;
          }
        }
LABEL_23:
        v10 = __OFSUB__(v1, 40960);
        v9 = v1 - 40960 < 0;
        return v9 == v10;
      }
    }
    return 1;
  }
  v12 = v2 - 9;
  if ( !v12 )
    return 1;
  v13 = v12 - 1;
  if ( !v13 )
    return 1;
  v14 = v13 - 1;
  if ( !v14 )
    return 1;
  v15 = v14 - 1;
  if ( !v15 )
    goto LABEL_23;
  v16 = v15 - 1;
  if ( v16 && (unsigned int)(v16 - 1) >= 2 )
    goto LABEL_21;
  return 0;
}
