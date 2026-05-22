/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UDCOMPOSITION_TOKEN_SURFACE_UPDATE_INFO@@$0A@@@QEAAJPEFBUDCOMPOSITION_TOKEN_SURFACE_UPDATE_INFO@@I@Z @ 0x1800730A8
 * Callers:
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180073310 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<DCOMPOSITION_TOKEN_SURFACE_UPDATE_INFO,0>::AddMultipleAndSet(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // r9d
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v9; // eax
  unsigned int v10; // edx
  int v11; // ecx

  v2 = *((unsigned int *)a1 + 6);
  v4 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    v5 = -2147024362;
    v10 = 181;
    v11 = -2147024362;
    goto LABEL_8;
  }
  v5 = 0;
  if ( v4 > *((_DWORD *)a1 + 5) )
  {
    v9 = DynArrayImpl<0>::AddMultipleAndSet(a1, 24LL, a1, a2);
    v5 = v9;
    if ( v9 >= 0 )
      return v5;
    v10 = 192;
    v11 = v9;
LABEL_8:
    DoStackCaptureDirect(v11, v10);
    return v5;
  }
  v6 = 3 * v2;
  v7 = *a1;
  *(_OWORD *)(v7 + 8 * v6) = *(_OWORD *)a2;
  *(_QWORD *)(v7 + 8 * v6 + 16) = *(_QWORD *)(a2 + 16);
  *((_DWORD *)a1 + 6) = v4;
  return v5;
}
