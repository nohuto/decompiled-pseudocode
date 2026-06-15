/*
 * XREFs of ??1CCompositeSystemEffect@@UEAA@XZ @ 0x18004749C
 * Callers:
 *     ??_ECCompositeSystemEffect@@UEAAPEAXI@Z @ 0x180047460 (--_ECCompositeSystemEffect@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18003CF74 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CCompositeSystemEffect::~CCompositeSystemEffect(CCompositeSystemEffect *this)
{
  char *v2; // rcx
  int *v3; // rdi
  int v4; // ebp
  __int64 v5; // rsi
  __int64 v6; // rdx
  _DWORD *v7; // rdi
  int i; // esi

  v2 = (char *)*((_QWORD *)this + 15);
  v3 = (int *)((char *)this + 128);
  if ( v2 )
  {
    v4 = 0;
    if ( *v3 > 0 )
    {
      v5 = 0LL;
      do
      {
        v6 = *(_QWORD *)&v2[v5];
        if ( v6 )
        {
          *(_QWORD *)&v2[v5] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
          v2 = (char *)*((_QWORD *)this + 15);
        }
        ++v4;
        v5 += 8LL;
      }
      while ( v4 < *v3 );
    }
    free(v2);
    *((_QWORD *)this + 15) = 0LL;
  }
  *v3 = 0;
  *((_DWORD *)this + 33) = 0;
  v7 = (_DWORD *)((char *)this + 112);
  if ( *((_QWORD *)this + 13) )
  {
    for ( i = 0; i < *v7; ++i )
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)(*((_QWORD *)this + 13) + 8LL * i));
    free(*((void **)this + 13));
    *((_QWORD *)this + 13) = 0LL;
  }
  *v7 = 0;
  *((_DWORD *)this + 29) = 0;
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)this + 88);
  *((_DWORD *)this + 15) = -1073741823;
}
