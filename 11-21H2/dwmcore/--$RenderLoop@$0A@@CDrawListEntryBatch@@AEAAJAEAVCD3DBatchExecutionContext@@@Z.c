/*
 * XREFs of ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x1801F0ECC
 * Callers:
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x1800B4BB0 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 * Callees:
 *     ?ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x180011480 (-ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEffect@@@Z @ 0x1800803E4 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEff.c)
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x1800B5558 (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetRenderingEffect@CBatchCommand@@QEBAPEAVCRenderingEffect@@XZ @ 0x1801EC170 (-GetRenderingEffect@CBatchCommand@@QEBAPEAVCRenderingEffect@@XZ.c)
 *     ?FillVertexAndIndexBuffers@CD3DBatchExecutionContext@@QEAAJPEAPEBQEBVCBatchCommand@@PEBVCRenderingEffect@@@Z @ 0x1801ED358 (-FillVertexAndIndexBuffers@CD3DBatchExecutionContext@@QEAAJPEAPEBQEBVCBatchCommand@@PEBVCRenderi.c)
 *     ?SetRenderingEffectState@CD3DBatchExecutionContext@@QEAAJPEBVCRenderingEffect@@@Z @ 0x1801ED570 (-SetRenderingEffectState@CD3DBatchExecutionContext@@QEAAJPEBVCRenderingEffect@@@Z.c)
 */

__int64 __fastcall CDrawListEntryBatch::RenderLoop<0>(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  struct CRenderingEffect *v3; // rbx
  unsigned int v4; // r15d
  int v5; // r14d
  __int64 v7; // r8
  struct CBatchCommand **v8; // rdi
  __int64 v9; // rax
  CBatchCommand *v10; // r12
  CBatchCommand *v11; // rcx
  struct CRenderingEffect *RenderingEffect; // rax
  void (__fastcall *v13)(struct CRenderingEffect *, struct CRenderingEffect **, struct CRenderingEffect *, char *); // rdi
  struct CRenderingEffect *v14; // rax
  struct CRenderingEffect *v15; // rcx
  struct CRenderingEffect *v16; // rax
  struct CRenderingEffect *v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  const struct CRenderingEffect *v20; // r8
  int v21; // eax
  __int64 v22; // rcx
  struct CBatchCommand **v24; // [rsp+30h] [rbp-10h] BYREF
  struct CBatchCommand **v25; // [rsp+38h] [rbp-8h]
  char v26; // [rsp+80h] [rbp+40h] BYREF
  struct CRenderingEffect *v27; // [rsp+90h] [rbp+50h] BYREF
  struct CRenderingEffect *v28; // [rsp+98h] [rbp+58h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0LL;
  v4 = 0;
  v27 = 0LL;
  v5 = 0;
  v7 = *(_QWORD *)(v2 + 24);
  v8 = (struct CBatchCommand **)(v7 + 8LL * *(unsigned int *)(a1 + 48));
  v9 = *(unsigned int *)(a1 + 52);
  v24 = v8;
  v25 = (struct CBatchCommand **)(v7 + 8 * v9);
  if ( v8 == v25 )
    return v4;
  while ( 1 )
  {
    v10 = *v8;
    if ( CBatchCommand::ApplyRenderState(*v8, (struct IDrawListStateSink *)a2) )
      break;
LABEL_18:
    v24 = ++v8;
    if ( v8 == v25 )
      goto LABEL_23;
  }
  if ( !v3 )
  {
    CD3DBatchExecutionContext::Flush(a2, 0x80000000);
    v11 = v10;
LABEL_6:
    RenderingEffect = CBatchCommand::GetRenderingEffect(v11);
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(
      (__int64 *)&v27,
      (void (__fastcall ***)(_QWORD))RenderingEffect);
    v3 = v27;
    goto LABEL_12;
  }
  v11 = v10;
  if ( *(int *)(a2 + 40) < 0 )
    goto LABEL_6;
  v13 = *(void (__fastcall **)(struct CRenderingEffect *, struct CRenderingEffect **, struct CRenderingEffect *, char *))(*(_QWORD *)v3 + 80LL);
  v14 = CBatchCommand::GetRenderingEffect(v10);
  v13(v3, &v28, v14, &v26);
  v15 = v28;
  if ( v28 != v3 )
  {
    CD3DBatchExecutionContext::Flush(a2, 0x80000000);
    v16 = v28;
    v17 = v3;
    v28 = 0LL;
    v3 = v16;
    v27 = v16;
    (*(void (__fastcall **)(struct CRenderingEffect *))(*(_QWORD *)v17 + 8LL))(v17);
    v15 = v28;
  }
  if ( v15 )
    (*(void (__fastcall **)(struct CRenderingEffect *))(*(_QWORD *)v15 + 8LL))(v15);
LABEL_12:
  if ( *(int *)(a2 + 40) >= 0 )
  {
    if ( v5 < 0 )
      goto LABEL_15;
  }
  else
  {
    v18 = CD3DBatchExecutionContext::SetRenderingEffectState((CD3DBatchExecutionContext *)a2, v3);
    v5 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v18, 0x160u);
LABEL_15:
      v20 = 0LL;
      goto LABEL_16;
    }
  }
  v20 = v3;
LABEL_16:
  v21 = CD3DBatchExecutionContext::FillVertexAndIndexBuffers(
          (CD3DBatchExecutionContext *)a2,
          (const struct CBatchCommand *const **)&v24,
          v20);
  v4 = v21;
  if ( v21 >= 0 )
  {
    *(_DWORD *)(a2 + 40) = 0;
    v8 = v24;
    goto LABEL_18;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, v21, 0x167u);
LABEL_23:
  if ( v3 )
    (*(void (__fastcall **)(struct CRenderingEffect *))(*(_QWORD *)v3 + 8LL))(v3);
  return v4;
}
