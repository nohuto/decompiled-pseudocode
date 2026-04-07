/*
 * XREFs of ??1CIconicBitmapRegistry@@UEAA@XZ @ 0x1800BE9C8
 * Callers:
 *     ??_ECIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x1800AFAD0 (--_ECIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CIconicBitmapRegistry::~CIconicBitmapRegistry(CIconicBitmapRegistry *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CIconicBitmapRegistry::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 12);
  if ( v2 )
    CBaseObject::Release(v2);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 6);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 2);
}
