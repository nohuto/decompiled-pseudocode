/*
 * XREFs of DifKeSetTimerExWrapper @ 0x1406157E0
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 */

char __fastcall DifKeSetTimerExWrapper(unsigned __int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *APIThunkContextById; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rdi
  char result; // al
  __int64 *v17; // rbx
  __int128 v18; // [rsp+30h] [rbp-30h] BYREF
  __int128 v19; // [rsp+40h] [rbp-20h]
  __int128 v20; // [rsp+50h] [rbp-10h]
  __int64 retaddr; // [rsp+88h] [rbp+28h]

  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(302);
  if ( !APIThunkContextById )
    goto LABEL_18;
  if ( ViVerifierEnabled
    && ((VfRuleClasses & 0xFFA9F6E6) != 0 || (v9 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x200000000LL) != 0))
    || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v13 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v13 & 0x18) == 0 )
  {
    if ( (v13 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v9, v8, v11, v12);
    goto LABEL_12;
  }
  ReturnAddressForWrappers = retaddr;
LABEL_12:
  *(_QWORD *)&v18 = ReturnAddressForWrappers;
LABEL_13:
  *(_QWORD *)&v20 = a1;
  *((_QWORD *)&v19 + 1) = a2;
  LODWORD(v19) = a3;
  *((_QWORD *)&v18 + 1) = a4;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v18);
  }
LABEL_18:
  result = KiSetTimerEx(a1, a2, a3, 0, a4);
  BYTE8(v20) = result;
  if ( APIThunkContextById )
  {
    v17 = (__int64 *)APIThunkContextById[6];
    if ( v17 != APIThunkContextById + 6 )
    {
      do
      {
        if ( v17 != (__int64 *)16 )
          ((void (__fastcall *)(__int128 *))*(v17 - 1))(&v18);
        v17 = (__int64 *)*v17;
      }
      while ( v17 != APIThunkContextById + 6 );
      return BYTE8(v20);
    }
  }
  return result;
}
