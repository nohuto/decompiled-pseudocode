/*
 * XREFs of sub_14066B830 @ 0x14066B830
 * Callers:
 *     sub_14066B7B4 @ 0x14066B7B4 (sub_14066B7B4.c)
 * Callees:
 *     sub_140204870 @ 0x140204870 (sub_140204870.c)
 *     sub_14028AB90 @ 0x14028AB90 (sub_14028AB90.c)
 *     RtlSidHashInitialize @ 0x1402E1660 (RtlSidHashInitialize.c)
 *     sub_140389ED0 @ 0x140389ED0 (sub_140389ED0.c)
 *     sub_140799CF0 @ 0x140799CF0 (sub_140799CF0.c)
 *     sub_140799DB0 @ 0x140799DB0 (sub_140799DB0.c)
 *     sub_140A1A61C @ 0x140A1A61C (sub_140A1A61C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14066B830(ULONG **a1, __int64 a2, __int64 a3, ULONG a4, void *Src)
{
  __int64 result; // rax
  int v8; // ebx
  _DWORD *v9; // r14
  _DWORD *v10; // rsi
  char v11; // r12
  _SID_AND_ATTRIBUTES *Pool2; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  ULONG *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  int v20; // ebx
  int v21; // [rsp+28h] [rbp-80h]
  int v22; // [rsp+30h] [rbp-78h]
  int v23; // [rsp+54h] [rbp-54h] BYREF
  __int64 v24; // [rsp+58h] [rbp-50h] BYREF
  __int64 v25[9]; // [rsp+60h] [rbp-48h] BYREF
  char v26; // [rsp+B0h] [rbp+8h]

  v23 = 1;
  v26 = 0;
  result = a2;
  LODWORD(v24) = 0;
  v8 = 0;
  v25[0] = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  Pool2 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  if ( a2 || a3 || a4 )
  {
    v15 = (ULONG *)sub_140A1A61C();
    if ( !v15 )
      return (unsigned int)-1073741670;
    if ( a2 )
    {
      v18 = sub_140389ED0(v14, v13, v16, v17);
      v9 = v18;
      if ( !v18 )
      {
        v8 = -1073741670;
LABEL_37:
        ExFreePoolWithTag(v15, 0);
        return (unsigned int)v8;
      }
      v8 = sub_140204870((__int64)v18, &v23, a2);
      if ( v8 < 0 )
        goto LABEL_30;
      v26 = 1;
      *((_QWORD *)v15 + 72) = v9;
    }
    if ( a3 )
    {
      v19 = sub_140389ED0(v14, v13, v16, v17);
      v10 = v19;
      if ( !v19 )
      {
LABEL_26:
        v8 = -1073741670;
        goto LABEL_27;
      }
      v8 = sub_140204870((__int64)v19, &v23, a3);
      if ( v8 < 0 )
      {
LABEL_27:
        if ( !v9 )
        {
LABEL_31:
          if ( v10 )
          {
            if ( v11 )
              sub_14028AB90(v10);
            ExFreePoolWithTag(v10, 0);
          }
          if ( Pool2 )
            ExFreePoolWithTag(Pool2, 0);
          goto LABEL_37;
        }
        if ( v26 )
          sub_14028AB90(v9);
LABEL_30:
        ExFreePoolWithTag(v9, 0);
        goto LABEL_31;
      }
      v11 = 1;
      *((_QWORD *)v15 + 73) = v10;
    }
    if ( !Src || !a4 )
      goto LABEL_24;
    v8 = sub_140799CF0(Src);
    if ( v8 < 0 )
      goto LABEL_27;
    v20 = v24;
    Pool2 = (_SID_AND_ATTRIBUTES *)ExAllocatePool2(256LL, (unsigned int)v24, 1683252563LL);
    if ( Pool2 )
    {
      v8 = sub_140799DB0(Src, v20, v21, v22, (__int64)v25, (__int64)&v24);
      if ( v8 >= 0 )
      {
        *v15 = a4;
        *((_QWORD *)v15 + 1) = Pool2;
        RtlSidHashInitialize(Pool2, a4, (PSID_AND_ATTRIBUTES_HASH)(v15 + 8));
LABEL_24:
        *a1 = v15;
        return (unsigned int)v8;
      }
      goto LABEL_27;
    }
    goto LABEL_26;
  }
  return result;
}
