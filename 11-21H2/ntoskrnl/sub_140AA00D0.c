/*
 * XREFs of sub_140AA00D0 @ 0x140AA00D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A82E08 @ 0x140A82E08 (sub_140A82E08.c)
 *     sub_140A8B064 @ 0x140A8B064 (sub_140A8B064.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 *     sub_140A96B0C @ 0x140A96B0C (sub_140A96B0C.c)
 *     sub_140A96C48 @ 0x140A96C48 (sub_140A96C48.c)
 *     sub_140AA08D8 @ 0x140AA08D8 (sub_140AA08D8.c)
 */

PVOID __fastcall sub_140AA00D0(
        struct _MDL *BugCheckParameter2,
        KPROCESSOR_MODE a2,
        MEMORY_CACHING_TYPE a3,
        void *a4,
        ULONG BugCheckOnFailure,
        ULONG Priority)
{
  __int64 v10; // rdx
  PVOID v11; // rdi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (dword_140C29FC0 & 1) != 0 )
    sub_140AA08D8((ULONG_PTR)BugCheckParameter2);
  sub_140A82E08(Priority, retaddr);
  if ( !_bittest16(&BugCheckParameter2->MdlFlags, 0xDu) && BugCheckOnFailure )
  {
    if ( (unsigned int)sub_140A96C48() && (dword_140C29FC0 & 1) != 0 )
      sub_140A8C924(0xC4u, 0x82uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter2->MdlFlags, BugCheckOnFailure);
    goto LABEL_12;
  }
  if ( (unsigned int)sub_140A96B0C(0) != 1
    && ((qword_140D01450 & 0x40000) == 0
     || !qword_140D57510
     || !(unsigned __int8)sub_14042A5E0("MmMapLockedPagesSpecifyCache", v10)) )
  {
LABEL_12:
    v11 = MmMapLockedPagesSpecifyCache(BugCheckParameter2, a2, a3, a4, BugCheckOnFailure, Priority);
    if ( v11 )
    {
      if ( (dword_140C29FC0 & 0x1000) != 0 )
        sub_140A8B064(retaddr, 200LL, 0xD0u, BugCheckParameter2->ByteCount);
    }
    return v11;
  }
  if ( a2 )
    RtlRaiseStatus(-1073741670);
  return 0LL;
}
