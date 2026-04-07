/*
 * XREFs of ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x1800C39AC
 * Callers:
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x1800C34EC (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x1800C3CE8 (-_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PE.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x1800056C0 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x18001673C (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180023050 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CIconicBitmapRegistry::RegisterBitmapInUse(CIconicBitmapRegistry *this, struct CWindowData *a2)
{
  __int64 v2; // rdx
  char v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  char *v6; // r8
  unsigned int v7; // ecx
  char *v8; // rax
  __int64 v9; // rax
  unsigned int v10; // ecx
  int v11; // eax
  struct CWindowData *v12; // [rsp+48h] [rbp+10h] BYREF
  struct CWindowData **v13; // [rsp+58h] [rbp+20h] BYREF

  v12 = a2;
  if ( !IsWindowTab(a2) )
  {
    v5 = v4 + 16;
    if ( v3 )
    {
      ++*(_DWORD *)(v4 + 80);
      DynArray<CWindowData *,0>::Remove((__int64 *)(v4 + 16), &v12);
    }
    else
    {
      v6 = *(char **)v5;
      v7 = 0;
      if ( *(_DWORD *)(v4 + 40) )
      {
        v8 = *(char **)v5;
        while ( v2 != *(_QWORD *)v8 )
        {
          ++v7;
          v8 += 8;
          if ( v7 >= *(_DWORD *)(v4 + 40) )
            goto LABEL_8;
        }
      }
      else
      {
LABEL_8:
        --*(_DWORD *)(v4 + 80);
        v9 = *(unsigned int *)(v4 + 40);
        v10 = v9 + 1;
        if ( (int)v9 + 1 >= (unsigned int)v9 )
        {
          if ( v10 > *(_DWORD *)(v4 + 36) )
          {
            v13 = &v12;
            v11 = DynArrayImpl<0>::Grow((char **)v5, 8u, 1, 0, (unsigned __int64 *)&v13);
            if ( v11 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xC0u);
            else
              *(_QWORD *)((unsigned int)(8 * (*(_DWORD *)(v5 + 24))++) + *(_QWORD *)v5) = *v13;
          }
          else
          {
            *(_QWORD *)&v6[8 * v9] = v2;
            *(_DWORD *)(v4 + 40) = v10;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
      }
    }
  }
}
