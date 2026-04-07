/*
 * XREFs of ?RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@3@Z @ 0x1800BF560
 * Callers:
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800C0320 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z @ 0x1800C0784 (-OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x18001373C (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@PEAUHWND__@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@4@Z @ 0x1800BF9EC (-_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::RegisterIconicRepresentation(
        CImmersiveIconicBitmapRegistry *this,
        struct CImmersiveWindowIconic *a2,
        int a3,
        enum DEVICE_SCALE_FACTOR a4,
        void *a5,
        enum IconicRepresentationType *a6,
        enum IconicRepresentationType *a7)
{
  __int64 v7; // rdi
  int v11; // ebx
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // r8d
  unsigned int v17; // eax
  int v18; // eax
  int v19; // r9d
  enum DEVICE_SCALE_FACTOR v21; // [rsp+20h] [rbp-48h]
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // [rsp+78h] [rbp+10h] BYREF

  v7 = *((_QWORD *)a2 + 36);
  v11 = -2147024774;
  IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(this, *(HWND *)(v7 + 40));
  v12 = IconicResourceNoRef;
  if ( !IconicResourceNoRef )
  {
    v13 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            48LL);
    v14 = v13;
    if ( !v13 )
    {
      IconicResourceNoRef = 0LL;
      v11 = -2147024882;
      v21 = 91;
      goto LABEL_16;
    }
    *(_QWORD *)v13 = *(_QWORD *)(v7 + 40);
    *(_QWORD *)(v13 + 8) = 0LL;
    *(_QWORD *)(v13 + 16) = 0LL;
    *(_DWORD *)(v13 + 24) = 0;
    *(_DWORD *)(v13 + 28) = 0;
    *(_DWORD *)(v13 + 32) = 0;
    *(_BYTE *)(v13 + 40) = 0;
    *(_DWORD *)(v13 + 44) = 1;
    IconicResourceNoRef = (struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *)v13;
    v15 = *((_DWORD *)this + 10);
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
    {
      v11 = -2147024362;
      v17 = 181;
LABEL_15:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, v17);
      v21 = 92;
LABEL_16:
      v19 = v11;
      goto LABEL_11;
    }
    if ( v16 > *((_DWORD *)this + 9) )
    {
      v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 16, 8u, 1, &IconicResourceNoRef);
      if ( v11 < 0 )
      {
        v17 = 192;
        goto LABEL_15;
      }
    }
    else
    {
      v11 = 0;
      *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * *((unsigned int *)this + 10)) = v14;
      *((_DWORD *)this + 10) = v16;
    }
    v12 = IconicResourceNoRef;
  }
  if ( v12 )
  {
    v18 = CImmersiveIconicBitmapRegistry::_RegisterIconicRepresentation(
            this,
            v12,
            *(HWND *)(v7 + 40),
            a3,
            a4,
            (bool)a5,
            a6,
            a7);
    v11 = v18;
    if ( v18 < 0 )
    {
      v19 = v18;
      v21 = 97;
LABEL_11:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, v21);
    }
  }
  return (unsigned int)v11;
}
