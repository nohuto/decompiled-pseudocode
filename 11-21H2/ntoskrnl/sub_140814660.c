/*
 * XREFs of sub_140814660 @ 0x140814660
 * Callers:
 *     sub_14081454C @ 0x14081454C (sub_14081454C.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406F6CA4 @ 0x1406F6CA4 (sub_1406F6CA4.c)
 *     sub_140814978 @ 0x140814978 (sub_140814978.c)
 *     sub_1408149AC @ 0x1408149AC (sub_1408149AC.c)
 *     sub_140814B24 @ 0x140814B24 (sub_140814B24.c)
 *     sub_140814BA0 @ 0x140814BA0 (sub_140814BA0.c)
 *     sub_140814C74 @ 0x140814C74 (sub_140814C74.c)
 *     sub_1409EA130 @ 0x1409EA130 (sub_1409EA130.c)
 *     sub_1409EA9A0 @ 0x1409EA9A0 (sub_1409EA9A0.c)
 *     sub_1409EAFC8 @ 0x1409EAFC8 (sub_1409EAFC8.c)
 */

__int64 __fastcall sub_140814660(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  __int64 v2; // r14
  char v3; // r12
  int *v5; // rdi
  char v7; // r13
  char v8; // r15
  __int64 ProcessServerSilo; // rax
  __int64 v10; // rdx
  int v11; // ecx
  char v12; // bp
  __int64 v13; // r9
  int v14; // eax
  int v15; // eax
  int v17; // eax
  int v18; // eax
  unsigned int v19; // r15d
  unsigned int i; // ebp
  __int64 v21; // rax
  unsigned int v22; // ebp
  unsigned int j; // r15d
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  _OWORD v28[3]; // [rsp+20h] [rbp-78h] BYREF

  v2 = *(_QWORD *)(a2 + 32);
  v3 = *(_BYTE *)(a2 + 64);
  v5 = *(int **)a2;
  memset(v28, 0, sizeof(v28));
  v7 = 0;
  v8 = 0;
  ProcessServerSilo = PsGetProcessServerSilo(BugCheckParameter1);
  if ( *(_QWORD *)(v2 + 1096) != qword_140D05008 )
  {
    v26 = sub_140204738(ProcessServerSilo);
    if ( v26[108] != v27 )
      return 0LL;
  }
  *(_BYTE *)(a2 + 65) = 0;
  if ( !(unsigned int)sub_140814978(BugCheckParameter1) )
  {
    v12 = 1;
    if ( (PVOID)BugCheckParameter1 == qword_140D06940 )
    {
      v8 = 1;
    }
    else
    {
      if ( *((_QWORD *)KeGetCurrentThread() + 23) == BugCheckParameter1 )
      {
LABEL_7:
        *(_BYTE *)(a2 + 65) = v12;
        *(_BYTE *)(a2 + 67) = v8;
        if ( v5 )
        {
          if ( v3 )
          {
            v14 = *v5;
            if ( (*v5 & 1) != 0 )
            {
              sub_1408149AC(BugCheckParameter1);
              v14 = *v5;
            }
            if ( (v14 & 2) != 0 && (*(_BYTE *)(BugCheckParameter1 + 992) & 1) == 0 )
            {
              if ( (PVOID)BugCheckParameter1 == qword_140D06940 )
              {
                v19 = dword_140D06884;
                for ( i = 0; i < v19; ++i )
                {
                  v21 = sub_140348800(i);
                  sub_140814BA0(BugCheckParameter1, *(_QWORD *)(v21 + 24), a2);
                }
              }
              else
              {
                sub_140814B24(BugCheckParameter1, sub_140814BA0, a2);
              }
            }
            v15 = *v5;
            if ( (*v5 & 0xC004) != 0 )
            {
              sub_1406F6CA4(BugCheckParameter1, a2, v5);
              v15 = *v5;
            }
            if ( (v15 & 4) != 0 && (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
            {
              LOBYTE(v10) = v3;
              sub_140814C74(v2, v10);
            }
            if ( (v5[1] & 0x8000000) != 0 )
              sub_1409EA130(BugCheckParameter1, a2);
          }
          else
          {
            if ( (v5[1] & 0x8000000) != 0 )
              sub_1409EA130(BugCheckParameter1, a2);
            v17 = *v5;
            if ( (*v5 & 4) != 0 && (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
            {
              sub_140814C74(v2, 0LL);
              v17 = *v5;
            }
            if ( (v17 & 0xC004) != 0 )
              sub_1406F6CA4(BugCheckParameter1, a2, v5);
            if ( (v5[4] & 0x40) != 0 && (PVOID)BugCheckParameter1 != qword_140D06940 )
              sub_1409EA9A0((PEPROCESS)BugCheckParameter1);
            if ( (*v5 & 2) != 0 )
            {
              if ( (PVOID)BugCheckParameter1 == qword_140D06940 )
              {
                v22 = dword_140D06884;
                for ( j = 0; j < v22; ++j )
                {
                  v24 = sub_140348800(j);
                  sub_140814BA0(BugCheckParameter1, *(_QWORD *)(v24 + 24), a2);
                  v25 = sub_140348800(j);
                  sub_140814BA0(BugCheckParameter1, *(_QWORD *)(v25 + 13112), a2);
                }
              }
              else
              {
                sub_140814B24(BugCheckParameter1, sub_140814BA0, a2);
              }
            }
            v18 = *v5;
            if ( (*v5 & 8) != 0 )
            {
              sub_1409EAFC8(BugCheckParameter1, v2);
              v18 = *v5;
            }
            if ( (v18 & 1) != 0 )
              sub_1408149AC(BugCheckParameter1);
          }
        }
        if ( v7 )
        {
          sub_1402D0930((__int64)v28, 0LL);
          sub_1402AD030((struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112));
        }
        return 0LL;
      }
      if ( sub_140347810((struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112)) )
      {
        sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v28, v13);
        v7 = 1;
        goto LABEL_7;
      }
    }
    v12 = 0;
    goto LABEL_7;
  }
  if ( v5 && (*v5 & 1) != 0 && !v3 )
    sub_1408149AC(v11);
  return 0LL;
}
