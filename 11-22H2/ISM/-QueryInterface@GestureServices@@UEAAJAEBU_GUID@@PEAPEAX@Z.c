/*
 * XREFs of ?QueryInterface@GestureServices@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180073570
 * Callers:
 *     ?QueryInterface@GestureServices@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007B9D0 (-QueryInterface@GestureServices@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@GestureServices@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007B9F0 (-QueryInterface@GestureServices@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     IsEqualGUID @ 0x180022FE0 (IsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GestureServices::QueryInterface(GestureServices *this, struct _GUID *a2, void **a3)
{
  unsigned int v4; // ebx
  _QWORD *v7; // r8
  _QWORD *v8; // r8
  void *v9; // rdx

  v4 = 0;
  if ( !a3 )
    return 2147942487LL;
  if ( IsEqualGUID(a2, &GUID_16d9171d_da51_40b7_98a0_93fe2b278616) )
  {
    (**(void (__fastcall ***)(GestureServices *))this)(this);
    *a3 = (void *)(((unsigned __int64)this + 56) & -(__int64)(this != 0LL));
    return 0LL;
  }
  if ( IsEqualGUID(v7, &GUID_00000000_0000_0000_c000_000000000046)
    || IsEqualGUID(v8, &GUID_6f7abf2f_b345_9937_b885_bef6a14bbb98) )
  {
    v9 = (void *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    *a3 = v9;
    if ( v9 )
    {
      (**(void (__fastcall ***)(GestureServices *))this)(this);
      return v4;
    }
  }
  else
  {
    *a3 = 0LL;
  }
  return (unsigned int)-2147467262;
}
