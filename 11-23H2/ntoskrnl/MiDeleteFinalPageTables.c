/*
 * XREFs of MiDeleteFinalPageTables @ 0x140291844
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x140705BF8 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140214D94 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeleteVirtualAddresses @ 0x140289A9C (MiDeleteVirtualAddresses.c)
 *     MiDeleteProcessShadow @ 0x1402919BC (MiDeleteProcessShadow.c)
 *     MiDeleteTopLevelPage @ 0x140292D54 (MiDeleteTopLevelPage.c)
 *     KeFlushProcessTb @ 0x140292EF0 (KeFlushProcessTb.c)
 *     MiUnlinkProcessFromSession @ 0x14029313C (MiUnlinkProcessFromSession.c)
 *     LOCK_ADDRESS_SPACE @ 0x14029CBDC (LOCK_ADDRESS_SPACE.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     MiDeleteVadBitmap @ 0x140706DC4 (MiDeleteVadBitmap.c)
 */

__int64 __fastcall MiDeleteFinalPageTables(_KPROCESS *BugCheckParameter2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // r15
  int i; // r14d
  unsigned __int64 v6; // rsi
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v8; // rcx
  bool v9; // zf
  __int64 result; // rax
  _OWORD v11[3]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v12; // [rsp+60h] [rbp-9h]
  $115DCDF994C6370D29323EAB0E0C9502 v13; // [rsp+68h] [rbp-1h] BYREF

  v12 = 0LL;
  v2 = BugCheckParameter2->DirectoryTableBase >> 12;
  memset(&v13, 0, sizeof(v13));
  v3 = 48 * v2;
  memset(v11, 0, sizeof(v11));
  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess(BugCheckParameter2, 0, (__int64)&v13);
  for ( i = 0; i < 2; ++i )
  {
    if ( i )
    {
      v6 = qword_140C65A38;
      if ( !qword_140C65A38 )
        continue;
    }
    else
    {
      v6 = 2147352576LL;
    }
    if ( MI_READ_PTE_LOCK_FREE(8 * ((v6 >> 39) & 0x1FF) - 0x90482413000LL) )
    {
      LOCK_ADDRESS_SPACE(CurrentThread, BugCheckParameter2);
      MiDeleteVirtualAddresses(0LL, v6, v6, 0, v11);
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)BugCheckParameter2);
    }
  }
  MiDeleteVadBitmap((ULONG_PTR)BugCheckParameter2);
  BugCheckParameter4 = *(_QWORD *)(v3 - 0x220000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( BugCheckParameter4 != 2 )
    KeBugCheckEx(0x1Au, 0x3453uLL, (ULONG_PTR)BugCheckParameter2, 0xAAAAAAAAAAAAAAABuLL * (v3 >> 4), BugCheckParameter4);
  MiDeleteProcessShadow(BugCheckParameter2, 1LL);
  KiUnstackDetachProcess(&v13);
  _interlockedbittestandset((volatile signed __int32 *)&BugCheckParameter2->632, 0xBu);
  MiUnlinkProcessFromSession(BugCheckParameter2);
  KeFlushProcessTb(BugCheckParameter2->DirectoryTableBase);
  v9 = (unsigned int)MiDeleteTopLevelPage(v8, BugCheckParameter2->DirectoryTableBase >> 12) == 3;
  result = *((_QWORD *)&v11[0] + 1);
  if ( v9 )
    return *((_QWORD *)&v11[0] + 1) + 1LL;
  return result;
}
