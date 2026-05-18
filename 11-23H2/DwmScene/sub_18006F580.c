/*
 * XREFs of sub_18006F580 @ 0x18006F580
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180029550 @ 0x180029550 (sub_180029550.c)
 *     sub_18002963C @ 0x18002963C (sub_18002963C.c)
 *     sub_180029700 @ 0x180029700 (sub_180029700.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_1800435C8 @ 0x1800435C8 (sub_1800435C8.c)
 *     sub_18005BAE4 @ 0x18005BAE4 (sub_18005BAE4.c)
 *     sub_18005BCD0 @ 0x18005BCD0 (sub_18005BCD0.c)
 *     sub_18006EE5C @ 0x18006EE5C (sub_18006EE5C.c)
 *     sub_18006F308 @ 0x18006F308 (sub_18006F308.c)
 *     sub_18006FBD0 @ 0x18006FBD0 (sub_18006FBD0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006F580(__int64 *a1, __int64 *a2)
{
  __int64 result; // rax
  unsigned int v5; // ebp
  __int64 v6; // rbx
  void **v7; // rax
  void (__fastcall *v8)(__int64, _QWORD); // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // r11
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+38h] [rbp-30h]
  _QWORD v15[4]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v16; // [rsp+78h] [rbp+10h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)result )
  {
    v5 = sub_180026650(*a2);
    v16 = v5;
    result = sub_1800435C8((__int64)(a1 + 32), (__int64)&v16);
    if ( result == a1[32] )
    {
      sub_180029550((__int64)a1, a2);
      sub_18006EE5C(*a2, &v13);
      v6 = v13;
      v7 = (void **)sub_18002963C((__int64)a1, v15);
      sub_180029824(v6, v7);
      v8 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 40LL);
      v9 = *(_QWORD *)(a1[14] + 128);
      if ( v9 )
        v10 = *(unsigned int *)(v9 + 20);
      else
        v10 = 0LL;
      sub_18006FBD0(a1, v10);
      sub_18005BAE4((__int64)a1);
      v11 = sub_18005BCD0((__int64)a1);
      v8(v12, v11);
      sub_18006F308(a1, &v13);
      result = sub_180029700((__int64)a1, v5);
      if ( v14 )
        return sub_180010530(v14);
    }
  }
  return result;
}
