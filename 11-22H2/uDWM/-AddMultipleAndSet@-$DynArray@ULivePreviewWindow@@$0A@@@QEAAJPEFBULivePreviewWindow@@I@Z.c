/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@ULivePreviewWindow@@$0A@@@QEAAJPEFBULivePreviewWindow@@I@Z @ 0x1800C6FE4
 * Callers:
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x1800C8FA4 (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<LivePreviewWindow,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 1;
  if ( (int)v2 + 1 >= (unsigned int)v2 )
  {
    v5 = 0;
    if ( v4 > *(_DWORD *)(a1 + 20) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet(a1, 48, 1, a2);
      v5 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xC0u);
    }
    else
    {
      v6 = 3 * v2;
      v7 = *(_QWORD *)a1;
      v6 *= 2LL;
      *(_OWORD *)(v7 + 8 * v6) = *a2;
      *(_OWORD *)(v7 + 8 * v6 + 16) = a2[1];
      *(_OWORD *)(v7 + 8 * v6 + 32) = a2[2];
      *(_DWORD *)(a1 + 24) = v4;
    }
  }
  else
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
  }
  return v5;
}
