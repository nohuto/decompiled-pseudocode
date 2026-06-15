/*
 * XREFs of ?ToString@CAppAudioSessionId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001EB50
 * Callers:
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x18001DB80 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18001E150 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800E7884 (-ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsC.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001C7F0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     memcpy_s @ 0x180025BEC (memcpy_s.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800C5788 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall CAppAudioSessionId::ToString(__int64 a1, void **a2)
{
  char *v3; // r15
  volatile signed __int32 *v4; // rdi
  volatile signed __int32 *v5; // rbx
  __int64 (__fastcall ***v6)(_QWORD, _QWORD, __int64); // rax
  _DWORD *v8; // r12
  __int64 v9; // rax

  v3 = *(char **)(a1 + 32);
  v4 = (volatile signed __int32 *)(v3 - 24);
  v5 = (volatile signed __int32 *)((char *)*a2 - 24);
  if ( v3 - 24 != (char *)v5 )
  {
    if ( *((int *)v5 + 4) >= 0 && *(_QWORD *)v4 == *(_QWORD *)v5 )
    {
      v6 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 32LL))(*(_QWORD *)v4);
      if ( *((int *)v4 + 4) >= 0 && v6 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v4 )
      {
        _InterlockedIncrement(v4 + 4);
      }
      else
      {
        v8 = v4 + 2;
        v9 = (**v6)(v6, *((unsigned int *)v4 + 2), 2LL);
        v4 = (volatile signed __int32 *)v9;
        if ( !v9 )
          ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
        *(_DWORD *)(v9 + 8) = *v8;
        memcpy_s((void *const)(v9 + 24), 2LL * (*v8 + 1), v3, 2LL * (*v8 + 1));
      }
      if ( _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5, v5);
      *a2 = (void *)(v4 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(a2, v3, *((_DWORD *)v3 - 4));
    }
  }
  return 0LL;
}
