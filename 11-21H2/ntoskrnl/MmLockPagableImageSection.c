/*
 * XREFs of MmLockPagableImageSection @ 0x1406F5E50
 * Callers:
 *     sub_1406170D0 @ 0x1406170D0 (sub_1406170D0.c)
 *     sub_140A5B230 @ 0x140A5B230 (sub_140A5B230.c)
 *     sub_140A82298 @ 0x140A82298 (sub_140A82298.c)
 *     sub_140A82328 @ 0x140A82328 (sub_140A82328.c)
 *     sub_140AAB660 @ 0x140AAB660 (sub_140AAB660.c)
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 *     sub_140B0872C @ 0x140B0872C (sub_140B0872C.c)
 *     sub_140B315E8 @ 0x140B315E8 (sub_140B315E8.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402FD820 @ 0x1402FD820 (sub_1402FD820.c)
 *     sub_1402FDA80 @ 0x1402FDA80 (sub_1402FDA80.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MmLockPagableImageSection(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rbp
  ULONG_PTR v3; // rbx
  void *v4; // rcx
  unsigned __int64 v5; // rsi
  PIMAGE_NT_HEADERS v6; // rax
  unsigned int NumberOfSections; // r10d
  _DWORD *v8; // rdx
  int v9; // ecx
  unsigned __int64 v10; // r8
  unsigned int v11; // eax

  if ( (unsigned int)sub_1402FDD20(BugCheckParameter2) )
    return 1LL;
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  v4 = (void *)sub_1402FDA80(BugCheckParameter2, 0)[6];
  v5 = BugCheckParameter2 - (_QWORD)v4;
  v6 = RtlImageNtHeader(v4);
  NumberOfSections = v6->FileHeader.NumberOfSections;
  v8 = (_DWORD *)((char *)&v6->OptionalHeader.Magic + v6->FileHeader.SizeOfOptionalHeader);
  v9 = 0;
  if ( v6->FileHeader.NumberOfSections )
  {
    while ( 1 )
    {
      v10 = (unsigned int)v8[3];
      v11 = v8[4];
      if ( v5 >= v10 )
      {
        if ( v11 < v8[2] )
          v11 = v8[2];
        if ( v5 < (unsigned int)v10 + v11 )
          break;
      }
      v8 += 10;
      if ( ++v9 >= NumberOfSections )
        goto LABEL_10;
    }
    v3 = (ULONG_PTR)v8;
  }
LABEL_10:
  ExReleaseResourceLite(&PsLoadedModuleResource);
  sub_1402AC800((__int64)CurrentThread);
  if ( !v3 )
    KeBugCheckEx(0x1Au, 0x1234uLL, BugCheckParameter2, 0LL, 0LL);
  sub_1402FD820(v3, 1uLL);
  return v3;
}
