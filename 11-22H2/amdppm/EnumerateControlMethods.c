/*
 * XREFs of EnumerateControlMethods @ 0x1C002BD44
 * Callers:
 *     ProcLibDeviceStart @ 0x1C002C914 (ProcLibDeviceStart.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EnumerateControlMethods(__int64 a1, _DWORD *a2)
{
  int v2; // r14d
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rsi
  __int64 Pool2; // rax
  _DWORD *v9; // rdi
  int v10; // ebx
  __int64 v11; // rdx
  unsigned int v12; // eax
  _DWORD *v13; // r9
  unsigned int v14; // r11d
  __int64 v15; // rsi
  unsigned int v16; // r8d
  unsigned int v17; // edx
  __int64 v18; // rcx
  char v19; // r10
  int v20; // ecx
  unsigned int v21; // edx
  unsigned __int8 *v22; // r10
  __int64 v23; // r8
  int v24; // eax
  __int64 i; // rax
  int v27; // [rsp+50h] [rbp-39h] BYREF
  int v28; // [rsp+54h] [rbp-35h]
  __int128 *v29; // [rsp+58h] [rbp-31h]
  int v30; // [rsp+60h] [rbp-29h]
  _DWORD v31[3]; // [rsp+64h] [rbp-25h] BYREF
  _DWORD v32[2]; // [rsp+70h] [rbp-19h] BYREF
  _DWORD *v33; // [rsp+78h] [rbp-11h]
  int v34; // [rsp+80h] [rbp-9h]
  int v35; // [rsp+84h] [rbp-5h]
  _DWORD v36[2]; // [rsp+88h] [rbp-1h] BYREF
  __int64 v37; // [rsp+90h] [rbp+7h]
  __int128 v38; // [rsp+98h] [rbp+Fh] BYREF
  int v39; // [rsp+A8h] [rbp+1Fh]

  v33 = v36;
  v2 = 0;
  v28 = 0;
  memset(v31, 0, sizeof(v31));
  v5 = *(_QWORD *)(a1 + 16);
  v37 = 0LL;
  v32[1] = 0;
  v35 = 0;
  v39 = 0;
  v29 = &v38;
  v36[0] = 1214866753;
  v36[1] = 1;
  v32[0] = 1;
  v34 = 16;
  v38 = 0LL;
  v27 = 1;
  v30 = 20;
  if ( (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _DWORD *, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1488))(
         WdfDriverGlobals,
         v5,
         0LL,
         3325984LL,
         v32,
         &v27,
         0LL,
         0LL) == -2147483643
    && (_DWORD)v38 == 1198089537
    && (v6 = DWORD1(v38), DWORD1(v38) >= 0x14) )
  {
    v7 = DWORD1(v38);
    Pool2 = ExAllocatePool2(256LL, DWORD1(v38), 1919119952LL);
    v9 = (_DWORD *)Pool2;
    if ( Pool2 )
    {
      v28 = 0;
      v31[0] = 0;
      v11 = *(_QWORD *)(a1 + 16);
      v27 = 1;
      v29 = (__int128 *)Pool2;
      v30 = v6;
      v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _DWORD *, int *, _QWORD, _DWORD *))(WdfFunctions_01015 + 1488))(
              WdfDriverGlobals,
              v11,
              0LL,
              3325984LL,
              v32,
              &v27,
              0LL,
              &v31[1]);
      if ( v10 >= 0 )
      {
        if ( *v9 == 1198089537 && (v12 = v9[1]) != 0 && *(_QWORD *)&v31[1] == v7 )
        {
          v13 = v9 + 2;
          if ( v12 > 1 )
          {
            v14 = v9[3];
            v15 = v12 - 1;
            do
            {
              v13 = (_DWORD *)((char *)v13 + v14 + 8);
              v16 = 0;
              v17 = 0;
              v18 = 0LL;
              v14 = v13[1];
              while ( (unsigned int)v18 < v14 )
              {
                v19 = *((_BYTE *)v13 + v18 + 8);
                if ( v19 == 46 )
                {
                  v16 = v18;
                }
                else if ( !v19 )
                {
                  v17 = v18;
                  break;
                }
                v18 = (unsigned int)(v18 + 1);
              }
              v20 = 0;
              if ( v17 > v16 && v17 - v16 - 1 <= 4 )
              {
                v21 = v17 - 1;
                if ( v21 > v16 )
                {
                  v22 = (unsigned __int8 *)v13 + v21 + 8;
                  v23 = v21 - v16;
                  do
                  {
                    v24 = *v22--;
                    v20 = v24 + (v20 << 8);
                    --v23;
                  }
                  while ( v23 );
                }
              }
              for ( i = 0LL; (unsigned int)i < 0x10; i = (unsigned int)(i + 1) )
              {
                if ( *(_DWORD *)&AcpiFeatureMethods[8 * i] == v20 )
                {
                  v2 |= *(_DWORD *)&AcpiFeatureMethods[8 * i + 4];
                  break;
                }
              }
              --v15;
            }
            while ( v15 );
          }
        }
        else
        {
          v10 = -1072431089;
        }
      }
      ExFreePoolWithTag(v9, (ULONG)1919119952);
    }
    else
    {
      v10 = -1073741670;
    }
  }
  else
  {
    v10 = -1072431089;
  }
  *a2 = v2;
  return (unsigned int)v10;
}
