/*
 * XREFs of ExWnfHiveUnloaded @ 0x140699814
 * Callers:
 *     CmUnloadKey @ 0x140698DD8 (CmUnloadKey.c)
 * Callees:
 *     SeConvertStringSidToSid @ 0x14020BA20 (SeConvertStringSidToSid.c)
 *     RtlLengthSid @ 0x140227B50 (RtlLengthSid.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     ExpWnfInvalidateDataStores @ 0x140682B5C (ExpWnfInvalidateDataStores.c)
 *     RtlPrefixUnicodeString @ 0x1406D9E50 (RtlPrefixUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void __fastcall ExWnfHiveUnloaded(PCUNICODE_STRING String2)
{
  struct _KTHREAD *CurrentThread; // rax
  wchar_t *v3; // rdi
  unsigned int v4; // ebx
  wchar_t *Pool2; // rax
  ULONG v6; // eax
  UNICODE_STRING v7; // [rsp+20h] [rbp-28h] BYREF
  PSID Sid; // [rsp+58h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  Sid = 0LL;
  *(_QWORD *)&v7.Length = 2359330LL;
  --CurrentThread->KernelApcDisable;
  v3 = 0LL;
  v7.Buffer = L"\\Registry\\User\\S-";
  if ( RtlPrefixUnicodeString(&v7, String2, 1u) )
  {
    v4 = String2->Length - 30;
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, v4 + 2, 543583831LL);
    v3 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, String2->Buffer + 15, v4);
      v3[(unsigned __int64)v4 >> 1] = 0;
      if ( (int)SeConvertStringSidToSid(v3, (__int64 *)&Sid) >= 0 )
      {
        v6 = RtlLengthSid(Sid);
        ExpWnfInvalidateDataStores(Sid, v6);
      }
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( Sid )
    ExFreePoolWithTag(Sid, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x20666E57u);
}
