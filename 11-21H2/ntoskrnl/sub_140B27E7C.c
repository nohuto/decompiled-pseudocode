/*
 * XREFs of sub_140B27E7C @ 0x140B27E7C
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140673B4C @ 0x140673B4C (sub_140673B4C.c)
 *     RtlGetVersion @ 0x1406C2630 (RtlGetVersion.c)
 *     sub_1406D811C @ 0x1406D811C (sub_1406D811C.c)
 *     sub_1407B6B90 @ 0x1407B6B90 (sub_1407B6B90.c)
 *     ObCreateObjectType @ 0x140824B10 (ObCreateObjectType.c)
 *     sub_14085AD4C @ 0x14085AD4C (sub_14085AD4C.c)
 *     sub_14085ADC0 @ 0x14085ADC0 (sub_14085ADC0.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_140B27E7C()
{
  unsigned int v0; // esi
  _OWORD *Pool2; // rax
  _OWORD *v2; // rbx
  _WORD *v3; // rcx
  __int16 dwBuildNumber; // dx
  __int16 dwMajorVersion; // ax
  bool v6; // cf
  __int16 dwMinorVersion; // ax
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r11
  __int64 v13; // rax
  struct _EX_RUNDOWN_REF *i; // rcx
  struct _EX_RUNDOWN_REF *v15; // rax
  struct _EX_RUNDOWN_REF *v16; // rbx
  ULONG_PTR Count; // rcx
  int ObjectType; // eax
  _QWORD DestinationString[3]; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD v21[16]; // [rsp+38h] [rbp-D0h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+B8h] [rbp-50h] BYREF

  v0 = 0;
  *(_OWORD *)&DestinationString[1] = 0LL;
  if ( byte_140C24528 )
  {
    Pool2 = (_OWORD *)ExAllocatePool2(64LL, 0x3E0uLL, 0x54456F50u);
    qword_140C5AE28 = (__int64)Pool2;
    v2 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, 0x3E0uLL);
      v2[1] = 0LL;
      *((_QWORD *)v2 + 2) = 0LL;
      *((_QWORD *)v2 + 1) = v2;
      *(_QWORD *)v2 = v2;
      memset(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
      VersionInformation.dwOSVersionInfoSize = 284;
      if ( RtlGetVersion(&VersionInformation) >= 0 )
      {
        v3 = (_WORD *)qword_140C5AE28;
        dwBuildNumber = -1;
        dwMajorVersion = -1;
        if ( VersionInformation.dwMajorVersion < 0xFFFF )
          dwMajorVersion = VersionInformation.dwMajorVersion;
        v6 = VersionInformation.dwMinorVersion < 0xFFFF;
        *(_WORD *)(qword_140C5AE28 + 974) = dwMajorVersion;
        dwMinorVersion = -1;
        if ( v6 )
          dwMinorVersion = VersionInformation.dwMinorVersion;
        v6 = VersionInformation.dwBuildNumber < 0xFFFF;
        v3[486] = dwMinorVersion;
        if ( v6 )
          dwBuildNumber = VersionInformation.dwBuildNumber;
        v3[485] = dwBuildNumber;
        v3[484] = 3260;
      }
      v8 = (_QWORD *)qword_140C5AE28;
      *(_OWORD *)(qword_140C5AE28 + 40) = 0LL;
      v8[5] = 0LL;
      v8[11] = sub_1406E5760;
      v8[12] = sub_1406E58E0;
      v8[13] = sub_1406D2EA0;
      v8[14] = sub_1406DF620;
      v8[15] = sub_1406D9A60;
      sub_14085ADC0(v8 + 7, (__int64)(v8 + 11));
      sub_1406D811C(v8 + 16);
      v9 = qword_140D06940;
      *((_QWORD *)qword_140D06940 + 285) = v10;
      sub_14085AD4C((__int64)(v8 + 98), (__int64)L"Default");
      sub_14085AD4C((__int64)(v8 + 109), (__int64)L"Overflow");
      sub_14085AD4C((__int64)(v8 + 87), (__int64)L"IsrDpc");
      v11 = (__int64)(v8 + 76);
      *(_QWORD *)(v9[285] + 448LL) = v12;
      sub_14085AD4C(v11, (__int64)L"System");
      v13 = *((_QWORD *)PsInitialSystemProcess + 285);
      if ( v13 )
        *(_QWORD *)(v13 + 448) = v11;
      for ( i = 0LL; ; i = v16 )
      {
        v15 = (struct _EX_RUNDOWN_REF *)sub_1407B6B90(i);
        v16 = v15;
        if ( !v15 )
          break;
        Count = v15[285].Count;
        if ( Count )
        {
          if ( !*(_QWORD *)(Count + 448) )
          {
            *(_QWORD *)(Count + 448) = qword_140C5AE28 + 784;
            sub_140673B4C(v15);
          }
        }
      }
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"EnergyTracker");
      memset(v21, 0, 0x78uLL);
      BYTE2(v21[0]) |= 4u;
      v21[8] = sub_14099A3C0;
      LOWORD(v21[0]) = 120;
      v21[9] = sub_14099A400;
      HIDWORD(v21[4]) = 1;
      LODWORD(v21[5]) = 640;
      LODWORD(v21[1]) = 402;
      HIDWORD(v21[3]) = 2031617;
      ObjectType = ObCreateObjectType(
                     (const UNICODE_STRING *)&DestinationString[1],
                     (__int64)v21,
                     0LL,
                     qword_140C5AE28 + 32);
      if ( ObjectType >= 0 )
        return 0;
      return (unsigned int)ObjectType;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v0;
}
