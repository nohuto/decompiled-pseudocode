/*
 * XREFs of ??1ConstantBufferGeneric@Engine@Spectre@@UEAA@XZ @ 0x18008B6B8
 * Callers:
 *     ??_EConstantBufferGeneric@Engine@Spectre@@UEAAPEAXI@Z @ 0x180052C80 (--_EConstantBufferGeneric@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x18001E6B0 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 */

void __fastcall Spectre::Engine::ConstantBufferGeneric::~ConstantBufferGeneric(
        Spectre::Engine::ConstantBufferGeneric *this)
{
  *(_QWORD *)this = &Spectre::Engine::ConstantBufferGeneric::`vftable';
  std::vector<unsigned char>::_Tidy((__int64)this + 120);
  Spectre::Engine::DeviceConstantBuffer::~DeviceConstantBuffer(this);
}
