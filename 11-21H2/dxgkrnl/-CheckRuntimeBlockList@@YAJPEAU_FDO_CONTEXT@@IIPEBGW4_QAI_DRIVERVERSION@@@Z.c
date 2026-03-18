/*
 * XREFs of ?CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C020271C
 * Callers:
 *     DxgkInitializeBlockList @ 0x1C02025FC (DxgkInitializeBlockList.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z @ 0x1C02027A8 (-FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z.c)
 *     DxgkFreeUnicodeString @ 0x1C0205754 (DxgkFreeUnicodeString.c)
 *     ?ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z @ 0x1C0205788 (-ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z.c)
 */

__int64 __fastcall CheckRuntimeBlockList(
        unsigned __int16 **a1,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        enum _QAI_DRIVERVERSION a5)
{
  unsigned int BlockListStrings; // eax
  __int64 v7; // rbx
  unsigned int v8; // esi
  int v10; // eax
  struct _UNICODE_STRING *v11; // rdi
  unsigned int v12[4]; // [rsp+50h] [rbp-178h] BYREF
  struct _UNICODE_STRING v13; // [rsp+60h] [rbp-168h] BYREF

  v12[0] = 0;
  BlockListStrings = FindBlockListStrings(
                       L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BlockList\\Runtime",
                       a2,
                       a3,
                       a4,
                       a5,
                       v12,
                       &v13);
  v7 = v12[0];
  v8 = BlockListStrings;
  if ( v12[0] >= 0x14 )
  {
    WdLogSingleEntry1(1LL, 785LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"foundStringCount < MAX_TRUE_CONDITIONS",
      785LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (_DWORD)v7 )
  {
    v12[0] = 0;
    v10 = ConvertStringsToOneMultiString(&v13, v7, a1 + 714, v12);
    v8 = v10;
    if ( v10 < 0 )
    {
      if ( v10 == -1073741637 )
        *((_BYTE *)a1 + 5724) = 1;
    }
    else
    {
      *((_DWORD *)a1 + 1430) = 2 * v12[0];
    }
    v11 = &v13;
    do
    {
      DxgkFreeUnicodeString(v11++);
      --v7;
    }
    while ( v7 );
  }
  return v8;
}
