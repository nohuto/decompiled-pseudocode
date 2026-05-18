/*
 * XREFs of Spectre::Engine::_anonymous_namespace_::SetVertexBufferInternal_5_std::shared_ptr_Spectre::Engine::VertexBuffer__Spectre::Utils::Math::Vector3_ @ 0x180047808
 * Callers:
 *     ?SetNormalsInternal@Mesh@Engine@Spectre@@IEAAXQEBUVector3@Math@Utils@3@I_N@Z @ 0x180049704 (-SetNormalsInternal@Mesh@Engine@Spectre@@IEAAXQEBUVector3@Math@Utils@3@I_N@Z.c)
 *     ?SetPositionsInternal@Mesh@Engine@Spectre@@IEAAXQEBUVector3@Math@Utils@3@I@Z @ 0x180049850 (-SetPositionsInternal@Mesh@Engine@Spectre@@IEAAXQEBUVector3@Math@Utils@3@I@Z.c)
 * Callees:
 *     Spectre::Engine::_anonymous_namespace_::SetBufferInternal_5_Spectre::Engine::VertexBuffer_Spectre::Utils::Math::Vector3_enum_Spectre::Engine::DeviceVertexBuffer::Attribute_&_ @ 0x180047484 (Spectre--Engine--_anonymous_namespace_--SetBufferInternal_5_Spectre--Engine--VertexBuffer_Spectr.c)
 */

__int64 __fastcall Spectre::Engine::_anonymous_namespace_::SetVertexBufferInternal_5_std::shared_ptr_Spectre::Engine::VertexBuffer__Spectre::Utils::Math::Vector3_(
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
  return Spectre::Engine::_anonymous_namespace_::SetBufferInternal_5_Spectre::Engine::VertexBuffer_Spectre::Utils::Math::Vector3_enum_Spectre::Engine::DeviceVertexBuffer::Attribute___(
           a1,
           a2,
           a3,
           a4,
           v8,
           a7,
           (__int64)&a5);
}
