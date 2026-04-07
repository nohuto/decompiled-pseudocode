/*
 * XREFs of ?QueryInterface@CAnimationFrameStats@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010A950
 * Callers:
 *     ?QueryInterface@CAnimationFrameStats@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180064480 (-QueryInterface@CAnimationFrameStats@@WII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?QueryInterface@CCompFrameStats@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010AB90 (-QueryInterface@CCompFrameStats@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CAnimationFrameStats::QueryInterface(CAnimationFrameStats *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_417c55e1_aa8f_4f8e_b025_cd768734dfa1.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_417c55e1_aa8f_4f8e_b025_cd768734dfa1.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_417c55e1_aa8f_4f8e_b025_cd768734dfa1.Data4;
    if ( v4 )
    {
      return CCompFrameStats::QueryInterface(this, a2, a3);
    }
    else
    {
      *a3 = (void *)(((unsigned __int64)this + 136) & -(__int64)(this != 0LL));
      _InterlockedIncrement((volatile signed __int32 *)this + 2);
      return 0LL;
    }
  }
  return result;
}
