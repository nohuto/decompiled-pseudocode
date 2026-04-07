/*
 * XREFs of ??1CImmersiveIconicBitmapRegistry@@UEAA@XZ @ 0x1800C3E2C
 * Callers:
 *     ??_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x1800B4190 (--_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180038C6C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCTouchVisual@@$0A@@@QEAAJI@Z @ 0x1800B2518 (-RemoveAt@-$DynArray@PEAVCTouchVisual@@$0A@@@QEAAJI@Z.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x1800C3EE0 (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 */

void __fastcall CImmersiveIconicBitmapRegistry::~CImmersiveIconicBitmapRegistry(
        CImmersiveIconicBitmapRegistry *this,
        unsigned int a2)
{
  __int64 *v3; // rdi
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v4; // rcx

  *(_QWORD *)this = &CImmersiveIconicBitmapRegistry::`vftable';
  v3 = (__int64 *)((char *)this + 16);
  while ( *((_DWORD *)this + 10) )
  {
    v4 = *(CImmersiveIconicBitmapRegistry::CImmersiveIconicResource **)*v3;
    if ( v4 )
      CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v4, a2);
    DynArray<CTouchVisual *,0>::RemoveAt(v3, 0);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 6);
  DynArrayImpl<0>::~DynArrayImpl<0>(v3);
}
