/*
 * XREFs of ??1CTableTransferEffect@@UEAA@XZ @ 0x180242054
 * Callers:
 *     ??_GCTableTransferEffect@@UEAAPEAXI@Z @ 0x180242090 (--_GCTableTransferEffect@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18008EF8C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall CTableTransferEffect::~CTableTransferEffect(CTableTransferEffect *this)
{
  `vector destructor iterator'(
    (char *)this + 168,
    40LL,
    4LL,
    (void (__fastcall *)(char *))DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>);
  CFilterEffect::~CFilterEffect(this);
}
