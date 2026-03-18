/*
 * XREFs of ?SetRemarshalingFlags@CRemoteAppRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C022CB10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CRemoteAppRenderTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CRemoteAppRenderTargetMarshaler *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_QWORD *)this + 9) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_QWORD *)this + 13) )
  {
    *((_DWORD *)this + 4) |= 0x40u;
    v1 = 1;
  }
  if ( *((_DWORD *)this + 22) > *((_DWORD *)this + 20) || *((_DWORD *)this + 23) > *((_DWORD *)this + 21) )
  {
    *((_DWORD *)this + 4) |= 0x80u;
    v1 = 1;
  }
  if ( *((_DWORD *)this + 16) != 3 )
  {
    *((_DWORD *)this + 4) |= 0x200u;
    v1 = 1;
  }
  if ( *((_DWORD *)this + 24) )
  {
    *((_DWORD *)this + 4) |= 0x400u;
    return 1;
  }
  return v1;
}
