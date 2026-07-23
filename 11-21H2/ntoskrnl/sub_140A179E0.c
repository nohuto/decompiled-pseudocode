/*
 * XREFs of sub_140A179E0 @ 0x140A179E0
 * Callers:
 *     sub_140A12DA0 @ 0x140A12DA0 (sub_140A12DA0.c)
 *     sub_140A1357C @ 0x140A1357C (sub_140A1357C.c)
 *     sub_140A13628 @ 0x140A13628 (sub_140A13628.c)
 *     sub_140A142D0 @ 0x140A142D0 (sub_140A142D0.c)
 *     sub_140A18040 @ 0x140A18040 (sub_140A18040.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 */

__int64 __fastcall sub_140A179E0(_WORD *a1, _WORD *a2)
{
  NTSTATUS v4; // ebx
  __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+38h] [rbp-30h]
  __int64 SystemInformation; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+48h] [rbp-20h]

  v6 = 0LL;
  SystemInformation = 0LL;
  v7 = 0;
  v9 = 0;
  if ( !a1 )
  {
LABEL_5:
    if ( a2 )
    {
      v4 = ZwQuerySystemInformation(SystemProcessorInformation, &SystemInformation, 0xCu, 0LL);
      if ( v4 < 0 )
        goto LABEL_3;
      *a2 = SystemInformation;
    }
    return 0;
  }
  v4 = ZwQuerySystemInformation(SystemProcessorInformation, &v6, 0xCu, 0LL);
  if ( v4 >= 0 )
  {
    *a1 = v6;
    goto LABEL_5;
  }
LABEL_3:
  sub_1406E0C3C(1LL, (__int64)"AslEnvGetProcessWowInfo");
  return (unsigned int)v4;
}
