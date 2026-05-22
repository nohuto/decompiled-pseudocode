/*
 * XREFs of ??$GetAllAttachedObjectsByType@UIAttachableInputObjectSampleProxy@@@InputSite@@QEAA?AV?$vector@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x18019F120
 * Callers:
 *     ?RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z @ 0x18019F7E0 (-RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800E6B40 (--$_Emplace_reallocate@AEBV-$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@-$vec.c)
 *     ??$As@UIAttachableInputObjectSampleProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180124EEC (--$As@UIAttachableInputObjectSampleProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall InputSite::GetAllAttachedObjectsByType<IAttachableInputObjectSampleProxy>(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 *v5; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h]

  v8 = a2;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v7 = 0LL;
  v3 = *(_QWORD *)(a1 + 488);
  v4 = *(_QWORD *)(a1 + 496);
  while ( v3 != v4 )
  {
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IAttachableInputObjectSampleProxy>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v3 + 8),
                &v7) >= 0 )
    {
      v5 = *(__int64 **)(a2 + 8);
      if ( v5 == *(__int64 **)(a2 + 16) )
      {
        std::vector<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy> const &>(
          (__int64 **)a2,
          v5,
          &v7);
      }
      else
      {
        *v5 = v7;
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        *(_QWORD *)(a2 + 8) += 8LL;
      }
    }
    v3 += 16LL;
  }
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(&v7);
  return a2;
}
