/*
 * XREFs of VidSchGetDeviceFlipMode @ 0x1C00A3D90
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VidSchGetDeviceFlipMode(__int64 a1, unsigned int a2, _DWORD *a3)
{
  int v3; // eax
  __int64 v4; // rsi
  int v6; // edi
  __int64 v8; // rcx

  v3 = *(_DWORD *)(a1 + 960);
  v4 = *(_QWORD *)(a1 + 32);
  if ( v3 == 1 )
  {
    *a3 = 0;
    return *(unsigned int *)(v4 + 2540);
  }
  if ( v3 == 2 )
  {
    *a3 = 1;
LABEL_5:
    if ( *(int *)(v4 + 2544) < 4 && !*(_BYTE *)(v4 + 156) )
      return *(unsigned int *)(v4 + 2544);
    if ( a2 >= *(_DWORD *)(v4 + 40) )
    {
      WdLogSingleEntry1(1LL, a2);
      DxgkLogInternalTriageEvent(v8, 0x40000LL);
    }
    else
    {
      ExAcquireResourceExclusiveLite((PERESOURCE)(v4 + 1088), 1u);
      v6 = *(_DWORD *)(v4 + 2208);
      ExReleaseResourceLite((PERESOURCE)(v4 + 1088));
      if ( _bittest(&v6, a2) )
        return *(unsigned int *)(v4 + 2544);
    }
    return *(unsigned int *)(v4 + 2540);
  }
  if ( !*a3 )
    return *(unsigned int *)(v4 + 2540);
  if ( (unsigned int)(*a3 - 1) <= 3 )
    goto LABEL_5;
  return 0LL;
}
