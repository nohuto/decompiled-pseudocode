/*
 * XREFs of ?GetWeakReferenceBase@CompositorCommon@Composition@UI@Windows@@AEAAJPEAVCompositionObject@234@PEAPEAVCWeakReferenceBase@@@Z @ 0x18007E660
 * Callers:
 *     ?SetParentForTransform@Visual@Composition@UI@Windows@@QEAAJPEAV1234@@Z @ 0x180063354 (-SetParentForTransform@Visual@Composition@UI@Windows@@QEAAJPEAV1234@@Z.c)
 *     ?RuntimeClassInitialize@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJPEAVVisual@345@_N@Z @ 0x18011DB7C (-RuntimeClassInitialize@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJPEAVVi.c)
 *     ?SetVisual@VisualReferenceController@Private@Composition@UI@Windows@@QEAAJPEAVVisual@345@@Z @ 0x18016F4C0 (-SetVisual@VisualReferenceController@Private@Composition@UI@Windows@@QEAAJPEAVVisual@345@@Z.c)
 *     ?RuntimeClassInitialize@DebugReference@Private@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAVCompositionObject@345@@Z @ 0x18019FAFC (-RuntimeClassInitialize@DebugReference@Private@Composition@UI@Windows@@QEAAJPEAVCompositor@345@P.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::GetWeakReferenceBase(
        Windows::UI::Composition::CompositorCommon *this,
        struct Windows::UI::Composition::CompositionObject *a2,
        struct CWeakReferenceBase **a3)
{
  unsigned int v3; // ebx
  struct CWeakReferenceBase *v7; // rsi
  struct CWeakReferenceBase *v8; // rax
  struct CWeakReferenceBase *v9; // rdi
  PVOID inserted; // rax
  __int64 result; // rax
  struct CWeakReferenceBase **v12; // rax
  struct CWeakReferenceBase *Buffer; // [rsp+20h] [rbp-28h] BYREF
  struct Windows::UI::Composition::CompositionObject *v14; // [rsp+28h] [rbp-20h]
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int8 NewElement; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  v7 = 0LL;
  if ( (*((_BYTE *)a2 + 124) & 2) != 0 )
  {
    Buffer = 0LL;
    v14 = a2;
    v12 = (struct CWeakReferenceBase **)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 536), &Buffer);
    v7 = *v12;
    ++*((_DWORD *)*v12 + 6);
  }
  else
  {
    v8 = (struct CWeakReferenceBase *)DefaultHeap::AllocClear(0x20uLL);
    v9 = v8;
    if ( !v8 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    *(_QWORD *)v8 = this;
    *((_QWORD *)v8 + 1) = a2;
    *((_QWORD *)v8 + 2) = 0LL;
    *((_DWORD *)v8 + 6) = 1;
    Buffer = v8;
    v14 = a2;
    NewElement = 0;
    inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 536), &Buffer, 0x10u, &NewElement);
    *((_QWORD *)v9 + 2) = inserted;
    if ( inserted )
    {
      *((_DWORD *)a2 + 31) |= 2u;
      v7 = v9;
    }
    else
    {
      DoStackCaptureDirect(-2147024882, 0x142Cu);
      operator delete(v9);
      v3 = -2147024882;
    }
  }
  result = v3;
  *a3 = v7;
  return result;
}
