/*
 * XREFs of ndisNsiScheduleCompartmentBlockChangeNotification @ 0x1C0037E88
 * Callers:
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1C002CD80 (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     ndisIfCreateCompartment @ 0x1C00B823C (ndisIfCreateCompartment.c)
 *     ndisIfDeleteCompartment @ 0x1C00B865C (ndisIfDeleteCompartment.c)
 * Callees:
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1C0024F84 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 */

void __fastcall ndisNsiScheduleCompartmentBlockChangeNotification(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rcx
  bool v3; // zf

  v1 = (_QWORD *)(a1 + 1744);
  if ( (_QWORD *)*v1 == v1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
    v2 = (_QWORD *)qword_1C00F5C58;
    if ( *(__int64 **)qword_1C00F5C58 != &qword_1C00F5C50 )
      __fastfail(3u);
    v3 = byte_1C00F5184 == 0;
    *v1 = &qword_1C00F5C50;
    v1[1] = v2;
    *v2 = v1;
    qword_1C00F5C58 = (__int64)v1;
    if ( v3 )
    {
      ndisScheduleWorkItemInternal(&stru_1C00F5190);
      byte_1C00F5184 = 1;
    }
  }
}
