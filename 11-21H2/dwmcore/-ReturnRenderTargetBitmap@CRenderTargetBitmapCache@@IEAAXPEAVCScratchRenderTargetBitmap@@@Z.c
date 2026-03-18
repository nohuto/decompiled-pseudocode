/*
 * XREFs of ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@IEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800BA4E4
 * Callers:
 *     ?FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ @ 0x1800BA490 (-FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x1800402F0 (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007E4F4 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

void __fastcall CRenderTargetBitmapCache::ReturnRenderTargetBitmap(
        CRenderTargetBitmapCache *this,
        struct CScratchRenderTargetBitmap *a2)
{
  struct CComposition *CurrentFrameId; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned int v7; // r8d
  int v8; // eax
  __int64 v9; // rcx
  struct CComposition *v10; // rbp
  __int64 v11; // rsi
  struct CScratchRenderTargetBitmap *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  if ( *((_BYTE *)a2 + 177) )
    --*((_DWORD *)this + 10);
  CurrentFrameId = GetCurrentFrameId();
  *(_QWORD *)(v5 + 168) = CurrentFrameId;
  LODWORD(v6) = *(_DWORD *)(v4 + 24);
  if ( (unsigned int)v6 >= 0x20 )
  {
    v10 = GetCurrentFrameId();
    do
    {
      v4 = *(_QWORD *)this;
      v6 = (unsigned int)(v6 - 1);
      v11 = *(_QWORD *)(*(_QWORD *)this + 8 * v6);
      if ( (unsigned __int64)v10 - *(_QWORD *)(v11 + 168) > 1 )
      {
        DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt((__int64 *)this, v6);
        *(_BYTE *)(v11 + 176) = 0;
        CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v11);
      }
    }
    while ( (_DWORD)v6 );
    LODWORD(v6) = *((_DWORD *)this + 6);
  }
  v7 = v6 + 1;
  if ( (int)v6 + 1 < (unsigned int)v6 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0LL, -2147024362, 0xB5u);
  }
  else
  {
    if ( v7 <= *((_DWORD *)this + 5) )
    {
      *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)v6) = v12;
      *((_DWORD *)this + 6) = v7;
LABEL_7:
      CMILRefCountImpl::AddReference((struct CScratchRenderTargetBitmap *)((char *)v12 + 8));
      return;
    }
    v8 = DynArrayImpl<0>::AddMultipleAndSet(this, 8LL, 1LL, &v12);
    if ( v8 >= 0 )
      goto LABEL_7;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0xC0u);
  }
}
