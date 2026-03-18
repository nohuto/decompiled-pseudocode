/*
 * XREFs of ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x18022656C
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x18021C784 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x18004A55C (-Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ClearState@CNaturalAnimation@@AEAAXXZ @ 0x180225FE8 (-ClearState@CNaturalAnimation@@AEAAXXZ.c)
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x180227D6C (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CNaturalAnimation::GetForceForAxis(
        __int64 a1,
        int a2,
        float a3,
        float a4,
        struct CWeakResourceReference *a5)
{
  struct CWeakResourceReference *v5; // r14
  char *v8; // rax
  char *v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // esi
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  int v16; // ebx
  struct CWeakResourceReference *v17; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]

  v5 = a5;
  *(_QWORD *)a5 = 0LL;
  v8 = (char *)operator new(0x28uLL);
  v9 = v8;
  if ( v8 )
  {
    *(_QWORD *)(v8 + 12) = 0LL;
    *(_QWORD *)(v8 + 20) = 0LL;
    *(_QWORD *)(v8 + 28) = 0LL;
    *((_DWORD *)v8 + 9) = 0;
    *((_DWORD *)v8 + 2) = 0;
    *(_QWORD *)v8 = &CNaturalAnimationScalarForceAdapater::`vftable';
    ((void (__fastcall *)(char *))CNaturalAnimationScalarForceAdapater::`vftable')(v8);
  }
  else
  {
    v9 = 0LL;
  }
  if ( a2 )
  {
    if ( a2 != 1 )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    *(float *)(a1 + 376) = a4;
    *(float *)(a1 + 340) = a3;
  }
  else
  {
    *(float *)(a1 + 372) = a4;
    *(float *)(a1 + 336) = a3;
  }
  *(_BYTE *)(a1 + 588) |= 0x10u;
  CNaturalAnimation::ClearState((CNaturalAnimation *)a1);
  v10 = CNaturalAnimation::SetupAnimationIfNecessary((CNaturalAnimation *)a1);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x39Bu);
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 16);
    a5 = 0LL;
    *((_QWORD *)v9 + 3) = v13;
    *((_DWORD *)v9 + 4) = a2;
    v14 = CWeakResourceReference::Get((struct CResource *)a1, &a5);
    v16 = v14;
    v12 = v14;
    if ( v14 >= 0 )
    {
      *((_QWORD *)v9 + 4) = a5;
      *(_QWORD *)v5 = v9;
      return v12;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x94u);
    v17 = a5;
    if ( a5 )
      (*(void (__fastcall **)(struct CWeakResourceReference *))(*(_QWORD *)a5 + 8LL))(a5);
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v17, 0LL, 0LL, v16, 0x39Du);
  }
  if ( v9 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 8LL))(v9);
  return v12;
}
