/*
 * XREFs of ?Destroy@ExpressionAnimator@Composition@UI@Windows@@MEAAXXZ @ 0x180028970
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ @ 0x180028CC0 (-Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xxx_EventWriteTransfer @ 0x18019BB34 (McTemplateU0xxx_EventWriteTransfer.c)
 */

void __fastcall Windows::UI::Composition::ExpressionAnimator::Destroy(
        Windows::UI::Composition::ExpressionAnimator *this,
        int a2)
{
  DirectComposition::CDelayedDestructionObject **v2; // rdi
  DirectComposition::CDelayedDestructionObject **v4; // rsi
  __int64 v5; // rdx
  volatile signed __int32 **v6; // rsi
  volatile signed __int32 **i; // rdi
  __int64 v8; // rsi
  __int64 j; // rdi
  volatile signed __int32 *v10; // rcx

  v2 = (DirectComposition::CDelayedDestructionObject **)((char *)this + 296);
  v4 = (DirectComposition::CDelayedDestructionObject **)((char *)this + 288);
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x200) != 0 )
    McTemplateU0xxx_EventWriteTransfer((_DWORD)this, a2, (_DWORD)this, (unsigned int)*v4, (char)*v2);
  if ( *v4 )
  {
    DirectComposition::CDelayedDestructionObject::Release(*v4);
    *v4 = 0LL;
  }
  if ( *v2 )
  {
    DirectComposition::CDelayedDestructionObject::Release(*v2);
    *v2 = 0LL;
  }
  (*(void (__fastcall **)(Windows::UI::Composition::ExpressionAnimator *))(*(_QWORD *)this + 432LL))(this);
  if ( (*((_BYTE *)this + 152) & 1) != 0 )
  {
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      1u,
      0LL);
    *((_BYTE *)this + 152) &= ~1u;
  }
  v6 = (volatile signed __int32 **)*((_QWORD *)this + 33);
  for ( i = (volatile signed __int32 **)*((_QWORD *)this + 32); i != v6; ++i )
  {
    v10 = *i;
    if ( *i )
    {
      *i = 0LL;
      if ( _InterlockedExchangeAdd(v10 + 4, 0xFFFFFFFF) == 1 )
      {
        LOBYTE(v5) = 1;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 64LL))(v10, v5);
      }
    }
  }
  *((_QWORD *)this + 33) = *((_QWORD *)this + 32);
  v8 = *((_QWORD *)this + 26);
  for ( j = *((_QWORD *)this + 25); j != v8; j += 24LL )
  {
    WindowsDeleteString(*(HSTRING *)(j + 16));
    *(_QWORD *)(j + 16) = 0LL;
    WindowsDeleteString(*(HSTRING *)(j + 8));
    *(_QWORD *)(j + 8) = 0LL;
  }
  *((_QWORD *)this + 26) = *((_QWORD *)this + 25);
  Windows::UI::Composition::ProxyObject::Destroy(this);
}
