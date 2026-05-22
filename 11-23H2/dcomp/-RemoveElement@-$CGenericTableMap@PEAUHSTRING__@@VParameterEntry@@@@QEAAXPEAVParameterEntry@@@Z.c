/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@PEAUHSTRING__@@VParameterEntry@@@@QEAAXPEAVParameterEntry@@@Z @ 0x18003FD0C
 * Callers:
 *     ?ClearAllParameters@CompositionAnimation@Composition@UI@Windows@@QEAAJXZ @ 0x18003D0F4 (-ClearAllParameters@CompositionAnimation@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?Destroy@KeyFrameAnimation@Composition@UI@Windows@@UEAAXXZ @ 0x18003E270 (-Destroy@KeyFrameAnimation@Composition@UI@Windows@@UEAAXXZ.c)
 *     ??_GExpressionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18005F3A0 (--_GExpressionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_EScalarKeyFrameAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180060210 (--_EScalarKeyFrameAnimation@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??1CompositionAnimation@Composition@UI@Windows@@UEAA@XZ @ 0x1800603E4 (--1CompositionAnimation@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??_EColorKeyFrameAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180060730 (--_EColorKeyFrameAnimation@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_GVector2KeyFrameAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18007EF60 (--_GVector2KeyFrameAnimation@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ?ClearParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z @ 0x18014F1A8 (-ClearParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ??1ParameterEntry@@QEAA@XZ @ 0x18003FEF4 (--1ParameterEntry@@QEAA@XZ.c)
 */

void __fastcall CGenericTableMap<HSTRING__ *,ParameterEntry>::RemoveElement(
        PRTL_GENERIC_TABLE Table,
        ParameterEntry *this)
{
  ParameterEntry::~ParameterEntry(this);
  if ( !RtlDeleteElementGenericTable(Table, this) )
    RaiseFailFastException(0LL, 0LL, 1u);
}
