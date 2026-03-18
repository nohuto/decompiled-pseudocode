/*
 * XREFs of ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1C00F1770
 * Callers:
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00F10A4 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 *     ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00F18F0 (-FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x1C002D7AC (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 *     McTemplateK0pxqqt_EtwWriteTransfer @ 0x1C0032564 (McTemplateK0pxqqt_EtwWriteTransfer.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C007C570 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::FreeBlock(VIDMM_PROCESS_HEAP *this, struct _VIDMM_PROCESS_HEAP_BLOCK *a2)
{
  char *v2; // rax
  __int64 v4; // r8
  char **v6; // rdx
  int v7; // ecx
  void *v8; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v10; // eax
  _QWORD *v11; // rcx
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r9
  VIDMM_LINEAR_POOL *v16; // rcx

  v2 = (char *)a2 + 8;
  v4 = *((_QWORD *)a2 + 1);
  if ( *(struct _VIDMM_PROCESS_HEAP_BLOCK **)(v4 + 8) != (struct _VIDMM_PROCESS_HEAP_BLOCK *)((char *)a2 + 8)
    || (v6 = (char **)*((_QWORD *)a2 + 2), *v6 != v2) )
  {
    __fastfail(3u);
  }
  *v6 = (char *)v4;
  *(_QWORD *)(v4 + 8) = v6;
  v7 = *((_DWORD *)a2 + 20);
  if ( (unsigned int)(v7 - 3) > 3 )
  {
    v8 = (void *)*((_QWORD *)a2 + 7);
    if ( v8 )
      MmUnsecureVirtualMemory(v8);
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, char *, char *, __int64))VirtualMemoryInterface + 2))(
      -1LL,
      (char *)a2 + 32,
      (char *)a2 + 40,
      0x8000LL);
  }
  else
  {
    if ( (unsigned int)(v7 - 5) <= 1 )
      MmUnmapViewInSystemSpace(*((PVOID *)a2 + 4));
    ObCloseHandle(*((HANDLE *)a2 + 12), (*((_QWORD *)a2 + 12) & 0xFFFFFFFF80000000uLL) == 0);
    VidMmDereferenceObjectAsync(*((PVOID *)a2 + 11));
  }
  *(_QWORD *)(*((_QWORD *)this + 1) + 144LL) -= *((_QWORD *)a2 + 5);
  --*(_DWORD *)(*((_QWORD *)this + 1) + 152LL);
  v10 = *((_DWORD *)a2 + 20);
  v11 = (_QWORD *)*((_QWORD *)this + 1);
  if ( v10 == 1 )
  {
    v11[21] -= *((_QWORD *)a2 + 5);
  }
  else
  {
    v12 = v10 == 2;
    v13 = *((_QWORD *)a2 + 5);
    if ( v12 )
      v11[23] -= v13;
    else
      v11[25] -= v13;
  }
  if ( bTracingEnabled )
  {
    v14 = *((unsigned int *)a2 + 20);
    v15 = (unsigned int)(v14 - 3) > 3 ? *((_QWORD *)a2 + 4) : *((_QWORD *)a2 + 11);
    if ( (byte_1C006E942 & 2) != 0 )
      McTemplateK0pxqqt_EtwWriteTransfer(
        v14,
        &EventDestroyProcessAllocation,
        *((_QWORD *)a2 + 5),
        v15,
        *((_QWORD *)a2 + 5),
        *((_DWORD *)a2 + 20),
        *(_DWORD *)(*((_QWORD *)this + 1) + 8LL),
        1);
  }
  v16 = (VIDMM_LINEAR_POOL *)*((_QWORD *)a2 + 9);
  if ( v16 )
    VIDMM_LINEAR_POOL::`scalar deleting destructor'(v16);
  operator delete(a2);
}
