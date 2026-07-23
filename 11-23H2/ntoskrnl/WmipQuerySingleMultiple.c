/*
 * XREFs of WmipQuerySingleMultiple @ 0x1409E117C
 * Callers:
 *     WmipIoControl @ 0x1407D6440 (WmipIoControl.c)
 *     IoWMIQuerySingleInstanceMultiple @ 0x1409DF0A0 (IoWMIQuerySingleInstanceMultiple.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     Feature_1179641144__private_IsEnabledDeviceUsage @ 0x140412194 (Feature_1179641144__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     WmipQuerySetExecuteSI @ 0x1406C6D6C (WmipQuerySetExecuteSI.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall WmipQuerySingleMultiple(
        IRP *a1,
        KPROCESSOR_MODE a2,
        char *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        int *a9)
{
  char *v9; // rsi
  int v10; // edi
  __int64 v11; // rdx
  _WORD *Pool2; // rax
  _WORD *v13; // r14
  int v14; // r15d
  char v15; // r12
  unsigned int *v16; // r8
  _BYTE *v17; // r13
  unsigned int v18; // r9d
  unsigned int v19; // eax
  unsigned __int16 v20; // dx
  unsigned int v21; // esi
  unsigned int *v22; // r12
  void *v23; // rdx
  unsigned int v24; // eax
  unsigned int *v25; // rcx
  __int64 i; // rax
  unsigned int v27; // esi
  char *v28; // rsi
  int v29; // eax
  char v31; // [rsp+40h] [rbp-338h]
  unsigned __int16 v33; // [rsp+42h] [rbp-336h]
  unsigned int v35; // [rsp+4Ch] [rbp-32Ch] BYREF
  int v36; // [rsp+50h] [rbp-328h]
  void *v37; // [rsp+58h] [rbp-320h]
  int v38; // [rsp+60h] [rbp-318h]
  int v39; // [rsp+64h] [rbp-314h]
  unsigned int v40; // [rsp+68h] [rbp-310h]
  int v41; // [rsp+6Ch] [rbp-30Ch]
  unsigned int *v42; // [rsp+70h] [rbp-308h]
  void *Src; // [rsp+78h] [rbp-300h]
  __int64 v44; // [rsp+80h] [rbp-2F8h]
  char *v45; // [rsp+88h] [rbp-2F0h]
  unsigned int v46; // [rsp+90h] [rbp-2E8h]
  __int128 v47; // [rsp+98h] [rbp-2E0h]
  __int64 v48; // [rsp+A8h] [rbp-2D0h]
  PVOID Object; // [rsp+B0h] [rbp-2C8h]
  PVOID v50; // [rsp+B8h] [rbp-2C0h]
  PVOID v51; // [rsp+C0h] [rbp-2B8h]
  int *v52; // [rsp+C8h] [rbp-2B0h]
  __int64 v53; // [rsp+D0h] [rbp-2A8h]
  IRP *v54; // [rsp+D8h] [rbp-2A0h]
  char *v55; // [rsp+E0h] [rbp-298h]
  __int64 v56; // [rsp+E8h] [rbp-290h]
  _BYTE P[592]; // [rsp+F0h] [rbp-288h] BYREF

  v9 = a3;
  v45 = a3;
  v54 = a1;
  v55 = a3;
  v46 = a6;
  v44 = a7;
  v53 = a8;
  v52 = a9;
  v56 = (__int64)a9;
  v39 = 0;
  v47 = 0LL;
  memset(P, 0, 0x248uLL);
  v10 = 0;
  v36 = 0;
  v11 = a7;
  if ( a7 )
  {
    v13 = 0LL;
    v50 = 0LL;
  }
  else
  {
    Pool2 = (_WORD *)ExAllocatePool2(256LL, 24LL * a6, 1885957463LL);
    v13 = Pool2;
    v50 = Pool2;
    if ( Pool2 )
      memmove(Pool2, (const void *)(a5 + 8), 24LL * a6);
    else
      v10 = -1073741670;
    v9 = v45;
    v11 = v44;
  }
  if ( v10 < 0 )
    return (unsigned int)v10;
  v14 = 0;
  v15 = 0;
  v31 = 0;
  v42 = 0LL;
  v16 = (unsigned int *)v9;
  v37 = v9;
  v17 = P;
  v51 = P;
  v18 = 580;
  v41 = 580;
  v19 = 0;
  Object = 0LL;
  while ( 1 )
  {
    v40 = v19;
    if ( v19 >= v46 )
      break;
    if ( v11 )
    {
      v47 = *(_OWORD *)(v53 + 16LL * v19);
      Object = *(PVOID *)(v11 + 8LL * v19);
      v48 = 0LL;
      Src = (void *)*((_QWORD *)&v47 + 1);
      v20 = v47;
    }
    else
    {
      v20 = v13[12 * v19 + 4];
      LODWORD(v47) = *(_DWORD *)&v13[12 * v19 + 4];
      Src = *(void **)&v13[12 * v19 + 8];
      *((_QWORD *)&v47 + 1) = Src;
      v48 = *(_QWORD *)&v13[12 * v19];
      v16 = (unsigned int *)v37;
    }
    v33 = v20;
    v21 = (v20 + 73) & 0xFFFFFFF8;
    if ( v15 || a4 < v21 )
    {
      if ( v21 > v18 )
      {
        if ( v17 != P )
          ExFreePoolWithTag(v17, 0);
        v17 = (_BYTE *)ExAllocatePool2(64LL, v21, 1885957463LL);
        v51 = v17;
        if ( !v17 )
        {
          v10 = -1073741670;
          break;
        }
        v41 = v21;
      }
      v22 = (unsigned int *)v17;
      v38 = v21;
      v42 = 0LL;
      v31 = 1;
    }
    else
    {
      v22 = v16;
      v38 = a4;
    }
    memset(v22, 0, 0x40uLL);
    v22[11] = 2;
    *v22 = v21;
    *((_QWORD *)v22 + 2) = v48;
    v22[12] = 64;
    v22[14] = v21;
    *((_WORD *)v22 + 32) = v33;
    if ( a2 == 1 && v33 )
    {
      if ( (BYTE8(v47) & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v23 = Src;
      if ( (unsigned __int64)Src + v33 > 0x7FFFFFFF0000LL || (char *)Src + v33 < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      v23 = Src;
    }
    memmove((char *)v22 + 66, v23, v33);
    v35 = *v22;
    if ( (int)WmipQuerySetExecuteSI(Object, v54, a2, 1u, (__int64)v22, v38, &v35) < 0 )
      goto LABEL_36;
    v24 = v22[11];
    if ( (v24 & 0x100) != 0 )
      goto LABEL_36;
    ++v36;
    if ( (v24 & 0x20) != 0 )
    {
      v14 += (v22[12] + 7) & 0xFFFFFFF8;
      v15 = 1;
      v31 = 1;
      goto LABEL_37;
    }
    if ( v31 )
    {
      v14 += (v35 + 7) & 0xFFFFFFF8;
LABEL_36:
      v15 = v31;
LABEL_37:
      v16 = (unsigned int *)v37;
      goto LABEL_38;
    }
    if ( v42 )
      v42[3] = v39;
    v25 = v22;
    for ( i = v22[3]; ; i = v25[3] )
    {
      v42 = v25;
      if ( !(_DWORD)i )
        break;
      v25 = (unsigned int *)((char *)v25 + i);
    }
    v27 = (v35 + 7) & 0xFFFFFFF8;
    v14 += v27;
    if ( (unsigned int)Feature_1179641144__private_IsEnabledDeviceUsage() )
      a4 = v27 < a4 ? a4 - v27 : 0;
    else
      a4 -= v27;
    v16 = (unsigned int *)((char *)v37 + v27);
    v37 = v16;
    v39 = (_DWORD)v16 - (_DWORD)v42;
    v15 = 0;
LABEL_38:
    v19 = v40 + 1;
    v11 = v44;
    v18 = v41;
  }
  v28 = v45;
  if ( v17 != P )
    ExFreePoolWithTag(v17, 0);
  if ( !v36 )
    v10 = -1073741163;
  if ( v10 >= 0 && v15 )
  {
    v29 = 56;
    *(_DWORD *)v28 = 56;
    *((_DWORD *)v28 + 11) = 32;
    *((_DWORD *)v28 + 12) = v14;
  }
  else
  {
    v29 = v14;
  }
  *v52 = v29;
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  return (unsigned int)v10;
}
