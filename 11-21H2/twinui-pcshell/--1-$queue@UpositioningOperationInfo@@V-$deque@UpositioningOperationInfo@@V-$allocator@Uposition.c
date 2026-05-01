/*
 * XREFs of ??1?$queue@UpositioningOperationInfo@@V?$deque@UpositioningOperationInfo@@V?$allocator@UpositioningOperationInfo@@@std@@@std@@@std@@QEAA@XZ @ 0x18031E354
 * Callers:
 *     _FullScreenPositioner::FullScreenPositioner_::_1_::dtor$10 @ 0x18021CD3F (_FullScreenPositioner--FullScreenPositioner_--_1_--dtor$10.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::queue<positioningOperationInfo>::~queue<positioningOperationInfo,std::deque<positioningOperationInfo>>(
        __int64 a1)
{
  std::deque<positioningOperationInfo>::~deque<positioningOperationInfo>(a1);
}
