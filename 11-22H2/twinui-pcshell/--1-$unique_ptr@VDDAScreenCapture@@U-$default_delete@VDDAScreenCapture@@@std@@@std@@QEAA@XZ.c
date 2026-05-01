/*
 * XREFs of ??1?$unique_ptr@VDDAScreenCapture@@U?$default_delete@VDDAScreenCapture@@@std@@@std@@QEAA@XZ @ 0x18048DD10
 * Callers:
 *     _std::shared_ptr_DDAScreenCapture_::reset_DDAScreenCapture__::_1_::dtor$1 @ 0x18048DC88 (_std--shared_ptr_DDAScreenCapture_--reset_DDAScreenCapture__--_1_--dtor$1.c)
 *     _DDAScreenCapture::CreateInstance_::_1_::dtor$1 @ 0x180492772 (_DDAScreenCapture--CreateInstance_--_1_--dtor$1.c)
 * Callees:
 *     ??_GDDAScreenCapture@@QEAAPEAXI@Z @ 0x18048DD98 (--_GDDAScreenCapture@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<DDAScreenCapture>::~unique_ptr<DDAScreenCapture>(
        DDAScreenCapture **a1,
        unsigned int a2)
{
  DDAScreenCapture *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return DDAScreenCapture::`scalar deleting destructor'(v2, a2);
  return result;
}
