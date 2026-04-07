/*
 * XREFs of ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800C42AC
 * Callers:
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180023C58 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180027828 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002E740 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180035B2C (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?IsInLivePreview@CLivePreview@@QEAA_NPEAVCWindowData@@@Z @ 0x180037F2C (-IsInLivePreview@CLivePreview@@QEAA_NPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CLivePreview::_IsInLivePreview(CLivePreview *this, const struct CWindowData *a2)
{
  char v2; // r9
  __int64 v3; // r8

  v2 = 0;
  v3 = (unsigned int)(*((_DWORD *)this + 84) - 1);
  if ( (int)v3 >= 0 )
  {
    while ( *(const struct CWindowData **)(*((_QWORD *)this + 39) + 40 * v3) != a2 )
    {
      v3 = (unsigned int)(v3 - 1);
      if ( (int)v3 < 0 )
        return v2;
    }
    return 1;
  }
  return v2;
}
