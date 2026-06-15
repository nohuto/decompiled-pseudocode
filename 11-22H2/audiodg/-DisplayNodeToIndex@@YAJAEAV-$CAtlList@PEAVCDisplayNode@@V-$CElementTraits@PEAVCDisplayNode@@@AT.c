/*
 * XREFs of ?DisplayNodeToIndex@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAVCDisplayNode@@PEAI@Z @ 0x140061DC8
 * Callers:
 *     ?Serialize@CDisplayNode@@QEAAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x140063094 (-Serialize@CDisplayNode@@QEAAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNod.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B9DC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall DisplayNodeToIndex(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // r10d
  unsigned int v5; // r11d
  __int64 v6; // rax
  _QWORD *v7; // rcx

  v3 = 0;
  v5 = -2147023728;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v6 = 0LL;
    do
    {
      v7 = *(_QWORD **)a1;
      if ( !*(_QWORD *)a1 )
        goto LABEL_11;
      for ( ; v6; --v6 )
        v7 = (_QWORD *)*v7;
      if ( !v7 )
LABEL_11:
        ATL::AtlThrowImpl(-2147467259);
      if ( a2 == v7[2] )
      {
        *a3 = v3;
        v5 = 0;
      }
      v6 = ++v3;
    }
    while ( (unsigned __int64)v3 < *(_QWORD *)(a1 + 16) );
  }
  return v5;
}
