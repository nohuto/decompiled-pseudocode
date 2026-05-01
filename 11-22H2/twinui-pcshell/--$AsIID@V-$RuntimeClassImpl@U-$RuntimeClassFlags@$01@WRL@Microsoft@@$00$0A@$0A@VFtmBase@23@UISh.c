/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIShellPositionerPriority@@UIShellPositionerPriorityPersistence@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIShellPositionerPriority@@UIShellPositionerPriorityPersistence@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800CFAAC
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIShellPositionerPriority@@UIShellPositionerPriorityPersistence@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B9F90 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801B9F90.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rcx
  _QWORD *v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int64 v13; // r8
  _DWORD *v14; // rcx
  _QWORD *v15; // r10
  __int64 v16; // r9
  _QWORD *v17; // r10

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    if ( !InlineIsEqualGUID(v3, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
    {
      if ( InlineIsEqualGUID(v6, &GUID_00000003_0000_0000_c000_000000000046) )
      {
        *v10 = v11;
        v12 = 0;
        v13 = v11;
      }
      else
      {
        v12 = -2147467262;
        v13 = 0LL;
      }
      if ( v12 == -2147467262 )
      {
        if ( InlineIsEqualGUID(v9, &GUID_9579607f_b1e9_4350_b203_d2784a62a5cb) )
        {
          *v15 = v8;
LABEL_8:
          v12 = 0;
          v13 = v8;
          goto LABEL_12;
        }
        if ( InlineIsEqualGUID(v14, &GUID_12c8e92e_f569_48ec_9d4d_56b96469e294) )
        {
          v13 = v16 + 8;
          *v17 = v16 + 8;
          v12 = 0;
        }
        else
        {
          v12 = -2147467262;
        }
      }
      if ( v12 < 0 )
        return (unsigned int)v12;
LABEL_12:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      return (unsigned int)v12;
    }
    *v7 = v8;
    goto LABEL_8;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
