/*
 * XREFs of ?TrackOwnedWindows@CWindowData@@AEAAX_N@Z @ 0x180048A78
 * Callers:
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x180048924 (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowData::TrackOwnedWindows(CWindowData *this, char a2)
{
  unsigned __int8 v3; // cl
  __int64 v4; // r9
  __int64 v5; // rdx

  v3 = *((_BYTE *)this + 665);
  if ( a2 != v3 >> 7 )
  {
    v4 = 0LL;
    *((_BYTE *)this + 665) = (a2 << 7) | v3 & 0x7F;
    if ( a2 )
    {
      CWindowData::CheckOwnedWindowEligibilityForOwner(this);
    }
    else if ( *((_DWORD *)this + 158) )
    {
      do
      {
        v5 = *(_QWORD *)(*((_QWORD *)this + 76) + 8 * v4);
        v4 = (unsigned int)(v4 + 1);
        *(_BYTE *)(v5 + 666) &= ~1u;
      }
      while ( (unsigned int)v4 < *((_DWORD *)this + 158) );
    }
  }
}
