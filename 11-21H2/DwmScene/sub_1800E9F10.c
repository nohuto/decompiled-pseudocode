/*
 * XREFs of sub_1800E9F10 @ 0x1800E9F10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18002B954 @ 0x18002B954 (sub_18002B954.c)
 *     sub_18002BA24 @ 0x18002BA24 (sub_18002BA24.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 *     sub_18007BD68 @ 0x18007BD68 (sub_18007BD68.c)
 *     sub_18007BD8C @ 0x18007BD8C (sub_18007BD8C.c)
 *     sub_180096E78 @ 0x180096E78 (sub_180096E78.c)
 *     sub_1800EAF60 @ 0x1800EAF60 (sub_1800EAF60.c)
 *     sub_1800F1010 @ 0x1800F1010 (sub_1800F1010.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800E9F10(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 *v7; // rdx
  int v8; // eax
  __int64 v9; // r10
  __int64 *v10; // r11
  __int64 *v11; // r11
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rcx
  _QWORD *v16; // rax
  __int64 v17; // r8
  __int64 v18; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v19[2]; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v20[4]; // [rsp+48h] [rbp-51h] BYREF
  _QWORD v21[4]; // [rsp+68h] [rbp-31h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+88h] [rbp-11h] BYREF

  sub_18007BD8C();
  v8 = sub_18002B954(*v7);
  sub_18007BD68(v9, v8, 4);
  sub_180096E78(*v10, v19, *(_DWORD *)(a1 + 88));
  v12 = sub_18002BA24(*v11);
  if ( v12 == 8 )
  {
    v13 = *(_QWORD *)sub_1800F1010(v19[0], &v18);
    v14 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  else
  {
    if ( v12 != 11 )
    {
      sub_1800113D0(v21, "Invalid buffer type");
      v16 = sub_1800113D0(
              v20,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
      sub_180079B60(pExceptionObject, (__int64)v16, v17, (const char *)v21, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    v13 = *(_QWORD *)(v19[0] + 104LL);
    if ( v13 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 8LL))(*(_QWORD *)(v19[0] + 104LL));
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  sub_1800EAF60(a1, v13, a3, a4);
  return sub_180010910((__int64)v19);
}
