/*
 * XREFs of ?RenderSymbols@Bounds@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18004A4B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002945C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?GetCorners@BoundingBox@DirectX@@QEBAXPEAUXMFLOAT3@2@@Z @ 0x18004A35C (-GetCorners@BoundingBox@DirectX@@QEBAXPEAUXMFLOAT3@2@@Z.c)
 *     ?RenderSymbolLine3D@Component@Engine@Spectre@@IEBAXUVector3@Math@Utils@3@0UColor@563@1M@Z @ 0x1800814B8 (-RenderSymbolLine3D@Component@Engine@Spectre@@IEBAXUVector3@Math@Utils@3@0UColor@563@1M@Z.c)
 */

__int64 __fastcall Spectre::Engine::Bounds::RenderSymbols(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  int v6; // ecx
  char v7[96]; // [rsp+50h] [rbp-78h] BYREF

  result = *a4;
  v6 = *(_DWORD *)(*a4 + 440);
  if ( (v6 & 0x10000) != 0 && (v6 & 0x400000) != 0 )
  {
    `vector constructor iterator'(v7, 12LL, 8LL, (void (__fastcall *)(char *))Spectre::Utils::Math::Vector3::Vector3);
    DirectX::BoundingBox::GetCorners((DirectX::BoundingBox *)(a1 + 88), (struct DirectX::XMFLOAT3 *)v7);
    Spectre::Engine::Component::RenderSymbolLine3D(a1);
  }
  return result;
}
