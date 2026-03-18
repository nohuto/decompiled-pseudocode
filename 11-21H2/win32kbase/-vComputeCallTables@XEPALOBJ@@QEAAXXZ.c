/*
 * XREFs of ?vComputeCallTables@XEPALOBJ@@QEAAXXZ @ 0x1C0091350
 * Callers:
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C0088400 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPALOBJ::vComputeCallTables(XEPALOBJ *this)
{
  __int64 v1; // r8
  int v3; // edx
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // rax
  int v7; // ecx

  v1 = *(_QWORD *)this;
  v3 = 2;
  if ( *(_DWORD *)(*(_QWORD *)this + 28LL) )
  {
    v5 = 1;
    goto LABEL_6;
  }
  v4 = *(_DWORD *)(v1 + 24);
  if ( (v4 & 2) == 0 )
  {
    if ( (v4 & 8) != 0 )
      v5 = 6;
    else
      v5 = 8 - ((v4 & 0x10) != 0);
    goto LABEL_5;
  }
  v6 = *(_DWORD **)(v1 + 112);
  if ( v6[2] == 31 )
  {
    v7 = v6[1];
    if ( v7 == 2016 )
    {
      if ( *v6 == 63488 )
      {
        v5 = 3;
        goto LABEL_5;
      }
    }
    else if ( v7 == 992 && *v6 == 31744 )
    {
      v5 = 4;
      goto LABEL_5;
    }
  }
  v5 = 5;
LABEL_5:
  v3 = v5;
LABEL_6:
  *(_DWORD *)(v1 + 100) = v5;
  *(_DWORD *)(*(_QWORD *)this + 96LL) = v3;
}
