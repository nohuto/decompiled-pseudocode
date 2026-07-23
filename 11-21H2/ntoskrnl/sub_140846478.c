/*
 * XREFs of sub_140846478 @ 0x140846478
 * Callers:
 *     sub_14081A830 @ 0x14081A830 (sub_14081A830.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140846478(
        __int64 a1,
        _QWORD *a2,
        __int16 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        _DWORD *a7)
{
  unsigned int v7; // r11d
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax

  v7 = 0;
  v8 = 0LL;
  if ( **(_DWORD **)(a1 + 64) == 192 )
    v8 = *(_QWORD *)(a1 + 64);
  if ( v8 )
  {
    v9 = 0x11D06F25496B8280LL - *a2;
    if ( *a2 == 0x11D06F25496B8280LL )
      v9 = 0x2F09E22B0008AFBELL - a2[1];
    if ( !v9 )
    {
      *a7 = 64;
      if ( a5 >= 0x40 )
      {
        *(_DWORD *)a6 = 65600;
        if ( !a4 )
          return 3221225485LL;
        *(_QWORD *)(a6 + 8) = a4;
        *(_QWORD *)(a6 + 40) = sub_1403CCF90;
        *(_QWORD *)(a6 + 16) = _misaligned_access;
        *(_QWORD *)(a6 + 48) = PsGetHostSilo;
        *(_QWORD *)(a6 + 56) = PsGetHostSilo;
        *(_QWORD *)(a6 + 24) = _misaligned_access;
        *(_QWORD *)(a6 + 32) = 0LL;
        return 0LL;
      }
      return 3221225507LL;
    }
  }
  v10 = *a2 - 0x40CA65053A8D0384LL;
  if ( *a2 == 0x40CA65053A8D0384LL )
    v10 = a2[1] + 0x12A073A03EA9C644LL;
  if ( !v10 )
  {
    if ( a5 >= 0x30 )
    {
      if ( (_DWORD)a4 )
        return 3221225659LL;
      *(_QWORD *)(a6 + 16) = _misaligned_access;
      *(_QWORD *)(a6 + 24) = _misaligned_access;
      *(_QWORD *)(a6 + 32) = sub_140523610;
      *(_QWORD *)(a6 + 40) = sub_140523640;
      *(_DWORD *)a6 = 65584;
      *a7 = 48;
      return 0LL;
    }
    *a7 = 48;
    return 3221225507LL;
  }
  v11 = *a2 - 0x4E408A5AB520F7FALL;
  if ( *a2 == 0x4E408A5AB520F7FALL )
    v11 = a2[1] - 0x35D962E1E16BF6A3LL;
  if ( v11 )
    return 3221225659LL;
  *a7 = 0;
  if ( a5 < 0x28 )
  {
    return (unsigned int)-1073741789;
  }
  else if ( a3 )
  {
    *(_BYTE *)(a6 + 32) = 1;
    *(_QWORD *)(a6 + 16) = _misaligned_access;
    *(_QWORD *)(a6 + 24) = _misaligned_access;
    *(_DWORD *)a6 = 65576;
    *(_QWORD *)(a6 + 8) = 0LL;
    *a7 = 40;
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v7;
}
