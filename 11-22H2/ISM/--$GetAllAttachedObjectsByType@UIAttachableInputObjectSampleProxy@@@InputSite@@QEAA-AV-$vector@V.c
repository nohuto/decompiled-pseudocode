/*
 * XREFs of ??$GetAllAttachedObjectsByType@UIAttachableInputObjectSampleProxy@@@InputSite@@QEAA?AV?$vector@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x1801CAC0C
 * Callers:
 *     ?RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z @ 0x1801CB280 (-RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIAttachableInputObjectSampleProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18014D9B0 (--$As@UIAttachableInputObjectSampleProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1801CAD0C (--$_Emplace_reallocate@AEBV-$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@-$vecto.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall InputSite::GetAllAttachedObjectsByType<IAttachableInputObjectSampleProxy>(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  _QWORD *v5; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v8; // [rsp+48h] [rbp+10h]

  v8 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v7 = 0LL;
  v3 = *(_QWORD *)(a1 + 488);
  v4 = *(_QWORD *)(a1 + 496);
  while ( v3 != v4 )
  {
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IAttachableInputObjectSampleProxy>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v3 + 8),
                &v7) >= 0 )
    {
      v5 = (_QWORD *)a2[1];
      if ( v5 == (_QWORD *)a2[2] )
      {
        std::vector<Microsoft::WRL::ComPtr<IAttachableInputObjectSampleProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IAttachableInputObjectSampleProxy> const &>(
          a2,
          v5,
          &v7);
      }
      else
      {
        *v5 = v7;
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        a2[1] += 8LL;
      }
    }
    v3 += 16LL;
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v7);
  return a2;
}
