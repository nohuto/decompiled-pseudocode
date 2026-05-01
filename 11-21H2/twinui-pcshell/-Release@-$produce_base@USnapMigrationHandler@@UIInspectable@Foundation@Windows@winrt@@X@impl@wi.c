/*
 * XREFs of ?Release@?$produce_base@USnapMigrationHandler@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@UEAAIXZ @ 0x18015C900
 * Callers:
 *     <none>
 * Callees:
 *     ?decrement_strong@?$weak_ref@$00$00@impl@winrt@@QEAAIXZ @ 0x18015C94C (-decrement_strong@-$weak_ref@$00$00@impl@winrt@@QEAAIXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::produce_base<SnapMigrationHandler,winrt::Windows::Foundation::IInspectable,void>::Release(
        unsigned __int64 a1)
{
  volatile signed __int64 *v1; // rbx
  signed __int64 v2; // rax
  unsigned int v3; // edi
  signed __int64 v5; // rtt

  v1 = (volatile signed __int64 *)((a1 - 16) & ((unsigned __int128)-(__int128)a1 >> 64));
  v2 = *((_QWORD *)v1 + 1);
  while ( v2 >= 0 )
  {
    v3 = v2 - 1;
    v5 = v2;
    v2 = _InterlockedCompareExchange64(v1 + 1, v2 - 1, v2);
    if ( v5 == v2 )
      goto LABEL_4;
  }
  v3 = winrt::impl::weak_ref<1,1>::decrement_strong(2 * v2);
LABEL_4:
  if ( !v3 )
  {
    _InterlockedExchange64(v1 + 1, 1LL);
    if ( v1 )
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*v1 + 8))(v1, 1LL);
  }
  return v3;
}
