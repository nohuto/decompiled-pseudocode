/*
 * XREFs of sub_1800F5CC0 @ 0x1800F5CC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001FC4C @ 0x18001FC4C (sub_18001FC4C.c)
 *     sub_180020E2C @ 0x180020E2C (sub_180020E2C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800F5CC0(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v3; // rax
  unsigned __int64 v5; // rdx
  _WORD *v6; // rcx
  char *v7; // rcx
  char *v8; // r9
  unsigned __int64 v9; // rdx
  __int64 v10; // r9
  _OWORD v12[2]; // [rsp+28h] [rbp-A0h] BYREF
  _QWORD v13[7]; // [rsp+48h] [rbp-80h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-48h] BYREF

  v3 = a3;
  v5 = a3[2];
  if ( !v5 )
  {
    sub_1800113D0(v12, "IConfigurationManager::GetDomain() -- empty string is not a valid property name");
    sub_18001FC4C(v13, (const char *)v12);
    throw (Spectre::Utils::SpectreInvalidArgException *)v13;
  }
  v6 = a3;
  if ( (unsigned __int64)a3[3] >= 8 )
    v6 = (_WORD *)*a3;
  if ( *v6 == 47 )
  {
    if ( (unsigned __int64)a3[3] >= 8 )
      a3 = (__int64 *)*a3;
    if ( v5 <= 1 )
      goto LABEL_19;
    v7 = (char *)a3 + 2;
    v8 = 0LL;
    v9 = v5 - 1;
    if ( v9 )
    {
      while ( *(_WORD *)v7 != 47 )
      {
        if ( v9 == 1 )
          goto LABEL_14;
        --v9;
        v7 += 2;
      }
      v8 = v7;
    }
LABEL_14:
    if ( !v8 || (v10 = (v8 - (char *)a3) >> 1, v10 == -1) )
    {
LABEL_19:
      sub_1800113D0(
        v13,
        "IConfigurationManager::GetDomain() -- property domain must begin and end with a slash, e.g. /CustomDomain/Category.Value");
      sub_18001FC4C(pExceptionObject, (const char *)v13);
      throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
    }
    sub_180020E2C(v3, (__int64 *)v12, 1uLL, v10 - 1);
    *(_OWORD *)a2 = v12[0];
    *(_OWORD *)(a2 + 16) = v12[1];
  }
  else
  {
    sub_1800129F4((__int64 *)a2, (__int64)&qword_1801FAD20);
  }
  return a2;
}
