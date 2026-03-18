/*
 * XREFs of ?InitializeWaveformOrdinalForDevice@InteractiveControlDevice@@QEAAJXZ @ 0x1C02544D0
 * Callers:
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0254100 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InteractiveControlDevice::InitializeWaveformOrdinalForDevice(InteractiveControlDevice *this)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  __int64 v4; // r8
  unsigned int v5; // r10d
  __int64 v6; // rax
  _WORD *v7; // rcx
  _WORD *i; // rax

  v1 = *((_QWORD *)this + 48);
  v2 = 0;
  if ( v1 )
  {
    v4 = *(_QWORD *)(v1 + 80);
    v5 = *(_DWORD *)(v1 + 88);
    if ( v4 )
    {
      if ( v5 )
      {
        v6 = 0LL;
        v7 = (_WORD *)(v4 + 2);
        while ( *v7 != 4099 )
        {
          v6 = (unsigned int)(v6 + 1);
          v7 += 4;
          if ( (unsigned int)v6 >= v5 )
            goto LABEL_9;
        }
        *((_WORD *)this + 197) = *(_WORD *)(v4 + 8 * v6);
LABEL_9:
        for ( i = (_WORD *)(v4 + 2); *i != 4100; i += 4 )
        {
          if ( ++v2 >= v5 )
            return 0LL;
        }
        *((_WORD *)this + 196) = *(_WORD *)(v4 + 8LL * v2);
      }
    }
  }
  return 0LL;
}
