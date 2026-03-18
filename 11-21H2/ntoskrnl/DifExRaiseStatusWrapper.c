/*
 * XREFs of DifExRaiseStatusWrapper @ 0x140609000
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 */

void __fastcall __noreturn DifExRaiseStatusWrapper(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 *APIThunkContextById; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *v9; // rdi
  __int64 *i; // rbx
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v11 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(58);
  if ( !APIThunkContextById )
    goto LABEL_18;
  if ( ViVerifierEnabled
    && ((VfRuleClasses & 0xFFA9F6E6) != 0 || (v3 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x200000000LL) != 0))
    || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) != 0 )
      goto LABEL_13;
  }
  else
  {
    v7 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v7 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_12:
      *(_QWORD *)&v11 = ReturnAddressForWrappers;
LABEL_13:
      v9 = APIThunkContextById + 4;
      DWORD2(v11) = a1;
      for ( i = (__int64 *)APIThunkContextById[4]; i != v9; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          ((void (__fastcall *)(__int128 *))*(i - 1))(&v11);
      }
LABEL_18:
      RtlRaiseStatus(a1);
    }
    if ( (v7 & 4) == 0 )
      goto LABEL_13;
  }
  ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v3, v2, v5, v6);
  goto LABEL_12;
}
