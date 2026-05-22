/*
 * XREFs of ?QueryInterface@CDelegatedInkTrailImpl@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E6C20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDelegatedInkTrailImpl::QueryInterface(
        unsigned __int64 this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v3 )
    goto LABEL_7;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c2448e9b_547d_4057_8cf5_8144ede1c2da.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c2448e9b_547d_4057_8cf5_8144ede1c2da.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c2448e9b_547d_4057_8cf5_8144ede1c2da.Data4;
  if ( v4 )
  {
    *a3 = 0LL;
    return 2147500034LL;
  }
  else
  {
LABEL_7:
    *a3 = (void *)(this & -(__int64)(this != 16));
    (**(void (__fastcall ***)(char *))(this - 16))((char *)(this - 16));
    return 0LL;
  }
}
