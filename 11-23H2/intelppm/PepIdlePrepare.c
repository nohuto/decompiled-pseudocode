/*
 * XREFs of PepIdlePrepare @ 0x1C000D4F0
 * Callers:
 *     <none>
 * Callees:
 *     AcpiCStateIdlePrepare @ 0x1C0001330 (AcpiCStateIdlePrepare.c)
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     PepIdleCancel @ 0x1C000D3F0 (PepIdleCancel.c)
 */

__int64 __fastcall PepIdlePrepare(_QWORD **a1)
{
  _QWORD *v1; // r15
  unsigned int v2; // r14d
  ULONG_PTR BugCheckParameter4; // rbx
  unsigned int *v5; // rcx
  int v6; // edi
  ULONG_PTR v7; // r12
  bool v8; // zf
  char v9; // r9
  unsigned int v10; // edx
  __int64 v11; // r8
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 result; // rax
  signed __int32 v16[8]; // [rsp+0h] [rbp-70h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-40h] BYREF
  ULONG_PTR v18[2]; // [rsp+40h] [rbp-30h]
  ULONG_PTR v19; // [rsp+50h] [rbp-20h]
  __int128 v20; // [rsp+58h] [rbp-18h] BYREF

  v1 = a1[8];
  v2 = *((_DWORD *)a1 + 14);
  BugCheckParameter4 = (ULONG_PTR)*a1;
  v19 = 0LL;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  *(_OWORD *)v18 = 0LL;
  v20 = 0LL;
  if ( dword_1C001F668 >= (unsigned int)dword_1C001F014 )
  {
    _InterlockedOr(v16, 0);
    AcpiCStateIdlePrepare((__int64 *)a1);
    v7 = *(_QWORD *)(BugCheckParameter4 + 48);
    LODWORD(BugCheckParameter3[1]) = 0;
    LODWORD(v18[0]) = 0;
    HIDWORD(v19) = 0;
    BugCheckParameter3[0] = (ULONG_PTR)&v20;
    HIDWORD(BugCheckParameter3[1]) = *((_DWORD *)a1 + 19);
    LODWORD(v19) = *((_DWORD *)a1 + 18);
    BYTE8(v20) = *((_BYTE *)a1 + 51);
    *(_QWORD *)&v20 = a1[3];
    v8 = *((_BYTE *)a1 + 52) == 0;
    HIDWORD(v18[0]) = v2;
    v18[1] = v7;
    HIDWORD(v20) = !v8;
    if ( (int)((__int64 (__fastcall *)(_QWORD, ULONG_PTR *))qword_1C001F390)(
                *(_QWORD *)BugCheckParameter4,
                BugCheckParameter3) < 0 )
      KeBugCheckEx((ULONG)323, 1uLL, 3uLL, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
    v9 = BugCheckParameter3[1];
    v6 = -1;
    v10 = HIDWORD(BugCheckParameter3[1]);
    if ( !LOBYTE(BugCheckParameter3[1]) )
    {
      if ( HIDWORD(BugCheckParameter3[1]) >= *(_DWORD *)(BugCheckParameter4 + 56) )
        KeBugCheckEx((ULONG)323, 2uLL, 1uLL, HIDWORD(BugCheckParameter3[1]), BugCheckParameter4);
      if ( (_DWORD)v19 != -1 && (unsigned int)v19 >= dword_1C001F68C )
        KeBugCheckEx((ULONG)323, 2uLL, 2uLL, (unsigned int)v19, BugCheckParameter4);
    }
    if ( LODWORD(v18[0]) > v2 )
      KeBugCheckEx((ULONG)323, 2uLL, 0LL, LODWORD(v18[0]), BugCheckParameter4);
    v11 = 0LL;
    if ( LODWORD(v18[0]) )
    {
      do
      {
        v12 = *(unsigned __int8 *)(v7 + 16LL * (unsigned int)v11 + 8);
        v13 = *(_QWORD *)(v7 + 16LL * (unsigned int)v11);
        if ( v12 != 255 && (v12 >= *(_DWORD *)(v13 + 1132) || v9) )
          KeBugCheckEx(
            (ULONG)323,
            2uLL,
            1uLL,
            *(unsigned __int8 *)(v7 + 16LL * (unsigned int)v11 + 8),
            *(_QWORD *)(v13 + 712));
        BYTE4(v1[v11]) = v12;
        LODWORD(v1[v11]) = *(_DWORD *)(v13 + 56);
        v11 = (unsigned int)(v11 + 1);
      }
      while ( (unsigned int)v11 < LODWORD(v18[0]) );
      v10 = HIDWORD(BugCheckParameter3[1]);
    }
    v14 = 88LL * v10;
    if ( !*(_BYTE *)(v14 + BugCheckParameter4 + 144) || *(_QWORD *)(v14 + BugCheckParameter4 + 88) )
    {
      v5 = (unsigned int *)(BugCheckParameter4 + 8);
      if ( !v9 )
      {
        *v5 = v10;
        v6 = v19;
        goto LABEL_23;
      }
    }
    else
    {
      PepIdleCancel(*a1, 2);
      v5 = (unsigned int *)(BugCheckParameter4 + 8);
    }
    *v5 = -1;
LABEL_23:
    *((_DWORD *)a1 + 15) = v18[0];
    goto LABEL_24;
  }
  v5 = (unsigned int *)(BugCheckParameter4 + 8);
  v6 = -1;
  *(_DWORD *)(BugCheckParameter4 + 8) = -2;
LABEL_24:
  *((_DWORD *)a1 + 18) = v6;
  result = *v5;
  *((_DWORD *)a1 + 19) = result;
  return result;
}
