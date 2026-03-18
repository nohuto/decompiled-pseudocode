/*
 * XREFs of ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C008EDC4
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C009F334 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C00A5850 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 * Callees:
 *     ?GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0003A08 (-GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0003A3C (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0017578 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     McTemplateK0pppppppqq_EtwWriteTransfer @ 0x1C0032150 (McTemplateK0pppppppqq_EtwWriteTransfer.c)
 *     ?CreateRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_RANGE@@PEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C008EEE8 (-CreateRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_RANGE@@PEAVVIDMM_RECYCLE_BLOCK@@_K1@Z.c)
 *     ?CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z @ 0x1C008EF58 (-CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C00A06C0 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00A1470 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00B2348 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_HEAP::CreateBlockAndRange(VIDMM_RECYCLE_HEAP_MGR **this)
{
  unsigned __int64 SmallAllocationSize; // rax
  char v3; // dl
  VIDMM_RECYCLE_HEAP_MGR *v4; // rcx
  unsigned __int8 v5; // r9
  unsigned __int64 SmallAllocationBlockSize; // r10
  unsigned __int64 *BlockForType; // rax
  unsigned __int64 *v8; // rdi
  struct VIDMM_RECYCLE_RANGE *Range; // rbx
  unsigned __int64 v10; // r9
  __int64 Multirange; // rax
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8

  SmallAllocationSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(
                          (VIDMM_RECYCLE_HEAP_MGR *)this,
                          (unsigned int)(*(_DWORD *)this - 5) <= 1);
  if ( SmallAllocationSize > SmallAllocationBlockSize )
    SmallAllocationBlockSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationBlockSize(v4, v3);
  BlockForType = (unsigned __int64 *)VIDMM_RECYCLE_HEAP::CreateBlockForType(v4, SmallAllocationBlockSize, v5);
  v8 = BlockForType;
  if ( !BlockForType )
    return 0LL;
  Range = VIDMM_RECYCLE_HEAP_MGR::CreateRange(
            this[1],
            (struct VIDMM_RECYCLE_BLOCK *)BlockForType,
            BlockForType[5],
            BlockForType[6]);
  if ( !Range )
  {
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'((VIDMM_RECYCLE_BLOCK *)v8);
    return 0LL;
  }
  if ( (unsigned int)(*(_DWORD *)this - 3) <= 3 || (unsigned int)(*(_DWORD *)this - 9) <= 1 )
    *((_DWORD *)Range + 20) = 1;
  *((_QWORD *)Range + 16) = v8 + 9;
  *((_QWORD *)Range + 15) = v8 + 9;
  v10 = v8[5];
  v8[10] = (unsigned __int64)Range + 120;
  v8[9] = (unsigned __int64)Range + 120;
  Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(this[1], 0LL, v8, v10, v8[6]);
  v12 = Multirange;
  if ( !Multirange )
  {
    VIDMM_RECYCLE_HEAP_MGR::DestroyRange(this[1], Range);
    return 0LL;
  }
  *(_QWORD *)(Multirange + 64) = Range;
  *(_QWORD *)(Multirange + 72) = Range;
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(v8[4], 2LL, Multirange);
  *((_QWORD *)Range + 17) = v12;
  if ( (byte_1C0076982 & 2) != 0 )
    McTemplateK0pppppppqq_EtwWriteTransfer(
      v14,
      v13,
      v15,
      **((_QWORD **)this[1] + 1),
      Range,
      v8,
      v8[7],
      this,
      *((_QWORD *)Range + 4),
      *((_QWORD *)Range + 5),
      *(_DWORD *)this,
      *((_DWORD *)Range + 16));
  return (struct VIDMM_RECYCLE_MULTIRANGE *)v12;
}
