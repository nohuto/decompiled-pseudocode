/*
 * XREFs of sub_140654720 @ 0x140654720
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_140779C10 @ 0x140779C10 (sub_140779C10.c)
 *     sub_14077C610 @ 0x14077C610 (sub_14077C610.c)
 *     IoReplacePartitionUnit @ 0x140943170 (IoReplacePartitionUnit.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140654720(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  struct _DEVICE_OBJECT *v6; // rsi
  struct _DEVICE_OBJECT *v7; // rdi
  NTSTATUS v8; // ebx
  ULONG v9; // r8d
  struct _DEVICE_OBJECT *v10; // rdx
  struct _DEVICE_OBJECT *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v17; // [rsp+20h] [rbp-68h]
  PVOID v18[3]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v19; // [rsp+48h] [rbp-40h] BYREF
  __int128 v20; // [rsp+58h] [rbp-30h] BYREF
  PVOID P; // [rsp+A8h] [rbp+20h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  P = 0LL;
  v6 = 0LL;
  v18[1] = 0LL;
  v18[0] = 0LL;
  v7 = 0LL;
  if ( *((_BYTE *)KeGetCurrentThread() + 562) != 1 )
  {
    v8 = -1073741790;
    goto LABEL_35;
  }
  if ( !SeSinglePrivilegeCheck(stru_140D3CAB8, 1) )
  {
    v8 = -1073741727;
    goto LABEL_35;
  }
  v9 = 0x80000000;
  if ( a3 == 0x80000000 )
  {
    v10 = 0LL;
    v11 = 0LL;
LABEL_7:
    v8 = IoReplacePartitionUnit(v11, v10, v9);
    goto LABEL_35;
  }
  if ( a3 )
  {
    v8 = -1073741583;
    goto LABEL_35;
  }
  if ( (a2 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a2 + 16 > 0x7FFFFFFF0000LL || a2 + 16 < a2 )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( (a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 + 16 > 0x7FFFFFFF0000LL || a1 + 16 < a1 )
    MEMORY[0x7FFFFFFF0000] = 0;
  v19 = *(_OWORD *)a2;
  v20 = *(_OWORD *)a1;
  if ( (unsigned __int16)(v20 - 1) > 0xC8u || (BYTE2(v20) & 1) != 0 )
    goto LABEL_34;
  if ( (unsigned __int16)(v19 - 1) > 0xC8u || (BYTE2(v19) & 1) != 0 )
  {
LABEL_33:
    v8 = -1073741584;
    goto LABEL_35;
  }
  v8 = sub_14077C610(&P, *((_QWORD *)&v19 + 1), (unsigned __int16)v19, 2LL, 1, 1);
  if ( v8 >= 0 )
  {
    LOBYTE(v17) = 1;
    v8 = sub_14077C610(v18, *((_QWORD *)&v20 + 1), (unsigned __int16)v20, 2LL, v17, 1);
    if ( v8 >= 0 )
    {
      *((_QWORD *)&v19 + 1) = P;
      WORD1(v19) = v19;
      *((PVOID *)&v20 + 1) = v18[0];
      WORD1(v20) = v20;
      v12 = sub_140779C10(&v19, 1953261124LL);
      v6 = (struct _DEVICE_OBJECT *)v12;
      if ( v12 )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(v12 + 312) + 40LL);
        if ( v13 )
        {
          if ( !_bittest((const signed __int32 *)(v13 + 396), 0x11u) )
          {
            v14 = sub_140779C10(&v20, 1953261124LL);
            v7 = (struct _DEVICE_OBJECT *)v14;
            if ( v14 )
            {
              v15 = *(_QWORD *)(*(_QWORD *)(v14 + 312) + 40LL);
              if ( v15 )
              {
                if ( !_bittest((const signed __int32 *)(v15 + 396), 0x11u) )
                {
                  v9 = 0;
                  v10 = v6;
                  v11 = v7;
                  goto LABEL_7;
                }
              }
            }
LABEL_34:
            v8 = -1073741585;
            goto LABEL_35;
          }
        }
      }
      goto LABEL_33;
    }
  }
LABEL_35:
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v18[0] )
    ExFreePoolWithTag(v18[0], 0);
  return (unsigned int)v8;
}
