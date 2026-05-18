/*
 * XREFs of Spectre::Engine::_anonymous_namespace_::SetVertexBufferInternal_6_std::shared_ptr_Spectre::Engine::VertexBuffer__Spectre::Utils::Math::Vector4_ @ 0x18004783C
 * Callers:
 *     ?SetTangentsInternal@Mesh@Engine@Spectre@@IEAAXQEBUVector4@Math@Utils@3@I_N@Z @ 0x180049994 (-SetTangentsInternal@Mesh@Engine@Spectre@@IEAAXQEBUVector4@Math@Utils@3@I_N@Z.c)
 * Callees:
 *     Spectre::Engine::_anonymous_namespace_::SetBufferInternal_6_Spectre::Engine::VertexBuffer_Spectre::Utils::Math::Vector4_enum_Spectre::Engine::DeviceVertexBuffer::Attribute_&_ @ 0x18004752C (Spectre--Engine--_anonymous_namespace_--SetBufferInternal_6_Spectre--Engine--VertexBuffer_Spectr.c)
 */

__int64 __fastcall Spectre::Engine::_anonymous_namespace_::SetVertexBufferInternal_6_std::shared_ptr_Spectre::Engine::VertexBuffer__Spectre::Utils::Math::Vector4_(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7)
{
  __int64 v8; // [rsp+20h] [rbp-38h]
  int v9[6]; // [rsp+40h] [rbp-18h] BYREF

  v9[0] = 2;
  LODWORD(v8) = a6;
  return Spectre::Engine::_anonymous_namespace_::SetBufferInternal_6_Spectre::Engine::VertexBuffer_Spectre::Utils::Math::Vector4_enum_Spectre::Engine::DeviceVertexBuffer::Attribute___(
           a1,
           a2,
           a3,
           a4,
           v8,
           a7,
           (__int64)v9);
}
