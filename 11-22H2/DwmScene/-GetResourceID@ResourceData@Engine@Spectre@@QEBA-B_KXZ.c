/*
 * XREFs of ?GetResourceID@ResourceData@Engine@Spectre@@QEBA?B_KXZ @ 0x180097610
 * Callers:
 *     ??RFindResourceWithID@ResourceManager@Engine@Spectre@@QEBA_NAEBVResourceData@23@@Z @ 0x18007013C (--RFindResourceWithID@ResourceManager@Engine@Spectre@@QEBA_NAEBVResourceData@23@@Z.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall Spectre::Engine::ResourceData::GetResourceID(Spectre::Engine::ResourceData *this)
{
  struct _Mtx_internal_imp_t *v1; // rbx
  __int64 v3; // rdi

  v1 = (Spectre::Engine::ResourceData *)((char *)this + 48);
  std::_Mutex_base::lock((Spectre::Engine::ResourceData *)((char *)this + 48));
  v3 = *((_QWORD *)this + 3);
  _Mtx_unlock(v1);
  return v3;
}
