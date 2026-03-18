/*
 * XREFs of ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C001F87C
 * Callers:
 *     SetRedirectedWindow @ 0x1C001F9FC (SetRedirectedWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C008F778 (RecreateRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x1C00B40A4 (UnsetRedirectedWindow.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E216C (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01E2880 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C0069510 (InternalRemoveProp.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     InternalSetProp @ 0x1C0083110 (InternalSetProp.c)
 *     GreAccNotifyWindow @ 0x1C00909D4 (GreAccNotifyWindow.c)
 */

__int64 __fastcall SetRedirectionBitmap(struct tagWND *a1, HBITMAP a2, int a3)
{
  unsigned int v5; // ebx
  __int64 Prop; // rdi
  __int64 v8; // rsi
  __int64 v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rdi

  v5 = 0;
  Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  if ( !Prop && !a3 )
  {
    v10 = Win32AllocPoolZInit(48LL, 1919185493LL);
    Prop = v10;
    if ( v10 )
    {
      if ( !(unsigned int)InternalSetProp(a1, (unsigned __int16)atomLayer, v10, 1LL) )
      {
        Win32FreePool(Prop);
        Prop = 0LL;
      }
    }
  }
  if ( a2 )
  {
    if ( !Prop )
      return v5;
    DeleteMaybeSpecialRgn(*(_QWORD *)(Prop + 40));
    *(_QWORD *)(Prop + 40) = 0LL;
    *(_OWORD *)(Prop + 16) = 0LL;
    if ( *(HBITMAP *)Prop != a2 )
    {
      GreAccNotifyWindow(*(_QWORD *)Prop, 0LL);
      GreAccNotifyWindow(a2, *(_QWORD *)a1);
      *(_QWORD *)Prop = a2;
    }
  }
  else if ( a3 )
  {
    v11 = (_QWORD *)InternalRemoveProp(a1, (unsigned __int16)atomLayer, 1LL);
    v12 = v11;
    if ( v11 )
    {
      v8 = *v11;
      DeleteMaybeSpecialRgn(v11[5]);
      Win32FreePool(v12);
LABEL_6:
      if ( v8 )
        GreAccNotifyWindow(v8, 0LL);
    }
  }
  else if ( Prop )
  {
    v8 = *(_QWORD *)Prop;
    *(_QWORD *)Prop = 0LL;
    *(_OWORD *)(Prop + 16) = 0LL;
    DeleteMaybeSpecialRgn(*(_QWORD *)(Prop + 40));
    *(_QWORD *)(Prop + 40) = 0LL;
    goto LABEL_6;
  }
  return 1;
}
