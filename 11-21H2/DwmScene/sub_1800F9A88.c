/*
 * XREFs of sub_1800F9A88 @ 0x1800F9A88
 * Callers:
 *     sub_1800F6284 @ 0x1800F6284 (sub_1800F6284.c)
 *     sub_1800F65D4 @ 0x1800F65D4 (sub_1800F65D4.c)
 *     sub_1800F69A0 @ 0x1800F69A0 (sub_1800F69A0.c)
 *     sub_1800F6DE4 @ 0x1800F6DE4 (sub_1800F6DE4.c)
 * Callees:
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     sub_180030724 @ 0x180030724 (sub_180030724.c)
 *     sub_1800F845C @ 0x1800F845C (sub_1800F845C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800F9A88(__int64 a1, const wchar_t *a2)
{
  volatile __int32 *v4; // rax
  __int64 v5; // rdx
  __int32 v6; // r8d
  struct _Mtx_internal_imp_t *v7; // rdi
  int v8; // eax
  __int64 *v9; // rbx
  __int64 v10; // rcx
  __int64 **v11; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v15; // [rsp+50h] [rbp+18h] BYREF
  __int64 v16; // [rsp+58h] [rbp+20h]

  LODWORD(v14) = 1;
  sub_180030724((unsigned int *)&v14);
  v4 = (volatile __int32 *)sub_18001DE70(a1 + 256);
  if ( _InterlockedExchange(v4, v6) )
  {
    if ( *(_QWORD *)(v5 + 24) >= 8uLL )
      a2 = *(const wchar_t **)v5;
    sub_18001F2B4(&stru_1801EA608, 4, "A recursive call to TriggerHandlers() with property name '%ls' was ignored.", a2);
  }
  else
  {
    v14 = a1;
    v15 = &v14;
    v7 = (struct _Mtx_internal_imp_t *)(a1 + 160);
    v16 = a1 + 160;
    v8 = Mtx_lock((_Mtx_t)(a1 + 160));
    if ( v8 )
      std::_Throw_C_error(v8);
    v9 = **(__int64 ***)(a1 + 240);
    while ( !*((_BYTE *)v9 + 25) )
    {
      v10 = v9[12];
      if ( !v10 )
      {
        std::_Xbad_function_call();
        break;
      }
      (*(void (__fastcall **)(__int64, const wchar_t *))(*(_QWORD *)v10 + 16LL))(v10, a2);
      v11 = (__int64 **)v9[2];
      if ( *((_BYTE *)v11 + 25) )
      {
        for ( i = (__int64 *)v9[1]; !*((_BYTE *)i + 25) && v9 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v9 = i;
        v9 = i;
      }
      else
      {
        v9 = (__int64 *)v9[2];
        for ( j = *v11; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v9 = j;
      }
    }
    Mtx_unlock(v7);
    sub_1800F845C(&v15);
  }
}
