/*
 * XREFs of sub_1C005EAF4 @ 0x1C005EAF4
 * Callers:
 *     sub_1C005E8E0 @ 0x1C005E8E0 (sub_1C005E8E0.c)
 *     sub_1C005E920 @ 0x1C005E920 (sub_1C005E920.c)
 *     sub_1C0060B80 @ 0x1C0060B80 (sub_1C0060B80.c)
 *     sub_1C0060CF0 @ 0x1C0060CF0 (sub_1C0060CF0.c)
 * Callees:
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     sub_1C005786C @ 0x1C005786C (sub_1C005786C.c)
 *     sub_1C005E3A8 @ 0x1C005E3A8 (sub_1C005E3A8.c)
 */

__int64 sub_1C005EAF4(
        int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        void (__fastcall *a5)(__int64, __int64, _QWORD, char *),
        void (__fastcall *a6)(_QWORD, struct _UNICODE_STRING *, _QWORD, __int64),
        ...)
{
  int v6; // ebx
  __int64 v9; // rax
  __int64 *v10; // rdi
  __int64 *v11; // r14
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // r9
  int v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v17; // [rsp+38h] [rbp-20h]
  struct _UNICODE_STRING P; // [rsp+40h] [rbp-18h] BYREF
  va_list va; // [rsp+D0h] [rbp+78h] BYREF

  va_start(va, a6);
  v17 = 0LL;
  v16 = 0;
  v6 = 0;
  P = 0LL;
  if ( (unsigned int)(a1 - 2) <= 1 )
  {
    v6 = sub_1C005E3A8(0LL, (unsigned int *)&v16);
    if ( v6 >= 0 )
    {
      if ( v16 )
      {
        v9 = sub_1C0007CF4(64LL, 8LL * (unsigned int)v16, 1700028754LL, 0LL);
        v17 = (__int64 *)v9;
        v10 = (__int64 *)v9;
        if ( v9 )
        {
          v6 = sub_1C005E3A8(v9, (unsigned int *)&v16);
          if ( v6 >= 0 && v16 )
          {
            v11 = v10;
            v12 = (unsigned int)v16;
            v16 = 0;
            do
            {
              v13 = *v11;
              if ( (int)sub_1C005786C(*v11, &P) >= 0 )
              {
                if ( a1 == 2 )
                {
                  v14 = 0LL;
                }
                else
                {
                  a5(v13, a3, a4, va);
                  v14 = a3;
                }
                a6(*(_QWORD *)(a2 + 24), &P, *(unsigned int *)(v13 + 3488), v14);
              }
              if ( P.Buffer )
              {
                ExFreePoolWithTag(P.Buffer, 0x49446152u);
                P = 0LL;
              }
              sub_1C000729C(v13);
              ++v11;
              --v12;
            }
            while ( v12 );
            v6 = v16;
            v10 = v17;
          }
          ExFreePoolWithTag(v10, 0x65546152u);
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
    }
  }
  return (unsigned int)v6;
}
