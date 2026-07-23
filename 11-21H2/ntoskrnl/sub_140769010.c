/*
 * XREFs of sub_140769010 @ 0x140769010
 * Callers:
 *     sub_140769170 @ 0x140769170 (sub_140769170.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     sub_140769784 @ 0x140769784 (sub_140769784.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140769010(__int64 a1, const UNICODE_STRING *a2)
{
  __int64 Pool2; // rax
  UNICODE_STRING *v5; // rdi
  int v6; // ebx
  UNICODE_STRING **v7; // rcx

  Pool2 = ExAllocatePool2(256LL, 32LL, 538996816LL);
  v5 = (UNICODE_STRING *)Pool2;
  if ( Pool2 )
  {
    v6 = sub_140769784(Pool2 + 16);
    if ( v6 < 0 )
    {
      v6 = -1073741670;
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
  return (unsigned int)v6;
}
