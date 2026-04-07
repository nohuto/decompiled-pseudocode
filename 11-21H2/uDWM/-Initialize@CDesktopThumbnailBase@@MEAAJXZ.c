/*
 * XREFs of ?Initialize@CDesktopThumbnailBase@@MEAAJXZ @ 0x1800B2AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180038D40 (-Initialize@CVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CDesktopThumbnailBase::Initialize(CDesktopThumbnailBase *this)
{
  int v2; // eax
  int v3; // ebx
  int v4; // r9d
  CDesktopManager *v5; // r10
  unsigned int v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // eax
  unsigned int v10; // [rsp+20h] [rbp-18h]
  CDesktopThumbnailBase *v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = CVisual::Initialize(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = CDesktopManager::s_pDesktopManagerInstance;
    v11 = this;
    v6 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 184);
    v7 = v6 + 1;
    if ( v6 + 1 < v6 )
    {
      v3 = -2147024362;
      v8 = 181;
LABEL_12:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, v8);
      v4 = v3;
      v10 = 41;
      goto LABEL_3;
    }
    if ( v7 > *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 183) )
    {
      v3 = DynArrayImpl<0>::AddMultipleAndSet((__int64)CDesktopManager::s_pDesktopManagerInstance + 712, 8u, 1, &v11);
      if ( v3 < 0 )
      {
        v8 = 192;
        goto LABEL_12;
      }
    }
    else
    {
      v3 = 0;
      *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 89)
                + 8LL * *((unsigned int *)CDesktopManager::s_pDesktopManagerInstance + 184)) = this;
      *((_DWORD *)v5 + 184) = v7;
    }
    *((_BYTE *)this + 92) |= 8u;
    return (unsigned int)v3;
  }
  v4 = v2;
  v10 = 40;
LABEL_3:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, v10);
  return (unsigned int)v3;
}
