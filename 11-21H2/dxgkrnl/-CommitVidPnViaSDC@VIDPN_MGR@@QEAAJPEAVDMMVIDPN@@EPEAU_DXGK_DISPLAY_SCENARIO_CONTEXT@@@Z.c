/*
 * XREFs of ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C039A1C0
 * Callers:
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C039BE90 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C0010580 (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C01DE414 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C218C (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C02F0370 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPnViaSDC(
        struct _KTHREAD **this,
        struct DMMVIDPN *a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v9; // r9
  struct _DXGK_WIN32K_PARAM_DATA *Pool2; // rax
  struct _KTHREAD *v11; // rdx
  struct _DXGK_WIN32K_PARAM_DATA *v12; // rbx
  int v13; // eax
  __int64 v14; // rbp
  DXGADAPTER **v15; // rcx
  int v16; // eax
  struct _KTHREAD *v17; // rdx
  PVOID ModesArray; // rcx

  if ( this[8] != KeGetCurrentThread() )
    WdLogSingleEntry0(1LL);
  if ( !Set<DMMVIDPN>::FindByValue((__int64)(this + 17), (__int64)a2) )
  {
    WdLogSingleEntry2(2LL, a2, this);
    return 3223192323LL;
  }
  if ( !DMMVIDPN::IsFunctional(a2) )
  {
    WdLogSingleEntry1(2LL, a2);
    return 3223192323LL;
  }
  Pool2 = (struct _DXGK_WIN32K_PARAM_DATA *)ExAllocatePool2(256LL, 32LL, 1313891414LL, v9);
  v11 = this[1];
  v12 = Pool2;
  if ( Pool2 )
  {
    *(_OWORD *)&Pool2->PathsArray = 0LL;
    *(_OWORD *)&Pool2->NumPathArrayElements = 0LL;
    if ( !v11 )
    {
      WdLogSingleEntry0(1LL);
      v11 = this[1];
    }
    v13 = DispConfigConvertFromVidPn(v12, *((struct DXGADAPTER **)v11 + 2), a2, a3);
    LODWORD(v14) = v13;
    if ( v13 < 0 )
    {
      WdLogSingleEntry3(2LL, a2, v12, v13);
    }
    else
    {
      v15 = (DXGADAPTER **)this[1];
      if ( !v15 )
      {
        WdLogSingleEntry0(1LL);
        v15 = (DXGADAPTER **)this[1];
      }
      v16 = ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(v15, v12, a4);
      v14 = v16;
      if ( v16 >= 0 )
        return (unsigned int)v14;
      v17 = this[1];
      if ( !v17 )
      {
        WdLogSingleEntry0(1LL);
        v17 = this[1];
      }
      WdLogSingleEntry2(2LL, *((_QWORD *)v17 + 2), v14);
    }
    ModesArray = v12->ModesArray;
    if ( ModesArray )
    {
      ExFreePoolWithTag(ModesArray, 0);
      v12->ModesArray = 0LL;
    }
    if ( v12->PathsArray )
    {
      ExFreePoolWithTag(v12->PathsArray, 0);
      v12->PathsArray = 0LL;
    }
    ExFreePoolWithTag(v12, 0);
    return (unsigned int)v14;
  }
  if ( !v11 )
  {
    WdLogSingleEntry0(1LL);
    v11 = this[1];
  }
  WdLogSingleEntry2(6LL, *((_QWORD *)v11 + 2), 32LL);
  return 3221225495LL;
}
