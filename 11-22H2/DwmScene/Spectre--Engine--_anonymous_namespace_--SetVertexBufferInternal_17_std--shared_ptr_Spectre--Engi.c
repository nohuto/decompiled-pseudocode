/*
 * XREFs of Spectre::Engine::_anonymous_namespace_::SetVertexBufferInternal_17_std::shared_ptr_Spectre::Engine::VertexBuffer__unsigned_int_ @ 0x18004787C
 * Callers:
 *     ?SetColoursInternal@Mesh@Engine@Spectre@@IEAAXQEBII@Z @ 0x180049188 (-SetColoursInternal@Mesh@Engine@Spectre@@IEAAXQEBII@Z.c)
 *     ?SetJointDataInternal@Mesh@Engine@Spectre@@IEAAXQEBI0I@Z @ 0x18004957C (-SetJointDataInternal@Mesh@Engine@Spectre@@IEAAXQEBI0I@Z.c)
 * Callees:
 *     Spectre::Engine::_anonymous_namespace_::SetBufferInternal_17_Spectre::Engine::VertexBuffer_unsigned_int_enum_Spectre::Engine::DeviceVertexBuffer::Attribute_&_ @ 0x180047674 (Spectre--Engine--_anonymous_namespace_--SetBufferInternal_17_Spectre--Engine--VertexBuffer_unsig.c)
 */

__int64 __fastcall Spectre::Engine::_anonymous_namespace_::SetVertexBufferInternal_17_std::shared_ptr_Spectre::Engine::VertexBuffer__unsigned_int_(
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
  return Spectre::Engine::_anonymous_namespace_::SetBufferInternal_17_Spectre::Engine::VertexBuffer_unsigned_int_enum_Spectre::Engine::DeviceVertexBuffer::Attribute___(
           a1,
           a2,
           a3,
           a4,
           v8,
           a7,
           (__int64)&a5);
}
