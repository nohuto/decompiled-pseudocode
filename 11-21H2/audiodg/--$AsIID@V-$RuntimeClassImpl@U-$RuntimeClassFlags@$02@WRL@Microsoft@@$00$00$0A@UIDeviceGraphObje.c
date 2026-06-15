/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x140011F94
 * Callers:
 *     ?GetObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@UEAAJPEBGPEAUOBJECTCACHE_INITIALIZATION_PARAMS@@PEAPEAUIDeviceGraphObjectCache@@@Z @ 0x140006FC0 (-GetObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@UEAAJPEBGPEAUOBJECTCACHE_INITIALIZATI.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140013270 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGra.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x14001207C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>>(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  const struct _GUID *v6; // rdx
  const struct _GUID *v7; // rcx
  const struct _GUID *v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r9
  const struct _GUID *v11; // rcx
  _QWORD *v12; // r8
  __int64 v13; // r11
  int v14; // ebx
  const struct _GUID *v16; // rcx
  _QWORD *v17; // r8
  __int64 v18; // r9

  *a3 = 0LL;
  if ( !(unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    && !(unsigned int)InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    if ( !(unsigned int)InlineIsEqualGUID(v7, v6) )
    {
      if ( (unsigned int)InlineIsEqualGUID(v8, &GUID_f1be3847_41e2_49da_9192_78fbf3cb400d) )
      {
        *v12 = v13;
LABEL_6:
        v14 = 0;
LABEL_7:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        return (unsigned int)v14;
      }
      if ( !(unsigned int)InlineIsEqualGUID(v11, &GUID_00000038_0000_0000_c000_000000000046) )
      {
        if ( (unsigned int)InlineIsEqualGUID(v16, &GUID_6749eb56_8b5f_4af1_861d_715c84e9094a) )
        {
          v10 = v18 + 8;
          *v17 = v10;
          v14 = 0;
        }
        else
        {
          v14 = -2147467262;
          v10 = 0LL;
        }
        if ( v14 < 0 )
          return (unsigned int)v14;
        goto LABEL_7;
      }
    }
    *v9 = v10;
    goto LABEL_6;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
