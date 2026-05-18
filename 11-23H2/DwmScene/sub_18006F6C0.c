/*
 * XREFs of sub_18006F6C0 @ 0x18006F6C0
 * Callers:
 *     sub_18006F930 @ 0x18006F930 (sub_18006F930.c)
 *     sub_180072C68 @ 0x180072C68 (sub_180072C68.c)
 *     sub_1800733F4 @ 0x1800733F4 (sub_1800733F4.c)
 *     sub_18008E8B8 @ 0x18008E8B8 (sub_18008E8B8.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_18002963C @ 0x18002963C (sub_18002963C.c)
 *     sub_180029664 @ 0x180029664 (sub_180029664.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_180029870 @ 0x180029870 (sub_180029870.c)
 *     sub_18003655C @ 0x18003655C (sub_18003655C.c)
 *     sub_18006EE5C @ 0x18006EE5C (sub_18006EE5C.c)
 *     sub_18006F308 @ 0x18006F308 (sub_18006F308.c)
 *     sub_18006FA84 @ 0x18006FA84 (sub_18006FA84.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_18006F6C0(__int64 *a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5, __int64 a6)
{
  __int64 v10; // rsi
  __int64 *v11; // rax
  char result; // al
  __int64 v13; // rbx
  void **v14; // rax
  int v15; // r8d
  __int64 v16; // rcx
  unsigned int v17; // esi
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // rbx
  void **v22; // rax
  __int64 v23; // [rsp+48h] [rbp-39h] BYREF
  __int64 v24; // [rsp+50h] [rbp-31h]
  __int64 v25; // [rsp+58h] [rbp-29h] BYREF
  __int64 v26; // [rsp+60h] [rbp-21h]
  __int64 v27; // [rsp+68h] [rbp-19h] BYREF
  __int64 v28; // [rsp+70h] [rbp-11h]
  _QWORD v29[4]; // [rsp+88h] [rbp+7h] BYREF

  if ( a6 )
    sub_180029870((__int64)a1, 1, 1);
  v10 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 32))(a1);
  v11 = (__int64 *)sub_18006FA84((unsigned int)&v25, v10, a2, a3, a4, 0, a5);
  sub_180011020(a1 + 14, v11);
  if ( v26 )
    sub_180010530(v26);
  result = sub_180029664((__int64)a1, 1);
  if ( result )
  {
    if ( a6 )
    {
      sub_18006EE5C(a6, &v23);
      v13 = v23;
      v14 = (void **)sub_18002963C((__int64)a1, &v27);
      sub_180029824(v13, v14);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)v23 + 40LL))(v23, a2, a3, a4, a5);
      sub_18006F308(a1, &v23);
      sub_180029870((__int64)a1, 2, 0);
      result = sub_180029870(v16, v15 + 4, v15);
      if ( v24 )
        return sub_180010530(v24);
    }
    else
    {
      sub_18003655C(v10, &v27);
      v17 = 0;
      v18 = v27;
      if ( (v28 - v27) >> 4 )
      {
        v19 = 0LL;
        do
        {
          sub_18001246C(&v25, (_QWORD *)(v18 + 16 * v19));
          v20 = v25;
          if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v25 + 32LL))(v25) )
          {
            sub_18006EE5C(v20, &v23);
            v21 = v23;
            v22 = (void **)sub_18002963C((__int64)a1, v29);
            sub_180029824(v21, v22);
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)v23 + 40LL))(v23, a2, a3, a4, a5);
            sub_18006F308(a1, &v23);
            if ( v24 )
              sub_180010530(v24);
          }
          if ( v26 )
            sub_180010530(v26);
          ++v17;
          v18 = v27;
          v19 = v17;
        }
        while ( v17 < (unsigned __int64)((v28 - v27) >> 4) );
      }
      return sub_180013300((__int64)&v27);
    }
  }
  return result;
}
