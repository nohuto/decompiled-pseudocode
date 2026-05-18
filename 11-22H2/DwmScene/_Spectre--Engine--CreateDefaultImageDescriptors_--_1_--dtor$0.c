/*
 * XREFs of _Spectre::Engine::CreateDefaultImageDescriptors_::_1_::dtor$0 @ 0x1800E759A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800512B0 (--1-$vector@UTextureImageDesc@Engine@Spectre@@V-$allocator@UTextureImageDesc@Engine@Spectre@@@st.c)
 */

__int64 __fastcall Spectre::Engine::CreateDefaultImageDescriptors_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 64) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    return std::vector<Spectre::Engine::TextureImageDesc>::~vector<Spectre::Engine::TextureImageDesc>();
  }
  return result;
}
