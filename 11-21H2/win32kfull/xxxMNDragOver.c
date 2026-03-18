/*
 * XREFs of xxxMNDragOver @ 0x1C02454E4
 * Callers:
 *     NtUserMNDragOver @ 0x1C01F9270 (NtUserMNDragOver.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0061074 (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00FB014 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C021B934 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     GetMenuStateWindow @ 0x1C023002C (GetMenuStateWindow.c)
 *     IsMFMWFPWindow @ 0x1C0230060 (IsMFMWFPWindow.c)
 *     xxxCallHandleMenuMessages @ 0x1C02303C0 (xxxCallHandleMenuMessages.c)
 */

__int64 __fastcall xxxMNDragOver(unsigned __int16 *a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  int v6; // eax
  _QWORD *v7; // rcx
  __int64 *MenuStateWindow; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  _QWORD v19[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v19, 0LL);
  v21 = 0LL;
  v4 = 0LL;
  v20 = 0LL;
  v5 = *(_QWORD *)(gptiCurrent + 608LL);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 8);
    if ( (v6 & 0x400) != 0 )
    {
      v7 = *(_QWORD **)(gptiCurrent + 608LL);
      *(_DWORD *)(v5 + 8) = v6 | 0x8000;
      MenuStateWindow = (__int64 *)GetMenuStateWindow(v7);
      if ( MenuStateWindow )
      {
        ++*(_DWORD *)(v5 + 40);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v20 = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = &v20;
        *((_QWORD *)&v20 + 1) = MenuStateWindow;
        HMLockObject(MenuStateWindow);
        xxxCallHandleMenuMessages(v5, MenuStateWindow, 160, 0LL, (a1[2] << 16) | *a1);
        ThreadUnlock1(v11, v10, v12);
        if ( IsMFMWFPWindow(*(_QWORD *)(v5 + 80)) )
        {
          v14 = safe_cast_fnid_to_PMENUWND(v13);
          if ( v14 )
          {
            v15 = *(_QWORD *)(v14 + 8);
            if ( v15 )
            {
              SmartObjStackRefBase<tagPOPUPMENU>::operator=(v19, v15);
              if ( *(_QWORD *)(*(_QWORD *)v19[0] + 40LL) )
                v16 = **(_QWORD **)(*(_QWORD *)v19[0] + 40LL);
              else
                v16 = 0LL;
              *(_QWORD *)(a2 + 8) = v16;
              *(_DWORD *)(a2 + 16) = *(_DWORD *)(v5 + 88);
              if ( *(_QWORD *)(*(_QWORD *)v19[0] + 8LL) )
                v4 = **(_QWORD **)(*(_QWORD *)v19[0] + 8LL);
              *(_QWORD *)(a2 + 24) = v4;
              v17 = *(_DWORD *)(v5 + 92);
              *(_DWORD *)a2 = v17;
              if ( (v17 & 2) != 0 )
                ++*(_DWORD *)(a2 + 16);
              LODWORD(v4) = 1;
            }
          }
        }
        xxxUnlockMenuStateInternal((struct tagMENUSTATE *)v5, 1);
      }
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19);
  return (unsigned int)v4;
}
