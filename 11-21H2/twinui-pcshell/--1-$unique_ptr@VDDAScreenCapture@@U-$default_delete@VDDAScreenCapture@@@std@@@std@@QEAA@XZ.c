/*
 * XREFs of ??1?$unique_ptr@VDDAScreenCapture@@U?$default_delete@VDDAScreenCapture@@@std@@@std@@QEAA@XZ @ 0x1803B45E8
 * Callers:
 *     _std::shared_ptr_DDAScreenCapture_::reset_DDAScreenCapture__::_1_::dtor$1 @ 0x1803B4560 (_std--shared_ptr_DDAScreenCapture_--reset_DDAScreenCapture__--_1_--dtor$1.c)
 *     _DDAScreenCapture::CreateInstance_::_1_::dtor$1 @ 0x1803B983C (_DDAScreenCapture--CreateInstance_--_1_--dtor$1.c)
 * Callees:
 *     ??_GDDAScreenCapture@@QEAAPEAXI@Z @ 0x1803B4668 (--_GDDAScreenCapture@@QEAAPEAXI@Z.c)
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
