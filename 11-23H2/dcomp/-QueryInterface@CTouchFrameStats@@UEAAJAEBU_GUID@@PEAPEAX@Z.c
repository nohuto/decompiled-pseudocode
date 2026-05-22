/*
 * XREFs of ?QueryInterface@CTouchFrameStats@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A8920
 * Callers:
 *     ?QueryInterface@CTouchFrameStats@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B1A60 (-QueryInterface@CTouchFrameStats@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CInteractionFrameStats@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A5940 (-QueryInterface@CInteractionFrameStats@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?QueryInterface@CCompFrameStats@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A9890 (-QueryInterface@CCompFrameStats@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CTouchFrameStats::QueryInterface(CTouchFrameStats *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_1d136304_6f3f_4c04_8dfc_0f291784c3a4.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_1d136304_6f3f_4c04_8dfc_0f291784c3a4.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_1d136304_6f3f_4c04_8dfc_0f291784c3a4.Data4;
    if ( v4 )
    {
      return CCompFrameStats::QueryInterface(this, a2, a3);
    }
    else
    {
      *a3 = (void *)(((unsigned __int64)this + 160) & -(__int64)(this != 0LL));
      (*(void (__fastcall **)(CTouchFrameStats *))(*(_QWORD *)this + 8LL))(this);
      return 0LL;
    }
  }
  return result;
}
