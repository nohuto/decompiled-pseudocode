/*
 * XREFs of ?CollectStats@CTouchFrameStats@@MEAAX_K@Z @ 0x1801A8350
 * Callers:
 *     <none>
 * Callees:
 *     ?CollectStats@CCompFrameStats@@MEAAX_K@Z @ 0x1800026F0 (-CollectStats@CCompFrameStats@@MEAAX_K@Z.c)
 *     ?GetCurrentBatchId@CTouchFrameStats@@IEAAKXZ @ 0x180008E38 (-GetCurrentBatchId@CTouchFrameStats@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEAKAEA_K@?$vector@VBatchFrameId@CTouchFrameStats@@V?$allocator@VBatchFrameId@CTouchFrameStats@@@std@@@std@@QEAAPEAVBatchFrameId@CTouchFrameStats@@QEAV23@AEAKAEA_K@Z @ 0x1801A67A4 (--$_Emplace_reallocate@AEAKAEA_K@-$vector@VBatchFrameId@CTouchFrameStats@@V-$allocator@VBatchFra.c)
 *     ?WaitForBatchConfirmation@CTouchFrameStats@@IEAA_KKI@Z @ 0x1801A9590 (-WaitForBatchConfirmation@CTouchFrameStats@@IEAA_KKI@Z.c)
 */

void __fastcall CTouchFrameStats::CollectStats(CTouchFrameStats *this, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rdi
  unsigned int v5; // edx
  unsigned __int64 v6; // rax
  unsigned int CurrentBatchId; // eax
  unsigned int v8; // edi
  unsigned int v9; // eax
  unsigned int v10; // esi
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // [rsp+30h] [rbp+8h] BYREF
  __int64 v15; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  if ( *((_BYTE *)this + 12) )
  {
    if ( a2 )
    {
      if ( *((_QWORD *)this + 21) )
      {
        v5 = *((_DWORD *)this + 45);
        if ( v5 )
        {
          v6 = CTouchFrameStats::WaitForBatchConfirmation(this, v5, a3);
          if ( v6 )
          {
            v3 = v6;
            *((_QWORD *)this + 15) = v6;
            *((_BYTE *)this + 344) = 1;
          }
        }
      }
    }
  }
  CCompFrameStats::CollectStats(this, v3, a3);
  if ( *((_QWORD *)this + 21) )
  {
    CurrentBatchId = CTouchFrameStats::GetCurrentBatchId(this);
    v8 = CurrentBatchId;
    if ( *((_BYTE *)this + 13) && CurrentBatchId > *((_DWORD *)this + 45) )
      v8 = *((_DWORD *)this + 45);
    while ( *((_BYTE *)this + 12) )
    {
      v9 = *((_DWORD *)this + 46);
      if ( v9 >= v8 )
        break;
      v10 = *((_DWORD *)this + 44);
      v11 = v9 + 1;
      v12 = *((_QWORD *)this + 21);
      if ( v10 <= v11 )
        v10 = v11;
      v14 = v10;
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 64LL))(v12, v10, &v15) < 0 )
        break;
      v13 = *((_QWORD *)this + 25);
      if ( v13 == *((_QWORD *)this + 26) )
      {
        std::vector<CTouchFrameStats::BatchFrameId>::_Emplace_reallocate<unsigned long &,unsigned __int64 &>(
          (_QWORD *)this + 24,
          (_OWORD *)v13,
          &v14,
          &v15);
        v10 = v14;
      }
      else
      {
        *(_QWORD *)(v13 + 8) = v15;
        *(_DWORD *)v13 = v10;
        *((_QWORD *)this + 25) += 16LL;
      }
      *((_DWORD *)this + 46) = v10;
    }
  }
}
