/*
 * XREFs of ??$make_unique@VInputInfoValidator@@$$V$0A@@std@@YA?AV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@0@XZ @ 0x1800F6958
 * Callers:
 *     ?OnAttachDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z @ 0x1800F7334 (-OnAttachDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0InputInfoValidator@@QEAA@XZ @ 0x1801C2744 (--0InputInfoValidator@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
InputInfoValidator **__fastcall std::make_unique<InputInfoValidator,,0>(InputInfoValidator **a1)
{
  InputInfoValidator *v2; // rbx
  InputInfoValidator *v3; // rax

  v2 = 0LL;
  v3 = (InputInfoValidator *)RefCountedObject::operator new(0x50uLL);
  if ( v3 )
    v2 = InputInfoValidator::InputInfoValidator(v3);
  *a1 = v2;
  return a1;
}
