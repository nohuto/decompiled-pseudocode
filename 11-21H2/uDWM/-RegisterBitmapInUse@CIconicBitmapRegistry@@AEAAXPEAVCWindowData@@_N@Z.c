/*
 * XREFs of ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x1800BEE90
 * Callers:
 *     ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x18004B894 (-_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PE.c)
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18004BE50 (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180011268 (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18001F274 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800350F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?Find@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x1800693F8 (-Find@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 */

void __fastcall CIconicBitmapRegistry::RegisterBitmapInUse(CIconicBitmapRegistry *this, struct CWindowData *a2)
{
  char v3; // r8
  __int64 v4; // r11
  __int64 v5; // rbx
  __int64 *v6; // rcx
  __int64 v7; // r11
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v10; // eax
  struct CWindowData *v11; // [rsp+48h] [rbp+10h] BYREF
  struct CWindowData **v12; // [rsp+58h] [rbp+20h] BYREF

  v11 = a2;
  if ( !IsWindowTab(a2) )
  {
    v5 = v4 + 16;
    v6 = (__int64 *)(v4 + 16);
    if ( v3 )
    {
      ++*(_DWORD *)(v4 + 80);
      DynArray<CWindowData *,0>::Remove(v6, &v11);
    }
    else if ( !(unsigned int)DynArray<CWindowData *,0>::Find((__int64)v6, &v11) )
    {
      --*(_DWORD *)(v7 + 80);
      v8 = *(_DWORD *)(v5 + 24);
      v9 = v8 + 1;
      if ( v8 + 1 >= v8 )
      {
        if ( v9 > *(_DWORD *)(v5 + 20) )
        {
          v12 = &v11;
          v10 = DynArrayImpl<0>::Grow((char **)v5, 8u, 1, 0, (unsigned __int64 *)&v12);
          if ( v10 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xC0u);
          else
            *(_QWORD *)((unsigned int)(8 * (*(_DWORD *)(v5 + 24))++) + *(_QWORD *)v5) = *v12;
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)v5 + 8LL * *(unsigned int *)(v5 + 24)) = a2;
          *(_DWORD *)(v5 + 24) = v9;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      }
    }
  }
}
