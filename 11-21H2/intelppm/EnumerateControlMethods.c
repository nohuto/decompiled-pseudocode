/*
 * XREFs of EnumerateControlMethods @ 0x1C002A350
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0028678 (ProcLibDeviceStart.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     GetPackedName @ 0x1C002A58C (GetPackedName.c)
 */

__int64 __fastcall EnumerateControlMethods(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r13
  __int64 v4; // rdx
  int v5; // r12d
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 Pool2; // rax
  _DWORD *v9; // rdi
  __int64 v10; // rdx
  int v11; // ebx
  unsigned int v12; // eax
  _DWORD *v13; // rsi
  unsigned int v14; // r15d
  __int64 v15; // r14
  int PackedName; // eax
  __int64 v17; // rcx
  char *v18; // rdx
  __int64 v20; // [rsp+50h] [rbp-49h] BYREF
  __int128 *v21; // [rsp+58h] [rbp-41h]
  __int64 v22; // [rsp+60h] [rbp-39h]
  __int64 v23; // [rsp+68h] [rbp-31h] BYREF
  _QWORD v24[3]; // [rsp+70h] [rbp-29h] BYREF
  _DWORD *v25; // [rsp+88h] [rbp-11h]
  _DWORD v26[2]; // [rsp+90h] [rbp-9h] BYREF
  __int64 v27; // [rsp+98h] [rbp-1h]
  __int128 v28; // [rsp+A0h] [rbp+7h] BYREF
  int v29; // [rsp+B0h] [rbp+17h]

  v25 = a2;
  v24[1] = v26;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 16);
  v29 = 0;
  v21 = &v28;
  v23 = 0LL;
  v27 = 0LL;
  v26[0] = 1214866753;
  v5 = 0;
  v26[1] = 1;
  v24[0] = 1LL;
  v24[2] = 16LL;
  v28 = 0LL;
  v20 = 1LL;
  v22 = 20LL;
  if ( (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, __int64 *, _QWORD, _QWORD))(WdfFunctions_01015 + 1488))(
         WdfDriverGlobals,
         v4,
         0LL,
         3325984LL,
         v24,
         &v20,
         0LL,
         0LL) == -2147483643
    && (_DWORD)v28 == 1198089537
    && (v6 = DWORD1(v28), DWORD1(v28) >= 0x14) )
  {
    v7 = DWORD1(v28);
    Pool2 = ExAllocatePool2(256LL, DWORD1(v28), 1919119952LL);
    v9 = (_DWORD *)Pool2;
    if ( Pool2 )
    {
      v10 = *(_QWORD *)(a1 + 16);
      v21 = (__int128 *)Pool2;
      v20 = 1LL;
      v22 = v6;
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, __int64 *, _QWORD, __int64 *))(WdfFunctions_01015 + 1488))(
              WdfDriverGlobals,
              v10,
              0LL,
              3325984LL,
              v24,
              &v20,
              0LL,
              &v23);
      if ( v11 >= 0 )
      {
        if ( *v9 == 1198089537 && (v12 = v9[1]) != 0 && v23 == v7 )
        {
          v13 = v9 + 2;
          if ( v12 > 1 )
          {
            v14 = v9[3];
            v15 = v12 - 1;
            do
            {
              v13 = (_DWORD *)((char *)v13 + v14 + 8);
              v14 = v13[1];
              PackedName = GetPackedName(v13 + 2, v14);
              v17 = 0LL;
              v18 = AcpiFeatureMethods;
              while ( *(_DWORD *)v18 != PackedName )
              {
                v17 = (unsigned int)(v17 + 1);
                v18 += 8;
                if ( (unsigned int)v17 >= 0x10 )
                  goto LABEL_14;
              }
              v5 |= *(_DWORD *)&AcpiFeatureMethods[8 * v17 + 4];
LABEL_14:
              --v15;
            }
            while ( v15 );
            v3 = v25;
          }
        }
        else
        {
          v11 = -1072431089;
        }
      }
      ExFreePoolWithTag(v9, (ULONG)1919119952);
    }
    else
    {
      v11 = -1073741670;
    }
  }
  else
  {
    v11 = -1072431089;
  }
  *v3 = v5;
  return (unsigned int)v11;
}
