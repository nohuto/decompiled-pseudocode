/*
 * XREFs of sub_1800DF000 @ 0x1800DF000
 * Callers:
 *     sub_1800DC224 @ 0x1800DC224 (sub_1800DC224.c)
 *     sub_1800DC4E4 @ 0x1800DC4E4 (sub_1800DC4E4.c)
 *     sub_1800DC7E0 @ 0x1800DC7E0 (sub_1800DC7E0.c)
 *     sub_1800DCB44 @ 0x1800DCB44 (sub_1800DCB44.c)
 * Callees:
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_18001C7FC @ 0x18001C7FC (sub_18001C7FC.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_18002E120 @ 0x18002E120 (sub_18002E120.c)
 *     sub_1800DE0B0 @ 0x1800DE0B0 (sub_1800DE0B0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800DF000(__int64 a1, const wchar_t *a2)
{
  volatile __int32 *v4; // rax
  __int64 v5; // rdx
  __int32 v6; // r8d
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 *v11; // [rsp+68h] [rbp+20h] BYREF

  LODWORD(v9) = 1;
  sub_18002E120((unsigned int *)&v9);
  v4 = (volatile __int32 *)sub_18001C7FC(a1 + 256);
  if ( _InterlockedExchange(v4, v6) )
  {
    if ( *(_QWORD *)(v5 + 24) >= 8uLL )
      a2 = *(const wchar_t **)v5;
    sub_18001DB68(&stru_1801C8608, 4, "A recursive call to TriggerHandlers() with property name '%ls' was ignored.", a2);
  }
  else
  {
    v10 = a1;
    v11 = &v10;
    sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 160));
    v7 = **(_QWORD **)(a1 + 240);
    v9 = v7;
    while ( !*(_BYTE *)(v7 + 25) )
    {
      v8 = *(_QWORD *)(v7 + 96);
      if ( !v8 )
      {
        std::_Xbad_function_call();
        break;
      }
      (*(void (__fastcall **)(__int64, const wchar_t *))(*(_QWORD *)v8 + 16LL))(v8, a2);
      sub_18001D3F8(&v9);
      v7 = v9;
    }
    Mtx_unlock((_Mtx_t)(a1 + 160));
    sub_1800DE0B0(&v11);
  }
}
