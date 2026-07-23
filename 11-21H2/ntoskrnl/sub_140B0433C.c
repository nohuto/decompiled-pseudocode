/*
 * XREFs of sub_140B0433C @ 0x140B0433C
 * Callers:
 *     sub_14082AB94 @ 0x14082AB94 (sub_14082AB94.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     sub_140243A18 @ 0x140243A18 (sub_140243A18.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14024AE50 (KeRegisterBugCheckReasonCallback.c)
 *     ExRegisterCallback @ 0x14025A0B0 (ExRegisterCallback.c)
 *     KeInitializeMutex @ 0x140261AA0 (KeInitializeMutex.c)
 *     RtlGetMultiTimePrecise @ 0x1402622C0 (RtlGetMultiTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     KeInitializeTimer2 @ 0x1403588D0 (KeInitializeTimer2.c)
 *     sub_1403DD97C @ 0x1403DD97C (sub_1403DD97C.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     sub_1406D5860 @ 0x1406D5860 (sub_1406D5860.c)
 *     ExCreateCallback @ 0x1406E0E40 (ExCreateCallback.c)
 *     sub_1406E1024 @ 0x1406E1024 (sub_1406E1024.c)
 *     sub_140827FE8 @ 0x140827FE8 (sub_140827FE8.c)
 *     sub_140828004 @ 0x140828004 (sub_140828004.c)
 *     sub_140829EC8 @ 0x140829EC8 (sub_140829EC8.c)
 *     sub_140829F84 @ 0x140829F84 (sub_140829F84.c)
 *     sub_14083F51C @ 0x14083F51C (sub_14083F51C.c)
 *     sub_140848440 @ 0x140848440 (sub_140848440.c)
 *     sub_14084EB98 @ 0x14084EB98 (sub_14084EB98.c)
 *     sub_140851114 @ 0x140851114 (sub_140851114.c)
 *     sub_140854CB8 @ 0x140854CB8 (sub_140854CB8.c)
 *     sub_140862888 @ 0x140862888 (sub_140862888.c)
 *     sub_1408636E8 @ 0x1408636E8 (sub_1408636E8.c)
 *     sub_140864124 @ 0x140864124 (sub_140864124.c)
 *     sub_140864500 @ 0x140864500 (sub_140864500.c)
 *     sub_140864B00 @ 0x140864B00 (sub_140864B00.c)
 *     sub_140865108 @ 0x140865108 (sub_140865108.c)
 *     sub_140865288 @ 0x140865288 (sub_140865288.c)
 *     sub_140908C90 @ 0x140908C90 (sub_140908C90.c)
 *     sub_140AFAD4C @ 0x140AFAD4C (sub_140AFAD4C.c)
 *     sub_140B1A3F4 @ 0x140B1A3F4 (sub_140B1A3F4.c)
 *     sub_140B2E06C @ 0x140B2E06C (sub_140B2E06C.c)
 *     sub_140B2F180 @ 0x140B2F180 (sub_140B2F180.c)
 *     sub_140B2F410 @ 0x140B2F410 (sub_140B2F410.c)
 *     sub_140B2FABC @ 0x140B2FABC (sub_140B2FABC.c)
 *     sub_140B304E0 @ 0x140B304E0 (sub_140B304E0.c)
 */

__int64 __fastcall sub_140B0433C(int a1, int a2, unsigned int *a3)
{
  __int64 result; // rax
  unsigned int v6; // eax
  __int64 v7; // rax
  unsigned int v8; // r15d
  int v9; // eax
  __int64 v10; // rcx
  _WORD *v11; // rdi
  unsigned int i; // edi
  __int64 v13; // rax
  __int64 v14; // r14
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  LARGE_INTEGER v19; // [rsp+40h] [rbp-29h] BYREF
  __int64 v20; // [rsp+48h] [rbp-21h] BYREF
  __int64 v21; // [rsp+50h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-11h] BYREF
  __int64 v23; // [rsp+68h] [rbp-1h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  int v25; // [rsp+D0h] [rbp+67h] BYREF
  int v26; // [rsp+E8h] [rbp+7Fh]

  result = 0LL;
  v19.QuadPart = 0LL;
  v20 = 0LL;
  v23 = 0LL;
  v25 = 0;
  DestinationString = 0LL;
  if ( !a1 )
  {
    KeInitializeMutex(&stru_140C160E0, 0);
    KeInitializeMutex(&stru_140C16120, 0);
    qword_140C162F0 = 0LL;
    sub_140865288();
    dword_140D07144 |= 0x880000u;
    dword_140D07140[0] |= 0x10000u;
    RtlGetMultiTimePrecise((LARGE_INTEGER *)&DestinationString, 3, &v25);
    qword_140C15FE8 = 0LL;
    if ( (v25 & 1) != 0 )
    {
      qword_140C15FE0 = *(_QWORD *)&DestinationString.Length;
      if ( (v25 & 2) != 0 )
        qword_140C15FE8 = (__int64)DestinationString.Buffer - *(_QWORD *)&DestinationString.Length;
    }
    else
    {
      qword_140C15FE0 = KeQueryPerformanceCounter(0LL).QuadPart;
    }
    qword_140C15FD8 = __rdtsc();
    KeQueryPerformanceCounter(&stru_140C15F78);
    if ( !a3 || (v6 = *a3) == 0 )
    {
      if ( a2 )
        v6 = sub_1403DD97C();
      else
        v6 = 80;
    }
    if ( (int)sub_14084EB98(0LL, v6) < 0 )
      KeBugCheck(0x11Du);
    qword_140D05008 = *((_QWORD *)sub_140204738(0LL) + 108);
    sub_140829F84((__int64)KeGetCurrentPrcb());
    v7 = *(_QWORD *)(qword_140D05008 + 456);
    qword_140C0B220 = qword_140D05008;
    qword_140C0B218 = v7;
    result = sub_140865108((__int64)a3);
LABEL_14:
    ++byte_140C15F70;
    return result;
  }
  if ( a1 != 1 )
  {
    if ( a1 != 2 )
      return result;
    result = sub_1406D5860(xmmword_140D06900, xmmword_140D06900, 1, (_QWORD *)qword_140D05008, 0);
    goto LABEL_14;
  }
  v8 = dword_140D06884;
  sub_140243A18(&qword_140C15F68, &v19, &v20);
  qword_140C15FF0 = v19.QuadPart - v20;
  v9 = sub_140B2F180();
  if ( v9 < 0 )
    KeBugCheckEx(0x11Du, 1uLL, v9, 0LL, 0LL);
  sub_140854CB8();
  v10 = 9LL;
  v11 = (_WORD *)0xFFFFF78000000380LL;
  while ( v10 )
  {
    *v11++ = 0;
    --v10;
  }
  for ( i = 0; i < v8; ++i )
  {
    v13 = sub_140348800(i);
    v14 = v13;
    if ( !*(_QWORD *)(v13 + 34472) )
    {
      v15 = sub_140829F84(v13);
      if ( v15 < 0 )
        KeBugCheckEx(0x11Du, 2uLL, v15, i, 0LL);
    }
    v16 = sub_140829EC8(v14);
    if ( v16 < 0 )
      KeBugCheckEx(0x11Du, 2uLL, v16, i, 0LL);
  }
  sub_140B2E06C();
  sub_140B2F410();
  sub_1408636E8();
  sub_140B304E0();
  dword_140C15F74 = *(_DWORD *)(sub_140348800(0) + 68);
  sub_140864500();
  sub_140848440(v18, v17);
  dword_140C15CF0 = 0;
  stru_140C15F80.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_14020B000;
  dword_140C15CE0 = 0;
  qword_140C15CE8 = 0LL;
  stru_140C15F80.Parameter = &dword_140C15FA0;
  dword_140C15CE4 = 12;
  dword_140C15F60 = 8;
  stru_140C15F80.List.Flink = 0LL;
  KeInitializeTimer2((__int64)&unk_140C16160, (__int64)sub_14062F040, 0LL, 8LL);
  sub_140864124();
  if ( !ExRegisterCallback((PCALLBACK_OBJECT)qword_140C158D0, (PCALLBACK_FUNCTION)sub_14081CB40, 0LL) )
    goto LABEL_39;
  v21 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  if ( (int)KsrGetFirmwareInformation(&v21) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\SoftRestart");
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 80;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ExCreateCallback(&qword_140D3CE38, &ObjectAttributes, 0, 1u) >= 0 )
      ExRegisterCallback(qword_140D3CE38, (PCALLBACK_FUNCTION)sub_1409ECB90, 0LL);
  }
  sub_140862888();
  dword_140D06CD0 |= 0x1600370Fu;
  dword_140D06CD4 |= 0x8206u;
  dword_140D06CD8 |= 0x10040u;
  dword_140D06CE8 |= 0x1FFFFFFFu;
  sub_1406E1024((__int64)&dword_140D06CD0, 0);
  if ( (int)sub_140851114(0LL, (__int64)a3) < 0 )
LABEL_39:
    KeBugCheck(0x11Du);
  stru_140C15D20.State = 0;
  KeRegisterBugCheckReasonCallback(
    &stru_140C15D20,
    (PKBUGCHECK_REASON_CALLBACK_ROUTINE)sub_140632260,
    KbCallbackSecondaryMultiPartDumpData,
    (PUCHAR)&byte_1400371A8);
  EtwRegister(&stru_140010D68, (PETWENABLECALLBACK)sub_140865450, 0LL, &qword_140C15FA8);
  sub_14083F51C();
  sub_140B1A3F4();
  sub_140864B00();
  sub_140B2FABC();
  EtwRegister(&stru_14000E5A8, (PETWENABLECALLBACK)sub_1408652C0, 0LL, &qword_140C16478);
  sub_140827FE8(&dword_140C043E0);
  EtwRegister(&stru_14000E558, (PETWENABLECALLBACK)sub_1406E30E0, (PVOID)1, &qword_140C15FF8);
  sub_140828004((char *)&dword_140C043A8, (__int64)sub_140864A10, (__int64)qword_140013540);
  sub_140908C90((char *)&dword_140C03958);
  EtwRegister(&stru_14000E568, (PETWENABLECALLBACK)sub_1406E30E0, (PVOID)0x10000, &qword_140C16000);
  EtwRegister(&stru_14000E5F8, (PETWENABLECALLBACK)sub_1406E30E0, (PVOID)0x100, &qword_140C16008);
  EtwRegister(&stru_14000E5E8, (PETWENABLECALLBACK)sub_1406E30E0, (PVOID)0x2000000, &qword_140C16010);
  EtwRegister(&stru_140037188, (PETWENABLECALLBACK)sub_1409E62D0, 0LL, &qword_140D3B010);
  EtwRegister(&stru_14000E578, (PETWENABLECALLBACK)sub_1406E30E0, (PVOID)0x20000001, &qword_140C15FB0);
  EtwRegister(&stru_14000E598, 0LL, 0LL, &qword_140C16480);
  EtwRegister(&stru_14000E5B8, 0LL, 0LL, &qword_140C15DF8);
  EtwRegister(&stru_14000E618, 0LL, 0LL, &qword_140C15FB8);
  EtwRegister(&stru_14000E538, 0LL, 0LL, &qword_140C15E00);
  EtwRegister(&stru_14000E588, 0LL, 0LL, &qword_140C15FC0);
  EtwRegister(&stru_14000E548, 0LL, 0LL, &qword_140C15FC8);
  EtwRegister(&stru_14000E608, (PETWENABLECALLBACK)sub_1403DA420, 0LL, &qword_140C15FD0);
  ++byte_140C15F70;
  ZwUpdateWnfStateData(&stru_14000E638, 0LL, 0, 0LL, 0LL, 0, 0);
  sub_140AFAD4C();
  v26 = 0;
  if ( (int)sub_14042A5E0(44LL, 4LL) < 0 )
    *(_DWORD *)((char *)&NlsMbCodePageTag + 5) = 8;
  result = *(unsigned int *)((char *)&NlsMbCodePageTag + 5);
  dword_140D3B100 = *(_DWORD *)((char *)&NlsMbCodePageTag + 5);
  return result;
}
