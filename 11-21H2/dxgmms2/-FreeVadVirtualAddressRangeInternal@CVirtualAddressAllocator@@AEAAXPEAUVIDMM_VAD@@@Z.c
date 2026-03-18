/*
 * XREFs of ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0087E10
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C007B4E8 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C00864E8 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00894A4 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0095CE0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C00A2EC8 (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00A8498 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00B85BC (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0002588 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x1C00301BC (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x1C00302BC (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C00864E8 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0086684 (-RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C00866CC (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 *     ?CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00A42B4 (-CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        __int64 a3)
{
  _QWORD *v3; // rax
  struct VIDMM_VAD *v4; // rdi
  __int64 v5; // rdx
  __int64 v7; // rcx
  unsigned int v8; // esi
  __int64 v9; // rbx
  __int64 v10; // r8
  char *v11; // rcx
  char *v12; // rdx
  __int64 v13; // rax
  _DWORD *v14; // rbx
  __int64 v15; // rdx
  struct VIDMM_VAD **v16; // rcx
  unsigned int *v17; // rbx
  char *v18; // rsi
  __int64 v19; // rcx
  struct VIDMM_VAD *v20; // rbp
  __int64 v21; // rcx
  char **v22; // rax
  unsigned int v23; // ebx
  volatile signed __int32 **v24; // rsi
  volatile signed __int32 *v25; // rcx
  struct _RTL_BALANCED_NODE *v26; // rbx
  struct _RTL_BALANCED_NODE *v27; // rax
  __int64 v28; // r8
  __int64 v29; // rcx
  _QWORD *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  volatile signed __int32 *v33; // rax
  __int64 v34; // [rsp+20h] [rbp-78h]
  __int64 v35; // [rsp+50h] [rbp-48h]
  __int64 v36; // [rsp+A8h] [rbp+10h] BYREF

  v3 = (_QWORD *)((char *)a2 + 56);
  v4 = a2;
  v5 = *((_QWORD *)a2 + 7);
  if ( v5 )
  {
    if ( *(_QWORD **)(v5 + 8) != v3 )
      goto LABEL_55;
    v30 = (_QWORD *)v3[1];
    if ( (_QWORD *)*v30 != v3 )
      goto LABEL_55;
    *v30 = v5;
    *(_QWORD *)(v5 + 8) = v30;
    *v3 = 0LL;
  }
  v7 = *((unsigned int *)v4 + 18);
  v8 = 0;
  if ( (v7 & 0x7F0) != 0 )
  {
    do
    {
      while ( 1 )
      {
        v9 = *((_QWORD *)v4 + 3 * v8 + 12);
        if ( (struct VIDMM_VAD *)v9 == (struct VIDMM_VAD *)((char *)v4 + 24 * v8 + 96) )
          break;
        if ( (byte_1C006E942 & 0x20) != 0 )
        {
          v31 = *(_QWORD *)(v9 + 48);
          v32 = (unsigned int)((int)(*(_DWORD *)(v9 + 56) << 28) >> 28);
          if ( (_DWORD)v32 != 1 )
          {
            v32 = (unsigned int)(v32 - 4);
            if ( (_DWORD)v32 )
            {
              if ( (_DWORD)v32 == 1 )
                v31 = *(_QWORD *)(v31 + 24);
              else
                v31 = 0LL;
            }
            else
            {
              v31 = *(_QWORD *)(v31 + 64);
            }
          }
          LODWORD(v35) = *(_DWORD *)(v9 + 56);
          McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
            v32,
            &EndGpuVirtualAddressRangeMapping,
            (unsigned int)v35,
            this,
            v31,
            *(_QWORD *)(v9 + 64),
            *(_QWORD *)(v9 + 88),
            *(_QWORD *)(v9 + 96),
            *(_QWORD *)(v9 + 80),
            *(_QWORD *)(v9 + 72),
            v35,
            *(_QWORD *)(v9 + 104),
            *(_QWORD *)(v9 + 112));
        }
        CVirtualAddressAllocator::RemoveVaRangeFromVad(this, (struct _LIST_ENTRY *)v9, 0, 1);
      }
      v7 = *((unsigned int *)v4 + 18);
      ++v8;
    }
    while ( v8 < ((*((_DWORD *)v4 + 18) >> 4) & 0x7Fu) );
  }
  if ( (byte_1C006E942 & 0x20) != 0 )
  {
    LODWORD(v34) = v7;
    McTemplateK0pqxx_EtwWriteTransfer(
      v7,
      &DestroyGpuVirtualAddressRange,
      a3,
      this,
      v34,
      *((_QWORD *)v4 + 3),
      *((_QWORD *)v4 + 4));
  }
  RtlAvlRemoveNode((char *)this + 48, v4);
  *((_DWORD *)v4 + 18) &= 0xFFFFFFF0;
  v11 = (char *)v4 + 80;
  while ( 1 )
  {
    v12 = *(char **)v11;
    if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 )
      goto LABEL_55;
    v13 = *(_QWORD *)v12;
    if ( *(char **)(*(_QWORD *)v12 + 8LL) != v12 )
      goto LABEL_55;
    *(_QWORD *)v11 = v13;
    *(_QWORD *)(v13 + 8) = v11;
    if ( v12 == v11 )
      break;
    **((_QWORD **)v12 + 2) = 0LL;
    *(_QWORD *)v12 = 0LL;
    *((_QWORD *)v12 + 1) = 0LL;
  }
  v14 = (_DWORD *)*((_QWORD *)v4 + 6);
  if ( v14 != (_DWORD *)((char *)this + 24) && *((_QWORD *)v4 + 3) == *((_QWORD *)v14 - 1) && (v14[8] & 0xF) == 1 )
  {
    CVirtualAddressAllocator::RemoveVadFromFreeList(this, (struct VIDMM_VAD *)(v14 - 10), v10);
    *((_QWORD *)v14 - 1) = *((_QWORD *)v4 + 4);
    v15 = *((_QWORD *)v4 + 5);
    if ( *(struct VIDMM_VAD **)(v15 + 8) != (struct VIDMM_VAD *)((char *)v4 + 40) )
      goto LABEL_55;
    v16 = (struct VIDMM_VAD **)*((_QWORD *)v4 + 6);
    if ( *v16 != (struct VIDMM_VAD *)((char *)v4 + 40) )
      goto LABEL_55;
    *v16 = (struct VIDMM_VAD *)v15;
    *(_QWORD *)(v15 + 8) = v16;
    CVirtualAddressAllocator::FreeVad(v4);
    v4 = (struct VIDMM_VAD *)(v14 - 10);
  }
  v17 = (unsigned int *)*((_QWORD *)v4 + 5);
  v18 = (char *)v4 + 40;
  if ( v17 != (unsigned int *)((char *)this + 24) )
  {
    v19 = *((_QWORD *)v17 - 2);
    v20 = (struct VIDMM_VAD *)(v17 - 10);
    if ( *((_QWORD *)v4 + 4) == v19 )
    {
      v10 = v17[8];
      if ( (v17[8] & 0xF) == 1 )
      {
        if ( (byte_1C006E942 & 0x20) != 0 )
        {
          LODWORD(v34) = v17[8];
          McTemplateK0pqxx_EtwWriteTransfer(
            v19,
            &DestroyGpuVirtualAddressRange,
            v10,
            this,
            v34,
            v19,
            *((_QWORD *)v17 - 1));
        }
        RtlAvlRemoveNode((char *)this + 40, v17 - 10);
        v17[8] &= 0xFFFFFFF0;
        *((_QWORD *)v17 - 2) = *((_QWORD *)v4 + 3);
        v21 = *(_QWORD *)v18;
        if ( *(char **)(*(_QWORD *)v18 + 8LL) == v18 )
        {
          v22 = (char **)*((_QWORD *)v4 + 6);
          if ( *v22 == v18 )
          {
            *v22 = (char *)v21;
            v23 = 0;
            *(_QWORD *)(v21 + 8) = v22;
            if ( (*((_DWORD *)v4 + 18) & 0x7F0) != 0 )
            {
              do
              {
                v24 = (volatile signed __int32 **)((char *)v4 + 24 * v23 + 96);
                while ( 1 )
                {
                  v25 = *v24;
                  if ( *v24 == (volatile signed __int32 *)v24 )
                    break;
                  if ( *((volatile signed __int32 ***)v25 + 1) != v24 )
                    goto LABEL_55;
                  v33 = *(volatile signed __int32 **)v25;
                  if ( *(volatile signed __int32 **)(*(_QWORD *)v25 + 8LL) != v25 )
                    goto LABEL_55;
                  *v24 = v33;
                  *((_QWORD *)v33 + 1) = v24;
                  *(_QWORD *)v25 = 0LL;
                  *((_QWORD *)v25 + 1) = 0LL;
                  VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v25 - 2);
                }
                ++v23;
              }
              while ( v23 < ((*((_DWORD *)v4 + 18) >> 4) & 0x7Fu) );
            }
            operator delete(v4);
            v4 = v20;
            goto LABEL_29;
          }
        }
LABEL_55:
        __fastfail(3u);
      }
    }
  }
LABEL_29:
  LOBYTE(v10) = 0;
  v26 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
  v36 = *((_QWORD *)v4 + 4) - *((_QWORD *)v4 + 3);
  if ( !v26 )
    goto LABEL_36;
  while ( (int)CompareVadSizeAvl(&v36, v26) < 0 )
  {
    v27 = v26->Children[0];
    if ( !v26->Children[0] )
    {
      LOBYTE(v10) = 0;
      goto LABEL_36;
    }
LABEL_32:
    v26 = v27;
  }
  v27 = v26->Children[1];
  if ( v27 )
    goto LABEL_32;
  LOBYTE(v10) = 1;
LABEL_36:
  RtlAvlInsertNodeEx((char *)this + 40, v26, v10, v4);
  v29 = *((_DWORD *)v4 + 18) & 0xFFFFE7F0 | 1;
  *((_DWORD *)v4 + 18) = v29;
  if ( (byte_1C006E942 & 0x20) != 0 )
  {
    LODWORD(v34) = v29;
    McTemplateK0pqxx_EtwWriteTransfer(
      v29,
      &CreateGpuVirtualAddressRange,
      v28,
      this,
      v34,
      *((_QWORD *)v4 + 3),
      *((_QWORD *)v4 + 4));
  }
}
