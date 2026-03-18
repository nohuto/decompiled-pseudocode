/*
 * XREFs of ?TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N@Z @ 0x1C00A7814
 * Callers:
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1C00A7774 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A79C0 (-ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00A7A1C (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C00A8444 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::TransferMemoryFast(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        enum _DXGK_MEMORY_TRANSFER_DIRECTION a3,
        struct VIDMM_SEGMENT *a4,
        union _LARGE_INTEGER a5,
        bool *a6)
{
  __int64 v8; // rdx
  __int64 v11; // r9
  __int64 v12; // rcx
  char v13; // r15
  __int64 v14; // rcx
  int v15; // edi
  struct _MDL *MDLForRange; // rax
  struct _MDL *v17; // rdx
  struct _MDL *v18; // r10
  struct _MDL *v19; // r11
  struct VIDMM_SEGMENT *v20; // rdx
  union _LARGE_INTEGER *v21; // rax
  union _LARGE_INTEGER *v22; // rcx
  struct _MDL *v24; // [rsp+60h] [rbp-38h] BYREF
  char v25; // [rsp+A0h] [rbp+8h] BYREF

  v8 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v8 + 7056) & 0x400) == 0 )
  {
    v11 = *((_QWORD *)a2 + 1);
    v12 = 1584LL * *((unsigned int *)this + 95);
    v25 = 0;
    v13 = *(_BYTE *)(v12 + *(_QWORD *)(v8 + 40224) + 436);
    v14 = *((_QWORD *)a2 + 30);
    v24 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, _BYTE, char *, struct _MDL **))(*(_QWORD *)v14 + 96LL))(
            v14,
            a2,
            0LL,
            v11,
            0,
            &v25,
            &v24);
    if ( v15 >= 0 )
    {
      MDLForRange = VidMmGetMDLForRange(a2, 0LL, *((_QWORD *)a2 + 1));
      v24 = MDLForRange;
      v17 = MDLForRange;
      if ( MDLForRange )
      {
        if ( v25 )
        {
LABEL_7:
          v18 = 0LL;
          v19 = 0LL;
          if ( (v13 & 4) != 0 )
          {
            if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
              v18 = v17;
            else
              v19 = v17;
            v20 = 0LL;
            v21 = &a5;
            v22 = &a5;
            if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
            {
              v21 = 0LL;
            }
            else
            {
              v20 = a4;
              a4 = 0LL;
              v22 = 0LL;
            }
          }
          else if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
          {
            v22 = &a5;
            v21 = (union _LARGE_INTEGER *)((char *)a2 + 232);
            v20 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 30);
          }
          else
          {
            v20 = a4;
            v21 = &a5;
            a4 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 30);
            v22 = (union _LARGE_INTEGER *)((char *)a2 + 232);
          }
          VIDMM_GLOBAL::MemoryTransfer(
            *((VIDMM_GLOBAL **)this + 1),
            a2,
            *((_QWORD *)a2 + 1),
            0LL,
            v20,
            v21,
            v18,
            a4,
            v22,
            v19,
            0);
          if ( (*((_DWORD *)a2 + 19) & 4) != 0 )
          {
            WdLogSingleEntry1(4LL, a2);
            *a6 = 1;
          }
          else
          {
            VIDMM_GLOBAL::ReleaseTemporaryResourcesForAllocation(*((VIDMM_GLOBAL **)this + 1), a2);
          }
          if ( a3 != DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
            *(_BYTE *)(*((_QWORD *)this + 1) + 40939LL) = 1;
          return (unsigned int)v15;
        }
        v15 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *))(**((_QWORD **)a2 + 30) + 112LL))(
                *((_QWORD *)a2 + 30),
                a2,
                0LL,
                *((_QWORD *)a2 + 1),
                MDLForRange);
        if ( v15 >= 0 )
        {
          v17 = v24;
          goto LABEL_7;
        }
      }
      else
      {
        v15 = -1071775487;
      }
      (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD))(**((_QWORD **)a2 + 30) + 104LL))(
        *((_QWORD *)a2 + 30),
        a2,
        0LL);
    }
    return (unsigned int)v15;
  }
  return 3223191809LL;
}
