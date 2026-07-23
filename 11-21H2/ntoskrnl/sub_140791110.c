/*
 * XREFs of sub_140791110 @ 0x140791110
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_14075A12C @ 0x14075A12C (sub_14075A12C.c)
 *     sub_14075ADF8 @ 0x14075ADF8 (sub_14075ADF8.c)
 *     sub_140794654 @ 0x140794654 (sub_140794654.c)
 *     sub_1407946F8 @ 0x1407946F8 (sub_1407946F8.c)
 *     sub_14079474C @ 0x14079474C (sub_14079474C.c)
 *     sub_1407947BC @ 0x1407947BC (sub_1407947BC.c)
 *     sub_140798234 @ 0x140798234 (sub_140798234.c)
 *     sub_140798334 @ 0x140798334 (sub_140798334.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140791110(__int64 a1, unsigned int a2, __int64 a3, int *a4, unsigned int Length)
{
  __int64 v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  char v9; // r15
  int v10; // eax
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  int v13; // esi
  int v14; // r12d
  int v15; // ecx
  int v16; // r8d
  struct _KTHREAD *v17; // rax
  __int64 v18; // rdx
  int v19; // ecx
  void *v20; // rcx
  __int64 v21; // r8
  unsigned int v23; // [rsp+30h] [rbp-A8h]
  unsigned int v24; // [rsp+38h] [rbp-A0h]
  ACCESS_MASK DesiredAccess; // [rsp+3Ch] [rbp-9Ch]
  int v26; // [rsp+40h] [rbp-98h]
  __int64 v27; // [rsp+48h] [rbp-90h] BYREF
  unsigned __int64 v28; // [rsp+50h] [rbp-88h] BYREF
  int v29; // [rsp+58h] [rbp-80h]
  int v30[2]; // [rsp+60h] [rbp-78h] BYREF
  PVOID P; // [rsp+68h] [rbp-70h] BYREF
  PSID Sid; // [rsp+70h] [rbp-68h] BYREF
  __int64 v33; // [rsp+78h] [rbp-60h]
  _OWORD v34[4]; // [rsp+98h] [rbp-40h] BYREF
  __int64 v35; // [rsp+F0h] [rbp+18h]

  v35 = a3;
  v6 = a3;
  v28 = 0LL;
  Sid = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v9 = *((_BYTE *)KeGetCurrentThread() + 562);
  P = 0LL;
  *(_QWORD *)v30 = 0LL;
  v27 = 0LL;
  v24 = 0;
  v34[0] = 0LL;
  LOBYTE(a3) = v9;
  v10 = sub_14079474C(a1, &v28, a3);
  v23 = v10;
  if ( v10 >= 0 )
  {
    v12 = v28;
    v29 = (v28 >> 4) & 3;
    v33 = (v28 >> 6) & 0xF;
    v24 = (v28 >> 6) & 0xF;
    v10 = sub_1407947BC(v33, v6, v11, &Sid, v34);
    v23 = v10;
    if ( v10 >= 0 )
    {
      if ( a2 > 2 )
      {
        v10 = -1073741821;
        v23 = -1073741821;
        goto LABEL_38;
      }
      if ( Length < 4 )
      {
        v10 = -1073741811;
        v23 = -1073741811;
        goto LABEL_38;
      }
      if ( v9 )
        ProbeForWrite(a4, Length, 4u);
      v13 = 1;
      if ( a2 )
      {
        v26 = 0;
      }
      else
      {
        v26 = 1;
        if ( v6 )
        {
          v10 = -1073741811;
          v23 = -1073741811;
          goto LABEL_38;
        }
      }
      if ( v9 && a2 )
      {
        v14 = 0;
        if ( v35 )
        {
          v10 = sub_14075ADF8(v12);
          v23 = v10;
          if ( v10 < 0 )
            goto LABEL_38;
        }
      }
      else
      {
        v14 = 1;
      }
      v15 = 0;
      DesiredAccess = 0;
      if ( !v14 )
      {
        if ( a2 - 1 <= 1 )
          v15 = 2;
        DesiredAccess = v15;
      }
      v16 = 0;
      if ( v9 )
      {
        v17 = KeGetCurrentThread();
        v18 = *((_QWORD *)v17 + 23);
        v12 = v28;
        v19 = v24;
        if ( !v26 )
          v16 = (int)v17;
      }
      else
      {
        LODWORD(v18) = (_DWORD)PsInitialSystemProcess;
        v19 = v33;
      }
      v10 = sub_140798334((int)v30, v18, v16, v19, Sid);
      v23 = v10;
      if ( v10 >= 0 )
      {
        v10 = sub_140798234(*(_QWORD *)v30, v12, &v27);
        v23 = v10;
        if ( v10 != -1073741772 || v29 == 3 )
        {
          if ( v10 < 0 )
            goto LABEL_38;
          if ( v14 )
          {
LABEL_30:
            if ( a2 )
            {
              if ( a2 == 1 )
              {
                if ( v27 && *(_DWORD *)(v27 + 160) )
                  goto LABEL_37;
              }
              else if ( !v27 || !*(_DWORD *)(v27 + 164) )
              {
                goto LABEL_37;
              }
              v13 = 0;
            }
LABEL_37:
            *a4 = v13;
            v10 = 0;
            v23 = 0;
            goto LABEL_38;
          }
          v20 = *(void **)(v27 + 72);
        }
        else
        {
          v10 = sub_14075A12C(v12, (PSECURITY_DESCRIPTOR **)&P);
          v23 = v10;
          if ( v10 < 0 )
            goto LABEL_38;
          if ( v14 )
            goto LABEL_30;
          v20 = (void *)*((_QWORD *)P + 2);
        }
        v10 = sub_140794654(v20, DesiredAccess);
        v23 = v10;
        if ( v10 < 0 )
          goto LABEL_38;
        goto LABEL_30;
      }
    }
  }
LABEL_38:
  if ( v10 == -1073741772 && !a2 )
  {
    *a4 = 0;
    v23 = 0;
  }
  if ( v27 )
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(v27 + 8));
  if ( *(_QWORD *)v30 )
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(*(_QWORD *)v30 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  sub_1402F9540((__int64)KeGetCurrentThread());
  LOBYTE(v21) = v9;
  sub_1407946F8(v24, v34, v21);
  return v23;
}
