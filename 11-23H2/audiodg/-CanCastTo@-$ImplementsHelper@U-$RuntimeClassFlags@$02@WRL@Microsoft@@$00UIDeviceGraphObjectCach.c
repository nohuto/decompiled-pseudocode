/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIDeviceGraphObjectCache@@UIWeakReferenceSource@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1400179F8
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x140017E1C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObje.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x140017FD8 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IDeviceGraphObjectCache,IWeakReferenceSource,IDeviceGraphObjectCacheInternal>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  const struct _GUID *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r10
  const struct _GUID *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r10
  _QWORD *v10; // r8
  __int64 v11; // r10

  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_f1be3847_41e2_49da_9192_78fbf3cb400d) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( (unsigned int)InlineIsEqualGUID(v2, &GUID_00000038_0000_0000_c000_000000000046) )
    {
      *v7 = v9;
    }
    else if ( (unsigned int)InlineIsEqualGUID(v6, &GUID_6749eb56_8b5f_4af1_861d_715c84e9094a) )
    {
      *v10 = v11 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v8;
  }
}
