/*
 * XREFs of ??$?4U?$default_delete@$$BY0A@M@std@@$0A@@?$unique_ptr@$$BY0A@MU?$default_delete@$$BY0A@M@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800E2EF0
 * Callers:
 *     ?InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18001D2F0 (-InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeVolumeCoefficientCount@CAudioStream@@QEAAJI@Z @ 0x1800E4B4C (-InitializeVolumeCoefficientCount@CAudioStream@@QEAAJI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 */

void **__fastcall std::unique_ptr<float [0]>::operator=<std::default_delete<float [0]>,0>(void **a1, void **a2)
{
  void *v3; // rax
  void *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      operator delete(v4);
  }
  return a1;
}
