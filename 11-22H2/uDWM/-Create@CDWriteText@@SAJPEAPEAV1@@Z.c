/*
 * XREFs of ?Create@CDWriteText@@SAJPEAPEAV1@@Z @ 0x180018A94
 * Callers:
 *     ?CloneVisualTree@CDWriteText@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180013140 (-CloneVisualTree@CDWriteText@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z @ 0x180023808 (-UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z.c)
 * Callees:
 *     ??0CDWriteText@@AEAA@XZ @ 0x180019008 (--0CDWriteText@@AEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     memset_0 @ 0x18005D340 (memset_0.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWriteText::Create(struct CDWriteText **a1)
{
  CDWriteText *v2; // rax
  CDWriteText *v3; // rbx
  CDWriteText *v4; // rax
  struct CDWriteText *v5; // rdi
  int v6; // ebx

  if ( !a1 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 8u, 0LL);
    return (unsigned int)v6;
  }
  v2 = (CDWriteText *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        536LL);
  v3 = v2;
  if ( !v2 )
  {
    v5 = 0LL;
    goto LABEL_9;
  }
  memset_0(v2, 0, 0x218uLL);
  v4 = CDWriteText::CDWriteText(v3);
  v5 = v4;
  if ( !v4 )
  {
LABEL_9:
    v6 = -2147024882;
    goto LABEL_7;
  }
  v6 = (*(__int64 (__fastcall **)(CDWriteText *))(*(_QWORD *)v4 + 8LL))(v4);
  if ( v6 >= 0 )
  {
    *a1 = v5;
    return 0;
  }
LABEL_7:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 8u, 0LL);
  *a1 = 0LL;
  if ( v5 )
    CBaseObject::Release(v5);
  return (unsigned int)v6;
}
