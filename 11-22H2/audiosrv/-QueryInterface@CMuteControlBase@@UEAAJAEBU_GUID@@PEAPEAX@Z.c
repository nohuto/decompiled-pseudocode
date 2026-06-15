/*
 * XREFs of ?QueryInterface@CMuteControlBase@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180111460
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMuteControlBase::QueryInterface(
        CMuteControlBase *this,
        const struct _GUID *a2,
        CMuteControlBase **a3)
{
  CMuteControlBase *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // ebx

  v4 = this;
  if ( !a3 )
  {
    v7 = -2147467261;
LABEL_13:
    AudSrvTraceLoggingErrorHelper("CMuteControlBase::QueryInterface", 135, v7);
    return (unsigned int)v7;
  }
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v5 )
    goto LABEL_8;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_a09513ed_c709_4d21_bd7b_5f34c47f3947.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a09513ed_c709_4d21_bd7b_5f34c47f3947.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_a09513ed_c709_4d21_bd7b_5f34c47f3947.Data4;
  if ( v6 )
  {
    v7 = -2147467262;
    v4 = 0LL;
  }
  else
  {
LABEL_8:
    (*(void (__fastcall **)(CMuteControlBase *))(*(_QWORD *)this + 8LL))(this);
    v7 = 0;
  }
  *a3 = v4;
  if ( v7 < 0 )
    goto LABEL_13;
  return (unsigned int)v7;
}
