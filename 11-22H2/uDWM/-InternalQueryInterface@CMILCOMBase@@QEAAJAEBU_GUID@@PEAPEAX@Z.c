/*
 * XREFs of ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004E62C
 * Callers:
 *     ?QueryInterface@CCompoundBitmapLock@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004E620 (-QueryInterface@CCompoundBitmapLock@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILCOMBase::InternalQueryInterface(CMILCOMBase *this, const struct _GUID *a2, void **a3)
{
  int v4; // edi
  __int64 v5; // rax

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v5 )
    {
      v4 = (*(__int64 (__fastcall **)(CMILCOMBase *))(*(_QWORD *)this + 32LL))(this);
      if ( v4 < 0 )
      {
        *a3 = 0LL;
        return (unsigned int)v4;
      }
    }
    else
    {
      *a3 = this;
      v4 = 0;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  }
  return (unsigned int)v4;
}
