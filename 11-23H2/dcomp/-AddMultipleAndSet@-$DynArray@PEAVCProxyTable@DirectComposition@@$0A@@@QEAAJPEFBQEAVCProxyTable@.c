/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAVCProxyTable@DirectComposition@@$0A@@@QEAAJPEFBQEAVCProxyTable@DirectComposition@@I@Z @ 0x180073110
 * Callers:
 *     ?CreateVisual@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionVisual2@@@Z @ 0x180075590 (-CreateVisual@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionVisual2@@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180073310 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<DirectComposition::CProxyTable *,0>::AddMultipleAndSet(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r9d
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v7; // edx
  int v8; // ecx

  v2 = *(unsigned int *)(a1 + 24);
  v3 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    v4 = -2147024362;
    v7 = 181;
    v8 = -2147024362;
LABEL_8:
    DoStackCaptureDirect(v8, v7);
    return v4;
  }
  v4 = 0;
  if ( v3 <= *(_DWORD *)(a1 + 20) )
  {
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v2) = *a2;
    *(_DWORD *)(a1 + 24) = v3;
    return v4;
  }
  v5 = DynArrayImpl<0>::AddMultipleAndSet(a1, 8LL, a1, a2);
  v4 = v5;
  if ( v5 < 0 )
  {
    v7 = 192;
    v8 = v5;
    goto LABEL_8;
  }
  return v4;
}
