/*
 * XREFs of sub_140B09C28 @ 0x140B09C28
 * Callers:
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x140298010 (RtlLookupFunctionEntry.c)
 *     sub_140B09CF8 @ 0x140B09CF8 (sub_140B09CF8.c)
 *     sub_140B2F634 @ 0x140B2F634 (sub_140B2F634.c)
 */

__int64 sub_140B09C28()
{
  unsigned int i; // ebx
  void (__cdecl __noreturn *v1)(NTSTATUS); // rax
  PRUNTIME_FUNCTION v2; // rax
  __int64 v3; // rdi
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 ImageBase; // [rsp+30h] [rbp+8h] BYREF

  ImageBase = 0LL;
  for ( i = 0; i < 0xC; ++i )
  {
    v1 = (void (__cdecl __noreturn *)(NTSTATUS))sub_140B09CF8(i);
    if ( !v1 )
      break;
    if ( v1 == RtlRaiseStatus )
      byte_140E01955 = i;
    v2 = RtlLookupFunctionEntry((DWORD64)v1, &ImageBase, 0LL);
    v3 = 2LL * i;
    v4 = ImageBase + v2->BeginAddress;
    v5 = ImageBase + v2->EndAddress;
    *(_QWORD *)&dword_140E01950[2 * v3 + 6] = ImageBase;
    *(_QWORD *)&dword_140E01950[2 * v3 + 8] = v2;
    if ( v4 < qword_140E01958 )
      qword_140E01958 = v4;
    if ( v5 > qword_140E01960 )
      qword_140E01960 = v5;
  }
  dword_140E01950[0] = i;
  return sub_140B2F634(&off_140C02EC8, 3LL);
}
