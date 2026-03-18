/*
 * XREFs of ?RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C00856DC
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C008A134 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0085EE4 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::RemoveVisualChild(
        DirectComposition::CApplicationChannel *this,
        int a2,
        int a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  struct DirectComposition::CResourceMarshaler *v9; // rsi
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // ebx
  char v17; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  v17 = 0;
  v4 = (unsigned int)(a2 - 1);
  if ( a2
    && v4 < *((_QWORD *)this + 10)
    && (_mm_lfence(),
        v7 = *((_QWORD *)this + 7),
        v8 = v4 * *((_QWORD *)this + 11),
        (v9 = *(struct DirectComposition::CResourceMarshaler **)(v8 + v7)) != 0LL) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v9 + 96LL))(*(_QWORD *)(v8 + v7), 195LL)
      && (!a3
       || (v10 = (unsigned int)(a3 - 1), v10 < *((_QWORD *)this + 10))
       && (_mm_lfence(),
           v11 = *((_QWORD *)this + 7),
           v12 = v10 * *((_QWORD *)this + 11),
           (v3 = *(_QWORD *)(v12 + v11)) != 0)
       && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v3 + 96LL))(*(_QWORD *)(v12 + v11), 195LL)) )
    {
      v13 = *(_QWORD *)v9;
      if ( v3 )
        v14 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, __int64, char *))(v13 + 232))(
                v9,
                this,
                v3,
                &v17);
      else
        v14 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, char *))(v13 + 240))(
                v9,
                this,
                &v17);
      v15 = v14;
      if ( v14 >= 0 && v17 )
        DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v9);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v15;
}
