/*
 * XREFs of GetCppcRequestMsrPerfControlHandler @ 0x1C001FED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCppcRequestMsrPerfControlHandler(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _BYTE *a7,
        _BYTE *a8,
        _BYTE *a9,
        _DWORD *a10)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r10
  unsigned int v13; // r11d
  void *v14; // rcx

  v10 = *(_QWORD *)(a2 + 144);
  v11 = 0LL;
  v12 = 0LL;
  v13 = -1073741637;
  if ( *(_BYTE *)(a2 + 125) )
  {
    if ( *(_BYTE *)(v10 + 128) != 127 || *(_BYTE *)(v10 + 129) != 8 || *(_BYTE *)(v10 + 130) != 16 )
      return v13;
    v11 = *(_QWORD *)(v10 + 132);
    v12 = 16711680LL;
  }
  if ( *(_BYTE *)(a2 + 126) )
  {
    if ( *(_BYTE *)(v10 + 152) != 127 || *(_BYTE *)(v10 + 153) != 8 || *(_BYTE *)(v10 + 154) != 8 )
      return v13;
    if ( v11 )
    {
      if ( v11 != *(_QWORD *)(v10 + 156) )
        return v13;
    }
    else
    {
      v11 = *(_QWORD *)(v10 + 156);
    }
    v12 |= 0xFF00uLL;
  }
  if ( *(_BYTE *)(a2 + 127) )
  {
    if ( *(_BYTE *)(v10 + 176) != 127 || *(_BYTE *)(v10 + 177) != 8 || *(_BYTE *)(v10 + 178) )
      return v13;
    if ( v11 )
    {
      if ( v11 != *(_QWORD *)(v10 + 180) )
        return v13;
    }
    else
    {
      v11 = *(_QWORD *)(v10 + 180);
    }
    v12 |= 0xFFuLL;
  }
  if ( *(_BYTE *)(a2 + 128) )
  {
    if ( *(_BYTE *)(v10 + 416) != 127 || *(_BYTE *)(v10 + 417) != 8 || *(_BYTE *)(v10 + 418) != 24 )
      return v13;
    if ( v11 )
    {
      if ( v11 != *(_QWORD *)(v10 + 420) )
        return v13;
    }
    else
    {
      v11 = *(_QWORD *)(v10 + 420);
    }
    v12 |= 0xFF000000uLL;
  }
  if ( !*(_BYTE *)(a2 + 129) && !*(_BYTE *)(a2 + 130) && v11 == 3221291699LL )
  {
    v13 = 0;
    *(_QWORD *)(a2 + 184) = v12;
    *a6 = PerfSelectionCppcRequestMsr;
    *a3 = PerfControlCppcRequestMsr;
    v14 = PerfControlCppcRequestMsrHidden;
    if ( dword_1C0011D08 == 1 )
      v14 = PerfControlCppcRequestMsrHiddenHv;
    *a4 = v14;
    *a5 = 0LL;
    *a7 = 1;
    *a8 = 0;
    *a9 = 1;
    *a10 = 1000;
  }
  return v13;
}
