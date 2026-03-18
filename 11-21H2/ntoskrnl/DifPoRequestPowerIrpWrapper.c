/*
 * XREFs of DifPoRequestPowerIrpWrapper @ 0x14061A090
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestPowerIrp @ 0x1403A3C90 (PopRequestPowerIrp.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 */

__int64 __fastcall DifPoRequestPowerIrpWrapper(__int64 a1, char a2, ULONG a3, __int64 a4, __int64 a5, IRP *a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *APIThunkContextById; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rdi
  __int64 result; // rax
  __int64 *v19; // rbx
  __int128 v20; // [rsp+40h] [rbp-40h] BYREF
  __int128 v21; // [rsp+50h] [rbp-30h]
  __int128 v22; // [rsp+60h] [rbp-20h]
  __int64 v23; // [rsp+70h] [rbp-10h]
  __int64 retaddr; // [rsp+A8h] [rbp+28h]

  v23 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(383);
  if ( !APIThunkContextById )
    goto LABEL_18;
  if ( ViVerifierEnabled
    && ((VfRuleClasses & 0xFFA9F6E6) != 0 || (v11 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x200000000LL) != 0))
    || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v15 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v15 & 0x18) == 0 )
  {
    if ( (v15 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v11, v10, v13, v14);
    goto LABEL_12;
  }
  ReturnAddressForWrappers = retaddr;
LABEL_12:
  *(_QWORD *)&v20 = ReturnAddressForWrappers;
LABEL_13:
  *(_QWORD *)&v21 = a5;
  *((_QWORD *)&v20 + 1) = a6;
  *((_QWORD *)&v22 + 1) = a1;
  BYTE4(v22) = a2;
  LODWORD(v22) = a3;
  *((_QWORD *)&v21 + 1) = a4;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v20);
  }
LABEL_18:
  result = PopRequestPowerIrp(a1, a2, a3, a4, a5, 0, a6);
  LODWORD(v23) = result;
  if ( APIThunkContextById )
  {
    v19 = (__int64 *)APIThunkContextById[6];
    if ( v19 != APIThunkContextById + 6 )
    {
      do
      {
        if ( v19 != (__int64 *)16 )
          ((void (__fastcall *)(__int128 *))*(v19 - 1))(&v20);
        v19 = (__int64 *)*v19;
      }
      while ( v19 != APIThunkContextById + 6 );
      return (unsigned int)v23;
    }
  }
  return result;
}
