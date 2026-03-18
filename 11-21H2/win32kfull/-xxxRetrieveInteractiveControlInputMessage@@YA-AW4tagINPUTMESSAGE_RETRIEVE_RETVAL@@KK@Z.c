/*
 * XREFs of ?xxxRetrieveInteractiveControlInputMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z @ 0x1C023A7E0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C010C048 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C024ED28 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z @ 0x1C02540A8 (-GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z.c)
 */

__int64 __fastcall xxxRetrieveInteractiveControlInputMessage(unsigned int a1, unsigned __int16 a2)
{
  InteractiveControlManager *v4; // rax
  unsigned int v5; // ecx
  struct InteractiveControlDevice *v7; // [rsp+50h] [rbp+18h] BYREF
  struct InteractiveControlInput *v8; // [rsp+58h] [rbp+20h] BYREF

  v4 = InteractiveControlManager::Instance();
  v7 = 0LL;
  v8 = 0LL;
  if ( (int)InteractiveControlManager::FindDevice(v4, a1, 0LL, &v7, 0LL) >= 0
    && v7
    && (unsigned int)InteractiveControlDevice::GetInputReport(v7, a2, &v8) )
  {
    v5 = 1;
    *((_DWORD *)v8 + 6) = 1;
  }
  else
  {
    return 2;
  }
  return v5;
}
