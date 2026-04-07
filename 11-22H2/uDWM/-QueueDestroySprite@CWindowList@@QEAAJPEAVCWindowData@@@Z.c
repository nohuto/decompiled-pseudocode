/*
 * XREFs of ?QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x180014AA8
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180034730 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180023050 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowList::QueueDestroySprite(CWindowList *this, struct CWindowData *a2)
{
  char *v2; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v6; // r9
  unsigned int v7; // r8d
  unsigned int v8; // ecx
  unsigned int v9; // esi
  int v10; // eax
  struct CWindowData **v12; // rcx
  struct CWindowData **v13; // [rsp+40h] [rbp+8h] BYREF
  struct CWindowData *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  v2 = (char *)this + 280;
  v3 = 0;
  v4 = *((unsigned int *)this + 76);
  v6 = *((_QWORD *)this + 35);
  v7 = 0;
  if ( (_DWORD)v4 )
  {
    v12 = (struct CWindowData **)*((_QWORD *)this + 35);
    do
    {
      if ( a2 == *v12 )
        break;
      ++v7;
      ++v12;
    }
    while ( v7 < (unsigned int)v4 );
  }
  if ( v7 >= *((_DWORD *)this + 76) )
  {
    v8 = v4 + 1;
    if ( (int)v4 + 1 < (unsigned int)v4 )
    {
      v9 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else
    {
      v9 = 0;
      if ( v8 <= *((_DWORD *)v2 + 5) )
      {
        *(_QWORD *)(v6 + 8 * v4) = a2;
        *((_DWORD *)v2 + 6) = v8;
      }
      else
      {
        v13 = &v14;
        v10 = DynArrayImpl<0>::Grow((_DWORD)v2, 8, 1, 0, (__int64)&v13);
        v9 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u, 0LL);
        else
          *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)v2 + 6))++) + *(_QWORD *)v2) = *v13;
      }
    }
    return v9;
  }
  return v3;
}
