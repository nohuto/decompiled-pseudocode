/*
 * XREFs of PsGetCurrentServerSilo @ 0x1402F61B0
 * Callers:
 *     sub_14066B8C8 @ 0x14066B8C8 (sub_14066B8C8.c)
 *     sub_14066F678 @ 0x14066F678 (sub_14066F678.c)
 *     sub_14066FCE4 @ 0x14066FCE4 (sub_14066FCE4.c)
 *     sub_140671B34 @ 0x140671B34 (sub_140671B34.c)
 *     sub_140695570 @ 0x140695570 (sub_140695570.c)
 *     sub_14069BDD0 @ 0x14069BDD0 (sub_14069BDD0.c)
 *     ntoskrnl_1 @ 0x14069D3D0 (ntoskrnl_1.c)
 *     sub_1406BBC4C @ 0x1406BBC4C (sub_1406BBC4C.c)
 *     sub_1406C9390 @ 0x1406C9390 (sub_1406C9390.c)
 *     sub_1406D2920 @ 0x1406D2920 (sub_1406D2920.c)
 *     sub_1406EB0AC @ 0x1406EB0AC (sub_1406EB0AC.c)
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 *     sub_140727350 @ 0x140727350 (sub_140727350.c)
 *     SeCreateClientSecurityEx @ 0x1407275D0 (SeCreateClientSecurityEx.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 *     IoRegisterPlugPlayNotification @ 0x140768390 (IoRegisterPlugPlayNotification.c)
 *     sub_14078B7C4 @ 0x14078B7C4 (sub_14078B7C4.c)
 *     sub_14078D5D8 @ 0x14078D5D8 (sub_14078D5D8.c)
 *     PsLookupThreadByThreadId @ 0x1407A7D90 (PsLookupThreadByThreadId.c)
 *     PsLookupProcessByProcessId @ 0x1407A8720 (PsLookupProcessByProcessId.c)
 *     sub_1407A87D0 @ 0x1407A87D0 (sub_1407A87D0.c)
 *     sub_1407B6CA0 @ 0x1407B6CA0 (sub_1407B6CA0.c)
 *     sub_1407EBF04 @ 0x1407EBF04 (sub_1407EBF04.c)
 *     sub_1407F336C @ 0x1407F336C (sub_1407F336C.c)
 *     sub_14082D3F8 @ 0x14082D3F8 (sub_14082D3F8.c)
 *     sub_140835844 @ 0x140835844 (sub_140835844.c)
 *     sub_14085A964 @ 0x14085A964 (sub_14085A964.c)
 *     sub_140944ADC @ 0x140944ADC (sub_140944ADC.c)
 *     sub_1409CD544 @ 0x1409CD544 (sub_1409CD544.c)
 *     sub_1409F5F90 @ 0x1409F5F90 (sub_1409F5F90.c)
 *     sub_1409FA6E0 @ 0x1409FA6E0 (sub_1409FA6E0.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 *     sub_140A6CC50 @ 0x140A6CC50 (sub_140A6CC50.c)
 * Callees:
 *     sub_14020A400 @ 0x14020A400 (sub_14020A400.c)
 */

__int64 PsGetCurrentServerSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rcx

  CurrentThread = KeGetCurrentThread();
  v1 = *((_QWORD *)CurrentThread + 203);
  if ( v1 == -3 )
    return *(_QWORD *)(*((_QWORD *)CurrentThread + 68) + 2160LL);
  if ( v1 )
  {
    while ( !sub_14020A400(v1) )
      v1 = *(_QWORD *)(v1 + 1264);
  }
  return v1;
}
