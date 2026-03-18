/*
 * XREFs of bDeleteAllFlEntry @ 0x1C015E790
 * Callers:
 *     GreEnableEUDC @ 0x1C00991AC (GreEnableEUDC.c)
 * Callees:
 *     bUnloadEudcFont @ 0x1C00119A4 (bUnloadEudcFont.c)
 *     vLinkEudcPFEs @ 0x1C010E458 (vLinkEudcPFEs.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXXZ @ 0x1C015EA48 (-vUnlinkAllEudcFromRFONTList@@YAXXZ.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C015EC88 (vUnlinkAllEudcRFONTsAndPFEs.c)
 */

__int64 bDeleteAllFlEntry()
{
  _UNKNOWN **v1; // rbx
  int v2; // eax
  int v3; // esi
  char v4; // di
  _UNKNOWN **v5; // rcx
  int v6; // r9d
  _QWORD *v7; // rdx
  _QWORD *v8; // r8
  int v9; // r11d
  _QWORD *v10; // r11
  _QWORD *v11; // r11
  _UNKNOWN ***v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  _QWORD *v17; // rcx
  _QWORD *v18; // [rsp+20h] [rbp-20h] BYREF
  _QWORD **v19; // [rsp+28h] [rbp-18h]
  __int128 v20; // [rsp+30h] [rbp-10h] BYREF

  v19 = &v18;
  v18 = &v18;
  v20 = 0LL;
  GreAcquireSemaphore(ghsemEUDC1);
  if ( gcEUDCCount <= 0 )
  {
    vUnlinkAllEudcRFONTsAndPFEs(1LL);
    vUnlinkAllEudcFromRFONTList();
    if ( *(_OWORD *)&gappfeSysEUDC != 0LL )
    {
      ++dword_1C0336378;
      Dst = 0;
      v20 = *(_OWORD *)&gappfeSysEUDC;
      *(_OWORD *)&gappfeSysEUDC = 0LL;
    }
    v1 = (_UNKNOWN **)off_1C0326330;
    if ( off_1C0326330 != (_UNKNOWN *)&off_1C0326330 )
    {
      v2 = dword_1C0336374;
      v3 = dword_1C0336374;
      v4 = dword_1C0336380;
      do
      {
        v5 = v1;
        v6 = 0;
        v1 = (_UNKNOWN **)*v1;
        v7 = v5[2];
        if ( v7 == v5 + 2 )
          goto LABEL_21;
        do
        {
          v8 = v7;
          v7 = (_QWORD *)*v7;
          v9 = *((_DWORD *)v8 + 4);
          if ( !v9 && (v4 & 2) != 0 || v9 == 1 && (v4 & 8) != 0 )
          {
            if ( (_QWORD *)v7[1] != v8 )
              goto LABEL_37;
            v10 = (_QWORD *)v8[1];
            if ( (_QWORD *)*v10 != v8 )
              goto LABEL_37;
            *v10 = v7;
            v7[1] = v10;
            v11 = v19;
            if ( *v19 != &v18 )
              goto LABEL_37;
            v8[1] = v19;
            *v8 = &v18;
            *v11 = v8;
            v19 = (_QWORD **)v8;
          }
          else
          {
            ++v6;
          }
        }
        while ( v7 != v5 + 2 );
        if ( !v6 )
        {
LABEL_21:
          v12 = (_UNKNOWN ***)*v5;
          if ( *((_UNKNOWN ***)*v5 + 1) != v5 || (v13 = v5[1], (_UNKNOWN **)*v13 != v5) )
LABEL_37:
            __fastfail(3u);
          *v13 = v12;
          v12[1] = (_UNKNOWN **)v13;
          Win32FreePool(v5);
          v4 = dword_1C0336380;
          v2 = --dword_1C0336374;
        }
        else if ( *((_DWORD *)v5 + 25) != v6 )
        {
          ++*((_DWORD *)v5 + 26);
          *((_DWORD *)v5 + 25) = v6;
        }
      }
      while ( v1 != &off_1C0326330 );
      if ( v3 != v2 )
        ++dword_1C033637C;
      if ( v2 )
        vLinkEudcPFEs(0LL);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    if ( v20 != 0 )
      bUnloadEudcFont((__int64)&v20);
    v14 = v18;
    while ( v14 != &v18 )
    {
      v15 = (_QWORD *)*v14;
      v16 = v14;
      v14 = v15;
      if ( (_QWORD *)v15[1] != v16 )
        goto LABEL_37;
      v17 = (_QWORD *)v16[1];
      if ( (_QWORD *)*v17 != v16 )
        goto LABEL_37;
      *v17 = v15;
      v15[1] = v17;
      bUnloadEudcFont((__int64)(v16 + 4));
      Win32FreePool(v16);
    }
    return 1LL;
  }
  else
  {
    EngSetLastError(0xA7u);
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    return 0LL;
  }
}
