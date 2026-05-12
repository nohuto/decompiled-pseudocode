/*
 * XREFs of PortPassThroughExBuildSrbEx @ 0x1C00B04E4
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C00A1DE0 (PortPassThroughExSendAsync.c)
 * Callees:
 *     memmove @ 0x1C0023680 (memmove.c)
 */

_DWORD *__fastcall PortPassThroughExBuildSrbEx(IRP *a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // r13
  int v8; // r12d
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // r14d
  unsigned int v12; // ebp
  int v13; // r15d
  _DWORD *Pool2; // rsi
  _DWORD *v15; // rbx
  char v16; // al
  unsigned int v17; // ecx
  int v18; // edx
  _DWORD *v19; // rsi
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rcx
  char *v23; // rcx
  char *v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  char *v27; // rcx
  __int64 v28; // rax
  __int64 v31; // [rsp+78h] [rbp+10h]
  int v34; // [rsp+90h] [rbp+28h]

  v6 = 0LL;
  if ( *(_BYTE *)(a2 + 18) == 3 && *(_DWORD *)(a2 + 32) && *(_DWORD *)(a2 + 36) )
  {
    v8 = 136;
    v34 = 152;
    v31 = 34LL;
    v9 = 176;
  }
  else
  {
    v9 = 144;
    v31 = 32LL;
    v34 = 144;
    v8 = 128;
  }
  v10 = *(_DWORD *)(a2 + 8);
  if ( v10 > 0x10 )
  {
    if ( v10 > 0x20 )
    {
      if ( v10 + 39 < 0x28 )
        return 0LL;
      v11 = ((v10 + 38) & 0xFFFFFFF8) + 8;
    }
    else
    {
      v11 = 56;
    }
  }
  else
  {
    v11 = 40;
  }
  v12 = v9 + v11;
  if ( v9 + v11 < v9 )
    return 0LL;
  v13 = 0;
  if ( a6 )
  {
    if ( v12 + 32 >= v12 )
    {
      v12 += 32;
      goto LABEL_16;
    }
    return 0LL;
  }
LABEL_16:
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, v12, 1766878288LL);
  if ( Pool2 )
  {
    if ( *(_BYTE *)(a2 + 17) )
    {
      v6 = ExAllocatePool2(72LL, *(unsigned __int8 *)(a2 + 17), 1766878288LL);
      if ( !v6 )
      {
        ExFreePoolWithTag(Pool2, 0x69506C50u);
        Pool2 = 0LL;
        v13 = -1073741670;
      }
    }
    v15 = Pool2;
    if ( v13 >= 0 )
    {
      Pool2[5] = 0;
      *Pool2 = 2621448;
      Pool2[2] = 1397899864;
      Pool2[3] = 1;
      Pool2[4] = v12;
      v16 = *(_BYTE *)(a2 + 18);
      if ( v16 )
      {
        if ( v16 == 1 )
        {
          Pool2[6] = 64;
        }
        else if ( v16 == 3 )
        {
          Pool2[6] = 192;
        }
      }
      else
      {
        Pool2[6] = 128;
      }
      if ( !v6 )
        Pool2[6] |= 0x20u;
      Pool2[6] |= 0x100u;
      *((_WORD *)Pool2 + 18) = IoGetIoPriorityHint(a1);
      Pool2[10] = *(_DWORD *)(a2 + 20);
      v17 = (v8 != 128) + 1;
      Pool2[13] = v8;
      Pool2[14] = v17;
      if ( a6 )
      {
        v17 = (v8 != 128) + 2;
        Pool2[14] = v17;
      }
      if ( *(_BYTE *)(a2 + 18) == 1 )
        v18 = *(_DWORD *)(a2 + 36);
      else
        v18 = *(_DWORD *)(a2 + 32);
      v19 = Pool2 + 31;
      v20 = a4;
      if ( *(_BYTE *)(a2 + 18) != 1 )
        v20 = a3;
      v15[15] = v18;
      *((_QWORD *)v15 + 8) = v20;
      *((_QWORD *)v15 + 10) = a1;
      v15[30] = v34;
      if ( v17 >= 2 )
      {
        *v19 = v11 + v34;
        if ( v17 == 3 )
          v15[32] = v11 + v34 + 24;
      }
      *(_OWORD *)&v15[v31] = *(_OWORD *)((char *)&a1->AssociatedIrp.MasterIrp->Type + *(unsigned int *)(a2 + 24));
      v21 = *(_DWORD *)(a2 + 8);
      v22 = (unsigned int)v15[30];
      if ( v21 > 0x10 )
      {
        if ( v21 > 0x20 )
        {
          *(_DWORD *)((char *)v15 + v22) = 66;
          v26 = *(_DWORD *)(a2 + 8) + 24;
          *((_BYTE *)v15 + v22 + 8) = 0;
          *(_DWORD *)((char *)v15 + v22 + 4) = v26;
          *((_BYTE *)v15 + v22 + 9) = *(_BYTE *)(a2 + 17);
          *(_DWORD *)((char *)v15 + v22 + 12) = *(_DWORD *)(a2 + 8);
          *(_QWORD *)((char *)v15 + v22 + 24) = v6;
          v25 = v22 + 32;
        }
        else
        {
          *(_DWORD *)((char *)v15 + v22) = 65;
          *(_DWORD *)((char *)v15 + v22 + 4) = 48;
          *((_BYTE *)v15 + v22 + 8) = 0;
          *((_BYTE *)v15 + v22 + 9) = *(_BYTE *)(a2 + 17);
          *((_BYTE *)v15 + v22 + 10) = *(_BYTE *)(a2 + 8);
          *(_QWORD *)((char *)v15 + v22 + 16) = v6;
          v25 = v22 + 24;
        }
        v24 = (char *)v15 + v25;
      }
      else
      {
        v23 = (char *)v15 + v22;
        *(_DWORD *)v23 = 64;
        *((_DWORD *)v23 + 1) = 32;
        v23[8] = 0;
        v23[9] = *(_BYTE *)(a2 + 17);
        v23[10] = *(_BYTE *)(a2 + 8);
        *((_QWORD *)v23 + 2) = v6;
        v24 = v23 + 24;
      }
      memmove(v24, (const void *)(a2 + 56), *(unsigned int *)(a2 + 8));
      if ( v15[14] >= 2u )
      {
        v27 = (char *)v15 + (unsigned int)*v19;
        *(_DWORD *)v27 = 1;
        *((_DWORD *)v27 + 1) = 16;
        *((_DWORD *)v27 + 2) = *(_DWORD *)(a2 + 36);
        *((_QWORD *)v27 + 2) = a4;
      }
      Pool2 = v15;
      if ( v15[14] == 3 )
      {
        v28 = (unsigned int)v15[32];
        *(_DWORD *)((char *)v15 + v28) = 160;
        *(_DWORD *)((char *)v15 + v28 + 4) = 24;
        *(_QWORD *)((char *)v15 + v28 + 8) = a6;
      }
    }
  }
  return Pool2;
}
