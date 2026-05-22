/*
 * XREFs of ?InjectManipulationInput@ControllerProcessor@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z @ 0x1801A4890
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x18001B9A0 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x1800CB1BC (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ?GetSizeForPointerCount@PointerInputInfo@@SAKK@Z @ 0x1800CC5AC (-GetSizeForPointerCount@PointerInputInfo@@SAKK@Z.c)
 *     ?Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x1801A4794 (-Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerProcessor::InjectManipulationInput(
        ControllerProcessor *this,
        unsigned int a2,
        struct tagPOINTER_TOUCH_INFO *a3)
{
  DWORD TickCount; // ebx
  unsigned int SizeForPointerCount; // eax
  __int64 v8; // r8
  const char *v9; // r9
  struct InputInfo *v10; // rdx
  _OWORD *v11; // r8
  char *v12; // rdi
  __int64 v13; // r9
  char *v14; // rax
  int v15; // eax
  unsigned int v16; // ebx
  struct InputInfo *v18[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF

  TickCount = GetTickCount();
  QueryPerformanceCounter(&PerformanceCount);
  SizeForPointerCount = PointerInputInfo::GetSizeForPointerCount(a2);
  VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(
    (__int64)v18,
    SizeForPointerCount,
    v8,
    v9);
  v10 = v18[0];
  *(_DWORD *)v18[0] = 8;
  *((_DWORD *)v10 + 2) = TickCount;
  *((LARGE_INTEGER *)v10 + 2) = PerformanceCount;
  *((_QWORD *)v10 + 4) = *((_QWORD *)this + 28);
  *((_DWORD *)v10 + 79) = a2;
  if ( a2 )
  {
    v11 = (_OWORD *)((char *)v10 + 384);
    v12 = (char *)(a3 - v10);
    v13 = a2;
    do
    {
      v14 = &v12[(_QWORD)v11 - 384];
      *(v11 - 4) = *(_OWORD *)v14;
      *(v11 - 3) = *((_OWORD *)v14 + 1);
      *(v11 - 2) = *((_OWORD *)v14 + 2);
      *(v11 - 1) = *((_OWORD *)v14 + 3);
      *v11 = *((_OWORD *)v14 + 4);
      v11[1] = *((_OWORD *)v14 + 5);
      v11[2] = *((_OWORD *)v14 + 6);
      v11[3] = *((_OWORD *)v14 + 7);
      v11[4] = *((_OWORD *)v14 + 8);
      *(_DWORD *)v11 = *((_DWORD *)v10 + 2);
      *((_QWORD *)v11 + 2) = *((_QWORD *)v10 + 2);
      v11 += 9;
      --v13;
    }
    while ( v13 );
  }
  v15 = (unsigned int)InjectionDevice::Inject((ControllerProcessor *)((char *)this + 4312), v10);
  v16 = v15;
  if ( v15 >= 0 )
  {
    if ( v18[0] )
      operator delete[](v18[0]);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC91,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v15);
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)v18);
    return v16;
  }
}
