/*
 * XREFs of ?QueryInterface@CShoulderTapExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180084FC0
 * Callers:
 *     ?QueryInterface@CShoulderTapExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F40A0 (-QueryInterface@CShoulderTapExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CShoulderTapExperienceManager::QueryInterface(
        CShoulderTapExperienceManager *this,
        struct _GUID *a2,
        CShoulderTapExperienceManager **a3)
{
  CShoulderTapExperienceManager *v3; // r11
  unsigned int v4; // ebx
  _DWORD *v5; // rcx
  _DWORD *v6; // rcx

  v3 = this;
  v4 = 0;
  *a3 = 0LL;
  if ( *(_QWORD *)&a2->Data1 == __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || InlineIsEqualGUID(a2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90)
    || InlineIsEqualGUID(v5, &GUID_8667db0d_6960_465f_b9a4_c461863efa91)
    || InlineIsEqualGUID(v6, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
  {
    *a3 = v3;
    (*(void (__fastcall **)(CShoulderTapExperienceManager *))(*(_QWORD *)v3 + 8LL))(v3);
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v4;
}
