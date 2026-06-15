/*
 * XREFs of ??1SystemEffectDescriptor@@QEAA@XZ @ 0x1801444A0
 * Callers:
 *     ??1CEndpointCharacteristics@@UEAA@XZ @ 0x18014433C (--1CEndpointCharacteristics@@UEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x180144B04 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 */

void __fastcall SystemEffectDescriptor::~SystemEffectDescriptor(SystemEffectDescriptor *this)
{
  void *v2; // rcx
  int v3; // edi
  std::_Ref_count_base *v4; // rcx

  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    v3 = 0;
    if ( *((int *)this + 10) > 0 )
    {
      do
        std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(*((_QWORD *)this + 4) + 16LL * v3++);
      while ( v3 < *((_DWORD *)this + 10) );
      v2 = (void *)*((_QWORD *)this + 4);
    }
    free(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 3);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)this);
}
