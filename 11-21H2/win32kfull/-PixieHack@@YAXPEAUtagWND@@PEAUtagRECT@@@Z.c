/*
 * XREFs of ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C022EA2C
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C004B1E8 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     GetThreadDesktopWindow @ 0x1C00F26A0 (GetThreadDesktopWindow.c)
 */

void __fastcall PixieHack(struct tagWND *a1, struct tagRECT *a2)
{
  struct tagWND *v4; // rbx
  __int64 v5; // r8
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 != (struct tagWND *)GetThreadDesktopWindow(0LL) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x22) == 2 )
  {
    v4 = (struct tagWND *)*((_QWORD *)a1 + 14);
    v6 = 0LL;
    while ( v4 )
    {
      v5 = *((_QWORD *)v4 + 5);
      if ( (*(_BYTE *)(v5 + 17) & 8) == 0 && (*(_BYTE *)(v5 + 30) & 0xC0) == 0xC0 )
      {
        if ( (unsigned int)IntersectRect(&v6, &a2->left, (int *)(v5 + 88)) )
        {
          SetOrClrWF(1, v4, 0x108u, 1);
          SetOrClrWF(1, v4, 0x680u, 1);
        }
      }
      v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
    }
  }
}
