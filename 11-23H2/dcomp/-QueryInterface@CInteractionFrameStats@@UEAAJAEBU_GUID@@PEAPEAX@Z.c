/*
 * XREFs of ?QueryInterface@CInteractionFrameStats@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A5940
 * Callers:
 *     ?QueryInterface@CInteractionFrameStats@@WBGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B1A20 (-QueryInterface@CInteractionFrameStats@@WBGA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CInteractionFrameStats@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B1A40 (-QueryInterface@CInteractionFrameStats@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?QueryInterface@CTouchFrameStats@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A8920 (-QueryInterface@CTouchFrameStats@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CInteractionFrameStats::QueryInterface(
        CInteractionFrameStats *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_1d136304_6f3f_4c04_8dfc_0f291784c3a4.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_1d136304_6f3f_4c04_8dfc_0f291784c3a4.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_1d136304_6f3f_4c04_8dfc_0f291784c3a4.Data4;
    if ( v4 )
    {
      v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_1d136304_6f3f_4c04_8dfc_0f291784c3a4.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_1d136304_6f3f_4c04_8dfc_0f291784c3a4.Data1 )
        v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_1d136304_6f3f_4c04_8dfc_0f291784c3a4.Data4;
      if ( v5 )
      {
        return CTouchFrameStats::QueryInterface(this, a2, a3);
      }
      else
      {
        *a3 = (void *)(((unsigned __int64)this + 352) & -(__int64)(this != 0LL));
        _InterlockedIncrement((volatile signed __int32 *)this + 2);
        return 0LL;
      }
    }
    else
    {
      *a3 = 0LL;
      return 2147500034LL;
    }
  }
  return result;
}
