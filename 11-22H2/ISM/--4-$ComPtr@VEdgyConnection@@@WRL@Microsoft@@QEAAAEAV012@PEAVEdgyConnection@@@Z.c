/*
 * XREFs of ??4?$ComPtr@VEdgyConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVEdgyConnection@@@Z @ 0x180036AE8
 * Callers:
 *     ?Get@EdgyConnection@@SAPEAV1@XZ @ 0x180037748 (-Get@EdgyConnection@@SAPEAV1@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Microsoft::WRL::ComPtr<EdgyConnection>::operator=(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  v3 = EdgyConnection::s_spThis;
  if ( EdgyConnection::s_spThis != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v3 = EdgyConnection::s_spThis;
    }
    EdgyConnection::s_spThis = a2;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return &EdgyConnection::s_spThis;
}
