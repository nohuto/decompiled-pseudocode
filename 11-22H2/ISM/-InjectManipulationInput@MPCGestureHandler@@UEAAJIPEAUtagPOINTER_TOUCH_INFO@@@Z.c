/*
 * XREFs of ?InjectManipulationInput@MPCGestureHandler@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z @ 0x1800CC750
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MPCGestureHandler_PointerDown@AEAJAEAJAEAIAEAKAEAK@ISMTracing@@SAXAEAJ0AEAIAEAK2@Z @ 0x1800CAC64 (--$MPCGestureHandler_PointerDown@AEAJAEAJAEAIAEAKAEAK@ISMTracing@@SAXAEAJ0AEAIAEAK2@Z.c)
 *     ??$MPCGestureHandler_PointerUp@AEAJAEAJAEAIAEAKAEAK@ISMTracing@@SAXAEAJ0AEAIAEAK2@Z @ 0x1800CACD8 (--$MPCGestureHandler_PointerUp@AEAJAEAJAEAIAEAKAEAK@ISMTracing@@SAXAEAJ0AEAIAEAK2@Z.c)
 *     ??$MPCGestureHandler_PointerUpdated@AEAJAEAJAEAIAEAIAEAKAEAKAEAW4InputType@@@ISMTracing@@SAXAEAJ0AEAI1AEAK2AEAW4InputType@@@Z @ 0x1800CAD4C (--$MPCGestureHandler_PointerUpdated@AEAJAEAJAEAIAEAIAEAKAEAKAEAW4InputType@@@ISMTracing@@SAXAEAJ.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x1800CB1BC (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ?GetSizeForPointerCount@PointerInputInfo@@SAKK@Z @ 0x1800CC5AC (-GetSizeForPointerCount@PointerInputInfo@@SAKK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCGestureHandler::InjectManipulationInput(
        MPCGestureHandler *this,
        unsigned int a2,
        struct tagPOINTER_TOUCH_INFO *a3)
{
  __int64 v4; // rbp
  unsigned int SizeForPointerCount; // eax
  __int64 v7; // r8
  const char *v8; // r9
  LARGE_INTEGER *v9; // rbx
  unsigned int *v10; // rdx
  char v11; // r13
  LARGE_INTEGER *v12; // r14
  char *v13; // rsi
  char *v14; // r12
  char *v15; // rax
  LARGE_INTEGER v16; // rcx
  char v17; // al
  bool v18; // zf
  int v19; // eax
  int v21; // [rsp+20h] [rbp-68h]
  void *v22; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v24; // [rsp+90h] [rbp+8h]
  LARGE_INTEGER v25; // [rsp+A8h] [rbp+20h] BYREF

  v4 = a2;
  QueryPerformanceCounter(&v25);
  SizeForPointerCount = PointerInputInfo::GetSizeForPointerCount(v4);
  VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(
    (__int64)&v22,
    SizeForPointerCount,
    v7,
    v8);
  v9 = (LARGE_INTEGER *)v22;
  *((_DWORD *)v22 + 1) = **((_DWORD **)this + 102);
  v9->LowPart = *(_DWORD *)(*((_QWORD *)this + 102) + 4LL);
  v9[1].LowPart = GetTickCount();
  v9[2] = v25;
  v10 = (unsigned int *)&v9[5];
  v9[5].LowPart = *((_DWORD *)this + 210);
  v9[29].HighPart = 1065353216;
  v9[32].LowPart = 1065353216;
  v9[34].HighPart = 1065353216;
  v9[37].LowPart = 1065353216;
  v11 = 1;
  if ( !(_DWORD)v4 )
    goto LABEL_18;
  v12 = v9 + 48;
  v13 = (char *)&v9[40].QuadPart + 4;
  v14 = (char *)(a3 - (struct tagPOINTER_TOUCH_INFO *)v9);
  v24 = v4;
  do
  {
    v15 = &v14[(_QWORD)v12 - 384];
    *(_OWORD *)&v12[-8].LowPart = *(_OWORD *)v15;
    *(_OWORD *)&v12[-6].LowPart = *((_OWORD *)v15 + 1);
    *(_OWORD *)&v12[-4].LowPart = *((_OWORD *)v15 + 2);
    *(_OWORD *)&v12[-2].LowPart = *((_OWORD *)v15 + 3);
    *(_OWORD *)&v12->LowPart = *((_OWORD *)v15 + 4);
    *(_OWORD *)&v12[2].LowPart = *((_OWORD *)v15 + 5);
    *(_OWORD *)&v12[4].LowPart = *((_OWORD *)v15 + 6);
    *(_OWORD *)&v12[6].LowPart = *((_OWORD *)v15 + 7);
    *(_OWORD *)&v12[8].LowPart = *((_OWORD *)v15 + 8);
    v12->LowPart = v9[1].LowPart;
    v12[2] = v9[2];
    v12[-8].HighPart += 2;
    if ( (*(_DWORD *)((char *)&v12[-46] + (_QWORD)v14 - 4) & 0x10000) != 0 )
    {
      ISMTracing::MPCGestureHandler_PointerDown<long &,long &,unsigned int &,unsigned long &,unsigned long &>(
        (int *)v13 + 11,
        (int *)v13 + 12,
        (unsigned int *)v13,
        (unsigned int *)&v9->HighPart,
        v10);
      v10 = (unsigned int *)&v9[5];
    }
    if ( (*(_DWORD *)((char *)&v12[-46] + (_QWORD)v14 - 4) & 0x40000) != 0 )
      ISMTracing::MPCGestureHandler_PointerUp<long &,long &,unsigned int &,unsigned long &,unsigned long &>(
        (int *)v13 + 11,
        (int *)v13 + 12,
        (unsigned int *)v13,
        (unsigned int *)&v9->HighPart,
        v10);
    v16 = v9[2];
    if ( *((_BYTE *)this + 912) && *(_DWORD *)((char *)&v12[-46] + (_QWORD)v14 - 4) == 2 )
    {
      if ( v16.QuadPart - *((_QWORD *)this + 115) < *((_QWORD *)this + 116) )
      {
        v17 = 1;
        goto LABEL_14;
      }
      *((LARGE_INTEGER *)this + 115) = v16;
    }
    else
    {
      *((_QWORD *)this + 115) = 0LL;
    }
    v17 = 0;
LABEL_14:
    v11 &= v17;
    ++v9[39].HighPart;
    ISMTracing::MPCGestureHandler_PointerUpdated<long &,long &,unsigned int &,unsigned int &,unsigned long &,unsigned long &,enum InputType &>(
      (int *)v13 + 11,
      (int *)v13 + 12,
      (unsigned int *)v13,
      (unsigned int *)v13 + 2,
      (unsigned int *)&v9->HighPart,
      (unsigned int *)&v9[5],
      (unsigned int *)v9);
    v13 += 144;
    v12 += 18;
    v18 = v24-- == 1;
    v10 = (unsigned int *)&v9[5];
  }
  while ( !v18 );
  if ( !v11 )
  {
    v19 = (*(__int64 (__fastcall **)(_QWORD, LARGE_INTEGER *))(**((_QWORD **)this + 103) + 24LL))(
            *((_QWORD *)this + 103),
            v9);
    if ( v19 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x188,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
        (const char *)(unsigned int)v19,
        v21);
  }
LABEL_18:
  if ( v22 )
    operator delete[](v22);
  return 0LL;
}
