/*
 * XREFs of ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x1800C7AD4
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x1800C6BD8 (-Activate@CLivePreview@@QEAAJXZ.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x1800C73A0 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800E6D58 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 */

void __fastcall CLivePreview::_ClearAnimatedVisuals(CLivePreview *this)
{
  char *v1; // rbx
  int v2; // eax
  __int64 v3; // rsi
  __int64 v4; // rdi
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CTopLevelWindow *v7; // rcx

  v1 = (char *)this + 312;
  v2 = *((_DWORD *)this + 84) - 1;
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = 40LL * v2;
    do
    {
      v5 = *(CBaseObject **)(*(_QWORD *)v1 + v4 + 8);
      if ( v5 )
      {
        CBaseObject::Release(v5);
        *(_QWORD *)(*(_QWORD *)v1 + v4 + 8) = 0LL;
      }
      v6 = *(CBaseObject **)(*(_QWORD *)v1 + v4 + 16);
      if ( v6 )
      {
        CBaseObject::Release(v6);
        *(_QWORD *)(*(_QWORD *)v1 + v4 + 16) = 0LL;
      }
      v7 = *(CTopLevelWindow **)(*(_QWORD *)(*(_QWORD *)v1 + v4) + 440LL);
      if ( v7 )
        CTopLevelWindow::StopLivePreviewAnimation(v7);
      v4 -= 40LL;
      --v3;
    }
    while ( v3 >= 0 );
  }
  *((_DWORD *)v1 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v1, 0x28u);
}
