/*
 * XREFs of sub_140993398 @ 0x140993398
 * Callers:
 *     PoSetThermalActiveCooling @ 0x14098B330 (PoSetThermalActiveCooling.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_140993398(__int64 a1)
{
  REGHANDLE v2; // rdi
  bool v3; // zf
  BOOL v4; // [rsp+30h] [rbp-48h] BYREF
  __int64 v5; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  if ( byte_140C5AE14 )
  {
    v2 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_140038628) )
    {
      v5 = a1;
      v3 = *(_BYTE *)(a1 + 17) == 0;
      UserData.Size = 4;
      v8 = 8;
      UserData.Reserved = 0;
      v9 = 0;
      v4 = !v3;
      UserData.Ptr = (ULONGLONG)&v4;
      v7 = &v5;
      EtwWrite(v2, &stru_140038628, 0LL, 2u, &UserData);
    }
  }
}
