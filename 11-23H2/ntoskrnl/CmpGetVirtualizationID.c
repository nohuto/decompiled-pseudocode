/*
 * XREFs of CmpGetVirtualizationID @ 0x140A19D3C
 * Callers:
 *     CmRealKCBToVirtualPath @ 0x140A18608 (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualStoreRoot @ 0x140A19C84 (CmpGetVirtualStoreRoot.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14022A860 (RtlAppendUnicodeToString.c)
 *     RtlCopyUnicodeString @ 0x1402AEFD0 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 *     SeQueryUserSidToken @ 0x140714E00 (SeQueryUserSidToken.c)
 *     RtlFreeUnicodeString @ 0x14076F3D0 (RtlFreeUnicodeString.c)
 *     CmpEffectiveTokenForSubject @ 0x1407BA5DC (CmpEffectiveTokenForSubject.c)
 *     RtlConvertSidToUnicodeString @ 0x1407FAD40 (RtlConvertSidToUnicodeString.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpGetVirtualizationID(PUNICODE_STRING Destination, __int64 a2)
{
  __int64 v4; // rax
  NTSTATUS v5; // edi
  __int64 v6; // rdx
  wchar_t *Pool2; // rax
  int v9; // [rsp+20h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+28h] [rbp-80h] BYREF
  _BYTE Sid[80]; // [rsp+40h] [rbp-68h] BYREF

  v9 = 0;
  UnicodeString = 0LL;
  memset(Sid, 0, 0x44uLL);
  v4 = CmpEffectiveTokenForSubject((__int64 *)a2, &v9);
  if ( v9 == 2 && *(int *)(a2 + 8) < 2 )
    v4 = *(_QWORD *)(a2 + 16);
  SeQueryUserSidToken(v4, Sid, 0x44u, 0LL);
  v5 = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
  if ( v5 >= 0 )
  {
    v6 = (unsigned __int16)(UnicodeString.Length + 20);
    Destination->MaximumLength = v6;
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, v6, 1700154691LL);
    Destination->Buffer = Pool2;
    if ( Pool2 )
    {
      RtlCopyUnicodeString(Destination, &UnicodeString);
      RtlAppendUnicodeToString(Destination, L"_Classes");
    }
    else
    {
      v5 = -1073741670;
    }
  }
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v5;
}
