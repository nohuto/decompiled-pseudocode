/*
 * XREFs of ??$?0$00@guid@winrt@@QEAA@AEBU_GUID@@@Z @ 0x18008857C
 * Callers:
 *     ?CreateInstance@DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180087710 (-CreateInstance@DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIUnknow.c)
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     <none>
 */

winrt::guid *__fastcall winrt::guid::guid(winrt::guid *this, const struct _GUID *a2)
{
  winrt::guid *result; // rax
  unsigned __int8 v3; // si
  unsigned __int8 v4; // bp
  unsigned __int8 v5; // r10
  unsigned __int8 v6; // r11
  unsigned __int8 v7; // di
  unsigned __int8 v8; // r14
  unsigned __int8 v9; // r15
  unsigned __int16 Data3; // r9
  unsigned __int16 Data2; // r8
  unsigned int Data1; // ecx

  result = this;
  v3 = a2->Data4[4];
  v4 = a2->Data4[5];
  v5 = a2->Data4[0];
  v6 = a2->Data4[1];
  v7 = a2->Data4[3];
  v8 = a2->Data4[6];
  v9 = a2->Data4[7];
  Data3 = a2->Data3;
  Data2 = a2->Data2;
  Data1 = a2->Data1;
  *((_BYTE *)result + 10) = a2->Data4[2];
  *((_BYTE *)result + 12) = v3;
  *((_BYTE *)result + 13) = v4;
  *(_DWORD *)result = Data1;
  *((_WORD *)result + 2) = Data2;
  *((_WORD *)result + 3) = Data3;
  *((_BYTE *)result + 8) = v5;
  *((_BYTE *)result + 9) = v6;
  *((_BYTE *)result + 11) = v7;
  *((_BYTE *)result + 14) = v8;
  *((_BYTE *)result + 15) = v9;
  return result;
}
