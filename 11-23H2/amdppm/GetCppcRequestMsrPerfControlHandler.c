/*
 * XREFs of GetCppcRequestMsrPerfControlHandler @ 0x1C00209A0
 * Callers:
 *     <none>
 * Callees:
 *     IsFastCppcSupported @ 0x1C000319C (IsFastCppcSupported.c)
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
        bool *a9,
        _DWORD *a10)
{
  __int64 v10; // rax
  bool v11; // r10
  __int64 v12; // r11
  __int64 v13; // rbx
  unsigned int v14; // edi
  void *v15; // rax
  __int64 v16; // rax

  v10 = *(_QWORD *)(a2 + 144);
  v11 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = -1073741637;
  if ( *(_BYTE *)(a2 + 125) )
  {
    if ( *(_BYTE *)(v10 + 128) != 127 || *(_BYTE *)(v10 + 129) != 8 || *(_BYTE *)(v10 + 130) != 16 )
      return v14;
    v12 = *(_QWORD *)(v10 + 132);
    v13 = 16711680LL;
  }
  if ( *(_BYTE *)(a2 + 126) )
  {
    if ( *(_BYTE *)(v10 + 152) != 127 || *(_BYTE *)(v10 + 153) != 8 || *(_BYTE *)(v10 + 154) != 8 )
      return v14;
    if ( v12 )
    {
      if ( v12 != *(_QWORD *)(v10 + 156) )
        return v14;
    }
    else
    {
      v12 = *(_QWORD *)(v10 + 156);
    }
    v13 |= 0xFF00uLL;
  }
  if ( *(_BYTE *)(a2 + 127) )
  {
    if ( *(_BYTE *)(v10 + 176) != 127 || *(_BYTE *)(v10 + 177) != 8 || *(_BYTE *)(v10 + 178) )
      return v14;
    if ( v12 )
    {
      if ( v12 != *(_QWORD *)(v10 + 180) )
        return v14;
    }
    else
    {
      v12 = *(_QWORD *)(v10 + 180);
    }
    v13 |= 0xFFuLL;
  }
  if ( *(_BYTE *)(a2 + 128) )
  {
    if ( *(_BYTE *)(v10 + 416) != 127 || *(_BYTE *)(v10 + 417) != 8 || *(_BYTE *)(v10 + 418) != 24 )
      return v14;
    if ( v12 )
    {
      if ( v12 != *(_QWORD *)(v10 + 420) )
        return v14;
    }
    else
    {
      v12 = *(_QWORD *)(v10 + 420);
    }
    v13 |= 0xFF000000uLL;
  }
  if ( !*(_BYTE *)(a2 + 129) && !*(_BYTE *)(a2 + 130) && v12 == 3221291699LL )
  {
    v14 = 0;
    *(_QWORD *)(a2 + 184) = v13;
    *a6 = PerfSelectionCppcRequestMsr;
    *a3 = PerfControlCppcRequestMsr;
    v15 = PerfControlCppcRequestMsrHidden;
    if ( dword_1C0012DB8 == 1 )
      v15 = PerfControlCppcRequestMsrHiddenHv;
    *a4 = v15;
    *a5 = 0LL;
    *a7 = 1;
    *a8 = 0;
    v16 = *(_QWORD *)(a1 + 1248);
    if ( v16 )
      v11 = *(_DWORD *)(v16 + 16) > 1u;
    *a9 = v11;
    *a10 = IsFastCppcSupported() ? 100 : 1000;
  }
  return v14;
}
