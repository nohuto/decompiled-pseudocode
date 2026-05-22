/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UGutterExtension@DirectComposition@@$0A@@@QEAAJPEFBUGutterExtension@DirectComposition@@I@Z @ 0x1800731B8
 * Callers:
 *     ?EnqueueGutterExtension@CAtlasSurface@DirectComposition@@QEAAJPEAUGutterExtension@2@@Z @ 0x180027E74 (-EnqueueGutterExtension@CAtlasSurface@DirectComposition@@QEAAJPEAUGutterExtension@2@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180073550 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall DynArray<DirectComposition::GutterExtension,0>::AddMultipleAndSet(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v9; // r8d
  __int64 v10; // rcx
  _OWORD *v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // edx
  int v14; // ecx
  _OWORD *v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((unsigned int *)a1 + 6);
  v4 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    v5 = -2147024362;
    v13 = 181;
    v14 = -2147024362;
    goto LABEL_9;
  }
  v5 = 0;
  if ( v4 > *((_DWORD *)a1 + 5) )
  {
    v15 = (_OWORD *)a2;
    v9 = DynArrayImpl<0>::Grow((_DWORD)a1, 24, 1, 0, (__int64)&v15);
    v5 = v9;
    if ( v9 >= 0 )
    {
      v10 = *a1;
      v11 = v15;
      v12 = (unsigned int)(24 * *((_DWORD *)a1 + 6));
      *(_OWORD *)(v12 + v10) = *v15;
      *(_QWORD *)(v12 + v10 + 16) = *((_QWORD *)v11 + 2);
      ++*((_DWORD *)a1 + 6);
      return v5;
    }
    v13 = 192;
    v14 = v9;
LABEL_9:
    DoStackCaptureDirect(v14, v13);
    return v5;
  }
  v6 = 3 * v2;
  v7 = *a1;
  *(_OWORD *)(v7 + 8 * v6) = *(_OWORD *)a2;
  *(_QWORD *)(v7 + 8 * v6 + 16) = *(_QWORD *)(a2 + 16);
  *((_DWORD *)a1 + 6) = v4;
  return v5;
}
