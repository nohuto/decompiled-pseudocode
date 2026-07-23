/*
 * XREFs of sub_14078362C @ 0x14078362C
 * Callers:
 *     sub_1406C3540 @ 0x1406C3540 (sub_1406C3540.c)
 *     IoWMIQuerySingleInstance @ 0x1407849E0 (IoWMIQuerySingleInstance.c)
 *     IoWMIExecuteMethod @ 0x1409DB8B0 (IoWMIExecuteMethod.c)
 *     IoWMISetSingleInstance @ 0x1409DBC20 (IoWMISetSingleInstance.c)
 *     IoWMISetSingleItem @ 0x1409DBD50 (IoWMISetSingleItem.c)
 *     sub_1409DDA74 @ 0x1409DDA74 (sub_1409DDA74.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByPointer @ 0x1402E0270 (ObReferenceObjectByPointer.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407838E0 @ 0x1407838E0 (sub_1407838E0.c)
 *     sub_1407839B4 @ 0x1407839B4 (sub_1407839B4.c)
 *     sub_140783A9C @ 0x140783A9C (sub_140783A9C.c)
 *     sub_140783DB8 @ 0x140783DB8 (sub_140783DB8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14078362C(
        PVOID Object,
        IRP *a2,
        KPROCESSOR_MODE a3,
        unsigned __int8 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rsi
  __int64 v11; // r15
  ACCESS_MASK v12; // edx
  int v13; // r12d
  NTSTATUS v14; // eax
  int v15; // ebx
  __int64 v16; // rcx
  _QWORD *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // ecx
  ULONG_PTR *p_Information; // rax
  __int64 v22; // r15
  _QWORD *v23; // r14
  void *v25; // rcx
  int v26; // eax
  ULONG_PTR *v27; // r14
  char v28; // [rsp+30h] [rbp-B1h] BYREF
  char v29[7]; // [rsp+31h] [rbp-B0h] BYREF
  PVOID v30; // [rsp+38h] [rbp-A9h] BYREF
  PVOID P; // [rsp+40h] [rbp-A1h] BYREF
  unsigned int *v32; // [rsp+48h] [rbp-99h]
  __int128 v33; // [rsp+50h] [rbp-91h] BYREF
  _BYTE v34[128]; // [rsp+60h] [rbp-81h] BYREF

  v7 = a7;
  v32 = a7;
  v11 = a4;
  memset(v34, 0, sizeof(v34));
  v12 = *((_DWORD *)qword_140A39228 + v11);
  v13 = 0;
  v29[0] = 0;
  v28 = 0;
  v33 = 0LL;
  if ( Object )
  {
    v14 = ObReferenceObjectByPointer(Object, v12, qword_140D06B20, a3);
  }
  else
  {
    v25 = *(void **)(a5 + 16);
    v30 = 0LL;
    v14 = ObReferenceObjectByHandle(v25, v12, qword_140D06B20, a3, &v30, 0LL);
    Object = v30;
  }
  v15 = v14;
  if ( v14 < 0 )
    return (unsigned int)v15;
  LODWORD(v30) = 16;
  P = v34;
  v15 = sub_140783DB8((_DWORD)Object, a5, (unsigned int)&v30, (unsigned int)&P, (__int64)v29, (__int64)&v28);
  if ( v15 >= 0 )
  {
    if ( v28 )
    {
      *(_DWORD *)(a5 + 44) |= 0x100u;
      *(_DWORD *)a5 = 48;
      a2->IoStatus.Information = 48LL;
    }
    else if ( v29[0] )
    {
      if ( (_BYTE)v11 == 3 || (v15 = -1073741162, (_BYTE)v11 == 9) )
        v15 = -1073741161;
      v17 = P;
      if ( (_DWORD)v30 )
      {
        while ( 1 )
        {
          v18 = v17[v13];
          v19 = *(unsigned int *)(v18 + 80);
          *(_DWORD *)(a5 + 4) = v19;
          if ( a2 )
          {
            v20 = sub_140783A9C(a2, a6, a5);
            p_Information = &a2->IoStatus.Information;
          }
          else
          {
            LOBYTE(v18) = v11;
            v20 = sub_1407839B4(v18, v19, a5 + 24, a6, a5, &v33);
            p_Information = (ULONG_PTR *)&v33 + 1;
          }
          if ( v20 >= 0 )
            break;
          if ( (unsigned int)(v20 + 1073741163) > 1 )
            goto LABEL_14;
          if ( ++v13 >= (unsigned int)v30 )
            goto LABEL_15;
        }
        *v32 = *(_DWORD *)p_Information;
LABEL_14:
        v15 = v20;
LABEL_15:
        v22 = (unsigned int)v30;
        v23 = v17;
        do
        {
          sub_1407838E0(&off_140C037A0, *v23++);
          --v22;
        }
        while ( v22 );
      }
      if ( v17 != (_QWORD *)v34 && v17 )
        ExFreePoolWithTag(v17, 0);
      if ( v15 < 0 )
        goto LABEL_22;
      v7 = v32;
    }
    else
    {
      if ( a2 )
      {
        v26 = sub_140783A9C(a2, a6, a5);
        v27 = &a2->IoStatus.Information;
      }
      else
      {
        LOBYTE(v16) = v11;
        v26 = sub_1407839B4(v16, *(unsigned int *)(a5 + 4), a5 + 24, a6, a5, &v33);
        v27 = (ULONG_PTR *)&v33 + 1;
      }
      v15 = v26;
      if ( v26 < 0 )
      {
LABEL_22:
        *(_DWORD *)(a5 + 4) = 0;
        goto LABEL_23;
      }
      *a7 = *(_DWORD *)v27;
    }
    if ( *v7 > a6 )
      v15 = -1073741811;
    goto LABEL_22;
  }
LABEL_23:
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v15;
}
