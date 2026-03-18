/*
 * XREFs of ?CreateEmptyResource@CResourceTable@@QEAAJPEAVCComposition@@PEAVCChannelContext@@PEBUtagMILCMD_CHANNEL_CREATERESOURCE@@PEAPEAVCResource@@@Z @ 0x1800BDEB8
 * Callers:
 *     ?Channel_CreateResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_CREATERESOURCE@@@Z @ 0x1800BDE54 (-Channel_CreateResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x1800BDD78 (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x1800BE004 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?AssignEntry@HANDLE_TABLE@@QEAAJIK@Z @ 0x1800BE02C (-AssignEntry@HANDLE_TABLE@@QEAAJIK@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800BE0A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?AddToResourceCount@@YAXAEAUProcessAttributionResourceCounters@@W4MIL_RESOURCE_TYPE@@H@Z @ 0x1800D8CD8 (-AddToResourceCount@@YAXAEAUProcessAttributionResourceCounters@@W4MIL_RESOURCE_TYPE@@H@Z.c)
 *     _anonymous_namespace_::AddToResourceCount @ 0x1800D8D48 (_anonymous_namespace_--AddToResourceCount.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqxqx_EventWriteTransfer @ 0x180111DE4 (McTemplateU0qqxqx_EventWriteTransfer.c)
 *     ??$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z @ 0x180191FDC (--$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z.c)
 */

__int64 __fastcall CResourceTable::CreateEmptyResource(
        CResourceTable *this,
        struct CComposition *a2,
        struct CChannelContext *a3,
        const struct tagMILCMD_CHANNEL_CREATERESOURCE *a4,
        struct CResource **a5)
{
  unsigned int v5; // edi
  unsigned int v7; // r8d
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int *v19; // rbx
  unsigned int v20; // eax
  unsigned int v21; // r8d
  unsigned int v23; // [rsp+20h] [rbp-48h]
  struct CResource *v24; // [rsp+70h] [rbp+8h] BYREF

  v5 = *((_DWORD *)a4 + 1);
  v7 = *((_DWORD *)a4 + 2);
  v24 = 0LL;
  v11 = HANDLE_TABLE::AssignEntry((CResourceTable *)((char *)this + 16), v5, v7);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x2Au);
LABEL_17:
    ReleaseInterface<CResource>(&v24);
    return v13;
  }
  v14 = *((_QWORD *)this + 5) + *((_DWORD *)this + 6) * v5;
  *(_QWORD *)(v14 + 8) = 0LL;
  v15 = CResourceFactory::Create(a2, a3, *((unsigned int *)a4 + 2), &v24);
  v13 = v15;
  if ( v15 < 0 )
  {
    v23 = 47;
    goto LABEL_13;
  }
  v15 = (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)v24 + 48LL))(v24);
  v13 = v15;
  if ( v15 < 0 )
  {
    v23 = 53;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, v23);
LABEL_14:
    if ( v14 )
      CResourceTable::DeleteHandle(this, *((_DWORD *)a4 + 1));
    goto LABEL_17;
  }
  if ( !(unsigned int)HANDLE_TABLE::ValidEntry((CResourceTable *)((char *)this + 16), *((_DWORD *)a4 + 1))
    || (v19 = (unsigned int *)(*((_QWORD *)this + 5) + (unsigned int)(*((_DWORD *)a4 + 1) * *((_DWORD *)this + 6)))) == 0LL )
  {
    v13 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, -2147024890, 0x36u);
    goto LABEL_14;
  }
  *((_QWORD *)v19 + 1) = v18;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  v20 = AddToResourceCount(*((_QWORD *)this + 7) + 44LL, *v19, 1LL);
  anonymous_namespace_::AddToResourceCount(v20, v21);
  v13 = 0;
  *((_QWORD *)v24 + 6) = a3;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
    McTemplateU0qqxqx_EventWriteTransfer(
      *((_DWORD *)a4 + 1),
      *((_DWORD *)a4 + 1),
      *((_DWORD *)a3 + 4),
      *((_DWORD *)a4 + 1),
      *((_DWORD *)a4 + 1),
      *((_DWORD *)a4 + 2),
      (char)v24);
  *a5 = v24;
  return v13;
}
