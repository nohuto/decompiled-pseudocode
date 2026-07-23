/*
 * XREFs of sub_14077EF20 @ 0x14077EF20
 * Callers:
 *     sub_140698AAC @ 0x140698AAC (sub_140698AAC.c)
 *     sub_140699288 @ 0x140699288 (sub_140699288.c)
 *     sub_1406BDC58 @ 0x1406BDC58 (sub_1406BDC58.c)
 *     sub_1406BDEE4 @ 0x1406BDEE4 (sub_1406BDEE4.c)
 *     sub_1406DB1B4 @ 0x1406DB1B4 (sub_1406DB1B4.c)
 *     sub_140772790 @ 0x140772790 (sub_140772790.c)
 *     sub_14077DF24 @ 0x14077DF24 (sub_14077DF24.c)
 *     sub_140787818 @ 0x140787818 (sub_140787818.c)
 *     sub_140A255C0 @ 0x140A255C0 (sub_140A255C0.c)
 *     sub_140A2A470 @ 0x140A2A470 (sub_140A2A470.c)
 *     sub_140A2A640 @ 0x140A2A640 (sub_140A2A640.c)
 *     sub_140A2C910 @ 0x140A2C910 (sub_140A2C910.c)
 *     sub_140A2CD54 @ 0x140A2CD54 (sub_140A2CD54.c)
 * Callees:
 *     sub_1402DF9D0 @ 0x1402DF9D0 (sub_1402DF9D0.c)
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     RtlValidSecurityDescriptor @ 0x140726610 (RtlValidSecurityDescriptor.c)
 *     sub_140743C8C @ 0x140743C8C (sub_140743C8C.c)
 *     sub_140772A24 @ 0x140772A24 (sub_140772A24.c)
 *     sub_140772AA0 @ 0x140772AA0 (sub_140772AA0.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14077EF20(__int64 a1, __int64 a2, _WORD *a3, unsigned int a4, char a5, __int64 a6, void **a7)
{
  int v7; // ebx
  void *v9; // rbp
  _WORD *Pool2; // rsi
  void *v11; // r12
  unsigned int v12; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v18; // rcx
  int v19; // eax
  void *v20; // rax
  int v21; // eax
  __int64 v23; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v24; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE P[128]; // [rsp+60h] [rbp-C8h] BYREF

  v7 = 0;
  v24 = 0LL;
  v9 = 0LL;
  v23 = a2;
  Pool2 = 0LL;
  *a7 = 0LL;
  v11 = 0LL;
  v12 = a4;
  if ( a3 )
  {
    v7 = sub_1402DF9D0(a3, 512LL, &v24);
    if ( v7 < 0 )
      return (unsigned int)v7;
    if ( v24 >= 0x30 )
    {
      v14 = v24 + 12;
      Pool2 = (_WORD *)ExAllocatePool2(256LL, 2LL * (unsigned int)(v24 + 12), 1380994640LL);
      if ( !Pool2 )
        return (unsigned int)-1073741801;
    }
    else
    {
      Pool2 = P;
      v14 = 59;
    }
    v7 = sub_1402DFBC4(Pool2, v14, 0LL, 0LL, 0x800u, L"%s\\%s", L"Properties", a3);
    if ( v7 < 0 )
      goto LABEL_11;
    if ( a1 )
      v15 = *(_QWORD *)(a1 + 224);
    else
      LODWORD(v15) = 0;
    v16 = sub_14077FFEC(v15, v23, (_DWORD)Pool2, 0, a4, (__int64)a7);
    if ( v16 == -1073741444 )
    {
      v7 = -1073741772;
      goto LABEL_11;
    }
    if ( !a5 || v16 != -1073741772 )
    {
      v7 = v16;
      goto LABEL_11;
    }
    v12 = a4;
    LODWORD(a2) = v23;
  }
  if ( a1 )
    v18 = *(_QWORD *)(a1 + 224);
  else
    LODWORD(v18) = 0;
  v19 = sub_14077FFEC(v18, a2, (unsigned int)L"Properties", 0, v12, (__int64)a7);
  if ( v19 != -1073741772 )
    goto LABEL_29;
  if ( !a5 )
  {
LABEL_21:
    v7 = v19;
    goto LABEL_22;
  }
  v20 = sub_140743C8C();
  v9 = v20;
  if ( v20 )
  {
    if ( !RtlValidSecurityDescriptor(v20) )
    {
      v7 = -1073741595;
LABEL_23:
      ExFreePoolWithTag(v9, 0);
      goto LABEL_11;
    }
    v19 = sub_140772A24(a1, v23, (__int64)L"Properties", 0, a4, (__int64)v9, (__int64)a7, 0LL);
LABEL_29:
    if ( v19 != -1073741444 )
    {
      if ( v19 < 0 )
        goto LABEL_21;
      if ( !a3 )
      {
LABEL_22:
        if ( !v9 )
          goto LABEL_11;
        goto LABEL_23;
      }
      v11 = *a7;
      *a7 = 0LL;
      v21 = sub_140772AA0(a1);
      if ( v21 != -1073741444 )
      {
        if ( v21 < 0 )
          v7 = v21;
        goto LABEL_22;
      }
    }
    v7 = -1073741772;
    goto LABEL_22;
  }
  v7 = -1073741595;
LABEL_11:
  if ( Pool2 && Pool2 != (_WORD *)P )
    ExFreePoolWithTag(Pool2, 0);
  if ( v11 )
    ZwClose(v11);
  return (unsigned int)v7;
}
