/*
 * XREFs of NtUserMenuItemFromPoint @ 0x1C01FA2A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxMenuItemFromPoint @ 0x1C024A178 (xxxMenuItemFromPoint.c)
 */

__int64 __fastcall NtUserMenuItemFromPoint(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD v20[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v21; // [rsp+30h] [rbp-40h]
  __int128 v22; // [rsp+38h] [rbp-38h] BYREF
  __int64 v23; // [rsp+48h] [rbp-28h]
  __int128 v24; // [rsp+50h] [rbp-20h] BYREF
  __int64 v25; // [rsp+60h] [rbp-10h]
  __int64 v26; // [rsp+A0h] [rbp+30h] BYREF

  v26 = a3;
  v25 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( a1 )
  {
    v6 = ValidateHwnd(a1);
    if ( !v6 )
    {
      v7 = -1;
      goto LABEL_18;
    }
  }
  else
  {
    v6 = 0LL;
  }
  *(_QWORD *)&v22 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v22;
  *((_QWORD *)&v22 + 1) = v6;
  if ( v6 )
    HMLockObject(v6);
  SmartObjStackRefBase<tagMENU>::Init(v20, 0LL);
  v21 = 0LL;
  v8 = ValidateHmenu(a2);
  v21 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v20, v8);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v20) )
  {
    v7 = -1;
  }
  else
  {
    if ( v6 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) == 0 )
      {
        v10 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
        if ( (*(_BYTE *)(v10 + 224) & 0x20) == 0 )
        {
          v11 = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 288LL);
          if ( (((unsigned __int16)(v11 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                   v10,
                                                                                   v9) >> 8)) & 0x1FF) != 0 )
            TransformPointBetweenCoordinateSpaces(&v26, &v26, v6, 0LL);
        }
      }
    }
    v12 = v21;
    if ( !v21 )
      v12 = *(_QWORD *)v20[0];
    *(_QWORD *)&v24 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v24;
    *((_QWORD *)&v24 + 1) = v12;
    HMLockObject(v12);
    v7 = xxxMenuItemFromPoint(v6, v20, v26);
    ThreadUnlock1(v14, v13, v15);
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v20);
  ThreadUnlock1(v17, v16, v18);
LABEL_18:
  UserSessionSwitchLeaveCrit(v5);
  return v7;
}
