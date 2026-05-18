/*
 * XREFs of sub_180067B80 @ 0x180067B80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180034870 @ 0x180034870 (sub_180034870.c)
 *     sub_1800385C8 @ 0x1800385C8 (sub_1800385C8.c)
 *     sub_1800507E4 @ 0x1800507E4 (sub_1800507E4.c)
 *     sub_18005081C @ 0x18005081C (sub_18005081C.c)
 *     sub_180056CD4 @ 0x180056CD4 (sub_180056CD4.c)
 *     sub_1800570D8 @ 0x1800570D8 (sub_1800570D8.c)
 *     sub_1800616CC @ 0x1800616CC (sub_1800616CC.c)
 *     sub_1800627D0 @ 0x1800627D0 (sub_1800627D0.c)
 *     sub_1800628C8 @ 0x1800628C8 (sub_1800628C8.c)
 *     sub_180063B2C @ 0x180063B2C (sub_180063B2C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180067B80(__int64 a1, __int64 *a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 *v9; // rdi
  __int64 *v10; // rbx
  char *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int128 v14; // [rsp+38h] [rbp-31h] BYREF
  char *v15; // [rsp+48h] [rbp-21h]
  __int128 v16; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v17; // [rsp+60h] [rbp-9h] BYREF
  __int64 *v18; // [rsp+68h] [rbp-1h]
  __int64 *v19[3]; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v20[3]; // [rsp+90h] [rbp+27h] BYREF

  result = a3[1];
  if ( *a3 != result )
  {
    sub_1800570D8(v19, (__int64)a3);
    sub_180063B2C(v19[0], v19[1]);
    sub_1800627D0(*a2, (__int64)&v17);
    sub_180063B2C(v17, v18);
    v14 = 0LL;
    v15 = 0LL;
    v9 = v18;
    v10 = v17;
    if ( v17 != v18 )
    {
      v11 = (char *)*((_QWORD *)&v14 + 1);
      do
      {
        if ( (*(_DWORD *)(*v10 + 440) & 0x200) != 0 )
        {
          if ( v11 == v15 )
          {
            sub_180056CD4((char **)&v14, v11, v10);
            v11 = (char *)*((_QWORD *)&v14 + 1);
          }
          else
          {
            sub_18001246C(v11, v10);
            v11 = (char *)(*((_QWORD *)&v14 + 1) + 16LL);
            *((_QWORD *)&v14 + 1) += 16LL;
          }
        }
        v10 += 2;
      }
      while ( v10 != v9 );
    }
    v12 = sub_1800628C8(*a2);
    sub_1800616CC(v20, (char *)(v12 + 136), (char *)(v12 + 184));
    v13 = sub_180034870(a1);
    v16 = 0LL;
    sub_1800507E4(v13, (__int64)&unk_1801D78E8, &v16);
    v16 = 0LL;
    sub_18005081C(v13, (__int64)&unk_1801D78E8, &v16);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)a1 + 112LL))(a1, a2, a4, a5);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)a1 + 160LL))(a1, v20, a4, a5);
    (*(void (__fastcall **)(__int64, __int128 *, __int64, __int64))(*(_QWORD *)a1 + 160LL))(a1, &v14, a4, a5);
    (*(void (__fastcall **)(__int64, __int64 **, __int64, __int64))(*(_QWORD *)a1 + 160LL))(a1, v19, a4, a5);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)a1 + 136LL))(a1, a2, a4, a5);
    sub_1800385C8((__int64)v20);
    sub_1800385C8((__int64)&v14);
    sub_1800385C8((__int64)&v17);
    return sub_1800385C8((__int64)v19);
  }
  return result;
}
