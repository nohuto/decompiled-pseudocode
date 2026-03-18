/*
 * XREFs of ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1800FF900
 * Callers:
 *     ?Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETCURSOR@@@Z @ 0x1800FF89C (-Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_P.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?FindCursorVisual@CComposition@@QEAAPEAVCExcludeVisualReference@@PEBVCVisual@@@Z @ 0x1801037BC (-FindCursorVisual@CComposition@@QEAAPEAVCExcludeVisualReference@@PEBVCVisual@@@Z.c)
 *     ??_GCExcludeVisualReference@@QEAAPEAXI@Z @ 0x180192CAC (--_GCExcludeVisualReference@@QEAAPEAXI@Z.c)
 *     ?Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1801A9144 (-Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CComposition::AddCursorVisual(CComposition *this, struct CVisual *a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // edx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // r8d
  int v10; // edi
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  CExcludeVisualReference *v15; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v15 = 0LL;
  if ( !CComposition::FindCursorVisual(this, a2) )
  {
    v6 = CExcludeVisualReference::Create(a2, &v15);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0xB95u);
    }
    else
    {
      v8 = *((_DWORD *)this + 248);
      v9 = v8 + 1;
      if ( v8 + 1 >= v8 )
      {
        if ( v9 <= *((_DWORD *)this + 247) )
        {
          v2 = 0;
          *(_QWORD *)(*((_QWORD *)this + 121) + 8LL * *((unsigned int *)this + 248)) = v15;
          *((_DWORD *)this + 248) = v9;
          return v2;
        }
        v12 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)this + 968, 8u, 1, &v15);
        v10 = v12;
        v2 = v12;
        if ( v12 >= 0 )
          return v2;
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0xC0u);
      }
      else
      {
        v2 = -2147024362;
        v10 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2147024362, 0xB5u);
      }
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0xB97u);
    }
  }
  if ( v15 )
    CExcludeVisualReference::`scalar deleting destructor'(v15, v5);
  return v2;
}
