/*
 * XREFs of ??$reset@VDDAScreenCapture@@@?$shared_ptr@VDDAScreenCapture@@@std@@QEAAXPEAVDDAScreenCapture@@@Z @ 0x18048DC24
 * Callers:
 *     ?GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x18048E1F0 (-GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::shared_ptr<DDAScreenCapture>::reset<DDAScreenCapture>(_QWORD *a1, __int64 a2)
{
  std::_Ref_count_base *v4; // rcx
  _DWORD *v5; // [rsp+30h] [rbp+8h]

  v5 = operator new(0x18uLL);
  *(_OWORD *)v5 = 0LL;
  v5[2] = 1;
  v5[3] = 1;
  *(_QWORD *)v5 = &std::_Ref_count<DDAScreenCapture>::`vftable';
  *((_QWORD *)v5 + 2) = a2;
  *a1 = a2;
  v4 = (std::_Ref_count_base *)a1[1];
  a1[1] = v5;
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
}
