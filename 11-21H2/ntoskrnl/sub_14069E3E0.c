/*
 * XREFs of sub_14069E3E0 @ 0x14069E3E0
 * Callers:
 *     sub_14069E368 @ 0x14069E368 (sub_14069E368.c)
 *     sub_14090E9C0 @ 0x14090E9C0 (sub_14090E9C0.c)
 *     sub_14090EC00 @ 0x14090EC00 (sub_14090EC00.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_1409239EC @ 0x1409239EC (sub_1409239EC.c)
 * Callees:
 *     sub_14069F7AC @ 0x14069F7AC (sub_14069F7AC.c)
 *     sub_140914E64 @ 0x140914E64 (sub_140914E64.c)
 */

__int64 __fastcall sub_14069E3E0(__int64 a1, int a2, __int64 a3)
{
  char v3; // bl
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(); // rdi
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v9[4]; // [rsp+28h] [rbp-20h] BYREF

  v3 = 0;
  v8 = a1;
  v9[0] = 0LL;
  v9[1] = a3;
  if ( a2 )
  {
    v5 = (unsigned int)(a2 - 1);
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 != 1 )
        __fastfail(5u);
      v6 = sub_1407F4D90;
    }
    else
    {
      v6 = sub_140915510;
    }
  }
  else
  {
    v3 = 1;
    v6 = sub_1409154F0;
    sub_140914E64(a1, v9);
  }
  LOBYTE(v5) = v3;
  ((void (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(), __int64 *))sub_14069F7AC)(a1, v5, v6, &v8);
  return LODWORD(v9[0]);
}
