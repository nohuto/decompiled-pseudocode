/*
 * XREFs of ?SetRemarshalingFlags@CAnimationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0215900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CAnimationMarshaler::SetRemarshalingFlags(
        DirectComposition::CAnimationMarshaler *this)
{
  unsigned int v1; // r8d
  unsigned __int8 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax

  v1 = *((_DWORD *)this + 4) & 0xFFFFD13F;
  *((_DWORD *)this + 4) = v1;
  if ( *((_DWORD *)this + 56) )
  {
    v1 |= 0x20000u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( *((_QWORD *)this + 29) )
    *((_DWORD *)this + 61) = 0;
  v3 = *((_BYTE *)this + 200);
  if ( (((v1 & 0x4000) == 0) & (v3 >> 2)) != 0 )
  {
    v4 = *((_QWORD *)this + 9);
    *((_DWORD *)this + 4) = v1 | 0x4000;
    *(_BYTE *)(v4 + 28) = (v3 & 4) != 0;
  }
  v5 = *((_QWORD *)this + 26);
  if ( v5 || *((_QWORD *)this + 27) != *((_QWORD *)this + 13) )
  {
    v6 = *((_DWORD *)this + 4);
    if ( (v6 & 0x8000) == 0 )
    {
      *((_DWORD *)this + 4) = v6 | 0x8000;
      *(_QWORD *)(*((_QWORD *)this + 9) + 32LL) = v5;
      *(_QWORD *)(*((_QWORD *)this + 9) + 40LL) = *((_QWORD *)this + 27);
    }
  }
  return *((_QWORD *)this + 12) != 0LL;
}
