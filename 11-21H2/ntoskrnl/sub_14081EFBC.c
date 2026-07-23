/*
 * XREFs of sub_14081EFBC @ 0x14081EFBC
 * Callers:
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     sub_14094206C @ 0x14094206C (sub_14094206C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall sub_14081EFBC(__int64 a1, __int64 a2, const UNICODE_STRING *a3, __int64 a4, _DWORD *a5)
{
  void *v5; // rbx
  void *v6; // rsi
  char v7; // di
  __int64 v10; // rdx
  char *v13; // rax
  HANDLE v14; // rcx
  NTSTATUS v16; // ebx
  bool v17; // sf
  NTSTATUS v18; // eax
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  int v21; // [rsp+4Ch] [rbp-B4h] BYREF
  int Data; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v24; // [rsp+60h] [rbp-A0h] BYREF
  void *v25; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  WCHAR SourceString[256]; // [rsp+80h] [rbp-80h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v7 = 0;
  *a5 = 0;
  Handle = 0LL;
  v10 = *(_QWORD *)(a1 + 8);
  KeyHandle = 0LL;
  Data = 0;
  v20 = 0;
  DestinationString = 0LL;
  v21 = 512;
  if ( (int)sub_14077CD90(
              *(__int64 *)&qword_140D00AC0,
              v10,
              a2,
              5,
              (__int64)&v20,
              (__int64)SourceString,
              (__int64)&v21,
              0) < 0
    || v20 != 1
    || !v21
    || RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0
    || !RtlEqualUnicodeString(a3, &DestinationString, 1u) )
  {
    goto LABEL_10;
  }
  if ( (int)sub_14077F2EC(*(__int64 *)&qword_140D00AC0, *(_QWORD *)(a1 + 8), 20, 0, 131097, 0, (__int64)&Handle, 0LL) < 0
    || (v16 = sub_14067B838(Handle, L"BootConfig", 0, &v24), ZwClose(Handle), v17 = v16 < 0, v5 = v24, v17)
    || v24[1] != 8
    || !v24[3] )
  {
    v13 = 0LL;
    if ( a4 )
      goto LABEL_10;
LABEL_8:
    if ( v13 )
      goto LABEL_10;
    goto LABEL_9;
  }
  v13 = (char *)v24 + (unsigned int)v24[2];
  if ( !a4 )
    goto LABEL_8;
  if ( !v13 || !(unsigned int)sub_14094206C(a4, (char *)v24 + (unsigned int)v24[2]) )
    goto LABEL_10;
LABEL_9:
  *a5 = 1;
LABEL_10:
  if ( (int)sub_14077F2EC(*(__int64 *)&qword_140D00AC0, *(_QWORD *)(a1 + 8), 19, 0, 983103, 0, (__int64)&KeyHandle, 0LL) < 0
    || (v18 = sub_14067B838(KeyHandle, L"DeviceReported", 0, &v25), v6 = v25, v18 < 0) )
  {
    if ( *a5 )
    {
      v14 = KeyHandle;
      if ( !KeyHandle )
      {
        if ( (int)sub_14077F2EC(
                    *(__int64 *)&qword_140D00AC0,
                    *(_QWORD *)(a1 + 8),
                    19,
                    0,
                    983103,
                    1,
                    (__int64)&KeyHandle,
                    0LL) < 0 )
          goto LABEL_17;
        v14 = KeyHandle;
      }
      *(_DWORD *)&DestinationString.Length = 1966108;
      DestinationString.Buffer = L"DeviceReported";
      Data = 1;
      if ( ZwSetValueKey(v14, &DestinationString, 0, 4u, &Data, 4u) >= 0 )
        v7 = 1;
    }
  }
LABEL_17:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v7;
}
