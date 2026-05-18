/*
 * XREFs of sub_1800DC000 @ 0x1800DC000
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18001D8E4 @ 0x18001D8E4 (sub_18001D8E4.c)
 *     sub_1800DAA00 @ 0x1800DAA00 (sub_1800DAA00.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800DC000(__int64 a1)
{
  int v1; // eax
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  bool v7; // sf
  bool v8; // of
  _QWORD v10[4]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+40h] [rbp-48h] BYREF

  v1 = sub_1800DAA00(a1);
  if ( v2 > 6 )
  {
    if ( v2 == 7 )
    {
      v8 = __OFSUB__(v1, 37632);
      v7 = v1 - 37632 < 0;
      return v7 == v8;
    }
    if ( v2 == 8 )
    {
      v8 = __OFSUB__(v1, 41216);
      v7 = v1 - 41216 < 0;
      return v7 == v8;
    }
    if ( v2 >= 12 )
    {
      if ( v2 == 12 )
        goto LABEL_9;
      if ( (unsigned int)(v2 - 13) <= 2 )
        return 0;
LABEL_21:
      sub_1800113D0(v10, "unknown device feature queried");
      sub_18001D8E4((__int64)pExceptionObject, (const char *)v10, 0);
      throw (Spectre::Utils::SpectreException *)pExceptionObject;
    }
    return 1;
  }
  if ( v2 == 6 )
    goto LABEL_9;
  if ( !v2 )
    goto LABEL_9;
  v3 = v2 - 1;
  if ( !v3 )
    goto LABEL_9;
  v4 = v3 - 1;
  if ( !v4 )
  {
    v8 = __OFSUB__(v1, 37376);
    v7 = v1 - 37376 < 0;
    return v7 == v8;
  }
  v5 = v4 - 1;
  if ( !v5 )
    return 1;
  v6 = v5 - 1;
  if ( !v6 )
    return 1;
  if ( v6 != 1 )
    goto LABEL_21;
LABEL_9:
  v8 = __OFSUB__(v1, 40960);
  v7 = v1 - 40960 < 0;
  return v7 == v8;
}
