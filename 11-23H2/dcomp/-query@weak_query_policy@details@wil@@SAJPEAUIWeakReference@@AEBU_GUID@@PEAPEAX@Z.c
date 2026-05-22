/*
 * XREFs of ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180118930
 * Callers:
 *     ?ChangeState@HolographicCompositor@Internal@Composition@UI@Windows@@AEAAXJ@Z @ 0x180115F4C (-ChangeState@HolographicCompositor@Internal@Composition@UI@Windows@@AEAAXJ@Z.c)
 *     ?ChangeState@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@AEAAXJ@Z @ 0x1801196C4 (-ChangeState@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@AEAAXJ@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::weak_query_policy::query(struct IWeakReference *a1, const struct _GUID *a2, void **a3)
{
  int v4; // ebx
  const struct _GUID *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  *a3 = 0LL;
  v4 = ((__int64 (__fastcall *)(struct IWeakReference *, GUID *, const struct _GUID **))a1->lpVtbl->Resolve)(
         a1,
         &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
         &v6);
  if ( v4 >= 0 )
  {
    if ( !v6 )
      return 2147943568LL;
    v4 = (**(__int64 (__fastcall ***)(const struct _GUID *, GUID *, void **))&v6->Data1)(
           v6,
           &GUID_5fb52445_1407_4f25_9aa4_ac25bb3a9606,
           a3);
    (*(void (__fastcall **)(const struct _GUID *))(*(_QWORD *)&v6->Data1 + 16LL))(v6);
  }
  return (unsigned int)v4;
}
