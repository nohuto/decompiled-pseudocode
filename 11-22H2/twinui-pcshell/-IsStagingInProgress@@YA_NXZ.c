/*
 * XREFs of ?IsStagingInProgress@@YA_NXZ @ 0x1806BE968
 * Callers:
 *     ?IsDisabledForMachineConfig@details@MeetAndChatHelpers@@YA_NXZ @ 0x1806BE6B0 (-IsDisabledForMachineConfig@details@MeetAndChatHelpers@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

char IsStagingInProgress(void)
{
  LSTATUS ValueW; // eax
  signed int v1; // ecx
  char v2; // dl
  bool v3; // zf
  unsigned int v5; // [rsp+50h] [rbp+8h] BYREF
  DWORD v6; // [rsp+58h] [rbp+10h] BYREF
  DWORD v7; // [rsp+60h] [rbp+18h] BYREF

  v6 = 0;
  v7 = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\AllUserInstallAgent",
             L"StagingInProgress",
             0x10000012u,
             &v6,
             &v5,
             &v7);
  v1 = ValueW;
  v2 = 1;
  if ( ValueW )
  {
    if ( ValueW == 234 )
    {
      LOWORD(v1) = 13;
    }
    else if ( ValueW <= 0 )
    {
LABEL_13:
      ValueW = v5;
      goto LABEL_14;
    }
    goto LABEL_12;
  }
  LOWORD(v1) = 13;
  if ( v6 != 4 )
  {
    if ( v7 == 4 && (unsigned __int16)(v5 - 48) <= 1u )
    {
      v1 = 0;
      ValueW = 0;
      v3 = (_WORD)v5 == 49;
      goto LABEL_5;
    }
    goto LABEL_12;
  }
  if ( v5 > 1 )
  {
LABEL_12:
    v1 = (unsigned __int16)v1 | 0x80070000;
    goto LABEL_13;
  }
  v1 = 0;
  v3 = v5 == 1;
LABEL_5:
  LOBYTE(ValueW) = v3;
LABEL_14:
  if ( v1 < 0 || !ValueW )
    return 0;
  return v2;
}
