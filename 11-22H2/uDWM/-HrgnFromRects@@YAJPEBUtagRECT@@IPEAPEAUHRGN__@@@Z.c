/*
 * XREFs of ?HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z @ 0x18001B134
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x18001ACB4 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x180066358 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall HrgnFromRects(const struct tagRECT *Src, unsigned int a2, HRGN *a3)
{
  unsigned __int64 v3; // rdi
  __int64 v7; // rsi
  unsigned __int128 v8; // xmm0
  unsigned int v9; // ebx
  HRGN Region; // rax
  LONG v12; // eax
  LONG *p_right; // rcx
  LONG v14; // edx
  __int64 v15; // r10
  LONG v16; // r8d
  LONG v17; // r9d
  signed int LastError; // eax
  unsigned int v19; // [rsp+20h] [rbp-38h]
  unsigned __int128 v20; // [rsp+30h] [rbp-28h]

  v3 = 16LL * a2;
  if ( v3 > 0xFFFFFFFF )
  {
    v19 = 197;
    goto LABEL_28;
  }
  if ( (int)v3 + 36 < (unsigned int)v3 )
  {
    v19 = 198;
LABEL_28:
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, v19, 0LL);
    return v9;
  }
  v7 = (*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         (unsigned int)(v3 + 36));
  if ( v7 )
  {
    v8 = (unsigned __int128)*Src;
    v9 = 0;
    if ( a2 > 1 )
    {
      v12 = HIDWORD(*(unsigned __int128 *)Src);
      p_right = &Src[1].right;
      v14 = *(_QWORD *)&Src->right;
      v15 = a2 - 1;
      v16 = HIDWORD(*(_QWORD *)&Src->left);
      v17 = (LONG)*Src;
      do
      {
        if ( *(p_right - 2) < v17 )
          v17 = *(p_right - 2);
        if ( *(p_right - 1) < v16 )
          v16 = *(p_right - 1);
        if ( *p_right > v14 )
          v14 = *p_right;
        if ( p_right[1] > v12 )
          v12 = p_right[1];
        p_right += 4;
        --v15;
      }
      while ( v15 );
      *((_QWORD *)&v20 + 1) = __PAIR64__(v12, v14);
      *(_QWORD *)&v20 = __PAIR64__(v16, v17);
      v8 = v20;
    }
    *(_DWORD *)v7 = 32;
    *(_DWORD *)(v7 + 4) = 1;
    *(_DWORD *)(v7 + 8) = a2;
    *(_DWORD *)(v7 + 12) = v3;
    *(_OWORD *)(v7 + 16) = v8;
    memcpy_0((void *)(v7 + 32), Src, (unsigned int)v3);
    SetLastError(0);
    Region = ExtCreateRegion(0LL, (int)v3 + 36, (const RGNDATA *)v7);
    if ( Region )
    {
      *a3 = Region;
    }
    else
    {
      LastError = GetLastError();
      v9 = LastError;
      if ( LastError > 0 )
        v9 = (unsigned __int16)LastError | 0x80070000;
      if ( (v9 & 0x80000000) == 0 )
        v9 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xEAu, 0LL);
    }
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v7);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xCFu, 0LL);
  }
  return v9;
}
