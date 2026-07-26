/*
 * XREFs of ndisAllocateConfigurationString @ 0x1C001AFC0
 * Callers:
 *     NdisOpenConfigurationEx @ 0x1C001B190 (NdisOpenConfigurationEx.c)
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C000D6C0 (WPP_RECORDER_SF_qqq.c)
 *     ?RtlUShortAdd@@YAJGGPEAG@Z @ 0x1C001B160 (-RtlUShortAdd@@YAJGGPEAG@Z.c)
 */

__int64 __fastcall ndisAllocateConfigurationString(
        const UNICODE_STRING *a1,
        const UNICODE_STRING *a2,
        const UNICODE_STRING *a3,
        PUNICODE_STRING Destination)
{
  unsigned int v8; // ebx
  unsigned __int16 *v9; // r8
  int v10; // r9d
  unsigned __int16 *v11; // r8
  int v12; // eax
  int v13; // r9d
  unsigned __int16 v14; // ax
  wchar_t *Pool2; // rax

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x11u,
      (struct _GUID *)&WPP_231a7ad8765e3b8a0571d07bdac2bb37_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  v8 = 0;
  v10 = RtlUShortAdd(a1->Length, ndisParameterStr.Length, &Destination->MaximumLength);
  if ( a2 )
  {
    RtlUShortAdd(*v9, a3->Length, v9);
    v12 = RtlUShortAdd(*v11, a2->Length, v11);
    v10 = v12 | v13;
  }
  v14 = *v9 + 2;
  Destination->Buffer = 0LL;
  *v9 = v14;
  Destination->Length = 0;
  if ( v10 || (Pool2 = (wchar_t *)ExAllocatePool2(64LL, v14, 538985550), (Destination->Buffer = Pool2) == 0LL) )
  {
    v8 = -1073741670;
  }
  else
  {
    RtlCopyUnicodeString(Destination, a1);
    RtlAppendUnicodeStringToString(Destination, &ndisParameterStr);
    if ( a2 )
    {
      RtlAppendUnicodeStringToString(Destination, a3);
      RtlAppendUnicodeStringToString(Destination, a2);
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x12u,
      (struct _GUID *)&WPP_231a7ad8765e3b8a0571d07bdac2bb37_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  return v8;
}
