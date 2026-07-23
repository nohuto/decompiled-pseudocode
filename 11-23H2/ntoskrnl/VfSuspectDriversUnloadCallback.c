/*
 * XREFs of VfSuspectDriversUnloadCallback @ 0x140ADAAD4
 * Callers:
 *     VfDriverUnloadImage @ 0x140ABCEC4 (VfDriverUnloadImage.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402B0200 (KeReleaseMutex.c)
 *     RtlEqualUnicodeString @ 0x1406DA320 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     VfUtilPrintCheckinString @ 0x140AC2824 (VfUtilPrintCheckinString.c)
 *     VfDriverLock @ 0x140ACA75C (VfDriverLock.c)
 *     ViSuspectDriversLookupEntry @ 0x140ADAD00 (ViSuspectDriversLookupEntry.c)
 */

LONG __fastcall VfSuspectDriversUnloadCallback(__int64 a1)
{
  UNICODE_STRING *v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rcx

  VfDriverLock();
  v2 = (UNICODE_STRING *)(a1 + 88);
  if ( RtlEqualUnicodeString(&VfTcpIpName, v2, 1u) == 1 )
  {
    VfTcpIpDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfTdxName, v2, 1u) == 1 )
  {
    VfTdxDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfMrxsmbName, v2, 1u) == 1 )
  {
    VfMrxsmbDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfTmName, v2, 1u) == 1 )
  {
    VfTmDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfWin32kName, v2, 1u) == 1 )
  {
    VfWin32kDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfKsName, v2, 1u) == 1 )
  {
    VfKsDllBase = 0LL;
  }
  v3 = (_QWORD *)ViSuspectDriversLookupEntry(v2);
  if ( v3 )
  {
    ++dword_140C13958;
    if ( VfDifRunningWithoutReboot )
    {
      v4 = *v3;
      if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      ExFreePoolWithTag(v3, 0x44536656u);
    }
    else
    {
      ++*((_DWORD *)v3 + 5);
      VfUtilPrintCheckinString(&v2->Length, 1);
    }
  }
  ViDriversLoadLockOwner = 0LL;
  return KeReleaseMutex(&ViDriversLoadLock, 0);
}
