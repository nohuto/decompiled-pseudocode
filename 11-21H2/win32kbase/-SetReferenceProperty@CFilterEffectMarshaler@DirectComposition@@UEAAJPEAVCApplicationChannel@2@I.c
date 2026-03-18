/*
 * XREFs of ?SetReferenceProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0215E00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?SetInput@CEffectInputSet@DirectComposition@@QEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@@Z @ 0x1C02163B4 (-SetInput@CEffectInputSet@DirectComposition@@QEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarsha.c)
 */

__int64 __fastcall DirectComposition::CFilterEffectMarshaler::SetReferenceProperty(
        DirectComposition::CFilterEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  signed int v9; // ebx

  *a5 = 0;
  v9 = (a3 & 0xC0000000) != 0x40000000 ? 0xC000000D : 0;
  if ( !a4
    || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
         a4,
         59LL)
    || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
         a4,
         40LL) )
  {
    if ( v9 >= 0 )
    {
      v9 = DirectComposition::CEffectInputSet::SetInput(
             (DirectComposition::CFilterEffectMarshaler *)((char *)this + 80),
             a2,
             a3 & 0x3FFFFFFF,
             a4);
      if ( v9 >= 0 )
        *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
