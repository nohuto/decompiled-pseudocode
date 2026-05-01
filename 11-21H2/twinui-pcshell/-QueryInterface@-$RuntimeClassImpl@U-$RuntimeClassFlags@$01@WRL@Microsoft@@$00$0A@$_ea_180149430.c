/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedPresentationOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180149430
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedPresentationOperations@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F7130 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801F7130.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081EB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedPresentationOperations,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  int CanCastTo; // eax

  v3 = 0;
  *a3 = 0LL;
  if ( !*(_DWORD *)a2 )
  {
    if ( *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
    {
      *a3 = (void *)a1;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
      return v3;
    }
LABEL_10:
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 8), (const struct _GUID *)a2, a3);
    v4 = -2147467262;
    if ( CanCastTo == -2147467262 )
      return v4;
    v4 = CanCastTo;
    if ( CanCastTo < 0 )
      return v4;
    goto LABEL_7;
  }
  if ( *(_DWORD *)a2 != -367748042
    || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data2
    || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data4
    || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data4[4] )
  {
    goto LABEL_10;
  }
  *a3 = (void *)a1;
  v4 = 0;
LABEL_7:
  (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
  return v4;
}
