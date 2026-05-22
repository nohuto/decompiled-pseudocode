/*
 * XREFs of ?QueryInterface@CMessageConversationHost@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002AF60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CMessageConversationHost::QueryInterface(
        DirectComposition::CMessageConversationHost *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v3 )
    goto LABEL_8;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6dfae6da_7941_4c1e_a565_c18161b30018.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6dfae6da_7941_4c1e_a565_c18161b30018.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6dfae6da_7941_4c1e_a565_c18161b30018.Data4;
  if ( v4 )
  {
    *a3 = 0LL;
    return 2147500034LL;
  }
  else
  {
LABEL_8:
    *a3 = this;
    (*(void (__fastcall **)(DirectComposition::CMessageConversationHost *))(*(_QWORD *)this + 8LL))(this);
    return 0LL;
  }
}
