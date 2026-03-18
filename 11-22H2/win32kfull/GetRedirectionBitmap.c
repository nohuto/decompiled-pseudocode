/*
 * XREFs of GetRedirectionBitmap @ 0x1C011DD30
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C008E138 (zzzUpdateWindowsAfterModeChange.c)
 *     RecreateRedirectionBitmap @ 0x1C008E968 (RecreateRedirectionBitmap.c)
 *     UpdateRedirectedDCE @ 0x1C008EDF0 (UpdateRedirectedDCE.c)
 *     UnsetRedirectedWindow @ 0x1C00C881C (UnsetRedirectedWindow.c)
 *     SetRedirectedWindow @ 0x1C00D36F4 (SetRedirectedWindow.c)
 *     _SetLayeredWindowAttributes @ 0x1C00D5980 (_SetLayeredWindowAttributes.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00F7B60 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ChangeWindowBitmapOwner @ 0x1C01BCC34 (ChangeWindowBitmapOwner.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01BCEF0 (UserRecreateRedirectionBitmap.c)
 *     zzzUpdateLayeredWindow @ 0x1C01BD720 (zzzUpdateLayeredWindow.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 */

__int64 __fastcall GetRedirectionBitmap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  PERESOURCE *v7; // rax
  tagObjLock **v8; // rbx
  int v9; // edi
  __int64 Prop; // rbx
  __int128 v12; // [rsp+48h] [rbp-40h] BYREF
  char v13; // [rsp+58h] [rbp-30h]
  char v14; // [rsp+60h] [rbp-28h]

  v4 = *(_QWORD *)(a1 + 144);
  v12 = 0LL;
  v13 = 0;
  v5 = (unsigned __int16)atomLayer;
  v14 = 0;
  v7 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
  if ( ExIsResourceAcquiredExclusiveLite(*v7) != 1 && IS_USERCRIT_OWNED_AT_ALL() )
  {
    v14 = 1;
    if ( v4 == gObjDummyLock )
      v4 = 0LL;
    *(_QWORD *)&v12 = v4;
    v8 = (tagObjLock **)&v12;
    v9 = 0;
    do
    {
      if ( *v8 )
        tagObjLock::LockExclusive(*v8);
      ++v9;
      ++v8;
    }
    while ( !v9 );
    v13 = 1;
  }
  Prop = RealGetProp(*(_QWORD *)(a1 + 144), v5, 1LL);
  if ( v14 && v13 )
  {
    if ( (_QWORD)v12 )
      tagObjLock::UnLockExclusive((tagObjLock *)v12);
    v13 = 0;
  }
  if ( Prop )
    return *(_QWORD *)Prop;
  else
    return 0LL;
}
