/*
 * XREFs of PiDeferSetInterfaceState @ 0x140871FD0
 * Callers:
 *     IopProcessSetInterfaceState @ 0x1407938C4 (IopProcessSetInterfaceState.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402AF260 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x140793EC8 (IopAllocateUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDeferSetInterfaceState(__int64 a1, const UNICODE_STRING *a2)
{
  __int64 Pool2; // rax
  UNICODE_STRING *v5; // rdi
  int UnicodeString; // ebx
  UNICODE_STRING **v7; // rcx

  Pool2 = ExAllocatePool2(256LL, 32LL, 538996816LL);
  v5 = (UNICODE_STRING *)Pool2;
  if ( Pool2 )
  {
    UnicodeString = IopAllocateUnicodeString(Pool2 + 16, a2->Length);
    if ( UnicodeString < 0 )
    {
      UnicodeString = -1073741670;
      ExFreePoolWithTag(v5, 0);
    }
    else
    {
      RtlCopyUnicodeString(v5 + 1, a2);
      v7 = *(UNICODE_STRING ***)(a1 + 616);
      if ( *v7 != (UNICODE_STRING *)(a1 + 608) )
        __fastfail(3u);
      *(_QWORD *)&v5->Length = a1 + 608;
      v5->Buffer = (wchar_t *)v7;
      *v7 = v5;
      *(_QWORD *)(a1 + 616) = v5;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)UnicodeString;
}
