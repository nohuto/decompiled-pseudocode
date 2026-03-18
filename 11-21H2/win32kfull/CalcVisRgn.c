/*
 * XREFs of CalcVisRgn @ 0x1C004B8D0
 * Callers:
 *     zzzResetSharedDesktops @ 0x1C00999A0 (zzzResetSharedDesktops.c)
 *     ?GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z @ 0x1C00B4AAC (-GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00DF0C0 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     _VisrgnFromWindow @ 0x1C0102848 (_VisrgnFromWindow.c)
 *     InvalidateGDIWindows @ 0x1C01E30E0 (InvalidateGDIWindows.c)
 *     UserGetClientRgn @ 0x1C01E3204 (UserGetClientRgn.c)
 *     NtUserGetWindowRgnEx @ 0x1C01F7560 (NtUserGetWindowRgnEx.c)
 * Callees:
 *     _IsDescendant @ 0x1C00205E8 (_IsDescendant.c)
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C004BDA0 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     GetStyleWindow @ 0x1C004CDA0 (GetStyleWindow.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall CalcVisRgn(HRGN *a1, _QWORD *a2, const struct tagWND *a3, unsigned int a4)
{
  const struct tagWND *v4; // r15
  unsigned int v5; // r13d
  __int64 v6; // rsi
  __int64 v7; // r8
  HRGN *v8; // r14
  __int64 v9; // rcx
  char v10; // al
  int v11; // r12d
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // r15
  _QWORD *Prop; // rbx
  __int64 v17; // rcx
  _QWORD *v18; // rbx
  int v19; // ecx
  __int64 v20; // rdi
  __int64 v21; // rsi
  _QWORD *v22; // rdi
  __int64 v23; // r9
  int v24; // eax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  tagObjLock **v29; // r14
  tagObjLock **v30; // rdi
  __int128 v33; // [rsp+60h] [rbp-11h] BYREF
  char v34; // [rsp+70h] [rbp-1h]
  char v35; // [rsp+78h] [rbp+7h]

  v4 = a3;
  v5 = a4;
  v6 = (__int64)a2;
  v7 = a2[3];
  v8 = a1;
  do
  {
    v9 = a2[5];
    v10 = *(_BYTE *)(v9 + 31);
    if ( (v10 & 0x10) == 0 || (v10 & 0x20) != 0 && a2 != (_QWORD *)v6 )
      goto LABEL_44;
    if ( (*(_WORD *)(v9 + 42) & 0x2FFF) == 0x29D )
      break;
    a2 = (_QWORD *)a2[13];
  }
  while ( a2 );
  if ( v7 == grpdeskRitInput
    || (a4 & 0x4000) != 0
    || GetStyleWindow(v6, 2568LL) && ((v5 & 0x8000000) == 0 || (unsigned int)IsWindowDesktopComposed(v6)) )
  {
    v11 = 0;
    if ( (v5 & 0x4000) != 0 )
    {
      v12 = (_QWORD *)v6;
      while ( 1 )
      {
        v13 = v12[5];
        if ( (*(_BYTE *)(v13 + 27) & 0x20) != 0 )
          break;
        v12 = (_QWORD *)v12[13];
        if ( !v12 )
          goto LABEL_18;
      }
      if ( (*(_WORD *)(v13 + 42) & 0x2FFF) != 0x29D || v12 == (_QWORD *)v6 )
      {
        v14 = v12[18];
        v15 = (unsigned __int16)atomLayer;
        v33 = 0LL;
        v34 = 0;
        v35 = 0;
        if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser) )
        {
          v35 = 1;
          if ( v14 == gObjDummyLock )
            v14 = 0LL;
          *(_QWORD *)&v33 = v14;
          v29 = (tagObjLock **)&v33;
          do
          {
            if ( *v29 )
              tagObjLock::LockExclusive(*v29);
            ++v11;
            ++v29;
          }
          while ( !v11 );
          v34 = 1;
          v11 = 0;
        }
        Prop = (_QWORD *)RealGetProp(v12[18], v15, 1LL);
        if ( v35 && v34 )
        {
          if ( (_QWORD)v33 )
            tagObjLock::UnLockExclusive((tagObjLock *)v33);
          v34 = 0;
        }
        if ( !Prop || !*Prop )
          goto LABEL_44;
        v8 = a1;
        v4 = a3;
      }
    }
LABEL_18:
    v17 = gspwndLockUpdate;
    if ( !gspwndLockUpdate || (v5 & 0x400) != 0 || !(unsigned int)IsDescendant(gspwndLockUpdate, v6) )
    {
      if ( (unsigned int)UpdatesLockedForDwm(v17) )
      {
        if ( (v5 & 0x4000) == 0 )
          goto LABEL_44;
      }
      else if ( (v5 & 0x4000) == 0 )
      {
        return CalcVisRgnWorker(v4, v8, v5);
      }
      v18 = (_QWORD *)v6;
      while ( 1 )
      {
        v19 = *(_DWORD *)(v18[5] + 24LL);
        if ( (v19 & 0x80000) != 0 || (v19 & 0x20000000) != 0 )
          break;
        v18 = (_QWORD *)v18[13];
        if ( !v18 )
          return CalcVisRgnWorker(v4, v8, v5);
      }
      if ( v18 == (_QWORD *)v6 )
        goto LABEL_27;
      v26 = v18[3];
      v27 = 0LL;
      if ( v26 )
      {
        v28 = *(_QWORD *)(v26 + 8);
        if ( v28 )
          v27 = *(_QWORD **)(v28 + 24);
      }
      if ( v18 != v27 )
      {
LABEL_27:
        if ( v18 )
        {
          v20 = v18[18];
          v21 = (unsigned __int16)atomLayer;
          v33 = 0LL;
          v34 = 0;
          v35 = 0;
          if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser) )
          {
            v35 = 1;
            if ( v20 == gObjDummyLock )
              v20 = 0LL;
            *(_QWORD *)&v33 = v20;
            if ( !v34 )
            {
              v30 = (tagObjLock **)&v33;
              do
              {
                if ( *v30 )
                  tagObjLock::LockExclusive(*v30);
                ++v11;
                ++v30;
              }
              while ( !v11 );
              v34 = 1;
            }
          }
          v22 = (_QWORD *)RealGetProp(v18[18], v21, 1LL);
          if ( v35 && v34 )
          {
            if ( (_QWORD)v33 )
              tagObjLock::UnLockExclusive((tagObjLock *)v33);
            v34 = 0;
          }
          if ( v22 )
          {
            if ( *v22 )
            {
              v23 = v18[5];
              if ( (*(_DWORD *)(v23 + 24) & 0x20000000) != 0 )
              {
                v24 = *(_DWORD *)(v23 + 232);
                if ( (v24 & 2) != 0 && (v24 & 1) == 0 )
                  v5 &= ~0x4000u;
              }
            }
          }
        }
      }
      return CalcVisRgnWorker(v4, v8, v5);
    }
  }
LABEL_44:
  SetOrCreateRectRgnIndirectPublic(a1, gZero);
  return 0LL;
}
