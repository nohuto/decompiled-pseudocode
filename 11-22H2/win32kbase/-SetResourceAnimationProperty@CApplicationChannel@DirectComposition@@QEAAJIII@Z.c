/*
 * XREFs of ?SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C0065480
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C002D930 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002EB40 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C0065550 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceAnimationProperty(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned int a3,
        int a4)
{
  struct DirectComposition::CResourceMarshaler *v7; // rax
  struct DirectComposition::CBaseAnimation *v8; // r14
  struct DirectComposition::CResourceMarshaler *v9; // rax
  struct DirectComposition::CResourceMarshaler *v10; // rdi
  unsigned __int8 (__fastcall *v11)(struct DirectComposition::CResourceMarshaler *, _QWORD, _QWORD); // rbx
  unsigned int v12; // eax

  v7 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a4);
  if ( v7 )
  {
    v8 = (struct DirectComposition::CBaseAnimation *)(*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v7 + 200LL))(v7);
    if ( v8 )
    {
      v9 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
      v10 = v9;
      if ( !v9 )
        return 3221225506LL;
      v11 = *(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, _QWORD))(*(_QWORD *)v9 + 272LL);
      v12 = (*(__int64 (__fastcall **)(struct DirectComposition::CBaseAnimation *))(*(_QWORD *)v8 + 8LL))(v8);
      if ( v11(v10, a3, v12) )
        return DirectComposition::CApplicationChannel::BindAnimation(this, v10, a3, v8);
    }
  }
  return 3221225485LL;
}
