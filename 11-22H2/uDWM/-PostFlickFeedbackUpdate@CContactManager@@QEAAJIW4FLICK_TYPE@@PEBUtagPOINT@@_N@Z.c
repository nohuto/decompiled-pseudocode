/*
 * XREFs of ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x1800B1984
 * Callers:
 *     ??1CFlickVisual@@MEAA@XZ @ 0x1800BFF9C (--1CFlickVisual@@MEAA@XZ.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x1800C0170 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Stop@CFlickVisual@@UEAAXXZ @ 0x1800C05F0 (-Stop@CFlickVisual@@UEAAXXZ.c)
 *     ?UpdateTransition@CFlickVisual@@MEAAJXZ @ 0x1800C06B0 (-UpdateTransition@CFlickVisual@@MEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z @ 0x1800B550C (-PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z.c)
 */

__int64 __fastcall CContactManager::PostFlickFeedbackUpdate(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned __int8 a5)
{
  __int64 v5; // rdi
  __int64 v6; // r10
  unsigned int v7; // edx
  __int64 v8; // r11
  __int64 v9; // rax
  __int64 *v10; // r10
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int128 v17; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-18h]

  v5 = a2;
  v6 = 0LL;
  v7 = *(_DWORD *)(a1 + 208);
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 184);
    while ( *(_DWORD *)(v8 + 24 * v6) != (_DWORD)v5 )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= v7 )
        goto LABEL_5;
    }
    if ( (int)v6 >= 0 )
    {
      *(_QWORD *)(v8 + 24 * v6 + 8) = *a4;
      *(_DWORD *)(*(_QWORD *)(a1 + 184) + 24 * v6 + 4) = a3;
LABEL_14:
      CDesktopManager::PostEventMessage(CDesktopManager::s_pDesktopManagerInstance, 0x407u, a5, v5);
      return 0LL;
    }
  }
LABEL_5:
  if ( a5 )
  {
    v9 = *a4;
    v10 = (__int64 *)(a1 + 184);
    v18 = 0LL;
    *((_QWORD *)&v17 + 1) = v9;
    v11 = *(unsigned int *)(a1 + 208);
    *(_QWORD *)&v17 = __PAIR64__(a3, v5);
    v12 = v11 + 1;
    if ( (int)v11 + 1 >= (unsigned int)v11 )
    {
      if ( v12 > *(_DWORD *)(a1 + 204) )
      {
        v15 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 184, 24, 1, &v17);
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0xC0u);
      }
      else
      {
        v13 = 3 * v11;
        v14 = *v10;
        *(_OWORD *)(v14 + 8 * v13) = v17;
        *(_QWORD *)(v14 + 8 * v13 + 16) = v18;
        *((_DWORD *)v10 + 6) = v12;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
    goto LABEL_14;
  }
  return 0LL;
}
