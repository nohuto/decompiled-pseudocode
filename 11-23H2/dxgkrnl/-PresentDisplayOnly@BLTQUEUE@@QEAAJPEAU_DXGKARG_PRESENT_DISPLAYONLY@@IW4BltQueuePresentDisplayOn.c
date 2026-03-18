/*
 * XREFs of ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@IW4BltQueuePresentDisplayOnlySource@1@@Z @ 0x1C03D33E4
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0168160 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C02DFFE0 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C0322460 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?Blt@BLTENTRY@@QEAAJXZ @ 0x1C03D0B34 (-Blt@BLTENTRY@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00073DC (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C0014FAC (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     McTemplateK0xqdqq_EtwWriteTransfer @ 0x1C006E6B4 (McTemplateK0xqdqq_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiPresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C02C9564 (-DdiPresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ @ 0x1C030F2D8 (-TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ.c)
 *     ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1C03D4190 (-SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ.c)
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C03D4A60 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 */

__int64 __fastcall BLTQUEUE::PresentDisplayOnly(_QWORD *a1, struct _DXGKARG_PRESENT_DISPLAYONLY *a2, int a3, int a4)
{
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rax
  int v10; // ebx
  DXGDODPRESENT *v11; // rax
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  char v16; // si
  __int64 v17; // r14
  NTSTATUS v18; // eax
  unsigned int Timeout; // [rsp+20h] [rbp-68h]
  _BYTE v21[16]; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v22[32]; // [rsp+50h] [rbp-38h] BYREF
  union _LARGE_INTEGER v23; // [rsp+90h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGFASTMUTEX *const)(a1 + 91), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  Current = DXGPROCESS::GetCurrent(v8);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v22, Current);
  if ( *(_DWORD *)(*a1 + 140LL) )
  {
    v10 = -1073741823;
    goto LABEL_17;
  }
  KeClearEvent((PRKEVENT)(a1 + 79));
  a2->pfnPresentDisplayOnlyProgress = (DXGKCB_PRESENT_DISPLAYONLY_PROGRESS)((unsigned __int64)DxgPresentDisplayOnlyProgressCB & -(__int64)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)DXGDODPRESENT::GetAdapter((DXGDODPRESENT *)*a1) + 27) + 64LL) + 40LL) + 28LL) < 0x3007u));
  v11 = (DXGDODPRESENT *)*a1;
  *((_DWORD *)a1 + 180) = 1;
  v13 = ADAPTER_DISPLAY::DdiPresentDisplayOnly(*((ADAPTER_DISPLAY **)v11 + 11), a2, v12);
  v10 = v13;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    Timeout = *((_DWORD *)a1 + 65);
    McTemplateK0xqdqq_EtwWriteTransfer(Timeout, v14, v15, a1[31], Timeout, a3, v13, a4);
  }
  v16 = 0;
  if ( v10 >= 0 && g_TdrForceDodPresentTimeout && TdrIsDodPresentTimeoutForcedFlip() )
  {
    v16 = 1;
  }
  else if ( v10 != 259 )
  {
LABEL_16:
    KeSetEvent((PRKEVENT)(a1 + 79), 0, 0);
    goto LABEL_17;
  }
  v10 = 258;
  v17 = 10000000LL * (unsigned int)dword_1C0140A78;
  v23.QuadPart = -10000000LL * (unsigned int)dword_1C0140A78;
  while ( 1 )
  {
    v18 = KeWaitForSingleObject(a1 + 79, Executive, 0, 0, &v23);
    *((_DWORD *)a1 + 180) = 0;
    if ( !v16 && !*(_DWORD *)(*a1 + 140LL) && (v18 != 258 || KeReadStateEvent((PRKEVENT)(a1 + 79))) )
      break;
    if ( (unsigned int)DXGDODPRESENT::TriggerDisplayOnlyTdr(
                         *a1,
                         5 - (unsigned int)(v16 != 0),
                         *((unsigned int *)a1 + 64),
                         v17) != 1 )
      goto LABEL_16;
  }
  v10 = 0;
LABEL_17:
  BLTQUEUE::SetVisibilityIfDeferred((BLTQUEUE *)a1);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
  if ( v21[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
  return (unsigned int)v10;
}
