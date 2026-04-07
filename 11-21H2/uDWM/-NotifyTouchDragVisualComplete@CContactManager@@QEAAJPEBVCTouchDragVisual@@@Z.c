/*
 * XREFs of ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x1800AB57C
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18006A362 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18004E86C (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x18004F050 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B3F70 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CContactManager::NotifyTouchDragVisualComplete(
        CContactManager *this,
        const struct CTouchDragVisual *a2)
{
  unsigned int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rdx
  const struct CTouchDragVisual **v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  char v10; // cl
  CDirectTouchVisual **v11; // rdx
  unsigned __int64 v12; // rbp
  int Touch; // eax
  CContactManager *v14; // rcx
  __int64 v15; // r9
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+40h] [rbp+8h] BYREF

  v17 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0LL;
  if ( *((_DWORD *)this + 20) )
  {
    v6 = *((_QWORD *)this + 7);
    v7 = (const struct CTouchDragVisual **)(v6 + 80);
    while ( *v7 != a2 )
    {
      v5 = (unsigned int)(v5 + 1);
      v7 += 13;
      if ( (unsigned int)v5 >= *((_DWORD *)this + 20) )
        goto LABEL_18;
    }
    if ( (int)v5 >= 0 )
    {
      v8 = 104 * v5;
      *(_BYTE *)(v8 + v6 + 96) = 1;
      *(_QWORD *)(v8 + *((_QWORD *)this + 7) + 16) = *(_QWORD *)(104 * v5 + *((_QWORD *)this + 7) + 8);
      v9 = *((_QWORD *)this + 7);
      if ( !*(_QWORD *)(v8 + v9 + 88) && !*(_QWORD *)(v8 + v9 + 64) )
      {
        v10 = *((_BYTE *)this + 324);
        if ( v10 || *(_DWORD *)(v8 + v9 + 40) )
        {
          v11 = (CDirectTouchVisual **)(v8 + v9 + 48);
          if ( !*v11 )
          {
            v12 = *((_QWORD *)a2 + 37);
            Touch = CreateTouchVisual<CDirectTouchVisual>(v12, v11);
            v4 = Touch;
            if ( Touch < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Touch, 0x424u);
              goto LABEL_18;
            }
            CContactManager::AddToTouchNode(v14, v12, *(struct CVisual **)(v8 + *((_QWORD *)this + 7) + 48));
            v10 = *((_BYTE *)this + 324);
            v9 = *((_QWORD *)this + 7);
          }
          v15 = 4294967291LL;
          if ( !v10 )
            v15 = *(unsigned int *)(v8 + v9 + 40);
          CDirectTouchVisual::StartDown(*(_QWORD *)(v8 + v9 + 48), v8 + v9 + 8, v8 + v9 + 24, v15);
        }
      }
    }
  }
LABEL_18:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  return v4;
}
