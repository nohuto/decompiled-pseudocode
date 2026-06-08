/*
 * XREFs of PerfControlPTStates @ 0x1C0001FD0
 * Callers:
 *     <none>
 * Callees:
 *     InvokePTStateChange @ 0x1C0002290 (InvokePTStateChange.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PerfControlPTStates(__int64 a1, unsigned __int64 *a2, char a3, char a4)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rdi
  int v9; // ecx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx

  if ( !a4 )
  {
    v5 = *a2;
    v6 = *(_QWORD *)(a1 + 56);
    v7 = *(_QWORD *)(v6 + 56);
    v8 = v7 + 32LL * (unsigned int)v5;
    v9 = *(unsigned __int8 *)(v8 + 25);
    if ( *(_DWORD *)(a1 + 40) == v9 )
      goto LABEL_3;
    if ( v9 == 1 )
    {
      if ( !*(_DWORD *)(v6 + 72) )
        goto LABEL_3;
      v12 = *(unsigned int *)(v6 + 68);
    }
    else
    {
      v11 = *(_DWORD *)(v6 + 68);
      if ( !v11 )
        goto LABEL_3;
      v12 = (unsigned int)(v11 - 1);
    }
    v13 = v7 + 32 * v12;
    if ( v13 )
    {
      if ( a3 )
      {
        InvokePTStateChange(v6, v13, HIDWORD(v5));
        goto LABEL_4;
      }
LABEL_7:
      *(_DWORD *)(a1 + 48) = v5;
      *(_DWORD *)(a1 + 40) = *(unsigned __int8 *)(v8 + 25);
      *(_DWORD *)(a1 + 44) = *(unsigned __int8 *)(v8 + 24);
      return;
    }
LABEL_3:
    if ( a3 )
    {
LABEL_4:
      if ( *(_BYTE *)(v8 + 25) == 1 )
      {
        v10 = *(_QWORD *)(v6 + 40);
      }
      else
      {
        v10 = *(_QWORD *)(v6 + 48);
        v6 += 8LL;
      }
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))v6)(v10, *(_QWORD *)v8, *(_QWORD *)(v8 + 8), HIDWORD(v5));
      goto LABEL_7;
    }
    goto LABEL_7;
  }
  *(_DWORD *)(a1 + 40) = 0;
}
