/*
 * XREFs of sub_140951944 @ 0x140951944
 * Callers:
 *     sub_1409518C0 @ 0x1409518C0 (sub_1409518C0.c)
 * Callees:
 *     RtlCmDecodeMemIoResource @ 0x140388BD0 (RtlCmDecodeMemIoResource.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140951944(__int64 a1, void **a2)
{
  unsigned int *v3; // rbx
  unsigned int *v4; // r14
  __int64 v5; // rbp
  unsigned int *v6; // rbp
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // r12d
  _DWORD *v11; // rsi
  __int64 v12; // rdi
  unsigned int v13; // r13d
  unsigned int *Pool2; // rax
  unsigned int *v15; // r13
  ULONGLONG v16; // rax
  unsigned int v17; // edi
  __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  unsigned int v22; // [rsp+70h] [rbp+8h]
  ULONGLONG Start; // [rsp+78h] [rbp+10h] BYREF
  unsigned int *v24; // [rsp+80h] [rbp+18h]
  PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor; // [rsp+88h] [rbp+20h]

  Start = 0LL;
  v3 = (unsigned int *)*a2;
  v4 = (unsigned int *)*a2;
  if ( a1 )
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = *(unsigned int **)(v5 + 416);
  if ( !v6 )
  {
    v7 = qword_140C448A8;
    v8 = *(_DWORD *)(qword_140C448A8 + 33272);
    if ( !v8 )
      v8 = 631;
    *(_DWORD *)(qword_140C448A8 + 33272) = v8;
    v9 = *(_DWORD *)(v7 + 33276);
    if ( !v9 )
      v9 = 6;
    *(_DWORD *)(v7 + 33276) = v9;
    *a2 = v3;
    return 0;
  }
  v10 = 0;
  v11 = v6 + 1;
  if ( !*v6 )
  {
LABEL_21:
    *a2 = v3;
    if ( v3 != v4 )
      ExFreePoolWithTag(v4, 0x51706E50u);
    return 0;
  }
  while ( 1 )
  {
    v12 = 0LL;
    if ( v11[3] )
      break;
LABEL_20:
    ++v10;
    v11 = (_DWORD *)((char *)v11 + (unsigned int)(v12 + 36));
    if ( v10 >= *v6 )
      goto LABEL_21;
  }
  while ( 1 )
  {
    Descriptor = (PCM_PARTIAL_RESOURCE_DESCRIPTOR)&v11[4 * v12 + 4 + v12];
    if ( ((Descriptor->Type - 3) & 0xFB) == 0 )
      break;
LABEL_19:
    v12 = (unsigned int)(v12 + 1);
    if ( (unsigned int)v12 >= v11[3] )
      goto LABEL_20;
  }
  v13 = v3[1];
  if ( v13 != *v3 )
  {
LABEL_18:
    v16 = RtlCmDecodeMemIoResource(Descriptor, &Start);
    *(_QWORD *)&v3[4 * v3[1] + 4] = Start;
    *(_QWORD *)&v3[4 * v3[1] + 6] = v16;
    *((_QWORD *)v3 + 1) += v16;
    ++v3[1];
    goto LABEL_19;
  }
  v22 = v13 + 4;
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, 16 * (v13 + 5), 1366322768LL);
  v24 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, v3, 16 * (v13 + 1));
    v15 = v24;
    *v24 = v22;
    if ( v3 != v4 )
      ExFreePoolWithTag(v3, 0x51706E50u);
    v3 = v15;
    goto LABEL_18;
  }
  v19 = qword_140C448A8;
  v17 = -1073741670;
  v20 = *(_DWORD *)(qword_140C448A8 + 33272);
  if ( !v20 )
    v20 = 671;
  *(_DWORD *)(qword_140C448A8 + 33272) = v20;
  v21 = *(_DWORD *)(v19 + 33276);
  if ( !v21 )
    v21 = 10;
  *(_DWORD *)(v19 + 33276) = v21;
  *a2 = v4;
  if ( v3 != v4 )
    ExFreePoolWithTag(v3, 0x51706E50u);
  return v17;
}
