/*
 * XREFs of ?EndAnimation@CAnimation@@AEAAXXZ @ 0x1800C8CAC
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NXZ @ 0x1800C83E0 (-UpdateAnimateValues@CAnimation@@UEAA_NXZ.c)
 *     ??1CAnimation@@UEAA@XZ @ 0x1800C8AE0 (--1CAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800C8D44 (-UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800CACC8 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x18012DBFE (McTemplateU0x_EventWriteTransfer.c)
 */

void __fastcall CAnimation::EndAnimation(CAnimation *this)
{
  unsigned int v2; // esi
  char *i; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( !*((_BYTE *)this + 121) )
  {
    v2 = 0;
    for ( i = (char *)this + 72; v2 < *((_DWORD *)this + 24); ++v2 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)i + 16LL * v2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    *((_DWORD *)i + 6) = 0;
    DynArrayImpl<0>::ShrinkToSize(i, 16LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
      McTemplateU0x_EventWriteTransfer(v4, &EVTDESC_DCOMPEVENT_END_ANIMATION, this);
    *((_BYTE *)this + 121) = 1;
  }
  if ( *((_BYTE *)this + 104) )
    CBaseAnimation::UnregisterAnimateResource(this);
}
