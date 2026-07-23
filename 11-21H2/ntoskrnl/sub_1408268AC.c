/*
 * XREFs of sub_1408268AC @ 0x1408268AC
 * Callers:
 *     sub_14082666C @ 0x14082666C (sub_14082666C.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateEvent @ 0x14041C060 (ZwCreateEvent.c)
 *     RtlCreateUnicodeString @ 0x14066A0F0 (RtlCreateUnicodeString.c)
 *     sub_1406BE560 @ 0x1406BE560 (sub_1406BE560.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_14095BDAC @ 0x14095BDAC (sub_14095BDAC.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1408268AC(PCWSTR Source, int a2, const WCHAR *a3, const WCHAR *a4, _QWORD *a5)
{
  int appended; // ebx
  __int64 Pool2; // rax
  _QWORD *v11; // rdi
  _WORD *v12; // r14
  unsigned __int16 v13; // ax
  PVOID v14; // rax
  unsigned __int16 v15; // ax
  PVOID v16; // rax
  int v17; // eax
  int v18; // eax
  _QWORD *v19; // rax
  HANDLE Handle; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF

  Handle = 0LL;
  appended = 0;
  memset(&ObjectAttributes, 0, 44);
  Pool2 = ExAllocatePool2(64LL, 520LL, 1650749520LL);
  v11 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v12 = (_WORD *)(Pool2 + 16);
  *(_DWORD *)(Pool2 + 64) = a2;
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)(Pool2 + 16), Source) )
    goto LABEL_22;
  if ( a3 )
  {
    if ( !RtlCreateUnicodeString((PUNICODE_STRING)v11 + 2, a3) )
      goto LABEL_22;
  }
  else
  {
    v13 = *v12 + 38;
    *((_WORD *)v11 + 16) = 0;
    *((_WORD *)v11 + 17) = v13;
    v14 = sub_1406BE560(v13);
    v11[5] = v14;
    if ( !v14 )
      goto LABEL_22;
    appended = RtlAppendUnicodeToString((PUNICODE_STRING)v11 + 2, L"\\REGISTRY\\MACHINE\\");
    if ( appended < 0 )
      goto LABEL_23;
    appended = RtlAppendUnicodeToString((PUNICODE_STRING)v11 + 2, Source);
    if ( appended < 0 )
      goto LABEL_23;
  }
  if ( a4 )
  {
    if ( RtlCreateUnicodeString((PUNICODE_STRING)v11 + 3, a4) )
      goto LABEL_11;
LABEL_22:
    appended = -1073741670;
    goto LABEL_23;
  }
  v15 = *v12 + 58;
  *((_WORD *)v11 + 24) = 0;
  *((_WORD *)v11 + 25) = v15;
  v16 = sub_1406BE560(v15);
  v11[7] = v16;
  if ( !v16 )
    goto LABEL_22;
  appended = RtlAppendUnicodeToString((PUNICODE_STRING)v11 + 3, L"\\SystemRoot\\System32\\config\\");
  if ( appended < 0 )
    goto LABEL_23;
  appended = RtlAppendUnicodeToString((PUNICODE_STRING)v11 + 3, Source);
  if ( appended < 0 )
    goto LABEL_23;
LABEL_11:
  v17 = *((_DWORD *)v11 + 16);
  if ( (v17 & 4) != 0 )
  {
    appended = ExInitializeResourceLite((PERESOURCE)(v11 + 11));
    if ( appended < 0 )
      goto LABEL_23;
    *((_BYTE *)v11 + 192) = 1;
    KeInitializeTimerEx((PKTIMER)(v11 + 33), NotificationTimer);
    KeInitializeDpc((PRKDPC)(v11 + 41), (PKDEFERRED_ROUTINE)sub_14025B770, v11);
    v11[53] = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwCreateEvent((PHANDLE)v11 + 59, 0x1F0003u, &ObjectAttributes, NotificationEvent, 1u);
    if ( appended < 0 )
      goto LABEL_23;
    *((_BYTE *)v11 + 489) = 1;
    v11[60] = 0xFFFFFFFFLL;
    v17 = *((_DWORD *)v11 + 16);
  }
  if ( (v17 & 0x10) != 0 )
  {
    appended = sub_14077FFEC(0LL, 0LL, v11[5], 0, 0x2000000u, (__int64)&Handle);
    if ( appended < 0
      || (appended = sub_14077FFEC(0LL, (__int64)Handle, (__int64)L"DriverDatabase", 0, 0x2000000u, (__int64)(v11 + 9)),
          ZwClose(Handle),
          appended < 0) )
    {
LABEL_23:
      sub_14095BDAC(v11);
      return (unsigned int)appended;
    }
  }
  v18 = *((_DWORD *)v11 + 16);
  *((_DWORD *)v11 + 124) = 259;
  if ( (v18 & 0x40) == 0 )
  {
    v19 = (_QWORD *)qword_140C445B8;
    if ( *(__int64 **)qword_140C445B8 != &qword_140C445B0 )
      __fastfail(3u);
    *v11 = &qword_140C445B0;
    v11[1] = v19;
    *v19 = v11;
    qword_140C445B8 = (__int64)v11;
  }
  *a5 = v11;
  return (unsigned int)appended;
}
