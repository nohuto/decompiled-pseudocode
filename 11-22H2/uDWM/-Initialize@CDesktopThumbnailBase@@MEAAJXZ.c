/*
 * XREFs of ?Initialize@CDesktopThumbnailBase@@MEAAJXZ @ 0x180016820
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x18001E800 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDesktopThumbnailBase::Initialize(CDesktopThumbnailBase *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  CDesktopManager *v4; // r10
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // esi
  unsigned int v9; // eax
  CDesktopThumbnailBase *v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = CVisual::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x28u, 0LL);
    return v3;
  }
  v4 = CDesktopManager::s_pDesktopManagerInstance;
  v10 = this;
  v5 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 188);
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v3 = -2147024362;
    v9 = 181;
    v7 = -2147024362;
    goto LABEL_9;
  }
  v7 = 0;
  if ( v6 <= *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 187) )
  {
    *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 91)
              + 8LL * *((unsigned int *)CDesktopManager::s_pDesktopManagerInstance + 188)) = this;
    *((_DWORD *)v4 + 188) = v6;
    goto LABEL_5;
  }
  v7 = DynArrayImpl<0>::AddMultipleAndSet((char *)CDesktopManager::s_pDesktopManagerInstance + 728, 8LL, 1LL, &v10);
  v3 = v7;
  if ( v7 < 0 )
  {
    v9 = 192;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, v9, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x29u, 0LL);
    return v3;
  }
LABEL_5:
  *((_BYTE *)this + 92) |= 8u;
  return (unsigned int)v7;
}
