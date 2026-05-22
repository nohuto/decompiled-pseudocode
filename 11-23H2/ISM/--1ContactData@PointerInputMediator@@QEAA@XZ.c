/*
 * XREFs of ??1ContactData@PointerInputMediator@@QEAA@XZ @ 0x1800FCCD4
 * Callers:
 *     ?Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x18005B088 (-Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     _PointerInputMediator::PointerFrame::Initialize_::_1_::dtor$0 @ 0x18005B23D (_PointerInputMediator--PointerFrame--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall PointerInputMediator::ContactData::~ContactData(
        PointerInputMediator::ContactData *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 1);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v4, a2, a3, a4);
}
