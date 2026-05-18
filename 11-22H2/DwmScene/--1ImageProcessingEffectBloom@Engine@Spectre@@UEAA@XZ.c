/*
 * XREFs of ??1ImageProcessingEffectBloom@Engine@Spectre@@UEAA@XZ @ 0x180095C2C
 * Callers:
 *     ??_GImageProcessingEffectBloom@Engine@Spectre@@UEAAPEAXI@Z @ 0x180095D60 (--_GImageProcessingEffectBloom@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

void __fastcall Spectre::Engine::ImageProcessingEffectBloom::~ImageProcessingEffectBloom(
        Spectre::Engine::ImageProcessingEffectBloom *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base *v6; // rcx
  std::_Ref_count_base *v7; // rcx
  std::_Ref_count_base *v8[2]; // [rsp+20h] [rbp-10h] BYREF

  *(_QWORD *)this = &Spectre::Engine::ImageProcessingEffectBloom::`vftable';
  *(_OWORD *)v8 = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 23, (__int64 *)v8);
  if ( v8[1] )
    std::_Ref_count_base::_Decref(v8[1]);
  *(_OWORD *)v8 = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 31, (__int64 *)v8);
  if ( v8[1] )
    std::_Ref_count_base::_Decref(v8[1]);
  *(_OWORD *)v8 = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 25, (__int64 *)v8);
  if ( v8[1] )
    std::_Ref_count_base::_Decref(v8[1]);
  *(_OWORD *)v8 = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 29, (__int64 *)v8);
  if ( v8[1] )
    std::_Ref_count_base::_Decref(v8[1]);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 34);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 32);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 30);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 28);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  v6 = (std::_Ref_count_base *)*((_QWORD *)this + 26);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  v7 = (std::_Ref_count_base *)*((_QWORD *)this + 24);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  Spectre::Engine::ImageProcessingEffect::~ImageProcessingEffect(this);
}
