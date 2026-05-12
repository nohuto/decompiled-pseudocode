/*
 * XREFs of PortPassThroughExBuildSrbEx @ 0x1C0093BB0
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C008860C (PortPassThroughExSendAsync.c)
 * Callees:
 *     memmove @ 0x1C0024080 (memmove.c)
 *     RtlULongAdd @ 0x1C004F844 (RtlULongAdd.c)
 */

_DWORD *__fastcall PortPassThroughExBuildSrbEx(IRP *a1, __int64 a2, __int64 a3, __int64 a4, ULONG ulAugend, __int64 a6)
{
  bool v7; // zf
  int v8; // r12d
  int v9; // r13d
  ULONG v10; // r9d
  unsigned int v11; // edx
  ULONG v12; // ebp
  int v13; // r10d
  NTSTATUS v14; // r14d
  ULONG v15; // r15d
  _DWORD *Pool2; // rsi
  __int64 v17; // rcx
  char v18; // al
  int v19; // eax
  __int16 IoPriorityHint; // ax
  __int64 v21; // r14
  unsigned int v22; // ecx
  int v23; // edx
  __int64 v24; // r15
  __int64 v25; // rax
  unsigned int v26; // r8d
  char *v27; // rcx
  void *v28; // rcx
  int v29; // eax
  unsigned int v30; // eax
  char *v31; // rcx
  __int64 v32; // rax
  __int64 v34; // [rsp+20h] [rbp-58h]
  __int64 v35; // [rsp+28h] [rbp-50h]
  ULONG pulResult; // [rsp+88h] [rbp+10h] BYREF
  __int64 v38; // [rsp+90h] [rbp+18h]
  __int64 v39; // [rsp+98h] [rbp+20h]

  v39 = a4;
  v38 = a3;
  v7 = *(_BYTE *)(a2 + 18) == 3;
  pulResult = 0;
  v34 = 0LL;
  if ( v7 && *(_DWORD *)(a2 + 32) && *(_DWORD *)(a2 + 36) )
  {
    v8 = 136;
    v35 = 34LL;
    v9 = 152;
    v10 = 176;
  }
  else
  {
    v9 = 144;
    v35 = 32LL;
    v10 = 144;
    v8 = 128;
  }
  v11 = *(_DWORD *)(a2 + 8);
  ulAugend = v10;
  if ( v11 > 0x10 )
  {
    if ( v11 > 0x20 )
    {
      if ( RtlULongAdd(0x28u, v11 - 1, &pulResult) < 0 )
        return 0LL;
      v12 = v13 + ((pulResult - 1) & 0xFFFFFFF8);
    }
    else
    {
      v12 = 56;
    }
  }
  else
  {
    v12 = 40;
  }
  v14 = RtlULongAdd(v10, v12, &ulAugend);
  if ( v14 >= 0 )
  {
    if ( !a6 || (v14 = RtlULongAdd(ulAugend, 0x20u, &ulAugend), v14 >= 0) )
    {
      v15 = ulAugend;
      Pool2 = (_DWORD *)ExAllocatePool2(64LL, ulAugend, 1766878288LL);
      if ( !Pool2 )
        return Pool2;
      if ( *(_BYTE *)(a2 + 17) )
      {
        v34 = ExAllocatePool2(72LL, *(unsigned __int8 *)(a2 + 17), 1766878288LL);
        v17 = v34;
        if ( !v34 )
        {
          ExFreePoolWithTag(Pool2, 0x69506C50u);
          v17 = 0LL;
          Pool2 = 0LL;
          v14 = -1073741670;
        }
      }
      else
      {
        v17 = 0LL;
      }
      if ( v14 < 0 )
        return Pool2;
      Pool2[5] = 0;
      *Pool2 = 2621448;
      Pool2[2] = 1397899864;
      Pool2[3] = 1;
      Pool2[4] = v15;
      v18 = *(_BYTE *)(a2 + 18);
      if ( v18 )
      {
        if ( v18 == 1 )
        {
          Pool2[6] = 64;
        }
        else if ( v18 == 3 )
        {
          Pool2[6] = 192;
        }
      }
      else
      {
        Pool2[6] = 128;
      }
      v19 = Pool2[6];
      if ( !v17 )
        v19 |= 0x20u;
      Pool2[6] = v19 | 0x100;
      IoPriorityHint = IoGetIoPriorityHint(a1);
      v21 = a6;
      *((_WORD *)Pool2 + 18) = IoPriorityHint;
      Pool2[10] = *(_DWORD *)(a2 + 20);
      v22 = (v8 != 128) + 1;
      Pool2[13] = v8;
      Pool2[14] = v22;
      if ( v21 )
      {
        v22 = (v8 != 128) + 2;
        Pool2[14] = v22;
      }
      if ( *(_BYTE *)(a2 + 18) == 1 )
        v23 = *(_DWORD *)(a2 + 36);
      else
        v23 = *(_DWORD *)(a2 + 32);
      v24 = v39;
      v25 = v39;
      if ( *(_BYTE *)(a2 + 18) != 1 )
        v25 = v38;
      Pool2[15] = v23;
      *((_QWORD *)Pool2 + 8) = v25;
      *((_QWORD *)Pool2 + 10) = a1;
      Pool2[30] = v9;
      if ( v22 >= 2 )
      {
        Pool2[31] = v12 + v9;
        if ( v22 == 3 )
          Pool2[32] = v12 + v9 + 24;
      }
      *(_OWORD *)&Pool2[v35] = *(_OWORD *)((char *)&a1->AssociatedIrp.MasterIrp->Type + *(unsigned int *)(a2 + 24));
      v26 = *(_DWORD *)(a2 + 8);
      v27 = (char *)Pool2 + (unsigned int)Pool2[30];
      if ( v26 > 0x10 )
      {
        if ( v26 > 0x20 )
        {
          *(_DWORD *)v27 = 66;
          v29 = *(_DWORD *)(a2 + 8) + 24;
          v27[8] = 0;
          *((_DWORD *)v27 + 1) = v29;
          v27[9] = *(_BYTE *)(a2 + 17);
          *((_DWORD *)v27 + 3) = *(_DWORD *)(a2 + 8);
          *((_QWORD *)v27 + 3) = v34;
          v28 = v27 + 32;
          goto LABEL_45;
        }
        *(_DWORD *)v27 = 65;
        *((_DWORD *)v27 + 1) = 48;
      }
      else
      {
        *(_DWORD *)v27 = 64;
        *((_DWORD *)v27 + 1) = 32;
      }
      v27[8] = 0;
      v27[9] = *(_BYTE *)(a2 + 17);
      v27[10] = *(_BYTE *)(a2 + 8);
      *((_QWORD *)v27 + 2) = v34;
      v28 = v27 + 24;
LABEL_45:
      memmove(v28, (const void *)(a2 + 56), *(unsigned int *)(a2 + 8));
      v30 = Pool2[14];
      if ( v30 >= 2 )
      {
        v31 = (char *)Pool2 + (unsigned int)Pool2[31];
        *(_DWORD *)v31 = 1;
        *((_DWORD *)v31 + 1) = 16;
        *((_DWORD *)v31 + 2) = *(_DWORD *)(a2 + 36);
        *((_QWORD *)v31 + 2) = v24;
        v30 = Pool2[14];
      }
      if ( v30 == 3 )
      {
        v32 = (unsigned int)Pool2[32];
        *(_DWORD *)((char *)Pool2 + v32) = 160;
        *(_DWORD *)((char *)Pool2 + v32 + 4) = 24;
        *(_QWORD *)((char *)Pool2 + v32 + 8) = v21;
      }
      return Pool2;
    }
  }
  return 0LL;
}
