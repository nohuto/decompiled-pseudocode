/*
 * XREFs of ?RemoveAt@?$DynArray@UGutterExtensionSurface@CDxDevice@DirectComposition@@$0A@@@QEAAJI@Z @ 0x1800F79BC
 * Callers:
 *     ?GetGutterExtensionSurface@CDxDevice@DirectComposition@@AEAAJW4DXGI_FORMAT@@PEAUGutterExtensionSurface@12@@Z @ 0x180023C10 (-GetGutterExtensionSurface@CDxDevice@DirectComposition@@AEAAJW4DXGI_FORMAT@@PEAUGutterExtensionS.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 */

__int64 __fastcall DynArray<DirectComposition::CDxDevice::GutterExtensionSurface,0>::RemoveAt(
        __int64 *a1,
        unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ebx
  unsigned int v4; // r10d
  __int64 v6; // r11
  __int64 v7; // rax
  __int64 v8; // rcx
  __int128 v9; // xmm1

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  v4 = a2;
  if ( a2 < v2 )
  {
    v6 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v7 = 32LL * v4++;
        v8 = 32LL * v4;
        v9 = *(_OWORD *)(v8 + v6 + 16);
        *(_OWORD *)(v7 + v6) = *(_OWORD *)(v8 + v6);
        *(_OWORD *)(v7 + v6 + 16) = v9;
        v2 = *((_DWORD *)a1 + 6);
      }
      while ( v4 < v2 - 1 );
    }
    *((_DWORD *)a1 + 6) = v2 - 1;
  }
  else
  {
    v3 = -2147024809;
    DoStackCaptureDirect(-2147024809, 0x19Cu);
  }
  return v3;
}
