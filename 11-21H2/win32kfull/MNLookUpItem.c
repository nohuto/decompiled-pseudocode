/*
 * XREFs of MNLookUpItem @ 0x1C0067EE0
 * Callers:
 *     xxxInsertMenuItem @ 0x1C0065F38 (xxxInsertMenuItem.c)
 *     MNLookUpItem @ 0x1C0067EE0 (MNLookUpItem.c)
 *     xxxMNCanClose @ 0x1C0068094 (xxxMNCanClose.c)
 *     DwmGetClassStyle @ 0x1C0098E00 (DwmGetClassStyle.c)
 *     ?MenuItemState@@YAKAEBV?$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z @ 0x1C00BC6A4 (-MenuItemState@@YAKAEBV-$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z.c)
 *     _SetMenuDefaultItem @ 0x1C00BC748 (_SetMenuDefaultItem.c)
 *     xxxSetMenuItemInfo @ 0x1C00BCB7C (xxxSetMenuItemInfo.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00C20C0 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     _GetMenuState @ 0x1C00C8FD8 (_GetMenuState.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C014F628 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C014F6C0 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     MNLookUpItem @ 0x1C0067EE0 (MNLookUpItem.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C0068450 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 */

_QWORD *__fastcall MNLookUpItem(__int64 a1, unsigned int a2, int a3, __int64 *a4)
{
  __int64 v5; // rbp
  _QWORD *v8; // r14
  __int64 v9; // rdi
  __int64 *ThreadWin32Thread; // rax
  int v11; // ecx
  _QWORD *v12; // rdi
  __int64 v13; // r10
  int v14; // ecx
  __int64 v15; // rbx
  __int64 *v16; // rax
  _QWORD *v17; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 *v21; // [rsp+20h] [rbp-38h] BYREF
  __int64 v22; // [rsp+28h] [rbp-30h] BYREF
  __int64 v23; // [rsp+30h] [rbp-28h]

  v5 = a2;
  v8 = 0LL;
  v9 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v9 = *ThreadWin32Thread;
  v21 = (__int64 *)gSmartObjNullRef;
  v22 = *(_QWORD *)(v9 + 1472);
  *(_QWORD *)(v9 + 1472) = &v22;
  v23 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( !a1 )
    goto LABEL_31;
  v11 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL);
  if ( !v11 || (_DWORD)v5 == -1 )
    goto LABEL_31;
  if ( a3 )
  {
    if ( (unsigned int)v5 < v11 )
    {
      v19 = *(_QWORD *)(a1 + 88) + 96 * v5;
      if ( a4 )
        *a4 = a1;
      goto LABEL_26;
    }
LABEL_31:
    v19 = 0LL;
LABEL_26:
    v12 = (_QWORD *)v19;
    goto LABEL_17;
  }
  v12 = *(_QWORD **)(a1 + 88);
  if ( v11 <= 0 )
  {
LABEL_13:
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)&v21) )
    {
      v8 = 0LL;
    }
    else if ( a4 )
    {
      v20 = v23;
      if ( !v23 )
        v20 = *v21;
      *a4 = v20;
    }
    goto LABEL_18;
  }
  while ( 1 )
  {
    v13 = v12[2];
    v14 = *(_DWORD *)(*v12 + 8LL);
    if ( !v13 )
      break;
    if ( v14 == (_DWORD)v5 )
    {
      v23 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)&v21, a1);
      v13 = v12[2];
      v8 = v12;
    }
    v19 = MNLookUpItem(v13, (unsigned int)v5, 0LL, a4);
    if ( v19 )
      goto LABEL_26;
LABEL_12:
    ++a3;
    v12 += 12;
    if ( a3 >= *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL) )
      goto LABEL_13;
  }
  if ( v14 != (_DWORD)v5 )
    goto LABEL_12;
  if ( a4 )
    *a4 = a1;
LABEL_17:
  v8 = v12;
LABEL_18:
  v15 = 0LL;
  v16 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v16 )
    v15 = *v16;
  SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v21);
  v17 = *(_QWORD **)(v15 + 1472);
  if ( v17 )
    *(_QWORD *)(v15 + 1472) = *v17;
  return v8;
}
