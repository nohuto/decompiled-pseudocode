/*
 * XREFs of ??_E?$CSimplePerfCounterAggregateValues@W4SpatialObjectCountTypes@@I$01@@UEAAPEAXI@Z @ 0x14009B860
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall CSimplePerfCounterAggregateValues<enum SpatialObjectCountTypes,unsigned int,2>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &CAggregateValuesBase<enum SpatialObjectCountTypes,unsigned int>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
