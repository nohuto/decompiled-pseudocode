/*
 * XREFs of sub_140998940 @ 0x140998940
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer2 @ 0x1402D3FB0 (KeCancelTimer2.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x1407EEE10 (ExQueryWnfStateData.c)
 *     sub_1409984D0 @ 0x1409984D0 (sub_1409984D0.c)
 *     sub_14099862C @ 0x14099862C (sub_14099862C.c)
 *     sub_1409986C4 @ 0x1409986C4 (sub_1409986C4.c)
 *     sub_140998778 @ 0x140998778 (sub_140998778.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_140998940(__int64 a1)
{
  int v1; // ecx
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  LARGE_INTEGER v5; // rax
  REGHANDLE v6; // rdi
  unsigned int v8; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+38h] [rbp-20h] BYREF
  _BYTE v10[8]; // [rsp+40h] [rbp-18h] BYREF

  v8 = 8;
  v2 = ExQueryWnfStateData(a1, &v9, v10, &v8);
  if ( v2 >= 0 )
  {
    if ( v8 >= 8 )
    {
      sub_140A48330(v1);
      if ( (v10[0] & 2) != 0 )
      {
        dword_140C1F9D4 = 1;
        if ( sub_140998778() )
        {
          v5 = sub_1409986C4();
          _InterlockedExchange(&dword_140D048D0, 1);
          sub_1409984D0(v5.QuadPart, 1);
        }
      }
      else if ( dword_140C1F9D4 )
      {
        dword_140C1F9D4 = 0;
        if ( _InterlockedExchange(&dword_140D048D0, 0) == 1 )
        {
          KeCancelTimer2((__int64)&unk_140C1F920);
          if ( byte_140C5AE14 )
          {
            v6 = RegHandle;
            if ( EtwEventEnabled(RegHandle, &stru_140039288) )
              EtwWrite(v6, &stru_140039288, 0LL, 0, 0LL);
          }
        }
        if ( byte_140C1F900 )
          sub_14099862C();
      }
      sub_140A47CF8(v4, v3);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v2;
}
