/*
 * XREFs of NtUserSetMenu @ 0x1C01DBF90
 * Callers:
 *     <none>
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00635B4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C0064FE4 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C009D540 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C009E5C0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     xxxSetMenu @ 0x1C0231EDC (xxxSetMenu.c)
 */

__int64 __fastcall NtUserSetMenu(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  struct tagWND *v10; // rsi
  __int64 v11; // rax
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

  v25 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v9 = 0;
  v10 = (struct tagWND *)v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 40);
    v5 = (*(_WORD *)(v6 + 42) & 0x2FFFu) - 669;
    if ( (v5 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v22 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v22;
      *((_QWORD *)&v22 + 1) = v4;
      HMLockObject(v4);
      SmartObjStackRefBase<tagMENU>::Init(v20, 0LL);
      v21 = 0LL;
      if ( a2 )
      {
        v11 = ValidateHmenu(a2);
        v21 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v20, v11);
        if ( SmartObjStackRef<tagMENU>::operator==((__int64)v20) )
        {
LABEL_15:
          SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v20);
          ThreadUnlock1(v17, v16, v18);
          goto LABEL_16;
        }
      }
      else
      {
        SmartObjStackRefBase<tagMENU>::operator=(v20, 0LL);
      }
      if ( SmartObjStackRef<tagMENU>::operator==((__int64)v20)
        || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v20[0] + 40LL) + 40LL) & 1) == 0 )
      {
        v12 = v21;
        if ( !v21 )
          v12 = *(_QWORD *)v20[0];
        *(_QWORD *)&v24 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v24;
        *((_QWORD *)&v24 + 1) = v12;
        if ( v12 )
          HMLockObject(v12);
        v9 = xxxSetMenu(v10);
        ThreadUnlock1(v14, v13, v15);
      }
      else
      {
        UserSetLastError(87);
      }
      goto LABEL_15;
    }
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
