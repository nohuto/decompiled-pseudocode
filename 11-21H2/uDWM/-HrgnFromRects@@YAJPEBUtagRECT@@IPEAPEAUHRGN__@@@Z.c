/*
 * XREFs of ?HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z @ 0x18002977C
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180028C20 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1800636FB (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall HrgnFromRects(const struct tagRECT *Src, unsigned int a2, HRGN *a3)
{
  unsigned __int64 v3; // rdi
  DWORD v7; // r14d
  unsigned int v8; // ebx
  __int64 v9; // rsi
  unsigned __int128 v10; // xmm0
  HRGN Region; // rax
  LONG v13; // eax
  LONG *p_right; // rcx
  LONG v15; // edx
  __int64 v16; // r10
  LONG v17; // r8d
  LONG v18; // r9d
  signed int LastError; // eax
  unsigned int v20; // [rsp+20h] [rbp-38h]
  unsigned __int128 v21; // [rsp+30h] [rbp-28h]

  v3 = 16LL * a2;
  if ( v3 > 0xFFFFFFFF )
  {
    v20 = 197;
    goto LABEL_28;
  }
  v7 = v3 + 36;
  if ( (int)v3 + 36 < (unsigned int)v3 )
  {
    v20 = 198;
LABEL_28:
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, v20);
    return v8;
  }
  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         v7);
  if ( v9 )
  {
    v10 = (unsigned __int128)*Src;
    if ( a2 > 1 )
    {
      v13 = HIDWORD(*(unsigned __int128 *)Src);
      p_right = &Src[1].right;
      v15 = *(_QWORD *)&Src->right;
      v16 = a2 - 1;
      v17 = HIDWORD(*(_QWORD *)&Src->left);
      v18 = (LONG)*Src;
      do
      {
        if ( *(p_right - 2) < v18 )
          v18 = *(p_right - 2);
        if ( *(p_right - 1) < v17 )
          v17 = *(p_right - 1);
        if ( *p_right > v15 )
          v15 = *p_right;
        if ( p_right[1] > v13 )
          v13 = p_right[1];
        p_right += 4;
        --v16;
      }
      while ( v16 );
      *((_QWORD *)&v21 + 1) = __PAIR64__(v13, v15);
      *(_QWORD *)&v21 = __PAIR64__(v17, v18);
      v10 = v21;
    }
    *(_DWORD *)v9 = 32;
    *(_DWORD *)(v9 + 4) = 1;
    *(_DWORD *)(v9 + 8) = a2;
    *(_DWORD *)(v9 + 12) = v3;
    *(_OWORD *)(v9 + 16) = v10;
    memcpy_0((void *)(v9 + 32), Src, (unsigned int)v3);
    SetLastError(0);
    Region = ExtCreateRegion(0LL, v7, (const RGNDATA *)v9);
    if ( Region )
    {
      *a3 = Region;
    }
    else
    {
      LastError = GetLastError();
      v8 = LastError;
      if ( LastError > 0 )
        v8 = (unsigned __int16)LastError | 0x80070000;
      if ( (v8 & 0x80000000) == 0 )
        v8 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xEAu);
    }
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v9);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xCFu);
  }
  return v8;
}
