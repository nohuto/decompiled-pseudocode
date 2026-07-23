/*
 * XREFs of sub_1407920F0 @ 0x1407920F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1406E2814 @ 0x1406E2814 (sub_1406E2814.c)
 *     sub_1406E9488 @ 0x1406E9488 (sub_1406E9488.c)
 *     sub_14075A12C @ 0x14075A12C (sub_14075A12C.c)
 *     sub_140791CAC @ 0x140791CAC (sub_140791CAC.c)
 *     sub_1407938B0 @ 0x1407938B0 (sub_1407938B0.c)
 *     sub_140794654 @ 0x140794654 (sub_140794654.c)
 *     sub_14079474C @ 0x14079474C (sub_14079474C.c)
 *     sub_140798234 @ 0x140798234 (sub_140798234.c)
 *     sub_140798334 @ 0x140798334 (sub_140798334.c)
 *     sub_140A082E4 @ 0x140A082E4 (sub_140A082E4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407920F0(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v4; // r14
  int v5; // esi
  char v6; // r8
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r15
  BOOL v11; // r12d
  PEPROCESS v12; // rax
  int v13; // r13d
  PSID Sid; // [rsp+20h] [rbp-88h]
  __int64 v16; // [rsp+28h] [rbp-80h]
  struct _EX_RUNDOWN_REF *v17; // [rsp+38h] [rbp-70h] BYREF
  int v18[2]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-60h] BYREF
  PVOID P; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-50h]
  char v22; // [rsp+B8h] [rbp+10h]
  int v23; // [rsp+C0h] [rbp+18h]
  PEPROCESS v24; // [rsp+C8h] [rbp+20h]

  v19 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  LOBYTE(a3) = *((_BYTE *)KeGetCurrentThread() + 562);
  v22 = a3;
  v23 = 0;
  P = 0LL;
  v4 = 0LL;
  *(_QWORD *)v18 = 0LL;
  v17 = 0LL;
  v5 = sub_14079474C(a1, &v19, a3);
  if ( v5 >= 0 )
  {
    v7 = v19;
    v8 = v19 >> 4;
    v9 = (v19 >> 6) & 0xF;
    v21 = v9;
    v10 = (v19 >> 4) & 3;
    if ( ((v19 >> 4) & 3) == 0 )
    {
      v5 = -1073741811;
      goto LABEL_19;
    }
    v11 = v6 == 0;
    if ( (_DWORD)v10 != 3 )
    {
      if ( v6 )
      {
        v5 = sub_14075A12C(v19, (PSECURITY_DESCRIPTOR **)&P);
        if ( v5 < 0 )
          goto LABEL_19;
        v5 = sub_140794654(*((PSECURITY_DESCRIPTOR *)P + 2), 0x10000u);
        if ( v5 < 0 )
          goto LABEL_19;
        v11 = 1;
      }
      v5 = sub_1406E9488(v7);
      if ( v5 < 0 )
        goto LABEL_19;
      v23 = 1;
      LODWORD(v9) = v21;
      v6 = v22;
    }
    if ( v6 )
    {
      v12 = (PEPROCESS)*((_QWORD *)KeGetCurrentThread() + 23);
      v7 = v19;
    }
    else
    {
      v12 = PsInitialSystemProcess;
    }
    v24 = v12;
    if ( (_DWORD)v10 == 3 )
    {
      v5 = sub_140798334((int)v18, (int)v12, 0, v9, 0LL);
      v4 = *(struct _EX_RUNDOWN_REF **)v18;
      if ( v5 < 0 )
        goto LABEL_19;
    }
    else
    {
      v5 = 0;
      v4 = sub_1406E2814(v9, 0LL);
    }
    if ( v4 )
    {
      v13 = v8 & 3;
      while ( 1 )
      {
        v5 = sub_140798234(v4, v7, &v17);
        if ( v5 >= 0 )
        {
          if ( !v11 )
          {
            v5 = sub_140794654(v17[9].Ptr, 0x10000u);
            if ( v5 < 0 )
              goto LABEL_19;
            v11 = 1;
          }
          if ( v13 == 3LL && (PEPROCESS)v17[19].Count != v24 )
          {
            v5 = -1073741790;
            goto LABEL_19;
          }
          sub_1407938B0(v17, 16LL, 1LL, v22 != 0, Sid, v16);
          if ( (unsigned int)sub_140791CAC((__int64)v4, v17, 1) )
            v17 = 0LL;
          else
            v5 = -1073741772;
        }
        if ( v13 != 3LL )
        {
          if ( v17 )
          {
            sub_1402AD030(v17 + 1);
            v17 = 0LL;
          }
          v4 = sub_1406E2814(v21, v4);
          if ( v4 )
            continue;
        }
        break;
      }
    }
    if ( (v7 & 0x400) != 0 )
      sub_140A082E4(0LL, v7);
  }
LABEL_19:
  if ( v23 )
    v5 = 0;
  if ( v17 )
    sub_1402AD030(v17 + 1);
  if ( v4 )
    sub_1402AD030(v4 + 1);
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
