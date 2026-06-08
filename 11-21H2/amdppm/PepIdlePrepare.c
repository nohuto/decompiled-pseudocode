/*
 * XREFs of PepIdlePrepare @ 0x1C00097B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002C70 (__security_check_cookie.c)
 *     AcpiCStateIdlePrepare @ 0x1C0009130 (AcpiCStateIdlePrepare.c)
 *     PepIdleCancel @ 0x1C0009550 (PepIdleCancel.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PepIdlePrepare(__int64 a1)
{
  __int64 v1; // r15
  unsigned int v2; // r14d
  ULONG_PTR BugCheckParameter4; // rbx
  int v5; // edi
  ULONG_PTR v6; // r12
  bool v7; // zf
  char v8; // r8
  unsigned int v9; // eax
  __int64 v10; // rdx
  ULONG_PTR v11; // rcx
  __int64 v12; // r10
  __int64 v13; // rdx
  __int64 result; // rax
  signed __int32 v15[8]; // [rsp+0h] [rbp-70h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-40h] BYREF
  ULONG_PTR v17[2]; // [rsp+40h] [rbp-30h]
  ULONG_PTR v18; // [rsp+50h] [rbp-20h]
  __int128 v19; // [rsp+58h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  v2 = *(_DWORD *)(a1 + 56);
  BugCheckParameter4 = *(_QWORD *)a1;
  v18 = 0LL;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  *(_OWORD *)v17 = 0LL;
  v19 = 0LL;
  if ( dword_1C0011A78 >= (unsigned int)dword_1C0011454 )
  {
    _InterlockedOr(v15, 0);
    AcpiCStateIdlePrepare(a1);
    v6 = *(_QWORD *)(BugCheckParameter4 + 48);
    LODWORD(BugCheckParameter3[1]) = 0;
    LODWORD(v17[0]) = 0;
    HIDWORD(v18) = 0;
    BugCheckParameter3[0] = (ULONG_PTR)&v19;
    HIDWORD(BugCheckParameter3[1]) = *(_DWORD *)(a1 + 76);
    LODWORD(v18) = *(_DWORD *)(a1 + 72);
    BYTE8(v19) = *(_BYTE *)(a1 + 51);
    *(_QWORD *)&v19 = *(_QWORD *)(a1 + 24);
    v7 = *(_BYTE *)(a1 + 52) == 0;
    HIDWORD(v17[0]) = v2;
    v17[1] = v6;
    HIDWORD(v19) = !v7;
    if ( (int)((__int64 (__fastcall *)(_QWORD, ULONG_PTR *))qword_1C00117C0)(
                *(_QWORD *)BugCheckParameter4,
                BugCheckParameter3) < 0 )
      KeBugCheckEx((ULONG)323, 1uLL, 3uLL, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
    v8 = BugCheckParameter3[1];
    v5 = -1;
    if ( !LOBYTE(BugCheckParameter3[1]) )
    {
      if ( HIDWORD(BugCheckParameter3[1]) >= *(_DWORD *)(BugCheckParameter4 + 56) )
        KeBugCheckEx((ULONG)323, 2uLL, 1uLL, HIDWORD(BugCheckParameter3[1]), BugCheckParameter4);
      if ( (_DWORD)v18 != -1 && (unsigned int)v18 >= dword_1C0011A9C )
        KeBugCheckEx((ULONG)323, 2uLL, 2uLL, (unsigned int)v18, BugCheckParameter4);
    }
    v9 = v17[0];
    if ( LODWORD(v17[0]) > v2 )
      KeBugCheckEx((ULONG)323, 2uLL, 0LL, LODWORD(v17[0]), BugCheckParameter4);
    v10 = 0LL;
    while ( (unsigned int)v10 < v9 )
    {
      v11 = *(unsigned __int8 *)(v6 + 16LL * (unsigned int)v10 + 8);
      v12 = *(_QWORD *)(v6 + 16LL * (unsigned int)v10);
      if ( (_DWORD)v11 != 255 && ((unsigned int)v11 >= *(_DWORD *)(v12 + 1132) || v8) )
        KeBugCheckEx((ULONG)323, 2uLL, 1uLL, v11, *(_QWORD *)(v12 + 712));
      *(_BYTE *)(v1 + 8 * v10 + 4) = v11;
      *(_DWORD *)(v1 + 8 * v10) = *(_DWORD *)(v12 + 56);
      v10 = (unsigned int)(v10 + 1);
      v9 = v17[0];
    }
    v13 = 88LL * HIDWORD(BugCheckParameter3[1]);
    if ( !*(_BYTE *)(v13 + BugCheckParameter4 + 144) || *(_QWORD *)(v13 + BugCheckParameter4 + 88) )
    {
      if ( !v8 )
      {
        *(_DWORD *)(BugCheckParameter4 + 8) = HIDWORD(BugCheckParameter3[1]);
        v5 = v18;
        goto LABEL_24;
      }
    }
    else
    {
      PepIdleCancel(*(_QWORD **)a1, 2);
    }
    *(_DWORD *)(BugCheckParameter4 + 8) = -1;
LABEL_24:
    *(_DWORD *)(a1 + 60) = v17[0];
    goto LABEL_25;
  }
  v5 = -1;
  *(_DWORD *)(BugCheckParameter4 + 8) = -2;
LABEL_25:
  *(_DWORD *)(a1 + 72) = v5;
  result = *(unsigned int *)(BugCheckParameter4 + 8);
  *(_DWORD *)(a1 + 76) = result;
  return result;
}
