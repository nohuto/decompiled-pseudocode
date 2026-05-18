/*
 * XREFs of Spectre::Engine::_anonymous_namespace_::SetVertexBufferInternal_4_std::shared_ptr_Spectre::Engine::VertexBuffer__Spectre::Utils::Math::Vector2_ @ 0x1800477D4
 * Callers:
 *     ?SetUV0Internal@Mesh@Engine@Spectre@@IEAAXQEBUVector2@Math@Utils@3@I@Z @ 0x180049B6C (-SetUV0Internal@Mesh@Engine@Spectre@@IEAAXQEBUVector2@Math@Utils@3@I@Z.c)
 *     ?SetUV1Internal@Mesh@Engine@Spectre@@IEAAXQEBUVector2@Math@Utils@3@I@Z @ 0x180049CAC (-SetUV1Internal@Mesh@Engine@Spectre@@IEAAXQEBUVector2@Math@Utils@3@I@Z.c)
 * Callees:
 *     Spectre::Engine::_anonymous_namespace_::SetBufferInternal_4_Spectre::Engine::VertexBuffer_Spectre::Utils::Math::Vector2_enum_Spectre::Engine::DeviceVertexBuffer::Attribute_&_ @ 0x1800473DC (Spectre--Engine--_anonymous_namespace_--SetBufferInternal_4_Spectre--Engine--VertexBuffer_Spectr.c)
 */

__int64 __fastcall Spectre::Engine::_anonymous_namespace_::SetVertexBufferInternal_4_std::shared_ptr_Spectre::Engine::VertexBuffer__Spectre::Utils::Math::Vector2_(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        char a5,
        int a6,
        __int64 a7)
{
  __int64 v8; // [rsp+20h] [rbp-28h]

  LODWORD(v8) = a6;
  return Spectre::Engine::_anonymous_namespace_::SetBufferInternal_4_Spectre::Engine::VertexBuffer_Spectre::Utils::Math::Vector2_enum_Spectre::Engine::DeviceVertexBuffer::Attribute___(
           a1,
           a2,
           a3,
           a4,
           v8,
           a7,
           (__int64)&a5);
}
