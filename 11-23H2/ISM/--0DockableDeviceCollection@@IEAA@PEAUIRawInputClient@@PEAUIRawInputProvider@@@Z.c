/*
 * XREFs of ??0DockableDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z @ 0x1800E2FB8
 * Callers:
 *     ?Create@DockableDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800E3324 (-Create@DockableDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x180038330 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18003DD20 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
DockableDeviceCollection *__fastcall DockableDeviceCollection::DockableDeviceCollection(
        DockableDeviceCollection *this,
        struct IRawInputClient *a2,
        struct IRawInputProvider *a3)
{
  size_t size_of; // rax
  _QWORD *v6; // rax

  HIDDeviceCollection::HIDDeviceCollection(this, a2);
  *(_QWORD *)this = &DockableDeviceCollection::`vftable';
  *((_QWORD *)this + 345) = 0LL;
  *((_QWORD *)this + 346) = 0LL;
  *((_QWORD *)this + 347) = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v6 = v6;
  v6[1] = v6;
  v6[2] = v6;
  *((_WORD *)v6 + 12) = 257;
  *((_QWORD *)this + 346) = v6;
  *((_QWORD *)this + 3) = a3;
  return this;
}
