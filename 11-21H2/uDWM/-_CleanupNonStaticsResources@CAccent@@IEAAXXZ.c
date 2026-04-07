/*
 * XREFs of ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x180014E6C
 * Callers:
 *     ??1CAccent@@MEAA@XZ @ 0x180014F74 (--1CAccent@@MEAA@XZ.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x1800198F0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x1800477C0 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z @ 0x1800085C8 (-SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000C710 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAccent::_CleanupNonStaticsResources(CAccent *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  __int64 v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  unsigned int v10; // edi
  CBaseObject **v11; // rbx

  if ( (*((_BYTE *)this + 292) & 4) != 0 )
    CDesktopManager::SetBackStop(0LL);
  VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
  v2 = (CBaseObject *)*((_QWORD *)this + 41);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 41) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 42);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 42) = 0LL;
  }
  v4 = *((_QWORD *)this + 49);
  if ( v4 )
  {
    CBaseObject::Release((CBaseObject *)(v4 + 8));
    *((_QWORD *)this + 49) = 0LL;
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 43);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 43) = 0LL;
  }
  v6 = (CBaseObject *)*((_QWORD *)this + 44);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *((_QWORD *)this + 44) = 0LL;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 45);
  v7 = (CBaseObject *)*((_QWORD *)this + 53);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 53) = 0LL;
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 54);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 54) = 0LL;
  }
  v9 = (CBaseObject *)*((_QWORD *)this + 55);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 55) = 0LL;
  }
  v10 = 0;
  v11 = (CBaseObject **)((char *)this + 448);
  do
  {
    if ( *v11 )
    {
      CBaseObject::Release(*v11);
      *v11 = 0LL;
    }
    ++v10;
    ++v11;
  }
  while ( v10 < 0x16 );
}
