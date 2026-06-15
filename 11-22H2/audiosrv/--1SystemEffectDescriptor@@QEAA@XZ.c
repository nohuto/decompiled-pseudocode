/*
 * XREFs of ??1SystemEffectDescriptor@@QEAA@XZ @ 0x180004F70
 * Callers:
 *     ??1EffectPack@@QEAA@XZ @ 0x180004E5C (--1EffectPack@@QEAA@XZ.c)
 * Callees:
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x1800040D4 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall SystemEffectDescriptor::~SystemEffectDescriptor(SystemEffectDescriptor *this)
{
  _DWORD *v2; // rdi
  int i; // esi
  std::_Ref_count_base *v4; // rcx

  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v2 = (_DWORD *)((char *)this + 40);
  if ( *((_QWORD *)this + 4) )
  {
    for ( i = 0; i < *v2; ++i )
      std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(*((_QWORD *)this + 4) + 16LL * i);
    free(*((void **)this + 4));
    *((_QWORD *)this + 4) = 0LL;
  }
  *v2 = 0;
  *((_DWORD *)this + 11) = 0;
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 3);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(this);
}
