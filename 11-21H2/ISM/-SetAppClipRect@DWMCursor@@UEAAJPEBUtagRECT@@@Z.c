/*
 * XREFs of ?SetAppClipRect@DWMCursor@@UEAAJPEBUtagRECT@@@Z @ 0x180048FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursor::SetAppClipRect(DWMCursor *this, const struct tagRECT *a2)
{
  __int128 v2; // xmm0
  __int64 v3; // rdx

  v2 = (__int128)*a2;
  v3 = 1LL;
  *((_OWORD *)this + 7) = v2;
  if ( *((_DWORD *)this + 30) != *((_DWORD *)this + 28) + 1 || *((_DWORD *)this + 31) != *((_DWORD *)this + 29) + 1 )
    LOBYTE(v3) = 0;
  return (*(__int64 (__fastcall **)(DWMCursor *, __int64))(*(_QWORD *)this + 80LL))(this, v3);
}
