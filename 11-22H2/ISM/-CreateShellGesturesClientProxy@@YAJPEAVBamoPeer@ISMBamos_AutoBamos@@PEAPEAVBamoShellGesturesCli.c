/*
 * XREFs of ?CreateShellGesturesClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellGesturesClientProxy@@@Z @ 0x18004F9B0
 * Callers:
 *     ?Materialize_BamoShellGesturesClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18004F8E0 (-Materialize_BamoShellGesturesClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CreateShellGesturesClientProxy(
        struct ISMBamos_AutoBamos::BamoPeer *a1,
        struct BamoShellGesturesClientProxy **a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  v3 = operator new(0xA8uLL);
  memset_0(v3, 0, 0xA8uLL);
  *((_DWORD *)v3 + 6) = 0;
  v3[4] = 0LL;
  v3[2] = &BamoImpl::BamoShellGesturesClientProxyImpl::`vftable';
  *((_WORD *)v3 + 24) = 0;
  v3[5] = 0LL;
  *(_OWORD *)(v3 + 7) = 0LL;
  *(_OWORD *)(v3 + 9) = 0LL;
  *(_OWORD *)(v3 + 11) = 0LL;
  *v3 = &ShellGesturesClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v3[1] = &ShellGesturesClientProxy::`vftable'{for `IShellGesturesClientProxy'};
  v3[13] = &ShellGesturesClientProxy::`vftable'{for `IInputSiteClientPrivate'};
  v3[14] = &ShellGesturesClientProxy::`vftable'{for `IInputTarget'};
  v3[15] = &ShellGesturesClientProxy::`vftable'{for `IDCompInputTarget'};
  result = 0LL;
  *((_OWORD *)v3 + 8) = 0LL;
  v3[16] = 0LL;
  v3[17] = 0LL;
  v3[18] = 0LL;
  *((_BYTE *)v3 + 152) = 0;
  v3[20] = 0LL;
  *a2 = (struct BamoShellGesturesClientProxy *)v3;
  return result;
}
