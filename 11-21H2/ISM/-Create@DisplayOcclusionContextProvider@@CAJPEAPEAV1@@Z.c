/*
 * XREFs of ?Create@DisplayOcclusionContextProvider@@CAJPEAPEAV1@@Z @ 0x18019E8E0
 * Callers:
 *     wil::init_once_nothrow__lambda_2e51b86642a92e3b17e4afda222f3187___ @ 0x18019E688 (wil--init_once_nothrow__lambda_2e51b86642a92e3b17e4afda222f3187___.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0SystemContextProvider@@IEAA@XZ @ 0x18003CDB8 (--0SystemContextProvider@@IEAA@XZ.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DisplayOcclusionContextProvider::Create(struct DisplayOcclusionContextProvider **a1)
{
  SystemContextProvider *v2; // rax
  SystemContextProvider *v3; // rbx

  *a1 = 0LL;
  v2 = (SystemContextProvider *)RefCountedObject::operator new(0x70uLL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x70uLL);
    SystemContextProvider::SystemContextProvider(v3);
    *(_QWORD *)v3 = &DisplayOcclusionContextProvider::`vftable'{for `ISystemContextProvider'};
    *((_QWORD *)v3 + 1) = &DisplayOcclusionContextProvider::`vftable'{for `RefCountedObject'};
    *((_QWORD *)v3 + 11) = 0LL;
    *((_QWORD *)v3 + 12) = 0LL;
    *((_QWORD *)v3 + 13) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return 0LL;
}
