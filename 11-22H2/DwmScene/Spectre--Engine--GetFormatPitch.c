/*
 * XREFs of Spectre::Engine::GetFormatPitch @ 0x180048848
 * Callers:
 *     Spectre::Engine::_anonymous_namespace_::SetBufferInternal_4_Spectre::Engine::VertexBuffer_Spectre::Utils::Math::Vector2_enum_Spectre::Engine::DeviceVertexBuffer::Attribute_&_ @ 0x1800473DC (Spectre--Engine--_anonymous_namespace_--SetBufferInternal_4_Spectre--Engine--VertexBuffer_Spectr.c)
 *     Spectre::Engine::_anonymous_namespace_::SetBufferInternal_5_Spectre::Engine::VertexBuffer_Spectre::Utils::Math::Vector3_enum_Spectre::Engine::DeviceVertexBuffer::Attribute_&_ @ 0x180047484 (Spectre--Engine--_anonymous_namespace_--SetBufferInternal_5_Spectre--Engine--VertexBuffer_Spectr.c)
 *     Spectre::Engine::_anonymous_namespace_::SetBufferInternal_6_Spectre::Engine::VertexBuffer_Spectre::Utils::Math::Vector4_enum_Spectre::Engine::DeviceVertexBuffer::Attribute_&_ @ 0x18004752C (Spectre--Engine--_anonymous_namespace_--SetBufferInternal_6_Spectre--Engine--VertexBuffer_Spectr.c)
 *     Spectre::Engine::_anonymous_namespace_::SetBufferInternal_8_Spectre::Engine::IndexBuffer_unsigned_int_ @ 0x1800475D4 (Spectre--Engine--_anonymous_namespace_--SetBufferInternal_8_Spectre--Engine--IndexBuffer_unsigne.c)
 *     Spectre::Engine::_anonymous_namespace_::SetBufferInternal_17_Spectre::Engine::VertexBuffer_unsigned_int_enum_Spectre::Engine::DeviceVertexBuffer::Attribute_&_ @ 0x180047674 (Spectre--Engine--_anonymous_namespace_--SetBufferInternal_17_Spectre--Engine--VertexBuffer_unsig.c)
 *     Spectre::Engine::_anonymous_namespace_::SetBufferInternal_12_Spectre::Engine::IndexBuffer_unsigned_short_ @ 0x18004771C (Spectre--Engine--_anonymous_namespace_--SetBufferInternal_12_Spectre--Engine--IndexBuffer_unsign.c)
 *     ?CreateDefaultImageDescriptors@Engine@Spectre@@YA?AV?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@AEBUTextureDesc@12@_K@Z @ 0x180056230 (-CreateDefaultImageDescriptors@Engine@Spectre@@YA-AV-$vector@UTextureImageDesc@Engine@Spectre@@V.c)
 *     Spectre::Engine::GetFormatRowPitch @ 0x1800566E4 (Spectre--Engine--GetFormatRowPitch.c)
 *     ?UpdateCpuCache@ArrayBuffer@Engine@Spectre@@AEAAXPEBXIIW4Usage@23@W4Format@23@@Z @ 0x180088D78 (-UpdateCpuCache@ArrayBuffer@Engine@Spectre@@AEAAXPEBXIIW4Usage@23@W4Format@23@@Z.c)
 *     ?CreateDesc@DeviceVertexBuffer@Engine@Spectre@@IEAA?AV?$unique_ptr@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U?$default_delete@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@@std@@@std@@IIW4Usage@23@W4Format@23@W4Attribute@123@@Z @ 0x180089658 (-CreateDesc@DeviceVertexBuffer@Engine@Spectre@@IEAA-AV-$unique_ptr@UVertexBufferDesc@DeviceVerte.c)
 *     ?CreateDesc@DeviceArrayBuffer@Engine@Spectre@@MEAA?AV?$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@@std@@IIW4Usage@23@W4Format@23@@Z @ 0x18008B480 (-CreateDesc@DeviceArrayBuffer@Engine@Spectre@@MEAA-AV-$unique_ptr@UArrayBufferDesc@Engine@Spectr.c)
 *     ?GetDeviceBuffer@TextureD3D11@D3D11@Engine@Spectre@@UEBA?AUTextureImageSet@34@XZ @ 0x1800CE110 (-GetDeviceBuffer@TextureD3D11@D3D11@Engine@Spectre@@UEBA-AUTextureImageSet@34@XZ.c)
 *     ?SubmitReadTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEAXI@Z @ 0x1800D1170 (-SubmitReadTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV-$shared_ptr@VTexture@Engine.c)
 *     ?SubmitUpdateTexture2D@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@IIIIPEBXIIII@Z @ 0x1800D2A20 (-SubmitUpdateTexture2D@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV-$shared_ptr@VTexture@En.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

__int64 __fastcall Spectre::Engine::GetFormatPitch(int a1)
{
  _DWORD v2[15]; // [rsp+0h] [rbp-80h]
  __m128i si128; // [rsp+3Ch] [rbp-44h]
  int v4; // [rsp+4Ch] [rbp-34h]
  int v5; // [rsp+50h] [rbp-30h]
  int v6; // [rsp+54h] [rbp-2Ch]
  int v7; // [rsp+58h] [rbp-28h]
  int v8; // [rsp+5Ch] [rbp-24h]
  int v9; // [rsp+60h] [rbp-20h]

  v2[0] = 0;
  v2[1] = 4;
  v2[2] = 4;
  v2[3] = 4;
  v2[5] = 12;
  v2[6] = 16;
  v2[11] = 16;
  v2[10] = 12;
  v2[4] = 8;
  v2[13] = 1;
  v8 = 1;
  v2[7] = 4;
  v2[8] = 4;
  v2[9] = 8;
  v2[12] = 2;
  v2[14] = 2;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v4 = 2;
  v5 = 4;
  v6 = 8;
  v7 = 4;
  v9 = 2;
  return (unsigned int)v2[a1];
}
