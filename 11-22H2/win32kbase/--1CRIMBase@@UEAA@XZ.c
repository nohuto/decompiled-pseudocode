/*
 * XREFs of ??1CRIMBase@@UEAA@XZ @ 0x1C00833C8
 * Callers:
 *     ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C0080970 (--_GCHidInput@@UEAAPEAXI@Z.c)
 *     ??_GCBaseInput@@UEAAPEAXI@Z @ 0x1C01DCBF0 (--_GCBaseInput@@UEAAPEAXI@Z.c)
 *     ??_GCRIMBase@@UEAAPEAXI@Z @ 0x1C01DCC40 (--_GCRIMBase@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C00835D0 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall CRIMBase::~CRIMBase(CRIMBase *this)
{
  *(_QWORD *)this = &CRIMBase::`vftable';
  `vector destructor iterator'(
    (char *)this + 168,
    0x40uLL,
    0x11uLL,
    (void (*)(void *))CRIMBase::SensorDispatcherObject::~SensorDispatcherObject);
}
