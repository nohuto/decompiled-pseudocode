/*
 * XREFs of sub_14083FE80 @ 0x14083FE80
 * Callers:
 *     sub_14083F570 @ 0x14083F570 (sub_14083F570.c)
 * Callees:
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     RtlVerifyVersionInfo @ 0x1403B2B70 (RtlVerifyVersionInfo.c)
 *     VerSetConditionMask @ 0x1403B4740 (VerSetConditionMask.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwEnumerateKey @ 0x14041BDA0 (ZwEnumerateKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     sub_14081538C @ 0x14081538C (sub_14081538C.c)
 *     sub_14084028C @ 0x14084028C (sub_14084028C.c)
 *     sub_140840760 @ 0x140840760 (sub_140840760.c)
 *     sub_140840870 @ 0x140840870 (sub_140840870.c)
 *     sub_140840904 @ 0x140840904 (sub_140840904.c)
 *     sub_14084099C @ 0x14084099C (sub_14084099C.c)
 *     sub_140840A78 @ 0x140840A78 (sub_140840A78.c)
 *     sub_140840BE4 @ 0x140840BE4 (sub_140840BE4.c)
 *     sub_140840CD8 @ 0x140840CD8 (sub_140840CD8.c)
 *     sub_1409DA7FC @ 0x1409DA7FC (sub_1409DA7FC.c)
 *     sub_1409DB060 @ 0x1409DB060 (sub_1409DB060.c)
 *     sub_1409DB15C @ 0x1409DB15C (sub_1409DB15C.c)
 */

__int64 sub_14083FE80()
{
  PSLIST_ENTRY v0; // rbx
  ULONGLONG v1; // r12
  int v2; // edi
  ULONG v3; // r15d
  NTSTATUS v4; // eax
  bool v5; // r14
  ULONG v6; // esi
  PSLIST_ENTRY v7; // rax
  int v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // edi
  unsigned int v12; // r10d
  unsigned int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE v17; // [rsp+40h] [rbp-C8h]
  HANDLE Handle; // [rsp+48h] [rbp-C0h]
  int v19; // [rsp+50h] [rbp-B8h] BYREF
  int v20; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v21; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A8h]
  HANDLE v23; // [rsp+68h] [rbp-A0h]
  UNICODE_STRING v24; // [rsp+70h] [rbp-98h] BYREF
  _OSVERSIONINFOEXW VersionInfo; // [rsp+88h] [rbp-80h] BYREF
  GUID Guid; // [rsp+1A8h] [rbp+A0h] BYREF
  _DWORD KeyInformation[38]; // [rsp+1B8h] [rbp+B0h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  v17 = 0LL;
  v23 = 0LL;
  v0 = 0LL;
  ResultLength[0] = 0;
  v19 = 0;
  v20 = 0;
  v24 = 0LL;
  Guid = 0LL;
  memset(&VersionInfo, 0, sizeof(VersionInfo));
  v1 = 0LL;
  v2 = sub_140840870(L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\Control\\WDI\\Scenarios");
  if ( v2 >= 0 )
  {
    v3 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          while ( 1 )
          {
            do
            {
              do
              {
LABEL_3:
                if ( Handle )
                {
                  ZwClose(Handle);
                  Handle = 0LL;
                }
                if ( v17 )
                {
                  ZwClose(v17);
                  v17 = 0LL;
                }
                if ( v23 )
                {
                  ZwClose(v23);
                  v23 = 0LL;
                }
                memset(KeyInformation, 0, sizeof(KeyInformation));
                v4 = ZwEnumerateKey(KeyHandle, v3++, KeyBasicInformation, KeyInformation, 0x96u, ResultLength);
                if ( v4 == -2147483622 )
                {
                  v2 = 0;
                  sub_140840BE4();
                  goto LABEL_36;
                }
              }
              while ( v4 < 0 );
              if ( KeyInformation[3] >= 0x80u )
              {
                v2 = -2147483643;
                goto LABEL_36;
              }
              *((_WORD *)&KeyInformation[4] + ((unsigned __int64)KeyInformation[3] >> 1)) = 0;
              RtlInitUnicodeString(&v24, (PCWSTR)&KeyInformation[4]);
            }
            while ( RtlGUIDFromString(&v24, &Guid) < 0 );
            if ( !qword_140C16E50 )
              break;
            v12 = *((_DWORD *)qword_140C16E50 + 256);
            v13 = 0;
            if ( !v12 )
              break;
            while ( 1 )
            {
              v14 = 16LL * v13;
              v15 = *(_QWORD *)&Guid.Data1 - *(_QWORD *)((char *)qword_140C16E50 + v14);
              if ( *(_QWORD *)&Guid.Data1 == *(_QWORD *)((char *)qword_140C16E50 + v14) )
                v15 = *(_QWORD *)Guid.Data4 - *(_QWORD *)((char *)qword_140C16E50 + v14 + 8);
              if ( !v15 )
                break;
              if ( ++v13 >= v12 )
                goto LABEL_14;
            }
          }
LABEL_14:
          ;
        }
        while ( (int)sub_140840870((PCWSTR)&KeyInformation[4]) < 0 );
        LODWORD(v21) = 1;
        v5 = 1;
        if ( (int)sub_140840870(L"Config") >= 0 )
          break;
LABEL_16:
        if ( (int)sub_140840870(L"Instrumentation") >= 0 )
        {
          v6 = 0;
          while ( 1 )
          {
            while ( 1 )
            {
              if ( v0 )
                sub_140840904(v0);
              v7 = sub_14081538C(1, 0x4A0u);
              v0 = v7;
              if ( !v7 )
              {
                v2 = -1073741670;
                goto LABEL_36;
              }
              memset(v7, 0, 0x4A0uLL);
              *((_BYTE *)&v0[73].Next + 8) = v5;
              v8 = sub_14084028C(v23, v6++, (GUID *)v0);
              v9 = v8;
              if ( v8 == -2147483622 )
                goto LABEL_3;
              if ( v8 >= 0 )
                break;
              if ( EtwEventEnabled(qword_140C16E68, &stru_140038FA8) )
                sub_1409DB060(v0, LOWORD(v0[1].Next), v9);
            }
            if ( (unsigned int)dword_140C16E40 >= 0x40 )
              break;
            v10 = dword_140C18E80;
            if ( (int)sub_140840A78(v0) < 0 || HIDWORD(v0[3].Next) && (int)sub_140840CD8(v0) < 0 )
            {
              sub_1409DA7FC(v10);
            }
            else
            {
              sub_14084099C(v0);
              if ( HIDWORD(v0[3].Next) )
                v0 = 0LL;
            }
          }
          if ( EtwEventEnabled(qword_140C16E68, &stru_1400399D8) )
            sub_1409DB15C(&stru_1400399D8, v0, LOWORD(v0[1].Next));
        }
      }
      if ( (int)sub_140840760(v17, &v19, (__int64)ResultLength) < 0 || v19 )
      {
        if ( (int)sub_140840760(v17, &v20, (__int64)ResultLength) < 0
          || (v20 & 1) == 0
          || (memset(&VersionInfo, 0, sizeof(VersionInfo)),
              VersionInfo.wSuiteMask = 16,
              v1 = VerSetConditionMask(v1, 0x40u, 6u),
              RtlVerifyVersionInfo(&VersionInfo, 0x40u, v1) < 0) )
        {
          if ( (int)sub_140840760(v17, &v21, (__int64)ResultLength) >= 0 )
            v5 = (_DWORD)v21 != 0;
          goto LABEL_16;
        }
      }
    }
  }
LABEL_36:
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( Handle )
  {
    ZwClose(Handle);
    Handle = 0LL;
  }
  if ( v17 )
  {
    ZwClose(v17);
    v17 = 0LL;
  }
  if ( v23 )
    ZwClose(v23);
  if ( v0 )
    sub_140840904(v0);
  return (unsigned int)v2;
}
