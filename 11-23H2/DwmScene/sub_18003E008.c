/*
 * XREFs of sub_18003E008 @ 0x18003E008
 * Callers:
 *     sub_18003B0A8 @ 0x18003B0A8 (sub_18003B0A8.c)
 *     sub_18003D504 @ 0x18003D504 (sub_18003D504.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_18003C0D0 @ 0x18003C0D0 (sub_18003C0D0.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 *     sub_18003E370 @ 0x18003E370 (sub_18003E370.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18003E008(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  _QWORD *i; // rsi
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  sub_18003E370();
  sub_18001265C(a1, &v7);
  LOBYTE(v2) = sub_180011DE0(&v7);
  if ( (_BYTE)v2 )
  {
    v3 = a1;
    if ( a1 )
    {
      do
      {
        sub_18003E330(v3);
        v4 = *(_QWORD **)(v3 + 384);
        for ( i = *(_QWORD **)(v3 + 376); i != v4; i += 2 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 120LL))(*i);
        *(_BYTE *)(v3 + 104) = 1;
        v2 = sub_18003C0D0(a1, v3);
        v3 = v2;
      }
      while ( v2 );
    }
  }
  if ( v8 )
    LOBYTE(v2) = sub_180010530(v8);
  return v2;
}
