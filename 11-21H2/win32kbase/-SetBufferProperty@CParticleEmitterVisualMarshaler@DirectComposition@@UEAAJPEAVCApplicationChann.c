/*
 * XREFs of ?SetBufferProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C02262B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0084A60 (-SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA.c)
 */

__int64 __fastcall DirectComposition::CParticleEmitterVisualMarshaler::SetBufferProperty(
        DirectComposition::CParticleEmitterVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        unsigned int *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // r10d
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax

  v6 = 0;
  *a6 = 0;
  switch ( a3 )
  {
    case 'D':
      if ( a4 && a5 == 12 )
      {
        *(_QWORD *)((char *)this + 460) = *(_QWORD *)a4;
        v9 = a4[2];
        *((_DWORD *)this + 139) |= 0x10000u;
        *((_DWORD *)this + 117) = v9;
        goto LABEL_14;
      }
      return (unsigned int)-1073741811;
    case 'G':
      if ( a4 && a5 == 12 )
      {
        *((_QWORD *)this + 60) = *(_QWORD *)a4;
        v8 = a4[2];
        *((_DWORD *)this + 139) |= 0x80000u;
        *((_DWORD *)this + 122) = v8;
        goto LABEL_14;
      }
      return (unsigned int)-1073741811;
    case 'I':
      if ( a4 && a5 == 12 )
      {
        *((_QWORD *)this + 62) = *(_QWORD *)a4;
        v7 = a4[2];
        *((_DWORD *)this + 139) |= 0x200000u;
        *((_DWORD *)this + 126) = v7;
LABEL_14:
        *a6 = 1;
        return v6;
      }
      return (unsigned int)-1073741811;
  }
  return (unsigned int)DirectComposition::CVisualMarshaler::SetBufferProperty(this, a2, a3, a4, a5, a6);
}
