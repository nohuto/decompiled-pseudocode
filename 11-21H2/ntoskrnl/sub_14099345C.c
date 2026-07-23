/*
 * XREFs of sub_14099345C @ 0x14099345C
 * Callers:
 *     PoSetThermalPassiveCooling @ 0x14098B3E0 (PoSetThermalPassiveCooling.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14099345C(__int64 a1)
{
  REGHANDLE v2; // rdi
  char v3; // al
  char v4; // [rsp+30h] [rbp-48h] BYREF
  __int64 v5; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  if ( byte_140C5AE14 )
  {
    v2 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_140038090) )
    {
      v3 = *(_BYTE *)(a1 + 16);
      UserData.Reserved = 0;
      v9 = 0;
      v4 = v3;
      v5 = a1;
      UserData.Ptr = (ULONGLONG)&v4;
      v7 = &v5;
      UserData.Size = 1;
      v8 = 8;
      EtwWrite(v2, &stru_140038090, 0LL, 2u, &UserData);
    }
  }
}
