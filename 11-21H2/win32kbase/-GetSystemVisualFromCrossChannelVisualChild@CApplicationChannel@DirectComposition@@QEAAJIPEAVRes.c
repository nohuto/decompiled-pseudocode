/*
 * XREFs of ?GetSystemVisualFromCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C0002D30
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0002580 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     ?RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C0002AF8 (-RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 * Callees:
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0013E10 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::GetSystemVisualFromCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *this,
        int a2,
        struct ResourceHandle *a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v5; // rcx
  _QWORD *v7; // rdi
  unsigned int *v8; // rdi

  v3 = 0;
  v5 = (unsigned int)(a2 - 1);
  if ( a2
    && v5 < *((_QWORD *)this + 10)
    && (_mm_lfence(), (v7 = *(_QWORD **)(v5 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7))) != 0LL) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v7 + 96LL))(v7, 195LL)
      && (v8 = (unsigned int *)v7[25]) != 0LL
      && (*(unsigned __int8 (__fastcall **)(unsigned int *))(*(_QWORD *)v8 + 200LL))(v8) )
    {
      DirectComposition::CConnection::ReferenceSystemResource(*((_QWORD *)this + 5), v8[96]);
      *(_DWORD *)a3 = v8[96];
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
  return v3;
}
