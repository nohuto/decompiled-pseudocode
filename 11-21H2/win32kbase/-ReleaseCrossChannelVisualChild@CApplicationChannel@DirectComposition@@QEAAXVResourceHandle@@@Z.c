/*
 * XREFs of ?ReleaseCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0005E84
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0002580 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C0005DFC (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

int __fastcall DirectComposition::CApplicationChannel::ReleaseCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *a1,
        unsigned int a2)
{
  _UNKNOWN **v2; // rax
  _QWORD *v3; // rsi
  _QWORD *i; // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v2 = &retaddr;
  v3 = (_QWORD *)((char *)a1 + 248);
  for ( i = (_QWORD *)*((_QWORD *)a1 + 31); i != v3; i = (_QWORD *)*i )
  {
    LODWORD(v2) = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*(i - 49) + 256LL))(i - 49, a2);
    if ( (_BYTE)v2 )
    {
      LODWORD(v2) = DirectComposition::CApplicationChannel::ReleaseResource(
                      a1,
                      (struct DirectComposition::CResourceMarshaler *)(i - 49));
      return (int)v2;
    }
  }
  return (int)v2;
}
