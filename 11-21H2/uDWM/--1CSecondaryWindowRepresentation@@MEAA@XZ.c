/*
 * XREFs of ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x18004873C
 * Callers:
 *     ??_ECSecondaryWindowRepresentation@@MEAAPEAXI@Z @ 0x1800486E0 (--_ECSecondaryWindowRepresentation@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x180008510 (-RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x1800488C8 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     McTemplateU0pp_EtwEventWriteTransfer @ 0x180048B68 (McTemplateU0pp_EtwEventWriteTransfer.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSecondaryWindowRepresentation::~CSecondaryWindowRepresentation(CSecondaryWindowRepresentation *this)
{
  unsigned int v2; // esi
  char *v3; // rdi
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  unsigned int i; // edi
  __int64 v11; // rax
  __int64 v12; // r9
  CWindowData *v13; // rcx
  CBaseObject *v14; // rcx
  CBaseObject *v15; // rcx

  *(_QWORD *)this = &CSecondaryWindowRepresentation::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CSecondaryWindowRepresentation::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  v2 = 0;
  v3 = (char *)this + 184;
  do
  {
    v4 = (CBaseObject *)*((_QWORD *)v3 - 1);
    if ( v4 )
    {
      CBaseObject::Release(v4);
      *((_QWORD *)v3 - 1) = 0LL;
    }
    if ( *(_QWORD *)v3 )
    {
      CBaseObject::Release(*(CBaseObject **)v3);
      *(_QWORD *)v3 = 0LL;
    }
    v5 = (CBaseObject *)*((_QWORD *)v3 + 1);
    if ( v5 )
    {
      CBaseObject::Release(v5);
      *((_QWORD *)v3 + 1) = 0LL;
    }
    v3[16] = 0;
    ++v2;
    v3 += 32;
  }
  while ( v2 < 5 );
  v6 = (CBaseObject *)*((_QWORD *)this + 43);
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = (CBaseObject *)*((_QWORD *)this + 51);
  if ( v7 )
    CBaseObject::Release(v7);
  v8 = (CBaseObject *)*((_QWORD *)this + 47);
  if ( v8 )
    CBaseObject::Release(v8);
  v9 = (CBaseObject *)*((_QWORD *)this + 48);
  if ( v9 )
    CBaseObject::Release(v9);
  for ( i = *((_DWORD *)this + 38); i; CSecondaryWindowRepresentation::RemoveOwnedWindowRepresentation(this, i) )
    --i;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v11 = *((_QWORD *)this + 4);
    if ( v11 )
      v12 = *(_QWORD *)(v11 + 40);
    else
      v12 = 0LL;
    McTemplateU0pp_EtwEventWriteTransfer(v9, "+#", this, v12);
  }
  v13 = (CWindowData *)*((_QWORD *)this + 4);
  if ( v13 && *((_BYTE *)this + 160) )
    CWindowData::RemoveSecondaryWindowRepresentation(v13, this);
  v14 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v14 )
    CBaseObject::Release(v14);
  v15 = (CBaseObject *)*((_QWORD *)this + 7);
  if ( v15 )
    CBaseObject::Release(v15);
  if ( *((_QWORD *)this + 16) != *((_QWORD *)this + 17) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 16) = 0LL;
  }
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
