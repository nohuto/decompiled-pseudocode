/*
 * XREFs of sub_14085EB0C @ 0x14085EB0C
 * Callers:
 *     sub_14085EAF0 @ 0x14085EAF0 (sub_14085EAF0.c)
 *     sub_140A01DB0 @ 0x140A01DB0 (sub_140A01DB0.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406E7820 @ 0x1406E7820 (sub_1406E7820.c)
 *     sub_14075A12C @ 0x14075A12C (sub_14075A12C.c)
 *     sub_14075ADF8 @ 0x14075ADF8 (sub_14075ADF8.c)
 *     sub_14079204C @ 0x14079204C (sub_14079204C.c)
 *     sub_140794654 @ 0x140794654 (sub_140794654.c)
 *     sub_1407946F8 @ 0x1407946F8 (sub_1407946F8.c)
 *     sub_14079474C @ 0x14079474C (sub_14079474C.c)
 *     sub_1407947BC @ 0x1407947BC (sub_1407947BC.c)
 *     sub_140798234 @ 0x140798234 (sub_140798234.c)
 *     sub_140798334 @ 0x140798334 (sub_140798334.c)
 *     sub_140A082E4 @ 0x140A082E4 (sub_140A082E4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14085EB0C(__int64 *a1, char *a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char v5; // r15
  unsigned __int64 v6; // r14
  int v7; // esi
  __int64 v8; // r8
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r12
  PEPROCESS v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  int v15; // eax
  int v16; // [rsp+34h] [rbp-94h]
  int v17; // [rsp+38h] [rbp-90h]
  struct _EX_RUNDOWN_REF *v18; // [rsp+40h] [rbp-88h] BYREF
  int v19[2]; // [rsp+48h] [rbp-80h] BYREF
  int v20; // [rsp+50h] [rbp-78h]
  int v21; // [rsp+54h] [rbp-74h]
  unsigned __int64 v22; // [rsp+58h] [rbp-70h] BYREF
  int v23[2]; // [rsp+60h] [rbp-68h]
  PVOID P; // [rsp+68h] [rbp-60h] BYREF
  PSID Sid; // [rsp+70h] [rbp-58h] BYREF
  int v26[2]; // [rsp+78h] [rbp-50h]
  __int128 v27; // [rsp+88h] [rbp-40h] BYREF
  __int64 v28; // [rsp+98h] [rbp-30h]

  v21 = a3;
  v22 = 0LL;
  Sid = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v5 = *((_BYTE *)KeGetCurrentThread() + 562);
  P = 0LL;
  *(_QWORD *)v19 = 0LL;
  v18 = 0LL;
  LODWORD(v6) = 0;
  v27 = 0LL;
  v7 = sub_14079474C(a1, &v22, v5);
  if ( v7 >= 0 )
  {
    v9 = v22;
    v10 = (v22 >> 4) & 3;
    v20 = (v22 >> 4) & 3;
    v6 = (v22 >> 6) & 0xF;
    v17 = (v22 >> 6) & 0xF;
    v7 = sub_1407947BC(v17, a2, v8, (__int64)&Sid, (__int64)&v27);
    if ( v7 >= 0 )
    {
      if ( v5 )
      {
        v16 = 0;
        if ( a2 )
        {
          v7 = sub_14075ADF8(v9);
          if ( v7 < 0 )
            goto LABEL_21;
        }
      }
      else
      {
        v16 = 1;
      }
      if ( v5 )
      {
        *(_QWORD *)v26 = KeGetCurrentThread();
        v11 = *(PEPROCESS *)(*(_QWORD *)v26 + 184LL);
        v9 = v22;
        LODWORD(v10) = v20;
        LODWORD(v6) = v17;
      }
      else
      {
        *(_QWORD *)v26 = 0LL;
        v11 = PsInitialSystemProcess;
      }
      *(_QWORD *)v23 = v11;
      if ( (_DWORD)v6 != 5
        || !v21
        || (v28 = v9 ^ 0x41C64E6DA3BC0074LL,
            v15 = sub_1406E7820(0x41C64E6DA3BC0074LL, 1u),
            (v7 = v15, (int)(v15 + 0x80000000) < 0) || v15 == -1073741822) )
      {
        v7 = sub_140798334((struct _EX_RUNDOWN_REF **)v19, *(__int64 *)v23, *(__int64 *)v26, v6, (__int64 *)Sid);
        if ( v7 >= 0 )
        {
          v12 = sub_140798234(*(__int64 *)v19, v9, (__int64 *)&v18);
          v7 = v12;
          if ( v12 != -1073741772 || (_DWORD)v10 == 3 )
          {
            if ( v12 >= 0 )
            {
              if ( v16 || (v7 = sub_140794654(v18[9].Ptr, 2u), v7 >= 0) )
              {
                if ( (_DWORD)v10 != 3 || v18[19].Count == *(_QWORD *)v23 )
                {
                  if ( (v9 & 0x400) == 0
                    || (v7 = sub_140A082E4(*(_QWORD *)v19, v9), ((v7 + 0x80000000) & 0x80000000) != 0)
                    || v7 == -1073741772 )
                  {
                    sub_14079204C((__int64)v18);
                    if ( (_DWORD)v6 == 5 )
                    {
                      v28 = v9 ^ 0x41C64E6DA3BC0074LL;
                      sub_1406E7820(v13, 0);
                    }
                    goto LABEL_20;
                  }
                }
                else
                {
                  v7 = -1073741790;
                }
              }
            }
          }
          else
          {
            v7 = sub_14075A12C(v9, (PSECURITY_DESCRIPTOR **)&P);
            if ( v7 >= 0 )
            {
              if ( v16 || (v7 = sub_140794654(*((PSECURITY_DESCRIPTOR *)P + 2), 2u), v7 >= 0) )
              {
                if ( (v9 & 0x400) == 0 || (v7 = sub_140A082E4(*(_QWORD *)v19, v9), v7 == -1073741772) )
LABEL_20:
                  v7 = 0;
              }
            }
          }
        }
      }
    }
  }
LABEL_21:
  if ( v18 )
    sub_1402AD030(v18 + 1);
  if ( *(_QWORD *)v19 )
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(*(_QWORD *)v19 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegion();
  sub_1407946F8(v6, (PVOID *)&v27, v5);
  return (unsigned int)v7;
}
