/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAUIUnknown@@$0A@@@QEAAJPEFBQEAUIUnknown@@I@Z @ 0x18008084C
 * Callers:
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180073310 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<IUnknown *,0>::AddMultipleAndSet(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r9d
  unsigned int v4; // ebx
  unsigned int v6; // edx
  int v7; // ecx
  int v8; // eax

  v2 = *(_DWORD *)(a1 + 24);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    v6 = 181;
    v7 = -2147024362;
    goto LABEL_8;
  }
  v4 = 0;
  if ( v3 > *(_DWORD *)(a1 + 20) )
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet(a1, 8u, a1, a2);
    v4 = v8;
    if ( v8 >= 0 )
      return v4;
    v6 = 192;
    v7 = v8;
LABEL_8:
    DoStackCaptureDirect(v7, v6);
    return v4;
  }
  *(_QWORD *)(*(_QWORD *)a1 + 8LL * v2) = *a2;
  *(_DWORD *)(a1 + 24) = v3;
  return v4;
}
