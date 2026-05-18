/*
 * XREFs of std::_Func_impl_no_alloc__lambda_0c82bcc1497f3afd643663d7c3bef72a__void_std::shared_ptr_Spectre::Utils::Math::Vector4__const_&_std::shared_ptr_Spectre::Utils::Math::Vector3__const_&_void___::_Do_call @ 0x180049DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetNormals@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@_N@Z @ 0x180049628 (-SetNormals@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@_N@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_0c82bcc1497f3afd643663d7c3bef72a__void_std::shared_ptr_Spectre::Utils::Math::Vector4__const___std::shared_ptr_Spectre::Utils::Math::Vector3__const___void___::_Do_call(
        __int64 a1,
        const struct Spectre::Utils::Math::Vector4 *const *a2,
        const struct Spectre::Utils::Math::Vector3 *const *a3)
{
  Spectre::Engine::Mesh::SetNormals(*(Spectre::Engine::Mesh **)(a1 + 8), *a3);
  Spectre::Engine::Mesh::SetTangents(*(Spectre::Engine::Mesh **)(a1 + 8), *a2);
}
