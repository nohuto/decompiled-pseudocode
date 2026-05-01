/*
 * XREFs of ??1_System_error_message@std@@QEAA@XZ @ 0x18057F2A4
 * Callers:
 *     _std::_System_error_category::message_::_1_::dtor$0 @ 0x180582670 (_std--_System_error_category--message_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_System_error_message::~_System_error_message(HLOCAL *this)
{
  LocalFree(*this);
}
