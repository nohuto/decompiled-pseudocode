/*
 * XREFs of ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x1800C31CC
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x1800C1F14 (-Activate@CLivePreview@@QEAAJXZ.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x1800C26E0 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800111F0 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CLivePreview::_ClearAnimatedVisuals(CLivePreview *this)
{
  int v2; // eax
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CTopLevelWindow *v8; // rcx

  v2 = *((_DWORD *)this + 84) - 1;
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = 40LL * v2;
    do
    {
      v5 = *((_QWORD *)this + 39);
      v6 = *(CBaseObject **)(v4 + v5 + 8);
      if ( v6 )
      {
        CBaseObject::Release(v6);
        *(_QWORD *)(*((_QWORD *)this + 39) + v4 + 8) = 0LL;
        v5 = *((_QWORD *)this + 39);
      }
      v7 = *(CBaseObject **)(v4 + v5 + 16);
      if ( v7 )
      {
        CBaseObject::Release(v7);
        *(_QWORD *)(*((_QWORD *)this + 39) + v4 + 16) = 0LL;
        v5 = *((_QWORD *)this + 39);
      }
      v8 = *(CTopLevelWindow **)(*(_QWORD *)(v4 + v5) + 440LL);
      if ( v8 )
        CTopLevelWindow::StopLivePreviewAnimation(v8);
      v4 -= 40LL;
      --v3;
    }
    while ( v3 >= 0 );
  }
  *((_DWORD *)this + 84) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 312, 0x28u);
}
