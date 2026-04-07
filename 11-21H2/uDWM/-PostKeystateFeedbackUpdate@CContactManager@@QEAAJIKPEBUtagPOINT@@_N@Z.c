/*
 * XREFs of ?PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z @ 0x180068F9C
 * Callers:
 *     ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x1800699FC (-PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x1800C8B48 (--1CPenBarrelKeyVisual@@MEAA@XZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@UCKeystateTextFeedback@@$0A@@@QEAAJPEFBUCKeystateTextFeedback@@I@Z @ 0x1800AA53C (-AddMultipleAndSet@-$DynArray@UCKeystateTextFeedback@@$0A@@@QEAAJPEFBUCKeystateTextFeedback@@I@Z.c)
 *     ?PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z @ 0x1800B1014 (-PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z.c)
 */

__int64 __fastcall CContactManager::PostKeystateFeedbackUpdate(
        CContactManager *this,
        unsigned int a2,
        int a3,
        const struct tagPOINT *a4,
        bool a5)
{
  __int64 v5; // rdi
  __int64 v6; // r10
  unsigned int v7; // edx
  __int64 v8; // rbx
  struct tagPOINT v9; // rax
  unsigned __int64 v10; // r8
  __int64 v12; // rdx
  _DWORD v13[2]; // [rsp+20h] [rbp-38h] BYREF
  struct tagPOINT v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+30h] [rbp-28h]
  struct tagPOINT v16; // [rsp+34h] [rbp-24h]
  __int64 v17; // [rsp+40h] [rbp-18h]

  v5 = a2;
  v6 = 0LL;
  v7 = *((_DWORD *)this + 60);
  if ( v7 )
  {
    v8 = *((_QWORD *)this + 27);
    while ( *(_DWORD *)(v8 + 40 * v6) != (_DWORD)v5 )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= v7 )
        goto LABEL_5;
    }
    if ( (int)v6 >= 0 )
    {
      v12 = 5 * v6;
      *(_QWORD *)(v8 + 8 * v12 + 20) = *(_QWORD *)(v8 + 40 * v6 + 8);
      *(_DWORD *)(*((_QWORD *)this + 27) + 8 * v12 + 16) = *(_DWORD *)(*((_QWORD *)this + 27) + 40 * v6 + 4);
      *(struct tagPOINT *)(*((_QWORD *)this + 27) + 8 * v12 + 8) = *a4;
      *(_DWORD *)(*((_QWORD *)this + 27) + 8 * v12 + 4) = a3;
      v10 = a5;
      goto LABEL_7;
    }
  }
LABEL_5:
  if ( a5 )
  {
    v9 = *a4;
    v17 = 0LL;
    v14 = v9;
    v16 = v9;
    v13[0] = v5;
    v13[1] = a3;
    v15 = a3;
    DynArray<CKeystateTextFeedback,0>::AddMultipleAndSet((char *)this + 216, v13);
    v10 = a5;
LABEL_7:
    CDesktopManager::PostEventMessage(CDesktopManager::s_pDesktopManagerInstance, 0x408u, v10, v5);
  }
  return 0LL;
}
