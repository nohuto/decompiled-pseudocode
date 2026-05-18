/*
 * XREFs of ?Create@ArrayBuffer@Engine@Spectre@@QEAAXPEBXIIW4Usage@23@W4Format@23@@Z @ 0x1800889E0
 * Callers:
 *     Spectre::Engine::_anonymous_namespace_::SetBufferInternal_4_Spectre::Engine::VertexBuffer_Spectre::Utils::Math::Vector2_enum_Spectre::Engine::DeviceVertexBuffer::Attribute_&_ @ 0x1800473DC (Spectre--Engine--_anonymous_namespace_--SetBufferInternal_4_Spectre--Engine--VertexBuffer_Spectr.c)
 *     Spectre::Engine::_anonymous_namespace_::SetBufferInternal_5_Spectre::Engine::VertexBuffer_Spectre::Utils::Math::Vector3_enum_Spectre::Engine::DeviceVertexBuffer::Attribute_&_ @ 0x180047484 (Spectre--Engine--_anonymous_namespace_--SetBufferInternal_5_Spectre--Engine--VertexBuffer_Spectr.c)
 *     Spectre::Engine::_anonymous_namespace_::SetBufferInternal_6_Spectre::Engine::VertexBuffer_Spectre::Utils::Math::Vector4_enum_Spectre::Engine::DeviceVertexBuffer::Attribute_&_ @ 0x18004752C (Spectre--Engine--_anonymous_namespace_--SetBufferInternal_6_Spectre--Engine--VertexBuffer_Spectr.c)
 *     Spectre::Engine::_anonymous_namespace_::SetBufferInternal_8_Spectre::Engine::IndexBuffer_unsigned_int_ @ 0x1800475D4 (Spectre--Engine--_anonymous_namespace_--SetBufferInternal_8_Spectre--Engine--IndexBuffer_unsigne.c)
 *     Spectre::Engine::_anonymous_namespace_::SetBufferInternal_17_Spectre::Engine::VertexBuffer_unsigned_int_enum_Spectre::Engine::DeviceVertexBuffer::Attribute_&_ @ 0x180047674 (Spectre--Engine--_anonymous_namespace_--SetBufferInternal_17_Spectre--Engine--VertexBuffer_unsig.c)
 *     Spectre::Engine::_anonymous_namespace_::SetBufferInternal_12_Spectre::Engine::IndexBuffer_unsigned_short_ @ 0x18004771C (Spectre--Engine--_anonymous_namespace_--SetBufferInternal_12_Spectre--Engine--IndexBuffer_unsign.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Spectre::Engine::ArrayBuffer::Create(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  return Spectre::Engine::ArrayBuffer::UpdateCpuCache(a1, a2, a3, a4, a5);
}
