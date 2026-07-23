/*
 * XREFs of MiUnapplyDriverHotPatch @ 0x140A3C018
 * Callers:
 *     MiApplyHotPatchToDriver @ 0x140A35120 (MiApplyHotPatchToDriver.c)
 * Callees:
 *     MiGetSessionVm @ 0x14020B11C (MiGetSessionVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiDetachSessionGlobal @ 0x14033F24C (MiDetachSessionGlobal.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     VslRevertHotPatch @ 0x14054CC2C (VslRevertHotPatch.c)
 *     MiDereferenceSessionGlobal @ 0x140637A5C (MiDereferenceSessionGlobal.c)
 *     MiAttachToSessionForBaseImage @ 0x1406420E4 (MiAttachToSessionForBaseImage.c)
 *     MiUnlockDriverPages @ 0x140875D6C (MiUnlockDriverPages.c)
 *     VslDetermineHotPatchUndoTableSize @ 0x140942324 (VslDetermineHotPatchUndoTableSize.c)
 *     VslObtainHotPatchUndoTable @ 0x140942CF8 (VslObtainHotPatchUndoTable.c)
 *     MiPrepareDriverPatchState @ 0x140A2B8D4 (MiPrepareDriverPatchState.c)
 *     MiIdentifyImageDiscardablePages @ 0x140A37924 (MiIdentifyImageDiscardablePages.c)
 *     MiLockHotPatchUndoPages @ 0x140A388E8 (MiLockHotPatchUndoPages.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiUnapplyDriverHotPatch(unsigned __int64 a1, __int64 a2)
{
  unsigned int v4; // ecx
  int v5; // eax
  __int64 *v6; // r14
  __int64 v7; // rcx
  void *v8; // rdi
  SIZE_T v9; // rbx
  unsigned __int64 SessionVm; // rax
  __int64 v11; // r15
  PVOID Pool; // rax
  _DWORD v14[4]; // [rsp+20h] [rbp-89h] BYREF
  _RTL_BITMAP_EX v15[7]; // [rsp+30h] [rbp-79h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v16; // [rsp+A0h] [rbp-9h] BYREF

  v14[0] = 0;
  memset(&v16, 0, sizeof(v16));
  memset(v15, 0, 0x68uLL);
  v4 = *(_DWORD *)(a1 + 64);
  v15[0].SizeOfBitMap = a1;
  v5 = (v4 >> 12) + ((v4 & 0xFFF) != 0);
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 48);
  v8 = 0LL;
  LODWORD(v15[1].Buffer) = v5;
  LODWORD(v9) = VslDetermineHotPatchUndoTableSize(v7, v14);
  if ( (v9 & 0x80000000) == 0LL )
  {
    v9 = v14[0];
    if ( v14[0] )
    {
      if ( (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 48)) == 1 )
      {
        KiStackAttachProcess((_KPROCESS *)*(&xmmword_140C69848 + 1), 0, (__int64)&v16);
        v6 = MiAttachToSessionForBaseImage(a1);
        SessionVm = MiGetSessionVm();
      }
      else
      {
        SessionVm = (unsigned __int64)MiGetAnyMultiplexedVm(1);
      }
      v11 = SessionVm;
      Pool = MiAllocatePool(256, v9, 0x54555048u);
      v8 = Pool;
      if ( Pool )
      {
        LODWORD(v9) = VslObtainHotPatchUndoTable(*(PVOID *)(a1 + 48), (__int64)Pool, v9);
        if ( (v9 & 0x80000000) == 0LL )
        {
          LODWORD(v9) = MiPrepareDriverPatchState((__int64)v15, v11);
          if ( (v9 & 0x80000000) == 0LL )
          {
            LODWORD(v9) = MiIdentifyImageDiscardablePages((__int64 *)v15);
            if ( (v9 & 0x80000000) == 0LL )
            {
              LODWORD(v9) = MiLockHotPatchUndoPages((__int64 *)v15, (int)v8);
              if ( (v9 & 0x80000000) == 0LL )
                LODWORD(v9) = VslRevertHotPatch(*(_QWORD *)(a1 + 48), 0, 0);
            }
          }
        }
      }
      else
      {
        LODWORD(v9) = -1073741670;
      }
    }
  }
  MiUnlockDriverPages(v15);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v6 )
  {
    MiDetachSessionGlobal((__int64)(&xmmword_140C69858 + 1));
    MiDereferenceSessionGlobal(v6);
    KiUnstackDetachProcess(&v16);
  }
  if ( (v9 & 0x80000000) == 0LL )
    *(_QWORD *)(a2 + 120) = 0LL;
  return (unsigned int)v9;
}
