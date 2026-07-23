/*
 * XREFs of sub_1405C5EC8 @ 0x1405C5EC8
 * Callers:
 *     sub_140211BD0 @ 0x140211BD0 (sub_140211BD0.c)
 *     sub_14021A7D0 @ 0x14021A7D0 (sub_14021A7D0.c)
 *     ObReferenceObjectSafe @ 0x1402240B0 (ObReferenceObjectSafe.c)
 *     sub_140229FF0 @ 0x140229FF0 (sub_140229FF0.c)
 *     sub_14026AEB0 @ 0x14026AEB0 (sub_14026AEB0.c)
 *     sub_14027A950 @ 0x14027A950 (sub_14027A950.c)
 *     sub_140281750 @ 0x140281750 (sub_140281750.c)
 *     ObReferenceObjectByPointerWithTag @ 0x1402A48C0 (ObReferenceObjectByPointerWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402BA130 @ 0x1402BA130 (sub_1402BA130.c)
 *     sub_1402D4530 @ 0x1402D4530 (sub_1402D4530.c)
 *     ObReferenceObjectByPointer @ 0x1402E0270 (ObReferenceObjectByPointer.c)
 *     sub_1402F8AE0 @ 0x1402F8AE0 (sub_1402F8AE0.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     sub_14030F330 @ 0x14030F330 (sub_14030F330.c)
 *     IoGetAttachedDeviceReference @ 0x1403109B0 (IoGetAttachedDeviceReference.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_140333040 @ 0x140333040 (sub_140333040.c)
 *     sub_140333AC0 @ 0x140333AC0 (sub_140333AC0.c)
 *     sub_140334400 @ 0x140334400 (sub_140334400.c)
 *     sub_140343010 @ 0x140343010 (sub_140343010.c)
 *     sub_1403467F0 @ 0x1403467F0 (sub_1403467F0.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     sub_140347B50 @ 0x140347B50 (sub_140347B50.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     sub_140356F50 @ 0x140356F50 (sub_140356F50.c)
 *     sub_14070F37C @ 0x14070F37C (sub_14070F37C.c)
 *     sub_14071E230 @ 0x14071E230 (sub_14071E230.c)
 *     sub_140727350 @ 0x140727350 (sub_140727350.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     sub_14072DDC0 @ 0x14072DDC0 (sub_14072DDC0.c)
 *     sub_14072E210 @ 0x14072E210 (sub_14072E210.c)
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     ObWaitForMultipleObjects @ 0x1407A1400 (ObWaitForMultipleObjects.c)
 *     sub_1407A2680 @ 0x1407A2680 (sub_1407A2680.c)
 *     sub_1407A8900 @ 0x1407A8900 (sub_1407A8900.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 *     sub_1407CDED0 @ 0x1407CDED0 (sub_1407CDED0.c)
 *     sub_1409CC028 @ 0x1409CC028 (sub_1409CC028.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140244120 (KeGetEffectiveIrql.c)
 *     RtlCaptureStackBackTrace @ 0x140295EF0 (RtlCaptureStackBackTrace.c)
 *     sub_140297EF0 @ 0x140297EF0 (sub_140297EF0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405C5DC8 @ 0x1405C5DC8 (sub_1405C5DC8.c)
 *     sub_14062DD68 @ 0x14062DD68 (sub_14062DD68.c)
 *     sub_140986190 @ 0x140986190 (sub_140986190.c)
 */

void __fastcall sub_1405C5EC8(__int64 a1, char a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rcx
  USHORT v9; // ax
  signed __int32 v10; // ebx
  BOOL v11; // eax
  int v12; // r9d
  int v13; // edx
  PVOID BackTrace[16]; // [rsp+30h] [rbp-88h] BYREF

  memset(BackTrace, 0, sizeof(BackTrace));
  if ( (xmmword_140D06910 & 0x80u) != 0LL )
  {
    LOWORD(v8) = 4403 - (a2 != 0);
    sub_14062DD68(v8, a1, a3, a4);
  }
  if ( (dword_140D05010 & 0x73) != 0 && (*(_BYTE *)(a1 + 25) & 1) != 0 && KeGetEffectiveIrql() <= 2u )
  {
    v9 = RtlCaptureStackBackTrace(1u, 0x10u, BackTrace, 0LL);
    if ( v9 )
    {
      if ( v9 < 0x10u )
        memset(&BackTrace[v9], 0, 8LL * (16 - (unsigned int)v9));
      v10 = _InterlockedExchangeAdd(&dword_140C252D0, 1u);
      v11 = sub_140297EF0();
      v12 = v10 + 1;
      LOBYTE(v13) = a2;
      if ( v11 )
        sub_140986190(a1, v13, (unsigned __int16)a3, v12, BackTrace, a4);
      else
        sub_1405C5DC8(a1, a2, a3, v12, (_SLIST_ENTRY *)BackTrace, a4);
    }
  }
}
