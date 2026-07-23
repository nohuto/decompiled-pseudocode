/*
 * XREFs of sub_1406A1370 @ 0x1406A1370
 * Callers:
 *     sub_14084CD18 @ 0x14084CD18 (sub_14084CD18.c)
 * Callees:
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_1402ACD00 @ 0x1402ACD00 (sub_1402ACD00.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406A185C @ 0x1406A185C (sub_1406A185C.c)
 *     sub_1406A18C0 @ 0x1406A18C0 (sub_1406A18C0.c)
 *     sub_1406A1AB8 @ 0x1406A1AB8 (sub_1406A1AB8.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140735760 @ 0x140735760 (sub_140735760.c)
 *     sub_1407C1A00 @ 0x1407C1A00 (sub_1407C1A00.c)
 *     sub_1407CA1C0 @ 0x1407CA1C0 (sub_1407CA1C0.c)
 *     sub_140915854 @ 0x140915854 (sub_140915854.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 *     sub_140AB4630 @ 0x140AB4630 (sub_140AB4630.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_1406A1370(
        HANDLE Handle,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  int v9; // r8d
  unsigned int v10; // r14d
  int v11; // ebx
  unsigned int v12; // edi
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v15; // r9d
  int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  KPROCESSOR_MODE v21; // r9
  char v22; // [rsp+50h] [rbp-1D8h]
  char v23; // [rsp+51h] [rbp-1D7h]
  char v24; // [rsp+52h] [rbp-1D6h]
  PVOID Object; // [rsp+58h] [rbp-1D0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-1C0h]
  unsigned int v29; // [rsp+70h] [rbp-1B8h]
  PVOID v30; // [rsp+78h] [rbp-1B0h] BYREF
  PVOID v31; // [rsp+80h] [rbp-1A8h] BYREF
  __int64 v32; // [rsp+88h] [rbp-1A0h]
  _QWORD v33[2]; // [rsp+90h] [rbp-198h] BYREF
  __int128 v34; // [rsp+A0h] [rbp-188h] BYREF
  PVOID v35; // [rsp+B0h] [rbp-178h] BYREF
  int v36; // [rsp+B8h] [rbp-170h]
  int v37; // [rsp+BCh] [rbp-16Ch]
  _QWORD *v38; // [rsp+C0h] [rbp-168h]
  int v39; // [rsp+C8h] [rbp-160h]
  __int128 v40; // [rsp+CCh] [rbp-15Ch]
  __int64 v41; // [rsp+DCh] [rbp-14Ch]
  int v42; // [rsp+E4h] [rbp-144h]
  _QWORD v43[8]; // [rsp+F0h] [rbp-138h] BYREF
  _OWORD v44[2]; // [rsp+130h] [rbp-F8h] BYREF
  _OWORD v45[3]; // [rsp+150h] [rbp-D8h] BYREF
  size_t v46[2]; // [rsp+180h] [rbp-A8h] BYREF
  char v47; // [rsp+190h] [rbp-98h]
  _BYTE v48[71]; // [rsp+191h] [rbp-97h] BYREF

  v29 = a2;
  v34 = 0LL;
  LODWORD(v31) = 0;
  memset(v45, 0, sizeof(v45));
  memset(v48, 0, sizeof(v48));
  memset(v44, 0, sizeof(v44));
  v28 = 0LL;
  v32 = 0LL;
  if ( qword_140D3B008 )
    sub_140223A20((unsigned __int64)v44, 0x20000uLL);
  v22 = 0;
  v23 = 0;
  memset(v43, 0, sizeof(v43));
  Object = 0LL;
  LODWORD(v27) = 0;
  *(_OWORD *)v46 = 0LL;
  v47 = 0;
  v33[1] = v33;
  v33[0] = v33;
  sub_140347770((__int64)&v34);
  v30 = 0LL;
  v24 = sub_140AB46D0();
  if ( !v24 )
  {
    v11 = -1073741431;
    goto LABEL_31;
  }
  if ( a3 > 2 )
  {
    if ( qword_140D3B008 )
    {
      if ( Handle )
      {
        v21 = *((_BYTE *)KeGetCurrentThread() + 562);
        v31 = 0LL;
        if ( ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, v21, &v31, 0LL) >= 0 )
          ObfDereferenceObject(v31);
      }
    }
    v11 = -1073741811;
  }
  else
  {
    v10 = *((char *)KeGetCurrentThread() + 562);
    v11 = sub_140AB4630((_DWORD)Handle, 1, v9, (unsigned __int8)v10, (__int64)&Object, 0LL);
    if ( v11 < 0 )
      goto LABEL_31;
    if ( qword_140D3B008 && Object )
    {
      v28 = *((_QWORD *)Object + 1);
      v32 = v28;
    }
    if ( (_BYTE)v10 == 1 )
    {
      v12 = a5;
      if ( a5 )
      {
        if ( (a4 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( a4 + a5 > 0x7FFFFFFF0000LL || a4 + a5 < a4 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v13 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v13 = *(_DWORD *)v13;
    }
    else
    {
      v12 = a5;
    }
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v23 = 1;
    if ( !dword_140C54CA8 || sub_1402ACD00() )
      goto LABEL_22;
    v43[0] = Object;
    v43[1] = __PAIR64__(a3, a2);
    v43[2] = a4;
    LODWORD(v43[3]) = v12;
    v43[4] = a6;
    LOBYTE(v15) = 1;
    v16 = sub_140735760(6, (unsigned int)v43, 0, v15, 21, (__int64)Object, (__int64)v33);
    v11 = v16;
    if ( v16 >= 0 )
    {
      v22 = 1;
LABEL_22:
      v11 = sub_1407CA1C0(&Object, (unsigned __int8)v10, 1LL, &v30);
      if ( v11 >= 0 )
      {
        v11 = sub_1407C1A00(v46, a4, v12, v10, 1);
        if ( v11 >= 0 )
        {
          if ( v30 )
          {
            sub_140AB4550(v45);
            v11 = sub_140915854((int)Object, (int)v30, 0, a2, a3, v46[1], v12, (__int64)&v27, 0LL);
            sub_140AB4580(v45);
          }
          else
          {
            v11 = sub_1406A18C0(Object, a2, a3, v46[1], v12, &v27);
          }
          if ( v11 >= 0 || v11 == -2147483643 || v11 == -1073741789 )
          {
            v17 = v27;
            *a6 = v27;
            if ( v11 != -1073741789 )
            {
              if ( v12 >= v17 )
                v12 = v17;
              sub_1406A1AB8(v46, v12);
            }
          }
        }
      }
      goto LABEL_31;
    }
    if ( v16 == -1073740541 )
      v11 = 0;
  }
LABEL_31:
  if ( v30 )
    ObfDereferenceObject(v30);
  if ( v22 && dword_140C54CA8 && !sub_1402ACD00() && (_QWORD *)v33[0] != v33 )
  {
    v37 = 0;
    v40 = 0LL;
    v41 = 0LL;
    v42 = 0;
    v35 = Object;
    v36 = v11;
    v39 = v11;
    v38 = v43;
    sub_140735760(21, (unsigned int)&v35, 0, 0, 21, (__int64)Object, (__int64)v33);
    v11 = v39;
  }
  if ( v23 )
    sub_1402F9540((__int64)KeGetCurrentThread());
  if ( Object )
    ObfDereferenceObject(Object);
  sub_1406A185C(v46);
  if ( qword_140D3B008 )
  {
    LOBYTE(v19) = 18;
    sub_14042A5E0(v19, v44);
  }
  if ( v24 )
    sub_140AB42A0(v19, v18);
  sub_14022EA30((__int64 *)&v34);
  return (unsigned int)v11;
}
