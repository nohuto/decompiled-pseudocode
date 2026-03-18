/*
 * XREFs of NtUserEnableMenuItem @ 0x1C014DEF0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxEnableMenuItem @ 0x1C00BC4A0 (xxxEnableMenuItem.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

__int64 __fastcall NtUserEnableMenuItem(__int64 a1, int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 ThreadWin32Thread; // rax
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  _QWORD v16[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v17; // [rsp+30h] [rbp-20h]
  __int128 v18; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+48h] [rbp-8h]

  v19 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 0LL);
  SmartObjStackRefBase<tagMENU>::Init(v16, 0LL);
  v17 = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004LL, v6);
LABEL_8:
    v10 = -1;
    goto LABEL_7;
  }
  v7 = ValidateHmenu(a1);
  v17 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v16, v7);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v16)
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v16[0] + 40LL) + 40LL) & 0x40) != 0 )
  {
    goto LABEL_8;
  }
  v8 = v17;
  if ( !v17 )
    v8 = *(_QWORD *)v16[0];
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v18 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v18;
  *((_QWORD *)&v18 + 1) = v8;
  HMLockObject(v8);
  v10 = xxxEnableMenuItem((__int64)v16, a2, a3);
  ThreadUnlock1(v12, v11, v13);
LABEL_7:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v16);
  UserSessionSwitchLeaveCrit(v14);
  return v10;
}
