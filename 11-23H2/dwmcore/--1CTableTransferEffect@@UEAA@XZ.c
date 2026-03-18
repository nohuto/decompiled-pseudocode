/*
 * XREFs of ??1CTableTransferEffect@@UEAA@XZ @ 0x1802541AC
 * Callers:
 *     ??_GCTableTransferEffect@@UEAAPEAXI@Z @ 0x1802541F0 (--_GCTableTransferEffect@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180104CD8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall CTableTransferEffect::~CTableTransferEffect(CTableTransferEffect *this)
{
  `vector destructor iterator'(
    (char *)this + 184,
    40LL,
    4LL,
    (void (__fastcall *)(char *))DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>);
  CFilterEffect::~CFilterEffect(this);
}
