/*
 * XREFs of ?QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x180011DA8
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180027828 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Find@?$DynArray@PEAVCWindowData@@$0A@@@QEAAIIAEBQEAVCWindowData@@@Z @ 0x18001D4CC (-Find@-$DynArray@PEAVCWindowData@@$0A@@@QEAAIIAEBQEAVCWindowData@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800350F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall CWindowList::QueueDestroySprite(CWindowList *this, struct CWindowData *a2)
{
  char *v2; // rbx
  unsigned int v3; // edi
  unsigned int v4; // eax
  int v5; // ecx
  __int64 v6; // r11
  __int64 v7; // r10
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // esi
  int v11; // eax
  struct CWindowData **v13; // [rsp+40h] [rbp+8h] BYREF
  struct CWindowData *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  v2 = (char *)this + 280;
  v3 = 0;
  v4 = DynArray<CWindowData *,0>::Find((char *)this + 280, a2, &v14);
  if ( v4 >= *(_DWORD *)(v7 + 304) )
  {
    v8 = *((_DWORD *)v2 + 6);
    v9 = v8 + 1;
    if ( v8 + 1 < v8 )
    {
      v10 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
    else
    {
      v10 = 0;
      if ( v9 <= *((_DWORD *)v2 + 5) )
      {
        *(_QWORD *)(*(_QWORD *)v2 + 8LL * *((unsigned int *)v2 + 6)) = v6;
        *((_DWORD *)v2 + 6) = v9;
      }
      else
      {
        v13 = &v14;
        v11 = DynArrayImpl<0>::Grow(v5, 8, 1, 0, (__int64)&v13);
        v10 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xC0u);
        else
          *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)v2 + 6))++) + *(_QWORD *)v2) = *v13;
      }
    }
    return v10;
  }
  return v3;
}
