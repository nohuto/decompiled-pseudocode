/*
 * XREFs of sub_140B105C4 @ 0x140B105C4
 * Callers:
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_14069946C @ 0x14069946C (sub_14069946C.c)
 *     sub_1406994BC @ 0x1406994BC (sub_1406994BC.c)
 *     sub_1406D01BC @ 0x1406D01BC (sub_1406D01BC.c)
 *     sub_14082EB54 @ 0x14082EB54 (sub_14082EB54.c)
 *     sub_14082EB8C @ 0x14082EB8C (sub_14082EB8C.c)
 *     sub_14082EBA4 @ 0x14082EBA4 (sub_14082EBA4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140B4FCB0 @ 0x140B4FCB0 (sub_140B4FCB0.c)
 */

__int64 __fastcall sub_140B105C4(__int64 a1)
{
  __int64 v1; // r13
  ULONG v2; // r14d
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rcx
  void *v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v9; // edi
  void *Pool2; // rsi
  __int64 v11; // rcx
  _WORD *v12; // rbx
  int v13; // r13d
  struct _KTHREAD *v14; // rax
  void *v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rcx
  unsigned int v18; // r15d
  unsigned int v19; // r12d
  int v20; // eax
  int v21; // eax
  int v22; // edi
  __int64 v23; // rax
  _WORD *i; // rdi
  __int64 v25; // rax
  unsigned int v26; // r15d
  int v27; // r12d
  int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  _WORD *v31; // rsi
  __int64 v32; // r15
  __int64 v33; // rax
  unsigned int v34; // [rsp+50h] [rbp-28h]
  void *v35; // [rsp+58h] [rbp-20h] BYREF
  __int64 v36; // [rsp+60h] [rbp-18h]
  void *v37; // [rsp+68h] [rbp-10h] BYREF
  unsigned int v38; // [rsp+C0h] [rbp+48h] BYREF
  int v39; // [rsp+C4h] [rbp+4Ch]
  unsigned int v40; // [rsp+C8h] [rbp+50h] BYREF
  int v41; // [rsp+D0h] [rbp+58h] BYREF
  int v42; // [rsp+D8h] [rbp+60h]

  v39 = HIDWORD(a1);
  v1 = *(_QWORD *)&qword_140D00AC0;
  v2 = 0;
  v36 = *(_QWORD *)&qword_140D00AC0;
  v37 = 0LL;
  v41 = 0;
  v38 = 0;
  result = sub_14082EBA4(*(__int64 *)&qword_140D00AC0, 2147483650LL, (__int64)L"SYSTEM", 0, 1u, (__int64)&v37);
  if ( (int)result >= 0 )
  {
    v40 = 4;
    v5 = sub_14082EB54(v4, v37, L"DevModeEverEnabled", &v41, &v38, &v40);
    v34 = v5;
    sub_14082EB8C(v6, v37);
    if ( v5 >= 0 && v38 )
    {
      return (unsigned int)v5;
    }
    else
    {
      v38 = 0;
      v35 = 0LL;
      v7 = 0LL;
      CurrentThread = KeGetCurrentThread();
      v9 = 0;
      v42 = 0;
      Pool2 = 0LL;
      v41 = 0;
      v40 = 0;
      --*((_WORD *)CurrentThread + 242);
      ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
      if ( (int)sub_14082EBA4(
                  v1,
                  2147483650LL,
                  (__int64)L"System\\CurrentControlSet\\Control\\StateSeparation\\PnP\\ResetDevices\\Classes",
                  0,
                  0x20019u,
                  (__int64)&v35) >= 0
        && (int)sub_1406994BC(v11, (int)v35, 0, 0, (__int64)&v40, (__int64)&v41, 0LL) >= 0 )
      {
        v18 = v40;
        if ( v40 )
        {
          v19 = v41 + 1;
          Pool2 = (void *)ExAllocatePool2(256LL, 2LL * (unsigned int)(v41 + 1), 0x6E697050u);
          if ( Pool2 )
          {
            v11 = 0LL;
            if ( v18 )
            {
              while ( 1 )
              {
                v40 = v19;
                v20 = sub_14069946C(0LL, v35, v2, Pool2, (__int64)&v40, 0LL, 0LL, 0LL);
                v11 = 0LL;
                if ( v20 >= 0 )
                {
                  DbgPrintEx(0x20u, 0, "Resetting devices in device setup class '%ws'\n", Pool2);
                  v21 = sub_1406D01BC(v1, (__int64)Pool2, 128, 0LL, 0LL, (__int64)v7, v9, (__int64)&v38);
                  if ( v21 == -1073741789 )
                  {
                    if ( v7 )
                      ExFreePoolWithTag(v7, 0);
                    v22 = v38;
                    v42 = v38;
                    v23 = ExAllocatePool2(256LL, 2LL * v38, 0x6E697050u);
                    v11 = 0LL;
                    v7 = (void *)v23;
                    if ( !v23 )
                    {
LABEL_38:
                      v2 = 0;
                      break;
                    }
                    v21 = sub_1406D01BC(v1, (__int64)Pool2, 128, 0LL, 0LL, v23, v22, (__int64)&v38);
                  }
                  v11 = 0LL;
                  if ( v21 >= 0 )
                  {
                    if ( v38 )
                    {
                      for ( i = v7; *i; i += v25 + 1 )
                      {
                        sub_140B4FCB0(v1, i);
                        v25 = -1LL;
                        v11 = 0LL;
                        do
                          ++v25;
                        while ( i[v25] );
                      }
                    }
                  }
                }
                v9 = v42;
                if ( ++v2 >= v18 )
                  goto LABEL_38;
              }
            }
          }
        }
      }
      if ( v35 )
        sub_14082EB8C(v11, v35);
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
      ExReleaseResourceLite(&stru_140C462A0);
      sub_1402F9540((__int64)KeGetCurrentThread());
      v38 = 0;
      v12 = 0LL;
      v35 = 0LL;
      v13 = 0;
      v14 = KeGetCurrentThread();
      v15 = 0LL;
      v41 = 0;
      v40 = 0;
      --*((_WORD *)v14 + 242);
      ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
      v16 = v36;
      if ( (int)sub_14082EBA4(
                  v36,
                  2147483650LL,
                  (__int64)L"System\\CurrentControlSet\\Control\\StateSeparation\\PnP\\ResetDevices\\Services",
                  0,
                  0x20019u,
                  (__int64)&v35) >= 0
        && (int)sub_1406994BC(v17, (int)v35, 0, 0, (__int64)&v40, (__int64)&v41, 0LL) >= 0 )
      {
        v26 = v40;
        if ( v40 )
        {
          v27 = v41 + 1;
          v42 = v41 + 1;
          v15 = (void *)ExAllocatePool2(256LL, 2LL * (unsigned int)(v41 + 1), 0x6E697050u);
          if ( v15 )
          {
            v17 = 0LL;
            if ( v26 )
            {
              do
              {
                v41 = v27;
                v28 = sub_14069946C(0LL, v35, v2, v15, (__int64)&v41, 0LL, 0LL, 0LL);
                v17 = 0LL;
                if ( v28 >= 0 )
                {
                  DbgPrintEx(0x20u, 0, "Resetting devices using service '%ws'\n", v15);
                  v29 = sub_1406D01BC(v16, (__int64)v15, 2, 0LL, 0LL, (__int64)v12, v13, (__int64)&v38);
                  if ( v29 == -1073741789 )
                  {
                    if ( v12 )
                      ExFreePoolWithTag(v12, 0);
                    v13 = v38;
                    v30 = ExAllocatePool2(256LL, 2LL * v38, 0x6E697050u);
                    v17 = 0LL;
                    v12 = (_WORD *)v30;
                    if ( !v30 )
                      break;
                    v29 = sub_1406D01BC(v16, (__int64)v15, 2, 0LL, 0LL, v30, v13, (__int64)&v38);
                  }
                  v17 = 0LL;
                  if ( v29 >= 0 && v38 )
                  {
                    v31 = v12;
                    if ( *v12 )
                    {
                      v32 = v36;
                      do
                      {
                        sub_140B4FCB0(v32, v31);
                        v33 = -1LL;
                        v17 = 0LL;
                        do
                          ++v33;
                        while ( v31[v33] );
                        v31 += v33 + 1;
                      }
                      while ( *v31 );
                      v26 = v40;
                      v27 = v42;
                    }
                    v16 = v36;
                  }
                }
                ++v2;
              }
              while ( v2 < v26 );
            }
          }
        }
      }
      if ( v35 )
        sub_14082EB8C(v17, v35);
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
      ExReleaseResourceLite(&stru_140C462A0);
      sub_1402F9540((__int64)KeGetCurrentThread());
      return v34;
    }
  }
  return result;
}
