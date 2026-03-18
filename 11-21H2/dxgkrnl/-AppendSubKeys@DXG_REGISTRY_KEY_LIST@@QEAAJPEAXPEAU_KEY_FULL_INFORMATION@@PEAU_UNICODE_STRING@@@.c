/*
 * XREFs of ?AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@Z @ 0x1C0301DD4
 * Callers:
 *     ?DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C02B9F98 (-DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036E6A0 (-VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0019BFC (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C00444BC (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0051240 (-RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?InsertTail@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0303AF4 (-InsertTail@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DXG_REGISTRY_KEY_LIST::AppendSubKeys(
        DXG_REGISTRY_KEY_LIST *this,
        void *a2,
        struct _KEY_FULL_INFORMATION *a3,
        struct _UNICODE_STRING *a4)
{
  ULONG MaxNameLen; // eax
  ULONG v7; // ebx
  ULONG Length; // r15d
  __int64 v9; // rdi
  wchar_t *v10; // rsi
  NTSTATUS v11; // eax
  int inserted; // eax
  const wchar_t *v13; // r9
  int v15; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ResultLength; // [rsp+54h] [rbp-ACh] BYREF
  struct _UNICODE_STRING v17; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING v18; // [rsp+68h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-88h]
  struct _UNICODE_STRING *v20; // [rsp+80h] [rbp-80h]
  char v21; // [rsp+90h] [rbp-70h] BYREF

  MaxNameLen = a3->MaxNameLen;
  KeyHandle = a2;
  v7 = 0;
  v20 = a4;
  Length = 2 * MaxNameLen + 24;
  LODWORD(v9) = 0;
  v10 = (wchar_t *)operator new[](Length, 0x4B677844u, 256LL, (__int64)a4);
  v17.Buffer = (wchar_t *)&v21;
  v15 = *(_DWORD *)L"\\";
  v18.Buffer = (wchar_t *)&v15;
  *(_QWORD *)&v17.Length = 34078720LL;
  *(_QWORD *)&v18.Length = 262146LL;
  if ( a3->SubKeys )
  {
    while ( 1 )
    {
      memset(v10, 0, Length);
      ResultLength = 0;
      v11 = ZwEnumerateKey(KeyHandle, v7, KeyBasicInformation, v10, Length, &ResultLength);
      v9 = v11;
      if ( v11 < 0 )
        break;
      RtlUnicodeStringCopy(&v17, v20);
      RtlUnicodeStringCat(&v17, &v18);
      RtlUnicodeStringCatString(&v17, v10 + 8);
      inserted = DXG_REGISTRY_KEY_LIST::InsertTail(this, &v17);
      v9 = inserted;
      if ( inserted < 0 )
      {
        WdLogSingleEntry1(2LL, inserted);
        v13 = L"Failed to insert SubKeyRegistryPath into list for AppendSubKeys (status = 0x%I64x).";
        goto LABEL_8;
      }
      if ( ++v7 >= a3->SubKeys )
        goto LABEL_9;
    }
    WdLogSingleEntry1(2LL, v11);
    v13 = L"Failed to Enumerate Subkeys for AppendSubKeys (status = 0x%I64x).";
LABEL_8:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v13, v9, 0LL, 0LL, 0LL, 0LL);
  }
LABEL_9:
  operator delete[](v10);
  return (unsigned int)v9;
}
