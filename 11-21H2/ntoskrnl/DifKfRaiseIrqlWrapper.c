/*
 * XREFs of DifKfRaiseIrqlWrapper @ 0x140616320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 */

unsigned __int8 __fastcall DifKfRaiseIrqlWrapper(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 *APIThunkContextById; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rdi
  unsigned __int8 CurrentIrql; // r11
  struct _KPRCB *CurrentPrcb; // rax
  __int64 *v12; // rdi
  __int64 *v13; // rbx
  __int128 v15; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1;
  v15 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(311);
  if ( !APIThunkContextById )
    goto LABEL_18;
  if ( ViVerifierEnabled
    && ((VfRuleClasses & 0xFFA9F6E6) != 0 || (v3 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x200000000LL) != 0))
    || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v7 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v7 & 0x18) == 0 )
  {
    if ( (v7 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v3, v2, v5, v6);
    goto LABEL_12;
  }
  ReturnAddressForWrappers = retaddr;
LABEL_12:
  *(_QWORD *)&v15 = ReturnAddressForWrappers;
LABEL_13:
  BYTE8(v15) = v1;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v15);
  }
LABEL_18:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v1 - 2) <= 0xDu )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    *((_DWORD *)CurrentPrcb->SchedulerAssist + 5) |= ((1LL << ((unsigned __int8)v1 + 1)) - 1) & ~((1LL << (CurrentIrql + 1))
                                                                                                - 1) & 0xFFFFFFFC;
  }
  BYTE9(v15) = CurrentIrql;
  if ( APIThunkContextById )
  {
    v12 = APIThunkContextById + 6;
    v13 = (__int64 *)APIThunkContextById[6];
    if ( v13 != v12 )
    {
      do
      {
        if ( v13 != (__int64 *)16 )
          ((void (__fastcall *)(__int128 *))*(v13 - 1))(&v15);
        v13 = (__int64 *)*v13;
      }
      while ( v13 != v12 );
      return BYTE9(v15);
    }
  }
  return CurrentIrql;
}
