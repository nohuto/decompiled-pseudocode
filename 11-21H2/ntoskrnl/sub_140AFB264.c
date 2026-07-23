/*
 * XREFs of sub_140AFB264 @ 0x140AFB264
 * Callers:
 *     sub_140A580F0 @ 0x140A580F0 (sub_140A580F0.c)
 * Callees:
 *     sub_14025E490 @ 0x14025E490 (sub_14025E490.c)
 *     sub_140294CC0 @ 0x140294CC0 (sub_140294CC0.c)
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     DbgLoadImageSymbols @ 0x1402D9D60 (DbgLoadImageSymbols.c)
 *     PoEnergyEstimationEnabled @ 0x1402F6160 (PoEnergyEstimationEnabled.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     RtlInitString @ 0x14036B950 (RtlInitString.c)
 *     sub_140398D58 @ 0x140398D58 (sub_140398D58.c)
 *     sub_140399340 @ 0x140399340 (sub_140399340.c)
 *     sub_1403BF7F4 @ 0x1403BF7F4 (sub_1403BF7F4.c)
 *     HalInitializeBios @ 0x1403D0150 (HalInitializeBios.c)
 *     sub_1403DCC38 @ 0x1403DCC38 (sub_1403DCC38.c)
 *     sub_1403DE7DC @ 0x1403DE7DC (sub_1403DE7DC.c)
 *     sub_1403DF020 @ 0x1403DF020 (sub_1403DF020.c)
 *     sub_1403DF080 @ 0x1403DF080 (sub_1403DF080.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _strupr @ 0x1403E03F0 (_strupr.c)
 *     strstr @ 0x1403E0C40 (strstr.c)
 *     atol @ 0x1403E0CE0 (atol.c)
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x140429800 (DbgBreakPointWithStatus.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140502688 @ 0x140502688 (sub_140502688.c)
 *     sub_140502A3C @ 0x140502A3C (sub_140502A3C.c)
 *     sub_1405E47C4 @ 0x1405E47C4 (sub_1405E47C4.c)
 *     sub_140659DD0 @ 0x140659DD0 (sub_140659DD0.c)
 *     ntoskrnl_17 @ 0x1406EB3B0 (ntoskrnl_17.c)
 *     RtlFindMessage @ 0x140758920 (RtlFindMessage.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     sub_14082AB94 @ 0x14082AB94 (sub_14082AB94.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x140837640 (RtlCreateUnicodeStringFromAsciiz.c)
 *     LdrAccessResource @ 0x1408550E0 (LdrAccessResource.c)
 *     LdrFindResource_U @ 0x140855100 (LdrFindResource_U.c)
 *     sub_14086379C @ 0x14086379C (sub_14086379C.c)
 *     sub_140863E64 @ 0x140863E64 (sub_140863E64.c)
 *     HalInitSystem @ 0x140A56BD0 (HalInitSystem.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140AFE184 @ 0x140AFE184 (sub_140AFE184.c)
 *     sub_140B02300 @ 0x140B02300 (sub_140B02300.c)
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 *     sub_140B07AB0 @ 0x140B07AB0 (sub_140B07AB0.c)
 *     sub_140B0A8A8 @ 0x140B0A8A8 (sub_140B0A8A8.c)
 *     sub_140B0AA3C @ 0x140B0AA3C (sub_140B0AA3C.c)
 *     sub_140B131D4 @ 0x140B131D4 (sub_140B131D4.c)
 *     sub_140B1E13C @ 0x140B1E13C (sub_140B1E13C.c)
 *     sub_140B233CC @ 0x140B233CC (sub_140B233CC.c)
 *     sub_140B25898 @ 0x140B25898 (sub_140B25898.c)
 *     sub_140B26BAC @ 0x140B26BAC (sub_140B26BAC.c)
 *     sub_140B27884 @ 0x140B27884 (sub_140B27884.c)
 *     sub_140B27AFC @ 0x140B27AFC (sub_140B27AFC.c)
 *     sub_140B28160 @ 0x140B28160 (sub_140B28160.c)
 *     sub_140B29088 @ 0x140B29088 (sub_140B29088.c)
 *     sub_140B2A2C4 @ 0x140B2A2C4 (sub_140B2A2C4.c)
 *     sub_140B2F780 @ 0x140B2F780 (sub_140B2F780.c)
 *     sub_140B303B4 @ 0x140B303B4 (sub_140B303B4.c)
 *     sub_140B30458 @ 0x140B30458 (sub_140B30458.c)
 *     sub_140B30DA4 @ 0x140B30DA4 (sub_140B30DA4.c)
 *     sub_140B31348 @ 0x140B31348 (sub_140B31348.c)
 *     sub_140B31380 @ 0x140B31380 (sub_140B31380.c)
 *     sub_140B315E8 @ 0x140B315E8 (sub_140B315E8.c)
 *     sub_140B4B810 @ 0x140B4B810 (sub_140B4B810.c)
 *     sub_140B4B89C @ 0x140B4B89C (sub_140B4B89C.c)
 *     sub_140B51A7C @ 0x140B51A7C (sub_140B51A7C.c)
 *     sub_140B53444 @ 0x140B53444 (sub_140B53444.c)
 */

__int64 __fastcall sub_140AFB264(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  char *v5; // rdi
  char *v6; // rax
  char *v7; // rax
  __int64 v8; // rdx
  char *v9; // rax
  char *v10; // rax
  __int64 v11; // rdx
  ULONG_PTR v12; // rax
  _QWORD *v13; // rdx
  ULONG_PTR v14; // r8
  ULONG_PTR v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  UNICODE_STRING *v19; // r13
  NTSTATUS v20; // eax
  int v21; // eax
  ULONG v22; // r14d
  PVOID PoolWithTag; // rax
  void *v24; // rdi
  unsigned int v25; // r15d
  __int64 *i; // rdi
  CHAR *v27; // r8
  unsigned int v28; // r9d
  __int64 v29; // rdx
  CHAR v30; // al
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  NTSTATUS Message; // eax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // r8
  int v38; // eax
  int v39; // eax
  int v40; // eax
  NTSTATUS v41; // eax
  int v42; // eax
  PVOID v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  void *v46; // rdi
  __int64 result; // rax
  unsigned int v48; // eax
  PMESSAGE_RESOURCE_ENTRY *MessageEntry; // [rsp+28h] [rbp-E0h]
  ULONG ResourceLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE *DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  STRING DestinationString_8; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v53; // [rsp+58h] [rbp-B0h] BYREF
  PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry; // [rsp+60h] [rbp-A8h] BYREF
  PVOID ResourceBuffer[3]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v56[3]; // [rsp+80h] [rbp-88h] BYREF
  _LDR_RESOURCE_INFO ResourceInfo; // [rsp+98h] [rbp-70h] BYREF
  CHAR SourceString[256]; // [rsp+B8h] [rbp-50h] BYREF
  CHAR v59[64]; // [rsp+1B8h] [rbp+B0h] BYREF

  dword_140D33974 = -1;
  qword_140D32A68 = (__int64)&unk_140D337C0;
  DestinationString = 0LL;
  ResourceDataEntry = 0LL;
  v53 = 0LL;
  dword_140D32A9C = 259;
  dword_140D32A98 = 1;
  DestinationString_8 = 0LL;
  word_140D329A8 = -535;
  *(_OWORD *)&ResourceBuffer[1] = 0LL;
  word_140D329E8 = -535;
  sub_140B30DA4();
  MEMORY[0xFFFFF780000002C4] = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 2900LL);
  sub_140863E64((__int64)&unk_140D32580);
  sub_14086379C(v2);
  if ( (sub_140294CC0() & 6) == 6 )
    sub_140B4B89C(a1);
  if ( sub_14025E490() )
  {
    if ( (byte_140E01842 & 4) != 0 && (_BYTE)KdDebuggerNotPresent )
      LOBYTE(byte_140E01842) = byte_140E01842 & 0xFB;
    if ( (sub_140294CC0() & 0x400) != 0 )
      LOBYTE(byte_140E01842) = byte_140E01842 | 2;
    v3 = __readmsr(0x6A2u);
    if ( (_BYTE)byte_140E01842 )
      v4 = v3 | 2;
    else
      v4 = v3 & 0xFFFFFFFFFFFFFFFDuLL;
    __writemsr(0x6A2u, v4);
  }
  sub_1403DF020();
  v5 = *(char **)(a1 + 216);
  LODWORD(dword_140C4E560) = 0;
  if ( v5 )
  {
    strupr(v5);
    v6 = strstr(v5, "PERFMEM");
    if ( v6 )
    {
      v7 = strstr(v6, "=");
      if ( v7 )
      {
        v8 = (__int64)atol(v7 + 1) << 8;
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2856LL) )
        {
          qword_140D68668 = v8;
        }
        else if ( v8 )
        {
          qword_140D68668 = sub_140B4B810(a1, v8, 23LL, &unk_140C4E780);
        }
      }
    }
    v9 = strstr(v5, "BURNMEMORY");
    if ( v9 )
    {
      v10 = strstr(v9, "=");
      if ( v10 )
      {
        v11 = (__int64)atol(v10 + 1) << 8;
        if ( v11 )
          sub_140B4B810(a1, v11, 6LL, &unk_140C4E520);
      }
    }
    if ( strstr(v5, "FORCEGROUPAWARE") )
      byte_140D068FB = 1;
  }
  v12 = 0LL;
  v13 = *(_QWORD **)(a1 + 32);
  while ( v13 != (_QWORD *)(a1 + 32) )
  {
    v14 = v13[4];
    v15 = v13[5];
    if ( v14 < v12 )
      KeBugCheckEx(0x31u, (ULONG_PTR)v13, v14, v15, v12);
    v13 = (_QWORD *)*v13;
    v12 = v15 + v14;
  }
  v16 = *(_QWORD *)(a1 + 224);
  if ( v16 )
  {
    qword_140D68190 = *(_QWORD *)(v16 + 16);
    sub_140659DD0();
  }
  qword_140C15B58 = *(PVOID *)(*(_QWORD *)(a1 + 240) + 2976LL);
  sub_140B26BAC();
  sub_14042A5E0(off_140C07098, v17);
  qword_140D687B8 = __rdtsc();
  if ( !(unsigned __int8)HalInitSystem((unsigned int)dword_140C4E560, a1) )
    KeBugCheck(0x5Cu);
  qword_140D687C0 = __rdtsc();
  sub_140B27884((unsigned int)dword_140C4E560);
  sub_140B0A8A8(1LL);
  sub_140B131D4(a1);
  sub_1403DE7DC(a1);
  if ( !(unsigned __int8)PoEnergyEstimationEnabled() )
    _interlockedbittestandreset(*(volatile signed __int32 **)(qword_140D088C0[0] + 24), 0x15u);
  if ( !(unsigned __int8)sub_140B03800(0LL) )
    KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0xBuLL, 0LL, 0LL);
  dword_140C15950 = sub_140B2A2C4();
  MEMORY[0xFFFFF78000000004] = dword_140C15950;
  MEMORY[0xFFFFF7800000023C] = 0;
  v18 = sub_1403BF7F4(SourceString, 256LL, (__int64)"C:%s", *(const char **)(a1 + 200));
  if ( v18 < 0 )
    KeBugCheckEx(0x6Eu, v18, 0LL, 0LL, 0LL);
  RtlInitString(&DestinationString_8, SourceString);
  DestinationString_8.Buffer[--DestinationString_8.Length] = 0;
  v19 = (UNICODE_STRING *)ntoskrnl_17();
  v19->Buffer = (wchar_t *)0xFFFFF78000000030LL;
  *(_DWORD *)&v19->Length = 34078720;
  v20 = RtlAnsiStringToUnicodeString(v19, &DestinationString_8, 0);
  if ( v20 < 0 )
    KeBugCheckEx(0x6Eu, v20, 1uLL, 0LL, 0LL);
  ResourceInfo.Type = 11LL;
  ResourceInfo.Name = 1LL;
  ResourceInfo.Language = 0LL;
  ResourceBuffer[0] = 0LL;
  ResourceLength[0] = 0;
  if ( LdrFindResource_U((PVOID)0x140000000LL, &ResourceInfo, 3u, &ResourceDataEntry) >= 0
    && LdrAccessResource((PVOID)0x140000000LL, ResourceDataEntry, ResourceBuffer, ResourceLength) >= 0 )
  {
    qword_140D06BC0 = ResourceBuffer[0];
  }
  dword_140D68690 &= 7u;
  MEMORY[0xFFFFF78000000258] = dword_140D686CC;
  MEMORY[0xFFFFF7800000028B] = 1;
  v21 = dword_140C4E50C & 0xFFF;
  HIWORD(dword_140C4E588) = 0;
  dword_140C4E50C = v21;
  if ( dword_140C4E684 )
    dword_140C4E588 |= v21 << 16;
  if ( dword_140D6817C != 4 || dword_140D68178 != 4 )
    dword_140D6867C = 0;
  if ( dword_140D6867C )
  {
    sub_140398D58(10000LL * (unsigned int)-dword_140D6867C, 1);
    sub_140399340();
  }
  NtGlobalFlag |= dword_140D68694;
  dword_140C4E7B0 |= dword_140D68690;
  MEMORY[0xFFFFF780000003C0] = 1;
  MEMORY[0xFFFFF780000003C4] = 1;
  MEMORY[0xFFFFF7800000036A] = 1;
  if ( !(unsigned __int8)sub_140B0AA3C(0LL) )
    goto LABEL_94;
  sub_140B31348(a1);
  sub_140B303B4();
  sub_140B27AFC(a1);
  sub_140B30458();
  qword_140D68760 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned __int8)sub_140B07AB0(0LL, a1) )
  {
    v48 = sub_140B51A7C();
    KeBugCheckEx(0x31u, 0LL, 0x64uLL, v48, 0LL);
  }
  qword_140D68768 = KeQueryPerformanceCounter(0LL).QuadPart;
  sub_14082AB94(0, a1);
  qword_140C2B118 = 0LL;
  HalInitializeBios(0, (_QWORD *)a1);
  sub_140B25898(0LL, a1, 0LL);
  if ( qword_140D06BC0 )
  {
    v22 = ResourceLength[0];
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, ResourceLength[0], 0x6342694Bu);
    v24 = PoolWithTag;
    if ( !PoolWithTag )
      KeBugCheck(0x7Du);
    memmove(PoolWithTag, qword_140D06BC0, v22);
    qword_140D06BC0 = v24;
  }
  if ( *(_DWORD *)(a1 + 12) < 2u )
  {
    dword_140C54D54 = 0;
    KeBugCheckEx(0x196u, *(unsigned int *)(a1 + 12), 2uLL, 0LL, 0LL);
  }
  v25 = 0;
  for ( i = *(__int64 **)(a1 + 16); i != (__int64 *)(a1 + 16); ++v25 )
  {
    if ( v25 >= 3 )
    {
      v27 = (CHAR *)i[10];
      if ( *(_WORD *)v27 == 92 )
      {
        v28 = *((unsigned __int16 *)i + 36) >> 1;
        if ( (unsigned __int64)v28 + 1 <= 0x100 )
        {
          v29 = 0LL;
          do
          {
            v30 = *v27;
            v27 += 2;
            SourceString[v29] = v30;
            v29 = (unsigned int)(v29 + 1);
          }
          while ( (unsigned int)v29 < v28 );
          if ( (unsigned int)v29 >= 0x100uLL )
            sub_140502A3C();
          SourceString[v29] = 0;
LABEL_64:
          RtlInitString((PSTRING)&ResourceBuffer[1], SourceString);
          DbgLoadImageSymbols((__int64)&ResourceBuffer[1], (void *)i[6], 0xFFFFFFFFLL);
        }
      }
      else if ( ((unsigned __int64)*((unsigned __int16 *)i + 44) >> 1) + ((unsigned __int64)v19->Length >> 1) + 17 <= 0x100 )
      {
        v31 = sub_1403BF7F4(SourceString, 256LL, (__int64)"%ws\\System32\\Drivers\\%wZ", v19->Buffer + 2, i + 11);
        if ( v31 < 0 )
          KeBugCheckEx(0x31u, v31, 3uLL, 0LL, 0LL);
        goto LABEL_64;
      }
    }
    i = (__int64 *)*i;
  }
  if ( BYTE1(KdDebuggerEnabled) )
    DbgBreakPointWithStatus(1u);
  sub_140B29088(a1);
  sub_1403DF080(a1);
  if ( **(_DWORD **)(a1 + 240) >= 0xED8u )
    sub_140B315E8(a1);
  sub_140B28160(a1);
  MEMORY[0xFFFFF780000002B4] = 2147418111;
  MEMORY[0xFFFFF780000002B8] = 0x80000000;
  if ( dword_140C4E588 )
  {
    Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000087u, (PMESSAGE_RESOURCE_ENTRY *)&DestinationString);
    if ( Message < 0 )
      KeBugCheckEx(0x31u, Message, 4uLL, 0LL, 0LL);
    RtlInitAnsiString(&DestinationString_8, DestinationString + 4);
    DestinationString_8.Length -= 2;
    LODWORD(MessageEntry) = BYTE1(dword_140C4E588);
    v35 = sub_1403BF7F4(
            SourceString,
            256LL,
            (__int64)"%Z %u%c",
            &DestinationString_8,
            MessageEntry,
            ((unsigned __int8)dword_140C4E588 + 64) & (unsigned int)-((unsigned __int8)dword_140C4E588 != 0));
    if ( v35 < 0 )
      KeBugCheckEx(0x31u, v35, 5uLL, 0LL, 0LL);
    if ( (dword_140C4E588 & 0xFFFF0000) != 0 )
    {
      DestinationString = 0LL;
      v38 = sub_140502688((__int64)SourceString, v36, v37, &DestinationString, &v53);
      if ( v38 < 0 )
        KeBugCheckEx(0x31u, v38, 6uLL, 0LL, 0LL);
      v39 = sub_1403BF7F4(DestinationString, v53, (__int64)"v.%u", HIWORD(dword_140C4E588));
      if ( v39 < 0 )
        KeBugCheckEx(0x31u, v39, 7uLL, 0LL, 0LL);
    }
  }
  else
  {
    v40 = sub_1403DCC38((__int64)SourceString, v32, v33);
    if ( v40 < 0 )
      KeBugCheckEx(0x31u, v40, 8uLL, 0LL, 0LL);
    stru_140C4E570.MaximumLength = 256 - v53;
  }
  RtlInitAnsiString(&DestinationString_8, SourceString);
  v41 = RtlAnsiStringToUnicodeString(&stru_140C4E570, &DestinationString_8, 1u);
  if ( v41 < 0 )
    KeBugCheckEx(0x31u, v41, 9uLL, 0LL, 0LL);
  v42 = sub_1403BF7F4(v59, 64LL, (__int64)"%u.%u", 6, 3);
  if ( v42 < 0 )
    KeBugCheckEx(0x31u, v42, 0xAuLL, 0LL, 0LL);
  if ( !RtlCreateUnicodeStringFromAsciiz(&stru_140C4E590, v59) )
LABEL_94:
    KeBugCheck(0x31u);
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v43 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x800000uLL, 0x63617453u);
    v46 = v43;
    if ( v43 )
    {
      v56[0] = v43;
      v56[1] = 0x800000LL;
      v56[2] = 0x800000LL;
      if ( (int)sub_1405E47C4(v45, v44, v56) < 0 )
        ExFreePoolWithTag(v46, 0x63617453u);
    }
  }
  if ( (NtGlobalFlag & 0x800000) != 0 )
    sub_140B53444();
  sub_140B31380();
  if ( !(unsigned __int8)sub_140AFE184(0LL) )
    KeBugCheck(0x5Eu);
  if ( !(unsigned __int8)sub_140B1E13C() )
    KeBugCheck(0x5Fu);
  if ( !(unsigned __int8)sub_140B02300(0LL, a1) || (int)sub_140B233CC() < 0 )
    KeBugCheck(0x60u);
  if ( !(unsigned __int8)sub_140B2F780() )
    KeBugCheck(0x8Fu);
  MEMORY[0xFFFFF7800000026C] = 10;
  MEMORY[0xFFFFF78000000270] = 0;
  MEMORY[0xFFFFF78000000260] = 22000;
  MEMORY[0xFFFFF7800000026A] = word_140D05070;
  MEMORY[0xFFFFF7800000002C] = -31132;
  MEMORY[0xFFFFF7800000002E] = -31132;
  result = 0LL;
  MEMORY[0xFFFFF780000003A4] = 0;
  return result;
}
