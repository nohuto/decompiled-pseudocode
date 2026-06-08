/*
 * XREFs of PepIdlePrepare @ 0x1C000A090
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002BC0 (__security_check_cookie.c)
 *     AcpiCStateIdlePrepare @ 0x1C0009980 (AcpiCStateIdlePrepare.c)
 *     PepIdleCancel @ 0x1C0009E30 (PepIdleCancel.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PepIdlePrepare(__int64 a1)
{
  __int64 v1; // r15
  unsigned int v2; // r14d
  ULONG_PTR BugCheckParameter4; // rbx
  int v5; // edi
  _DWORD *v6; // rbx
  ULONG_PTR v7; // r12
  bool v8; // zf
  char v9; // r9
  unsigned int v10; // eax
  __int64 v11; // rdx
  ULONG_PTR v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 result; // rax
  signed __int32 v16[8]; // [rsp+0h] [rbp-70h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-40h] BYREF
  ULONG_PTR v18[2]; // [rsp+40h] [rbp-30h]
  ULONG_PTR v19; // [rsp+50h] [rbp-20h]
  __int128 v20; // [rsp+58h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  v2 = *(_DWORD *)(a1 + 56);
  BugCheckParameter4 = *(_QWORD *)a1;
  v19 = 0LL;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  *(_OWORD *)v18 = 0LL;
  v20 = 0LL;
  if ( dword_1C0012B28 >= (unsigned int)dword_1C00124D4 )
  {
    _InterlockedOr(v16, 0);
    AcpiCStateIdlePrepare(a1);
    v7 = *(_QWORD *)(BugCheckParameter4 + 48);
    LODWORD(BugCheckParameter3[1]) = 0;
    LODWORD(v18[0]) = 0;
    HIDWORD(v19) = 0;
    BugCheckParameter3[0] = (ULONG_PTR)&v20;
    HIDWORD(BugCheckParameter3[1]) = *(_DWORD *)(a1 + 76);
    LODWORD(v19) = *(_DWORD *)(a1 + 72);
    BYTE8(v20) = *(_BYTE *)(a1 + 51);
    *(_QWORD *)&v20 = *(_QWORD *)(a1 + 24);
    v8 = *(_BYTE *)(a1 + 52) == 0;
    HIDWORD(v18[0]) = v2;
    v18[1] = v7;
    HIDWORD(v20) = !v8;
    if ( (int)((__int64 (__fastcall *)(_QWORD, ULONG_PTR *))qword_1C0012850)(
                *(_QWORD *)BugCheckParameter4,
                BugCheckParameter3) < 0 )
      KeBugCheckEx((ULONG)323, 1uLL, 3uLL, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
    v9 = BugCheckParameter3[1];
    v5 = -1;
    if ( !LOBYTE(BugCheckParameter3[1]) )
    {
      if ( HIDWORD(BugCheckParameter3[1]) >= *(_DWORD *)(BugCheckParameter4 + 56) )
        KeBugCheckEx((ULONG)323, 2uLL, 1uLL, HIDWORD(BugCheckParameter3[1]), BugCheckParameter4);
      if ( (_DWORD)v19 != -1 && (unsigned int)v19 >= dword_1C0012B4C )
        KeBugCheckEx((ULONG)323, 2uLL, 2uLL, (unsigned int)v19, BugCheckParameter4);
    }
    v10 = v18[0];
    if ( LODWORD(v18[0]) > v2 )
      KeBugCheckEx((ULONG)323, 2uLL, 0LL, LODWORD(v18[0]), BugCheckParameter4);
    v11 = 0LL;
    while ( (unsigned int)v11 < v10 )
    {
      v12 = *(unsigned __int8 *)(v7 + 16LL * (unsigned int)v11 + 8);
      v13 = *(_QWORD *)(v7 + 16LL * (unsigned int)v11);
      if ( (_DWORD)v12 != 255 && ((unsigned int)v12 >= *(_DWORD *)(v13 + 1132) || v9) )
        KeBugCheckEx((ULONG)323, 2uLL, 1uLL, v12, *(_QWORD *)(v13 + 712));
      *(_BYTE *)(v1 + 8 * v11 + 4) = v12;
      *(_DWORD *)(v1 + 8 * v11) = *(_DWORD *)(v13 + 56);
      v11 = (unsigned int)(v11 + 1);
      v10 = v18[0];
    }
    v14 = 88LL * HIDWORD(BugCheckParameter3[1]);
    if ( !*(_BYTE *)(v14 + BugCheckParameter4 + 144) || *(_QWORD *)(v14 + BugCheckParameter4 + 88) )
    {
      v6 = (_DWORD *)(BugCheckParameter4 + 8);
      if ( !v9 )
      {
        *v6 = HIDWORD(BugCheckParameter3[1]);
        v5 = v19;
        goto LABEL_24;
      }
    }
    else
    {
      PepIdleCancel(*(_QWORD **)a1, 2);
      v6 = (_DWORD *)(BugCheckParameter4 + 8);
    }
    *v6 = -1;
LABEL_24:
    *(_DWORD *)(a1 + 60) = v18[0];
    goto LABEL_25;
  }
  v5 = -1;
  v6 = (_DWORD *)(BugCheckParameter4 + 8);
  *v6 = -2;
LABEL_25:
  *(_DWORD *)(a1 + 72) = v5;
  result = (unsigned int)*v6;
  *(_DWORD *)(a1 + 76) = result;
  return result;
}
