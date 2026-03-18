/*
 * XREFs of OffsetChildren @ 0x1C00848F0
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006E60C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1C008FE60 (zzzUpdateLayeredWindow.c)
 *     xxxScrollWindowEx @ 0x1C00BFE8C (xxxScrollWindowEx.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1C00FD5BC (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 * Callees:
 *     ?IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z @ 0x1C00490B4 (-IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z.c)
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     DirtyVisRgnTrackers @ 0x1C006C250 (DirtyVisRgnTrackers.c)
 *     OffsetWindow @ 0x1C0084A28 (OffsetWindow.c)
 *     ScaleDpiOffsetWithSubpixel @ 0x1C01DFDDC (ScaleDpiOffsetWithSubpixel.c)
 */

void __fastcall OffsetChildren(struct tagWND *a1, int a2, int a3, int *a4)
{
  __int64 v8; // rbx
  int v9; // esi
  int v10; // r12d
  int v11; // r13d
  float *v12; // r10
  __int64 v13; // rax
  _OWORD v14[3]; // [rsp+20h] [rbp-38h] BYREF
  int v15; // [rsp+60h] [rbp+8h] BYREF
  int v16; // [rsp+64h] [rbp+Ch]

  v14[0] = 0LL;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
    DirtyVisRgnTrackers(a1);
  v8 = *((_QWORD *)a1 + 14);
  if ( v8 )
  {
    v9 = 0;
    v10 = a2;
    v11 = a3;
    while ( 1 )
    {
      if ( a4 && !(unsigned int)IntersectRect(v14, a4, (int *)(*(_QWORD *)(v8 + 40) + 88LL)) )
        goto LABEL_19;
      if ( IsDpiBoundaryBetweenWindows((const struct tagWND *)v8, a1) )
      {
        v15 = a2;
        v16 = a3;
        ScaleDpiOffsetWithSubpixel(&v15, v12, (struct tagWND *)v8, a1);
        a2 = v15;
        v9 = 1;
        a3 = v16;
      }
      else
      {
        *v12 = *((float *)a1 + 56);
        *(_DWORD *)(v8 + 228) = *((_DWORD *)a1 + 57);
      }
      OffsetWindow((tagWND *)v8);
      if ( v9 )
      {
        a2 = v10;
        a3 = v11;
      }
      v13 = *(_QWORD *)(v8 + 112);
      v9 = 0;
      if ( !v13 )
      {
LABEL_19:
        while ( 1 )
        {
          v13 = *(_QWORD *)(v8 + 88);
          if ( v13 )
            break;
          v8 = *(_QWORD *)(v8 + 104);
          if ( (struct tagWND *)v8 == a1 )
            return;
        }
      }
      v8 = v13;
    }
  }
}
